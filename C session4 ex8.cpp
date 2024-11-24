#include <stdio.h>

int main() 
{
    float a, b, c;
	printf("Hay nhap canh a: ");
    scanf("%f", &a);
    printf("Hay nhap canh b: ");
    scanf("%f", &b);
    printf("Hay nhap canh c: ");
    scanf("%f", &c);
	if (a <= 0 || b <= 0 || c <= 0) 
	{
        printf("Không phai 3 canh tam giac");
    } else if (a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac");
    } else {
        printf("Khong phai 3 canh tam giac");
    } 
    
}
