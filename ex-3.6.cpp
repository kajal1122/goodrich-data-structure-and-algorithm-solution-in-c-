#include<iostream>
using namespace std;

class Node
{
public:

    int data;
    Node *next=NULL;
};
class singlyList
{
public:
    Node *head=NULL;
    int len=0;
    void inserttofront(int num);
    void print();
    //size( ) will return size of list in constant time.
    int size();
};
int main()
{
    singlyList num;
    num.inserttofront(1);
    num.inserttofront(2);
    num.inserttofront(3);
    num.inserttofront(4);
    num.inserttofront(5);
    num.print();
    cout<<num.size();


    return 0;
}
void singlyList :: inserttofront(int num)
{
    Node *newnode = new Node();
    newnode->data=num;
    if(head == NULL)
    {
        head=newnode;
        len+=1;
    }
    else
    {
        newnode->next=head;
        head=newnode;
        len+=1;
    }
}
void singlyList :: print()
{
    Node *temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int singlyList :: size()
{
   return len;
}
