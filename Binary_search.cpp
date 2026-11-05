#include <iostream>
using namespace std;

int binary_search(int a[], int n, int x) 
{
    int first = 0;
    int last = n - 1;
    int mid;

    while (first <= last) 
    {
        mid = (first + last) / 2;

        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] < x) 
        {
            first = mid + 1;
        }
        else 
        {
            last = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    int a[20];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " sorted integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the target element to search for: ";
    cin >> x;

    int position = binary_search(a, n, x);

    if (position != -1)
        cout << "Element found at position: " << position << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
/*PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ Binary_search.cpp -o Binary_search } ; if ($?) { .\Binary_search }
Enter the size of the array: 6
Enter 6 sorted integers:
1 2 3 4 5 6 
Enter the target element to search for: 4
Element found at position: 3
PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ Binary_search.cpp -o Binary_search } ; if ($?) { .\Binary_search }
Enter the size of the array: 9
Enter 9 sorted integers:
1 7 4 3 2 8 4 3 8 
Enter the target element to search for: 0
Element not found.
PS D:\sai55> */