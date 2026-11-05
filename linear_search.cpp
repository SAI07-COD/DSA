#include<iostream>
using namespace std;

int linear_search(int a[],int n,int x)
{
    for (int i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[20];
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter "<<n<<" integers : "<<endl;

    for (int i=0; i<n ; i++)
    {
        cin>>a[i];
    }

    int x;
    cout<<"Enter the target elements to search for :"<<endl;
    cin>>x;

    int location = linear_search(a,n,x);
    if (location!=-1)
    {
        cout<<"Element "<<x<<" Found at Index  : "<<location<<endl; 
    }
    else
    {
        cout<<"Element"<<x<<"Not found in the array."<<endl;
    }
    return 0;
}
/*PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ linear_search.cpp -o linear_search } ; if ($?) { .\linear_search }
Enter the size of Array : 5
Enter 5 integers : 
4 3 2 9 7
Enter the target elements to search for :
7
Element 7 Found at Index  : 4
PS D:\sai55> 
*/