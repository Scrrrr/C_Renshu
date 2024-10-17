#ifndef ___Member
#define ___Member

typedef struct{
    int     no;
    char    name[20];
}Member;

#define MEMBER_NO   1
#define MEMBER_NAME 2

//会員の番号の比較関数
int MemberNoCmp(const Member *x, const Member *y);

//会員の指名の比較関数
int memberNameCmp(const Member *x, const Member *y);

//会員のデータの表示(改行なし)
void PrintMember(const Member *x);

//会員のデータの表示(改行あり)
void PrintLnMember(const Member *x);

//会員のデータの読み込み
Member ScanMember(const char *message, int sw);

#endif