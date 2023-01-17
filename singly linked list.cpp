
#include<bits/stdc++.h>
#include<algorithm>
#include<stdlib.h>
#define ll long long int
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;


void insertathead()
{

    cout << endl << "*** INSERT AT FIRST ***" <<endl;
    int val;
    cout << "Enter the value for the node : ";
    cin>>val;
    struct node *first=new node();
    first->data=val;
    if(head==NULL)
    {
        first->next=NULL;
        head=first;
    }
    else
    {
        first->next=head;
        head=first;
    }

    cout << endl;
}
void insertatlast()
{

    cout << endl << "*** INSERT AT LAST ***" <<endl;
    int val;
    cout << "Enter the value for the last node : ";
    cin>>val;
    struct node *first=new node();
    struct node *last=new node();
    if(head==NULL)
    {
        first->data=val;
        first->next=NULL;
        head=first;
    }
    else
    {
        first=head;
        while(first->next!=NULL)
        {
            first=first->next;
        }
        last->data=val;
        first->next=last;
        last->next=NULL;
    }

    cout << endl;

}
void traverse()
{

    cout << endl <<  "*** TRAVERSE ***" <<endl;
    struct node *first=new node();
    if(head==NULL)
        cout << "Linked List is empty" << endl;
    else
    {
        first=head;
        cout << "Linked list is : " << " ";
        while(first!=NULL)
        {
            cout << first->data << " ->" ;
            first=first->next;
        }
        cout << "NULL" << endl;
    }

    cout << endl;

}
void deleteatfirst()
{
    cout << endl <<  "*** DELETE AT FIRST ***" <<endl;
    int x;
    if(head==NULL)
        cout << "Linked List is empty" << endl;
    else
    {
        x=head->data;
        head=head->next;
        cout << "Deleted element from node is : " << x << endl;
    }

    cout << endl;

}
void deleteatlast()
{
    cout << endl << "*** DELETE AT LAST ***" <<endl;
    int x;
    if(head==NULL)
        cout << "Linked List is empty" << endl;
    else
    {
        struct node *first=new node();
        struct node *prev=new node();
        first=head;
        prev=NULL;
        while(first->next!=NULL)
        {
            prev=first;
            first=first->next;
        }
        cout << "Deleted element is : " << first->data << endl;
        prev->next=NULL;
        first=prev;
    }
    cout << endl;


}
void insertatposition()
{
    cout << endl << "*** INSERT AT GIVEN POSITION ***" <<endl;
    int pos;
    cout << "Enter the position you want to enter the element : ";
    cin>>pos;

    struct node *first=new node();
    struct node *mid=new node();
    int val;
    cout << "Enter the value you want to put in the node : ";
    cin>>val;
    first=head;
    for(int i=1;i<pos-1;i++)
    {
        first=first->next;
    }
    mid->data=val;
    mid->next=first->next;
    first->next=mid;

    cout << endl;

}
void deleteatposition()
{
    cout << endl << "*** DELETE AT GIVEN POSITION ***" <<endl;
    cout << "Enter the position from where you want to delete the element : ";
    int pos;
    cin>>pos;
    struct node *first=new node();
    struct node *prev=new node();
    first=head;
    prev=NULL;
    for(int i=1;i<pos;i++)
    {
        prev=first;
        first=first->next;
    }
    int x=first->data;
    prev->next=first->next;
    cout << "Deleted element is : " << x << endl;


    cout << endl;

}
void breakloop()
{
    exit(0);
}

int main()
{
    int ch;
    do
    {


        cout << endl;
        cout << " 1. Insert at the first position \n";
        cout << " 2. Insert at the last position \n";
        cout << " 3. Traverse the linked list \n";
        cout << " 4. Delete from the first position\n";
        cout << " 5. Delete from the last position \n";
        cout << " 6. Insert at given position \n";
        cout << " 7. Delete from the given position\n";
        cout << " 8. Exit from the loop\n";

        cout << endl;
        cout << "Enter the choice you want to perform : ";
        cin>>ch;


        switch(ch)
        {
            case 1 : insertathead();
                     break;
            case 2 : insertatlast();
                     break;
            case 3 : traverse();
                     break;
            case 4 : deleteatfirst();
                     break;
            case 5 : deleteatlast();
                     break;
            case 6 : insertatposition();
                     break;
            case 7 : deleteatposition();
                     break;
            case 8 : breakloop();
                     break;
            default : cout << "Enter the choice between 1 and 7 \n ";
                     break;
        }

    }while(ch!=8);
    cout << endl;
}
