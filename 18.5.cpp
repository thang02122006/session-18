#include <stdio.h>
#include<string.h>

typedef struct {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} SinhVien;

int main() {
    SinhVien students[50] = {
        {1, "Nguyen van thang", 20, "012345"},
        {2, "Tran van thang", 21, "098765"},
        {3, "Le nhu quynh", 22, "034567"},
        {4, "Pham le hoang", 23, "045678"},
        {5, "Hoang emu", 24, "096841"}
    };
    
    int n = 5;
    int idSearch;
    int found = 0;

    printf("Nhap id sinh vien can tim: ");
    scanf("%d", &idSearch);

    for (int i = 0; i < n; i++) {
        if (students[i].id == idSearch) {
            found = 1;
            printf("Sinh vien tim thay: \n");
            printf("ID: %d\n", students[i].id);
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %s\n", students[i].phoneNumber);
            
            printf("\nNhap ten moi: ");
            getchar(); 
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            printf("\nThong tin sinh vien sau khi sua: \n");
            printf("ID: %d\n", students[i].id);
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %s\n", students[i].phoneNumber);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi id %d.\n", idSearch);
    }

    printf("\nThong tin toan bo sinh vien trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", students[i].id);
        printf("Ma sinh vien: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

