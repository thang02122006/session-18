#include<stdio.h>

struct sinhvien{
	char name[50];
	int age;
	char phoneNumber[10];
};
int main(){
	struct sinhvien sv[5];
	for(int i=1 ; i<6 ; i++){
     	printf("nhap ten sinh vien %d: ",i);
    	fgets(sv[i].name , sizeof(sv[i].name) , stdin);
    	printf("nhap tuoi sinh vien %d: ",i);
    	scanf("%d",&sv[i].age);
    	getchar();
    	printf("nhap so dien thoai %d: ",i);
     	fgets(sv[i].phoneNumber , sizeof(sv[i].phoneNumber) , stdin);
    }
    for(int i=1 ; i<6 ; i++){
    	printf("%d:ten: %s",i,sv[i].name);
    	printf("tuoi: %d",sv[i].age);
    	printf("\nso dien thoai: %s",sv[i].phoneNumber);
    }
    return 0;
}
