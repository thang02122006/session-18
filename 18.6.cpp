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
    SinhVien newStudent;
    printf("Nhap thong tin sinh vien moi:\n");
    newStudent.id = n + 1; 
    printf("Nhap ten sinh vien: ");
    getchar(); 
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; 
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai sinh vien: ");
    getchar(); 
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0'; 
    students[n] = newStudent;
    n++; 
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

