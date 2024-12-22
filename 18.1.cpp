#include<stdio.h>

struct sinhvien{
	char name[50];
	int age;
	char phoneNumber[10];
};
int main(){
	struct sinhvien sv{"tran van thang", 18 , "012345678"};
	printf("ten: %s",sv.name);
	printf("\ntuoi: %d",sv.age);
	printf("\nso dien thoai: %s",sv.phoneNumber);
	
    return 0;
}
