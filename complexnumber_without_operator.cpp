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
complex add(complex c)
{
    float r=real+c.real;
    float i=image+c.image;
    return complex(r,i);
}
complex subtract(complex c)
{
    float r=real-c.real;
    float i=image-c.image;
    return(complex(r,i));
}
complex multiply(complex c)
{
    float r=real*c.real-image*c.image;
    float i=real*c.real+image*c.image;
    return(complex(r,i));
}
};
int main()
{
    complex c1(5,4);
    complex c2(2,3);
    cout<<"first complex number: ";
    c1.display();
    cout<<"second complex number :";
    c2.display();
    complex sum=c1.add(c2);
    cout<<"\nSum: ";
    sum.display();
    complex diff=c1.subtract(c2);
    cout<<"difference: ";
    diff.display();
    complex prod=c1.multiply(c2);
    cout<<"product:";
    prod.display();
    return(0);
}
/*PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ complexnumber_without_operator.cpp -o complexnumber_without_operator } ; if ($?) { .\complexnumber_without_operator }
first complex number: 5+4i
second complex number :2+3i

Sum: 7+7i
difference: 3+1i
product:-2+22i
PS D:\sai55>*/