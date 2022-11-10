#include <iostream>
using namespace std;

void inputInt(int &n)
{
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }
}

void inputArray(int *a, int n)
{
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
}

void outputArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}

void maxEven(int *a, int n)
{
    int max;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            max = *(a + i);
            count++;
            break;
        }
    }
    if (count > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (*(a + i) % 2 == 0 && max < *(a + i))
            {
                max = *(a + i);
            }
        }
        cout << "\n\nPhan tu chan lon nhat trong mang la: " << max;
    }
    else
    {
        cout << "\n\nTrong mang khong co phan tu chan nao !!";
    }
}

void sortArrayDescending(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
}

void sortArrayAscending(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
}

int main()
{
    int n;
    inputInt(n);
    int *a;
    a = new int[n];
    inputArray(a, n);
    cout << "\nCac phan tu cua mang la: ";
    outputArray(a, n);
    cout << "\n------------------------------------";
    cout << "\n[1] Hien thi phan tu chan lon nhat trong mang.";
    cout << "\n[2] Hien thi mang sap xep tang dan.";
    cout << "\n[3] Hien thi mang sap xep giam dan.";
    cout << "\n------------------------------------\n";
    int opt;
    cout << "\nNhap lua chon cua ban: ";
    cin >> opt;
    if (opt == 1)
    {
        maxEven(a, n);
    }
    else if (opt == 2)
    {
        sortArrayAscending(a, n);
        cout << "\n\nMang sau khi sap xep tang dan la: ";
        outputArray(a, n);
    }
    else if (opt == 3)
    {
        sortArrayDescending(a, n);
        cout << "\n\nMang sau khi sap xep giam dan la: ";
        outputArray(a, n);
    }
}