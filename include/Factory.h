#ifndef FACTORY_H
#define FACTORY_H
#include <iostream>
#include<string>
using namespace std;
template <typename T>
struct Node
{
    T data;
    Node* next;
    Node(T value):data(value),next(NULL) {}
};
template <typename T>
class Factory
{
private:
    Node<T>* head;
    Node<T>* tail;
    size_t size;

public:
    Factory();
    ~Factory();
    //Check list is empty or not
    bool isEmpty();
    //Add Product Production steps
    void Push(T step);
    //Delete one of the production steps=>Delete by the position step
    void Delete(int position);
    //Show all product steps
    void Display();
};
//templates must be defined inside header files.
//Constructor
template<typename T>
Factory<T>::Factory():head(NULL),tail(NULL),size(0) {}
//Destructor
template<typename T>
Factory<T>::~Factory()
{
    while(head!=NULL)
    {
        Node<T>* temp=head;
        head=head->next;
        delete temp;
    }
}
//Check linked list is empty or not
template<typename T>
bool Factory<T>::isEmpty()
{
    return (head==NULL);
}
//Function to push step in the end
template <typename T>
void Factory<T>::Push(T step)
{
    Node<T>* newNode=new Node<T>(step);

    if(isEmpty())
    {
        newNode->next=NULL;
        head=tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }
    size++;
}
//Delete from anywhere by step position
template<typename T>
void Factory<T>::Delete(int position)
{
    if(isEmpty())
    {
        cout<<"Error,Exactly is Empty!\n";
    }
    else if(position==1)
    {
        Node<T>* temp=head;
        head=head->next;
        delete temp;
        size--;
        cout<<"\n\tDeleted successfully \x02\n";
    }
    else if(position>size || position<=0)
    {
        cout<<"Error,Out of Range!"<<endl;
    }
    else
    {
        Node<T>* previous=head;
        Node<T>* current=head;
        while(position!=1)
        {
            previous=current;
            current=current->next;
            position--;
        }
        previous->next=current->next;
        delete current;
        size--;
        cout<<"\n\tDeleted successfully \x02\n";
    }
}
//Display all Steps for Specific Product
template <typename T>
void Factory<T>::Display()
{
    int order=1;
    Node<T>* temp=head;
    while(temp!=NULL)
    {
        cout<<order<<". "<<temp->data<<endl;
        temp=temp->next;
        order++;
    }
}
#endif // FACTORY_H
