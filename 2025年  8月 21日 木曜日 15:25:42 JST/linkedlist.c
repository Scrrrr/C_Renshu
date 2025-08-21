#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}Node;

typedef struct list{
	Node *head;
}List;

void freeList(List *list)
{
    if (list == NULL) return;
    
    Node *current = list->head;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    free(list);
}

void insert(List *list,const int n)
{
	Node *newnode = (Node *)malloc(sizeof(Node));

	//最初に適当な場所にnewnodeを作成して、
	//そこにデータと次がNULLであるというデータを格納する
	newnode->data = n; 
	newnode->next = NULL;

	//リストが空だった場合、listのheadに接続する
	if(!list->head)
	{
		list->head = newnode;
		return;
	}

	//リストにデータがあった場合
	//
	//一旦、Node型のポインター変数currentを作成して
	//list->headのアドレスを代入する。
	//list->headは一番最初のデータが格納されているデータのインデックス
	//
	//current->nextがNULLじゃなかったら
	//currentに格納したアドレス値をcurrent->nextに更新
	//
	Node *current = list->head;
	while(current->next)
	{
		current = current->next;
	}
	
	//見つかったcurrent->nextにnewnodeを接続
	current->next = newnode;
}

void show(List *list)
{
	Node *node = list->head;

	printf("{");
	while(node)
	{
		printf(" %d ",node->data);
		node = node->next;
	}
	printf("}");
}


int main(void)
{
	List *list = (List *)malloc(sizeof(List));
	if(!list)
	{
		printf("初期化に失敗しました");
		return -1;
	}

	list->head = NULL;

	insert(list,4);
	insert(list,5);
	insert(list,100);
	insert(list,32);
	show(list);

	freeList(list);

}
