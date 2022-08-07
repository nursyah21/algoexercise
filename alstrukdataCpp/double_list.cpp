/** 
 * Double linked list
*/

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;

    node (int data, node *prev, node *next){ 
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};
struct doubleList{
    node *start, *end;
    int size;
    doubleList(){
        start= NULL;
        end = NULL;
        size = 0;
    }
    void insertFirst(int data);
    void insertAfter(int index, int data); //insertAfter(1, 5); 1<->2<->3, 1<->5<->2<->3
    
    void insertLast(int data);

    void deleteFirst();
    void deleteAt(int index); //deleteAt(2); 1<->2<->3, 1<->3
    void deleteLast();

    void printAll();
    
};

void doubleList::printAll(){
    node *temp = start;
    while(temp != NULL){
        cout << temp->data;
        temp = temp->next;
        if(temp != NULL){cout <<"<->";}
    }
    cout << "\n";
}

void doubleList::insertLast(int data){    
    node *last = new node(data, NULL, NULL);
    if(start == NULL) {
        start = last;
        end = last;
    }
    else{
        last->prev = end;
        end->next = last;
        end = last;
    }
    size++;
}

void doubleList::insertFirst(int data){
    node *first = new node(data, NULL, NULL);
    if(start == NULL) {
        start = first; 
        end = first;
    }
    else{
        first->next = start;
        start->prev = first;
        start = first;
    }
    size++;
}

void doubleList::deleteFirst(){
    if(start == NULL) return;
    if(size == 1){
        start = NULL;
        end = NULL;
        return;
    }
    node *temp = start;
    start = start->next;
    start->prev = NULL;

    delete temp;
    size--;
    if(size == 0){
        start = NULL;
        end = NULL;
    }
}

void doubleList::deleteLast(){
    if(end == NULL) return;
    if(size == 1) return deleteFirst(); 
    node *temp = end;
    end = end->prev;
    end->next = NULL;

    delete temp;
    size--;
    if(size == 0) temp = NULL;
}


int main(){
    doubleList head = doubleList();
    head.insertFirst(20);
    head.insertLast(80);
    head.printAll();
    head.deleteLast();
    head.deleteLast();
    
    
    head.printAll();
    
    

    return 0;
    
    head.insertFirst(20);

    head.printAll();




    return 0;
}
