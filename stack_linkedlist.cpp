#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

class stack {
private:
    node *top;

public:
    stack() {
        top = NULL;
    }

    int empty() {
        if (top == NULL) {
            return 1;
        } else {
            return 0;
        }
    }

    void push(int x) {
        node *p = new node(x);
        p->next = top;
        top = p;
    }

    int pop(void) {
        int x = top->data;
        node *p = top;
        top = top->next;
        delete p;
        return x;
    }

    int peek() {
        return top->data;
    }

    void display() {
        node *q = top;
        while (q != NULL) {
            cout << endl << q->data;
            q = q->next;
        }
    }
};

int main() {
    int x;
    stack s;

    s.push(890);
    s.push(860);
    s.push(393);
    s.push(506);
    s.push(350);
    s.push(860);
    
    s.display();

    if (!s.empty()) {
        x = s.pop();
        cout << endl << "Removed:" << x;
    }
    
    s.display();

    x = s.peek();
    cout << endl << "Top Element is:" << x;

    return 0;
}
/*PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ stack_linkedlist.cpp -o stack_linkedlist } ; if ($?) { .\stack_linkedlist }

860
350
506
393
860
890
Removed:860
350
506
393
860
890
Top Element is:350
PS D:\sai55> */