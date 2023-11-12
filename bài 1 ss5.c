#include <stdio.h>
int main (){
	float a,b,c;
	float delta,x1,x2;
	printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
	delta = b*b -4*a*c;
	if (delta > 0){
		x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet la:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
	}else if (delta == 0){
		x1=x2=(-b / (2*a));
		 printf("Phuong trinh co nghiem kep la:\n");
         printf("x1 = x2 = %.2f\n", x1);
	}else{
		printf ("Phuong trinh khong co nghiem thuc.\n");
	} 
	return 0; 
}
