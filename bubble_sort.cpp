#include <iostream>
using namespace std;

void bubble_sort(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1]) 
        {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        }
    }
    }
}

int main() {
    int n;
    int a[10]; 
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " integers in any order: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    bubble_sort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
/*PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
Enter the size of the array: 7
Enter 7 integers in any order: 
5 6 7 8 4 3 5 
Sorted array: 3 4 5 5 6 7 8 
PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ bubble_sort.cpp -o bubble_sort } ; if ($?) { .\bubble_sort }
Enter the size of the array: 10      
Enter 10 integers in any order: 
7 5 4 3 2 7 8 7 0 6
Sorted array: 0 2 3 4 5 6 7 7 7 8 
PS D:\sai55> 
*/