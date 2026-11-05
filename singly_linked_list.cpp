#include <iostream>
using namespace std;
class Node 
{
public:
    int data;
    Node* next;

  
    Node(int x) 
    {
        data = x;
        next = NULL;
    }
};

class LinkedList 
{
private:
    Node* head;

public:
    
    LinkedList() 
    {
        head = NULL;
    }

    void insert(int x) 
    {
        Node* p = new Node(x); 
        if (head == NULL) 
        {
            head = p;
        } else
         {
            Node* q = head; 
            while (q->next != NULL) 
            {
                q = q->next;
            }
            q->next = p;
        }
    }

    void remove(int x) 
    {
        Node* p = NULL;
        Node* q = head;

        if (q!=NULL && q->data == x) 
        {
            p = head;
            head = head->next;
            delete p;
            return;
        }

        while (q->next != NULL) 
        {
            if (q->next->data == x) 
            {
                p = q->next;
                q->next = p->next;
                delete p;
                return;
            }
            q = q->next;
        }

        cout <<endl<< "Value " << x << " not found in the list.\n";
    }

    void display()
    {
        cout<<endl<<"Linked List ";
        Node* q = head;
        while (q != NULL)
         {
            cout << q->data << " -> ";
            q=q->next;
         }
        } 
    }; 
int main() 
{
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display(); 
    
    list.insert(40);
    list.insert(50);
    list.insert(60);

    list.display();
    
    list.remove(40);
    list.display(); 

    list.remove(60); 
    list.display();

    list.remove(100); 
    list.display();

    return 0;
}
/*PS D:\sai55> cd "d:\sai55\" ; if ($?) { g++ singly_linked_list.cpp -o singly_linked_list } ; if ($?) { .\singly_linked_list }

Linked List 10 -> 20 -> 30 -> 
Linked List 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 
Linked List 10 -> 20 -> 30 -> 50 -> 60 -> 
Linked List 10 -> 20 -> 30 -> 50 -> 
Value 100 not found in the list.

Linked List 10 -> 20 -> 30 -> 50 -> 
PS D:\sai55> */