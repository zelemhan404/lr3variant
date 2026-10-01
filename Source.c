#define K 63241.077
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int sg, ae;
	float res, res1;
	printf("введите число световых лет\n");
	scanf("%d", &sg);
	res = K * sg;
	printf("%d световых лет - это %.f астрономических единиц",sg, res);
}