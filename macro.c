#include <stdio.h>

#define kpop 50000000
#define pi 3.14
#define prt printf("매크로 상수 예제 종료\n")

int main(void)
{
	double radius = 2.83;

	printf("한국인구: %d명\n", kpop);
	printf("원 면적: %f\n", radius*radius*pi);

	return 0;
}