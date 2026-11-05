#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float image;
    public:
    complex()
    {
        real=0;
        image=0;
    }
    complex(float r,float i)
    {
        real=r;
        image=i;
    }
    ~complex()
{

}
void display(void)
{
    cout<<real<<"+"<<image<<"i"<<endl;
}
complex operator+(complex c2)
{
    float r=real+c2.real;
    float i=image+c2.image;
    return complex(r,i);
}
complex operator-(complex c2)
{
    float r=real-c2.real;
    float i=image-c2.image;
    return(complex(r,i));
}
complex operator*(complex c2)
{
    float r=real*c2.real-image*c2.image;
    float i=real*c2.real+image*c2.image;
    return(complex(r,i));
}
};
int main()
{
    complex c1(9,7);
    complex c2(8,5);
    cout<<"first complex number: ";
    c1.display();
    cout<<"second complex number :";
    c2.display();
    complex sum=c1+c2;
    cout<<"addition is: ";
    sum.display();
    complex diff=c1-c2;
    cout<<"substraction is: ";
    diff.display();
    complex prod=c1*c2;
    cout<<"product is:";
    prod.display();
    return(0);
}
/*PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ complexnumber_with_operator.cpp -o complexnumber_with_operator } ; if ($?) { .\complexnumber_with_operator }
first complex number: 9+7i
second complex number :8+5i
addition is: 17+12i
substraction is: 1+2i
product is:37+107i
PS D:\sai55>*/