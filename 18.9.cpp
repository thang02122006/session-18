#include <stdio.h>
#include <string.h>
void inRaMenu();
void themPhanTu();
void suaPhanTu();
void xoaPhanTu();
void sapXep();
void timKiem();
   
struct Dish{
   int id;        
   char name[50];              
   float price; 
};
struct Dish menu[100]{
		{1,"lau ech mang cay",350000},
		{2,"lau bo nhung",450000},
		{3,"dau tam hanh",20000},
		{4,"nem boc",30000},
		{5,"bia hoi",24000},
};
int n=5;
int main(){
	int check;

  do{
	printf("\n-----MENU-----\n");
	printf("1.In ra gia tri cac phan tu trong menu mon an\n");
	printf("2.Them mot phan tu  vao vi tri chi dinh\n");
	printf("3.Sua mot phan o vi tri chi dinh\n");
	printf("4.Xoa mot phan tu o vi tri chi dinh\n");
	printf("5.Sap xep cac phan tu\n");
	printf("6.Tim kiem phan tu\n");
	printf("7.Thoat\n");
	
	printf("Moi ban nhap vao :");
	scanf("%d",&check);
	
	switch(check){
		case 1:{
			inRaMenu();
			break;
		}
		case 2:{
		    themPhanTu();
			break;
		}
		case 3:{
			suaPhanTu();
			break;
		}
		case 4:{
			xoaPhanTu();
			break;
		}
		case 5:{
			sapXep();
			break;
		}
		case 6:{
			timKiem();
			break;
		}
		case 7:{
			printf("Thoat chuong trinh");
			break;
		}
		default:
			printf("Lua chon khong hop le vui long nhap lai !!!");
	}
	
	
    }while(check!=7);
   return 0;
} 
void inRaMenu(){
	for(int i=0;i<n;i++){
		printf("%d,",menu[i].id);
		printf("%s :",menu[i].name);
		printf("%.2f\n",menu[i].price);
	}
}
void themPhanTu() {
    int pos;
    printf("Moi nhap vao vi tri muon them: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Khong hop le !!!\n");
    } else {
        getchar();
        for (int i = n; i > pos; i--) { 	
            menu[i] = menu[i - 1];
        }
         menu[pos].id = n+1; 
        printf("Nhap mon an muon them: ");
        fgets(menu[pos].name, sizeof(menu[pos].name), stdin);
        menu[pos].name[strcspn(menu[pos].name, "\n")] = '\0'; 

        printf("Nhap gia tien muon them: ");
        scanf("%f", &menu[pos].price);
        getchar();
        n++;
    }
}
void suaPhanTu(){
    int id;
     printf("Moi ban nhap vi tri can thay doi :");
     scanf("%d",&id);
	    for (int i = 0; i < n; i++) {
	        if (menu[i].id == id) {
	            printf("Nhap mon can sua: ");
	            getchar();
	            fgets(menu[i].name, sizeof(menu[i].name), stdin);
	            menu[i].name[strcspn(menu[i].name, "\n")] = '\0'; 
	            printf("Nhap gia tien moi: ");
	            scanf("%.2f", &menu[i].price);
	            getchar();
	            break;
	        }
	    }
}
void xoaPhanTu(){
	int id;
	 printf("Moi ban nhap cho can xoa :");
     scanf("%d",&id);
	     if(id<0||id>n){
		  printf("Vi tri khong hop le");
	    }else{
	      printf("Them thanh cong");
		    for (int i = id; i < n; i++) {
		        menu[i]=menu[i+1];
		    }
		    n--;
	    }	        	
}
void sapXep(){
    int choice=1;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if ((choice == 1 && menu[i].price > menu[j].price)){ 
	            Dish temp = menu[i];
	            menu[i] = menu[j];
	            menu[j] = temp;
	    }
      }
    }
}
void timKiem(){
	char search[50];
	printf("Nhap ten mon can tim trong menu:");
	getchar(); 
	fgets(search, sizeof(search), stdin);
	search[strcspn(search, "\n")] = '\0'; 
	
    for (int i = 0; i < n; i++) {
        if (strcmp(menu[i].name, search) == 0) {
	        printf("%d, ",menu[i].id);
		printf("%s: ",menu[i].name);
		printf("%.2f\n",menu[i].price);
               break;
        }
    }
}



