#include <iostream>
 
using namespace std;
 
int binarySearch(int array[], int n, int nilai)
{
    int low = 0;
    int high = n - 1;
 
    int mid;
 
    while (low <= high)
    {
        mid = (low + high) / 2;
 
        if(nilai == array[mid])
        {
            return mid;
        }
        else if (nilai > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
 
    return -1;
 
}

int main()
{
    int A[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 38};
 
    int nilai;
 
    cout << "Masukkan Bilangan : " << endl;
    cin >> nilai;
 
    int hasil = binarySearch(A, 10, nilai);
 
    if(hasil >= 0)
    {
        cout << "Bilangan ditemukan pada index " << hasil << endl;
    }
    else
    {
        cout << "Bilangan tidak ditemukan " << endl;
    }
}
