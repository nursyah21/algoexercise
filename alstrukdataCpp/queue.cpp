#include <iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node(int val){
    this->data = val;
    this->next = NULL;
  }
};

struct queue{
  node *front, *back;
  int size;
  bool debug;

  queue(){
    this->front = this->back = NULL;
    size = 0;
    debug = false;
  }

  void enqueue(int val);
  void dequeue();
  void peek();
  void printAll();
};

void queue::enqueue(int val){
  node *temp = new node(val);
  if (front == NULL) front = back = temp;
  else{
    back->next = temp;
    back = back->next;
  }
  if (debug)cout << "insert: " << temp->data << "\n";
  size++;
}

void queue::dequeue(){
  if (front == NULL){
    cout << "queue is empty\n";
    return;
  }
  node *temp = front;
  front = front->next;
  if (debug) cout << "delete: " << temp->data << "\n";
  delete temp;
  size--;
  if (size == 0)temp = NULL;
}

void queue::peek(){
  if (front == NULL)cout << "queue is empty\n";
  else cout << "peek: " << front->data << "\n";
}

void queue::printAll(){
  node *temp = front;
  cout << "printall:\n";

  for(int i=0; i < size; i++) {
    cout << temp->data;
    temp = temp->next;
    if(temp) cout << "->";
  }
  cout << "\n";
}

void testQueue(){
  queue *q = new queue();
  
  srand((1 << 18)); 
  
  for(int i=0; i < 2; i++) q->enqueue( 1 + (rand() % 10));

  for(int i=0; i < 3; i++)q->dequeue();
  q->printAll();

  q->peek();
}

int main(){
  testQueue();

  return 0;
}
