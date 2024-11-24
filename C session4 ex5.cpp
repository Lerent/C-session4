#include <stdio.h>

int main ()
{
	int a, b, c;
	printf("Hay nhap so dau tien: ");
	scanf("%d", &a);
	printf("Hay nhap so thu hai: ");
	scanf("%d", &b);
	printf("Hay nhap so thu ba: ");
	scanf("%d", &c);
	if (c > a && c < b || c > b && c < a) 
	{
        printf("So %d nam trong khoang giua %d và %d", c, a, b);
    } else {
        printf("So %d khong nam trong khoang giua %d và %d", c, a, b);
    }
}

