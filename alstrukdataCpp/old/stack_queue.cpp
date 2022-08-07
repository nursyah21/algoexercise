#include <iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node(int data){
    this->data = data;
    this->next = NULL;
  }
};

struct stack{
  node *top;
  int size;
  stack(){
    top = NULL;
    size = 0;
  }

  void push(int val){
    if(top == NULL){
      top = new node(val);
    }
    else{
      node *temp = new node(val);
      temp->next = top;
      top = temp;
    }
    size++;
  }

  void pop(){
    if(top == NULL) cout << "stack is empty\n";
    else{
      node *temp = top;
      top = top->next;
      
      delete temp;
      size--;
      if(size == 0)temp = NULL;
    }
  }

  void peek(){
    if(top == NULL) cout << "stack is empty\n";
    else cout << top->data << "\n";
  }
};

void testStack(){
  stack *st = new stack();
  st->push(10);
  st->push(11);
  
  
  st->pop();
  st->peek();
}

struct queue{
  node *front;
  node *back;
  int size;
  queue(){
    front = NULL;
    back = NULL;
    size = 0;
  }

  void enqueue(int val){
    node *temp = new node(val);
    if(front == NULL){
      front = back = temp;
    }else{
      back->next = temp;
      back = temp;
    }
    size++;
  }
  void dequeue(){
    if(back == NULL){
      cout << "queue is empty\n";
      return;
    }
    node *temp = front;
    front = front->next;
    cout << "deleted: " << temp->data << "\n";
    delete temp;
    size--;
  }

  void peek(){
    if(front == NULL) cout << "queue is empty\n";
    else printf("peek: %d\n", front->data) ;
  }
};

void testQueue(){
  queue *que = new queue();
  que->enqueue(10);
  que->enqueue(30);
  que->enqueue(40);
  que->peek();
  que->dequeue();
  que->peek();
  que->dequeue();
  que->peek();
}

int main(){
  // testQueue();
  testStack();

  return 0;
}
