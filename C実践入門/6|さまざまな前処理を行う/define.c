#include<stdio.h>

#define MAX 50

int main(void)
{

  int end;
  int i,j;
  int flag; //素数かどうかを表す flag 素数であれば0,素数でなければ1

  end = MAX; //カウントする最大の数を決める

  for(i = 2; i <= end; i++)  
  {
    flag = 0;
    for(j = 2; j < i; j++) //jの開始値は毎週2から始まる。iの値は前回の周回を引き継ぐ。
    {
      if(i % j == 0) //この中でjは2から(i-1)の値までインクリメントされ続ける。条件はjの数でiをは割ったときに余剰が0になるまで
      {
        flag = 1; //上の条件が真のとき、素数でないと表現としてfalgに1を代入する。
        break; //forループを抜ける
      }
    }
    if(flag == 0)  //上のforで素数でないと判断されていれば(flagに1が代入されている)この条件は実行されない
      printf("%d\n",i);
                    
  }//forでendに到達していなかったら12行目に戻る

#undef MAX

#define max 2

printf("undef after define number is ... %d",max);

  return 0;
}
