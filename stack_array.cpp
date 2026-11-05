#include <iostream>
using namespace std;

const int MAX = 6;

class Stack
{
private:
    int a[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        top++;
        a[top] = x;
    }

    int pop(void)
    {
        int x = a[top];
        top--;
        return x;
    }

    int peek(void)
    {
        return a[top];
    }

    int full(void)
    {
        if (top == MAX - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int empty(void)
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void display(void)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << endl << a[i];
        }
    }
};

int main()
{
    int x;
    Stack s;

    if (!s.full()) s.push(45);
    if (!s.full()) s.push(32);
    if (!s.full()) s.push(65);
    if (!s.full()) s.push(37);
    if (!s.full()) s.push(82);
    if (!s.full()) s.push(96);

    cout << "Stack elements:";
    s.display();

    if (!s.empty())
    {
        x = s.pop();
        cout << endl << "Removed: " << x;
    }

    cout << endl << "Stack after pop:";
    s.display();

    if (!s.empty())
    {
        x = s.peek();
        cout << endl << "Top element is: " << x;
    }

    return 0;
}
/*PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ stack_array.cpp -o stack_array } ; if ($?) { .\stack_array }
Stack elements:
96
82
37
65
32
45
Removed: 96
Stack after pop:
82
37
65
32
45
Top element is: 82
PS D:\sai55> */