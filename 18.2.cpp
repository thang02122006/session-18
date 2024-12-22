#include<stdio.h>

struct sinhvien{
	char name[50];
	int age;
	char phoneNumber[10];
};
int main(){
	struct sinhvien sv;
	printf("nhap ten sinh vien: ");
	fgets(sv.name , sizeof(sv.name) , stdin);
	printf("nhap tuoi sinh vien: ");
	scanf("%d",&sv.age);
	printf("nhap so dien thoai: ");
	scanf("%s",&sv.phoneNumber);
	printf("ten: %s",sv.name);
	printf("tuoi: %d",sv.age);
	printf("\nso dien thoai: %s",sv.phoneNumber);
	
    return 0;
}
