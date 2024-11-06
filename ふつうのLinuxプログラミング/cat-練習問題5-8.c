#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

static void do_cat(const char*path);
static void die(const char *s);
#define BUFFER_SIZE 2048

int main(int argc, char *argv[])
{
    int i;
    ssize_t nread;
    u_int8_t buf[BUFFER_SIZE];

    //もしもコマンドライン引数が何もなければ標準出力
    if(argc < 2)
    {
        while((nread = read(0,buf,sizeof (buf))) > 0 )
            write(1,buf,nread);
        return 0;
    }

    //成功処理開始
    //引数の数個分だけdo_catを実行する
    for(i = 1; i <argc; i++)
    {
        do_cat(argv[i]); //do_catに引数を渡している。引数にはファイル名が渡されることを期待している。
    }
    exit(0);
}

static void
do_cat(const char *path)
{
    int fd;
    unsigned char buf[BUFFER_SIZE]; //unsigned charで確実に1Byte分のバッファをBUFFER_SIZE分確保している。
    int n;

    fd = open(path,O_RDONLY); //読み取り専用でpathのファイルをfdに渡す

    if(fd < 0) die(path); //渡されたパス(fd)が開けなければdie関数を実行する
                          //die関数はストリームを破棄する処理を記述した関数である。
    for(;;)
    {
        n = read(fd,buf,sizeof buf); //readは成功した場合、返り値にバイト数を返す。その数をnに代入している。
        if(n < 0) die(path);
        if(n == 0) break;
        if(write(STDOUT_FILENO,buf,n) < 0) die(path);
    }
//  status = close(fd);
//  if(status < 0) die(path);
    if(close(fd) < 0) die(path); //ファイルを使い終わったらcloseでファイルを閉じる。失敗したらdie関数を実行する。
}

static void die(const char *s)
{
    perror(s);
    exit(1);
}