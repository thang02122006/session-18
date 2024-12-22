#include <stdio.h>
#include<string.h>

typedef struct {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} SinhVien;

int main() {
    SinhVien students[50];
    int n = 5;
    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("Ten sinh vien: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Tuoi sinh vien: ");
        scanf("%d", &students[i].age);
        printf("So dien thoai sinh vien: ");
        getchar();
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0';
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", students[i].id);
        printf("Ma sinh vien: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

