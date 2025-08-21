#include <stdio.h>
#include <string.h>

// 文字列の最大長を定義
#define MAX_NAME_LENGTH 100
#define MAX_NUMBER_LENGTH 20

// 構造体でAccountクラスを代替
typedef struct {
    char name[MAX_NAME_LENGTH];
    char number[MAX_NUMBER_LENGTH];
    long balance;
} Account;

// 関数プロトタイプ宣言
void registerAccount(Account *user, const char *name, const char *number, long balance);
void displayAccount(Account user);

// registerAccount関数の実装
void registerAccount(Account *user, const char *name, const char *number, long balance)
{
    strcpy(user->name, name);
    strcpy(user->number, number);
    user->balance = balance;
}

// displayAccount関数の実装
void displayAccount(Account user)
{
    printf("%s\n", user.name);
    printf("%s\n", user.number);
    printf("%ld\n", user.balance);
}

int main()
{
    Account suzuki;
    Account takeda;

    registerAccount(&suzuki, "鈴木一郎", "1000", 200000);
    suzuki.balance -= 2000;
    displayAccount(suzuki);

    return 0;
}
