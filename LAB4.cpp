#include<iostream>
using namespace std;


struct node{
    int data;
    node* next;
    node* prev;
};


class doubly_linked_list{
    
private:
    node *head;
    int counter;
    
public:
    doubly_linked_list();
    void insert_first(int value);
    void insert_last(int value);
    void inser_postion(int value, int postion);
    void delete_last();
    void delete_postion(int postition);
    void print();
};
doubly_linked_list::doubly_linked_list()
{
    head = NULL;
    counter = 0;
}
void doubly_linked_list::insert_first(int value)
{
    node *ptr = new node;
    //insert number
    ptr->data = value;
    //Because its the first element in the list
    ptr->prev = NULL;
    if (head == NULL) {
        head = ptr;
        ptr->next = NULL;
    }
    else
    {
        ptr -> next = head;
        head ->prev = ptr;
        head = ptr;
    }
    counter++;
}

void doubly_linked_list::insert_last(int value)
{
    node* ptr = new node;
    
    ptr->data = value;
    ptr->next = NULL;
    if (head == NULL) {
        head = ptr;
        ptr->prev = NULL;
    }
    
    else
    {
        node *last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = ptr;
        ptr->prev = last;
    }
    counter++;
}


void doubly_linked_list::inser_postion(int value, int postion)
{
    
    if (postion <1 || postion > counter){
        cout <<"position out of range ";
        return;
    }
    node* ptr= new node;
    ptr->data = value;
    node *current_node = head;
    for (int i = 1; i < postion; i++) {
        current_node = current_node->next;
    }
    
    ptr->prev = current_node->prev;
    ptr->next = current_node;
    
    current_node->prev->next = ptr;
    current_node->prev = ptr;
    counter++;
    
}


void doubly_linked_list::delete_last()
{
    if (head == NULL) {
        cout<<"its empty ..";
        return;
    }
    node* last_node = head;
    if (counter ==1) {
        delete last_node;
        head = NULL;
    }
    else
    {
        
    
    while (last_node->next!= NULL) {
        last_node = last_node->next;
    }
    last_node->prev->next = NULL;
    delete last_node;
    }
    counter--;
}


void doubly_linked_list::delete_postion(int postition)
{
    if (head == NULL) {
        cout << "Empty" <<endl;
        return;
    }
    if(postition<1 || postition > counter)
    {
        cout << "Position out of range ";
        return;
    }
    node * current  = head;
    for (int i = 1 ; i < postition; i++) {
        current = current->next;
    }
    current->prev->next = current->next;
    current ->next->prev=current->prev;
    delete current;
    counter--;
}


void doubly_linked_list::print(){
    if (head == NULL) {
        cout << "Empty" <<endl;
        return;
    }
    node* current = head;
    while (current != NULL) {
        cout <<  current->data<<"\t";
        current = current->next;
        
    }
    cout <<endl;
}

int main()
{
    
    doubly_linked_list obj;
    obj.insert_first(300);
    obj.insert_first(200);
    obj.insert_first(100);
    obj.print();
    obj.insert_last(400);
    obj.insert_last(500);
    obj.print();
    obj.inser_postion(1, 2);
    obj.print();
    obj.delete_postion(2);
    obj.print();
    obj.delete_last();
    obj.print();
    
}
