#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_PEOPLE 10

typedef struct STRUCT_REQUEST {
    char name[MAX_NAME_LENGTH];
    int age;
} _REQUEST;

int main(void) {
    _REQUEST *requests[MAX_PEOPLE] = {NULL};
    int n, i;

    printf("人数 (最大%d人): ", MAX_PEOPLE);
    scanf("%d", &n);
    getchar(); // 改行文字を消費

    if (n <= 0 || n > MAX_PEOPLE) {
        printf("無効な人数です。\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        requests[i] = malloc(sizeof(_REQUEST));
        if (requests[i] == NULL) {
            printf("メモリ割り当てエラー\n");
            return 1;
        }

        printf("[%d人目]\n", i + 1);
        printf("名前: ");
        fgets(requests[i]->name, MAX_NAME_LENGTH, stdin);
        requests[i]->name[strcspn(requests[i]->name, "\n")] = 0; // 改行文字を削除

        printf("年齢: ");
        scanf("%d", &requests[i]->age);
        getchar(); // 改行文字を消費
    }

    puts("\n入力されたデータを表示します");

    for (i = 0; i < n; i++) {
        printf("[%d人目]\n", i + 1);
        printf("名前: %s\n", requests[i]->name);
        printf("年齢: %d\n", requests[i]->age);
    }

    // メモリの解放
    for (i = 0; i < n; i++) {
        free(requests[i]);
    }

    return 0;
}