#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

typedef struct list{
    Node *head;
}List;

// ステップバイステップでfreeListを解説
void freeListWithExplanation(List *list)
{
    printf("=== freeList関数の動作解説 ===\n");
    
    // ステップ1: NULLチェック
    printf("ステップ1: NULLチェック\n");
    if (list == NULL) {
        printf("  -> listがNULLなので終了\n");
        return;
    }
    printf("  -> listは有効 (アドレス: %p)\n\n", (void*)list);
    
    // ステップ2: 走査開始の準備
    printf("ステップ2: 走査開始の準備\n");
    Node *current = list->head;
    printf("  -> current = list->head (アドレス: %p)\n", (void*)current);
    printf("  -> リストの最初のノードから開始\n\n");
    
    // ステップ3: 各ノードを順番に解放
    printf("ステップ3: 各ノードの解放\n");
    int nodeNumber = 1;
    
    while (current != NULL) {
        printf("  【ループ %d回目】\n", nodeNumber);
        
        // 3-1: 現在のノードを一時保存
        Node *temp = current;
        printf("    temp = current (現在のノードを保存: %p)\n", (void*)temp);
        printf("    保存されたデータ: %d\n", temp->data);
        
        // 3-2: 次のノードに移動
        current = current->next;
        printf("    current = current->next (次に移動: %p)\n", (void*)current);
        
        // 3-3: 保存したノードを解放
        printf("    free(temp) - ノード%dを解放\n", nodeNumber);
        free(temp);
        
        printf("    ノード%d解放完了\n\n", nodeNumber);
        nodeNumber++;
    }
    
    printf("  -> 全ノード解放完了 (current == NULL)\n\n");
    
    // ステップ4: List構造体自体を解放
    printf("ステップ4: List構造体の解放\n");
    printf("  -> List構造体 (アドレス: %p) を解放\n", (void*)list);
    free(list);
    printf("  -> 解放完了\n\n");
    
    printf("=== 全メモリ解放完了 ===\n");
}

// 間違った解放方法のデモ（危険なパターン）
void wrongFreeExample()
{
    printf("\n=== 間違った解放方法（危険）===\n");
    printf("// もしこんな風に書いたら...\n");
    printf("while (current != NULL) {\n");
    printf("    free(current);          // 先に解放\n");
    printf("    current = current->next; // ERROR! 解放済みメモリにアクセス\n");
    printf("}\n");
    printf("-> これは「解放後使用」エラーでクラッシュします\n\n");
}

// テスト用リスト作成
List* createTestList()
{
    List *list = (List*)malloc(sizeof(List));
    list->head = NULL;
    
    // 3つのノードを作成: 30 -> 20 -> 10 -> NULL
    for (int i = 1; i <= 3; i++) {
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = i * 10;
        newNode->next = list->head;
        list->head = newNode;
        printf("ノード作成: データ=%d, アドレス=%p\n", newNode->data, (void*)newNode);
    }
    printf("\n");
    
    return list;
}

// メモリ状態の視覚化
void visualizeMemory()
{
    printf("=== メモリ構造の視覚化 ===\n");
    printf("\n解放前の状態:\n");
    printf("list -> [List構造体] -> [Node1:30] -> [Node2:20] -> [Node3:10] -> NULL\n");
    printf("         (head)           ↑\n");
    printf("                      current初期位置\n\n");
    
    printf("解放処理の流れ:\n");
    printf("1回目: temp=[Node1], current=[Node2], free(Node1)\n");
    printf("2回目: temp=[Node2], current=[Node3], free(Node2)\n"); 
    printf("3回目: temp=[Node3], current=NULL,    free(Node3)\n");
    printf("最後:  free(List構造体)\n\n");
}

int main(void)
{
    visualizeMemory();
    
    printf("=== 実際の解放処理 ===\n");
    List *testList = createTestList();
    freeListWithExplanation(testList);
    
    wrongFreeExample();
    
    return 0;
}
