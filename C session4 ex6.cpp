#include <stdio.h>

int main() 
{
    float Chisocu, Chisomoi, Dien, Tiendien;
    printf("Hay nhap chi so cu: ");
    scanf("%f", &Chisocu);
    printf("Hay nhap chi so moi: ");
    scanf("%f", &Chisomoi);
    Dien = Chisomoi - Chisocu;
    if (Dien <= 0){
    	printf("Chi so khong hop le vi ");
	}
    if (0 <= Dien < 50) 
	{
        Tiendien = Dien * 10000;
    } else if (Dien < 100) {
        Tiendien = 50 * 10000 + (Dien - 50) * 15000;
    } else if (Dien <= 150) {
        Tiendien = 50 * 10000 + 50 * 15000 + (Dien - 100) * 20000;
    } else if (Dien <= 200) {
        Tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (Dien - 150) * 25000;
    } else {
        Tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (Dien - 200) * 30000;
    }
    printf("So tien dien phai tra la %.2f VND", Tiendien);
    
}

