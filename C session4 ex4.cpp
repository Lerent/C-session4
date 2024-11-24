#include <stdio.h>

int main() 
{
	int Thang; 
	printf("Hay nhap so thang: ");
	scanf("%d", &Thang);
	
	switch (Thang) 
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang %d co 31 ngay \n", Thang);
		    break;
		case 4: case 6: case 9: case 11:
			printf("Thang %d co 30 ngay \n", Thang);
		    break;
		case 2:
			printf("Thang 2 co 28 hoac 29 ngay \n");
			break;
		default:
		    printf("So thang khong hop le");
					 
	} 
	
} 
