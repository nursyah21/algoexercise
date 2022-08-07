/** 
 * Circular linked list
*/

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

};


//input 5, 1,2,3,4
//output 5,1,2,3,4
//create node 5, next to 1
//get last elm, next to 5
void insertFirst(int data, node *&head){
    node *temp = new node();
    temp->data = data;


    if(head == NULL){
        temp->next = temp;
        head = temp;
    }else {
        temp->next = head;

        node *last = head;
        while(last->next != head){
            last = last->next;
        }
        last->next = temp;
        head = temp;
    }

}

//input 5, 1,2,3,4
//output 5, 1,2,5,3,4
//node 5, next to 2->next
//2->next = 5
void insertAfter(node *newNode, node *precNode){
    if (precNode == NULL || newNode == NULL){
        return;
    }
    newNode->next = precNode->next;
    precNode->next = newNode;
}

//input 6, 1,2,3,4
//output 1,2,3,4,6
//node 6, next 1
//4->next 6
void insertLast(int data, node *&head){
    node *temp = new node();
    temp->data = data;

    if (head == NULL){
        temp->next = temp;
        head = temp;
        return;
    }

    temp->next = head;

    node *temp1 = head;
    while(temp1->next != head){
        temp1 = temp1->next;
    }
    temp1->next = temp;
}

// print circular list, 1,2,3,4,5
void printAll(node *head){
    if (head == NULL){return;}
    
    node *temp = head;
    
    while(temp->next != head){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " "; // print last elm
}

// create node 
node *createNode(int data){
    node *temp = new node();
    temp->data = data;
    temp->next = temp;

    return temp;
}

// 1,2,3,4
// 2,3,4
// temp head , head = head->next;
// last ->next = head->next
// delete temp
void deleteFirst(node *&head){
    if(head == NULL){
        return;
    }else if(head->next == head){
            head = NULL;
    }else{
        node *last = head;
        while(last->next != head){
            last = last->next;
        }
        last->next = head->next;
        node *first = head;
        head = head->next;

        delete first;
    }
}

// 1,2,3,4
// 1,3,4
// temp = 2, 
//1->next = 2->next
// delete temp
void deleteAfter(node *&prec){
    if(prec == NULL){
        return;
    }else if(prec->next == prec){
            prec = NULL;
            
    }else{
        node *temp = prec->next;
        prec->next = prec->next->next;
        delete temp;
    }
    
}

// 1,2,3,4
// 1,2,3
void deleteLast(node *&head){
    if(head == NULL){
        return;
    }else if(head->next == head){
            head = NULL;
    }else{
        node *precLast = head;
        while(precLast->next->next != head){
            precLast = precLast->next;
        }
        node *delElm = precLast->next;
        precLast->next = head;
        delete delElm;
    }
}


int main(){
    node *head = NULL;
    insertLast(5, head);
    insertFirst(10, head);
    deleteLast(head);
    deleteFirst(head);
    deleteFirst(head);
    deleteFirst(head);
    insertFirst(110, head);

    
    printAll(head);

    return 0;
}
