#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

void liet_ke_uoc_so_nguyen_duong(int n);
int tong_cac_uoc_so_nguyen_duong(int n);
int tich_cac_uoc_so_nguyen_duong(int n);
void dem_so_luong_uoc_so_nguyen_duong(int n);
void liet_ke_uoc_so_le_so_nguyen_duong(int n);
int tong_cac_uoc_so_chan_so_nguyen_duong(int n);
int tich_cac_uoc_so_le_nguyen_duong(int n);
void menu(int n);
void pressAnyKey();

int main(){
    int n;
    do{
        printf("\nNhap n(n > 0): ");
        scanf("%d", &n);
        if(n <= 0){
            printf("\n N phai > 0. Xin nhap lai !");
        }
    }while(n <= 0);
    menu(n);
    return 0;
}
// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
void liet_ke_uoc_so_nguyen_duong(int n){
    int i = 1;
    printf("Liet ke tat ca cac uoc so cua so nguyen duong %d: ", n);
    while(i <= n){
        if(n % i == 0)
            printf("%4d", i);
            i++;
    }
}

// Bài 21: Tính tổng tất cả các “ ước số” của số nguyên dương n
int tong_cac_uoc_so_nguyen_duong(int n){
    int i = 1,sum = 0;
    while(i <= n)
    {
        if(n % i == 0) sum += i;
        i++;
    }
    return sum;
}

// Bài 22:Tính tích tất cả các “ước số” của số nguyên dương n
int tich_cac_uoc_so_nguyen_duong(int n){
    int i = 1, p =1;
    while(i <= n){
        if(n % i == 0) p *= i;
        i++;
    }
    return p;
}

// Bài 23: Đếm số lượng “ước số” của số nguyên dương n
void dem_so_luong_uoc_so_nguyen_duong(int n){
    int i = 1,count = 0;
    while(i <= n){
        if(n % i == 0) count++;
        i++;
    }
    printf("\nSo luong cac uoc so cua %d la: %d", n , count);
}

// Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
void liet_ke_uoc_so_le_so_nguyen_duong(int n){
    int i=1;
    printf("\nCac uoc so le cua so %d la: ",n);
    while(i <= n){
        if(n % i == 0){
            if(i % 2 == 1)
            printf("%4d", i);
        }
        i++;
    }
}

// Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
int tong_cac_uoc_so_chan_so_nguyen_duong(int n){
    int i = 1,sum1 = 0;
    while(i <= n){
        if(n % i == 0){
            if(i % 2 == 0) sum1 += i;
        }
        i++;
    }
    return sum1;
}

// Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương n
int tich_cac_uoc_so_le_nguyen_duong(int n){
    int i = 1,p1 =1;
    while(i <= n){
        if(n % i == 0){
            if(i % 2 == 1) p1 *=i;
        }
        i++;
    }
    return p1;
}

void menu(int n){
    system("color 72");
    int choose;
    bool exit = false;
    do{
        system("cls");
        printf("\n###########################################################################\n");
        printf("\n## --------------------------------------------------------------------- ##\n");
        printf("\n##      1. Liet ke tat ca cac uoc so cua so nguyen duong n               ##\n");
        printf("\n##      2. Tinh tong tat ca cac uoc so cua so nguyen duong n             ##\n");
        printf("\n##      3. Tinh tich tat ca cac uoc so cua so nguyen duong n             ##\n");
        printf("\n##      4. Dem so luong uoc so cua so nguyen duong n                     ##\n");
        printf("\n##      5. Liet ke tat ca cac uoc so le cua so nguyen duong n            ##\n");
        printf("\n##      6. Tinh tong tat ca cac uoc so chan cua so nguyen duong n        ##\n");
        printf("\n##      7. Tinh tich tat ca cac uoc so le cua so nguyen duong n          ##\n");
        printf("\n## --------------------------------------------------------------------- ##\n");
        printf("\n##      0. Thoat chuong trinh                                            ##\n");
        printf("\n###########################################################################\n");
        printf("\n   Lua chon cua ban -> ");
        scanf("%d", &choose);

        switch (choose){
            case 1:
            {
                system("cls");
                liet_ke_uoc_so_nguyen_duong(n);
                printf("\n");
                pressAnyKey();
                break;
            }
            case 2:
            {
                system("cls");
                int sum = tong_cac_uoc_so_nguyen_duong(n);
                printf("\nTong cac uoc cua %d la: %d", n, sum);
                printf("\n");
                pressAnyKey();
                break;
            }
            case 3:
            {
                system("cls");
                int p = tich_cac_uoc_so_nguyen_duong(n);
                printf("\nTich cac uoc cua %d la: %d", n, p);
                printf("\n");
                pressAnyKey();
                break;
            }
            case 4:
            {
                system("cls");
                dem_so_luong_uoc_so_nguyen_duong(n);
                printf("\n");
                pressAnyKey();
                break;
            }
            case 5:
            {
                system("cls");
                liet_ke_uoc_so_le_so_nguyen_duong(n);
                printf("\n");
                pressAnyKey();
                break;
            }
            case 6:
            {
                system("cls");
                int sum1=tong_cac_uoc_so_chan_so_nguyen_duong(n);
                printf("\nTong cac uoc so chan cua %d la: %d", n, sum1);
                printf("\n");
                pressAnyKey();
                break;
            }
            case 7:
            {
                system("cls");
                int p1=tich_cac_uoc_so_le_nguyen_duong(n);
                printf("\nTich cac uoc so le cua %d la: %d", n, p1);
                printf("\n");
                pressAnyKey();
                break;
            }
            default:
                printf("\n(!) Lua chon khong hop le (!)\n\a");
                pressAnyKey();
                break;
            case 0:
                exit = true;
                break;
        }
    } while (!exit);
}

void pressAnyKey(){
    printf("\n\n   Bam phim bat ky de tiep tuc...");
    getch();
    system("cls");
}