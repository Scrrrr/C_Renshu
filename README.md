C言語の勉強したコードを載せます

# 予約語
```
auto  break  case  char  const  continue  default  do  double  else  enum
extern  float  for  goto  if  int  long  register  return  signed  sizeof
short  static  struct  switch  typedef  union  unsigned  void  volatile  while
```

## API(Application Programming Interface)
何かを使ってプログラミングするときのインターフェイス。関数、マクロ、システムコールなど様々な物がAPIと呼ばれる。広義が広い。

read(2)
write(2)
open(2)
close(2)
perror(3)

lseek(2)
dup(2)
dup2(2)
ioctl(2)
fcntl(2)

## プログラムができるまで
**プリプロセス→コンパイル→アセンブル→リンク**  

### プリプロセス
#includeしたファイルを結合して一つのコードにする。  
`gcc -E`でプリプロセスだけの結果を標準出力できる。

### コンパイル  
C言語のソースコードをアセンブリ言語に変化する。

### アセンブル
アセンブリ言語をオブジェクトファイルに変化する。

### リンク
オブジェクトファイルを実行ファイルやライブラリに変換する。

## 日本語文字列処理
ASCIIは１文字１バイトであるが、SHIFT-JISやUnicodeでは最低2バイトを必要とする。  
これらのバイト数の違う文字列を扱うために２つの手法がある。  

・ワイドキャラクタ  
そのエンコード方式の最大の数だけ1文字に割り当てるバイト数を与える。  

・マルチバイトキャラクタ  
その文字に合わせてバイト数を変化させる。  