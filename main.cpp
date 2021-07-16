#include <iostream>
#define MAX 100
using namespace std;
int n;
int s = 0;
int x;
void Nhapmang(int a[], int n);
void Xuatmang(int a[], int n);
void tong(int a[], int n);
void saochep(int a2[MAX], int a[MAX], int n);
int main()
{
    int a[MAX];
    int a2[MAX];
    std::cout << "Nhap vao so luong phan tu mang: ";
    cin >> n;
    Nhapmang(a, n);
    Xuatmang(a, n);
    tong(a, n);
    std::cout << "\nTong cac phan tu trong mang la: " << s << std::endl;
    std::cout << "Mang sau khi sao chep la: " << std::endl;
    saochep(a2, a, n);
    std::cout << "Nhap so tim kiem: ";
    cin>>x;
    std::cout << "Ket thuc chuong trinh" << std::endl;
    return 0;
}
void Nhapmang(int a[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "\nNhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}
void Xuatmang(int a[MAX], int n)
{
    std::cout << "Mang sau khi nhap la:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "\t";
    }
}
void tong(int a[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
}
void saochep(int a2[MAX], int a[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        a2[i] = a[i];
        std::cout << a2[i]<<"\t";
    }
}
void timkiem(int a[MAX])