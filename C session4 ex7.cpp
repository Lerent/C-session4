#include <stdio.h>

int main ()
{
	int Nam;
	printf("Hay nhap so nam: ");
	scanf("%d", &Nam);
	if (Nam % 4 == 0 && Nam % 100 != 0 || Nam % 400 == 0) 
	{
        printf("Nam %d la nam nhuan", Nam);
    } else {
        printf("Nam %d khong phai la nam nhuan", Nam);
    } 
    
}

