#include<math.h>
#include<stdio.h>

#define sqr(n) ((n) * (n))

typedef struct {
	double x;
	double y;
 }Point;

typedef struct {
	Point pt;
	double fuel;
}Car;

double distance_of(Point pa, Point pb,int judge) {
	if(!judge)
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
	else
	return sqrt(sqr(pa.x - (pb.x + pa.x)) + sqr(pa.y - (pb.y + pa.y)));
}

void put_info(Car c) {
	printf("現在位置: (%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("残り燃料:%.2fリットル\n", c.fuel);
}

int move_zero(Car* c, Point dest) {
	double d = distance_of(c->pt, dest,0);
	if (d > c->fuel)
		return 0;
	c->pt = dest;
	c->fuel -= d;
	return 1;
}

int move_one(Car* c, Point dest) {
	double d = distance_of(c->pt,dest,1);
	if (d > c->fuel)
		return 0;
	c->pt.x += dest.x;
	c->pt.y += dest.y;
	c->fuel -= d;
		return 1;
 }

void hasen() {
	for (int i = 0; i < 30; i++)
		putchar('-');
	putchar('\n');
}

int main(void) {
	Car mycar = { {0.0,0.0},	90.0};
	while (1)
	{
		int select;
		Point dest;
		put_info(mycar);
		hasen();
		puts("移動方法を選択してください。");
		puts("【0】移動目的地の座標を入力。");
		puts("【1】X軸、Y軸ごとの移動したい距離を入力。");
		putchar(':');
		scanf("%d", &select);
		if (select != 1) {
			printf("目的地のX座標:");	scanf("%lf", &dest.x);
			printf("        Y座標:");	scanf("%lf", &dest.y);
			if (!move_zero(&mycar, dest))
				puts("\a燃料不足で移動できません。");
		}
		else {
			printf("X方向:");	scanf("%lf", &dest.x);
			printf("Y方向:");	scanf("%lf", &dest.y);
			if (!move_one(&mycar, dest))
				puts("\a燃料不足で移動できません。");
		}
		putchar('\n');
 }
	return 0;
 }
