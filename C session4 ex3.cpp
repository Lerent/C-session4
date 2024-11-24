#include <stdio.h>

int main() 
{
	int Nguyen; 
	printf("Nhap vao mot so nguyen ");
	scanf("%d", &Nguyen);
	if (Nguyen % 3 == 0 && Nguyen % 5 == 0) {
		printf("Day la so chia het cho ca 3 va 5"); 
	}else if (Nguyen % 5 == 0)  {
		printf("Day la so chia het cho 5"); 
	} else if (Nguyen % 3 == 0){
		printf("Day la so chia het cho 3"); 
	} 
	 
} 

