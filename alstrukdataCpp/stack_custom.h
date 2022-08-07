template <typename T>
struct node{
  T data;
  node *next;
  node(T data){
    this->data = data;
    this->next = NULL;
  }
};

template <typename T>
struct stack{
  node<T> *top;
  unsigned int size;

  stack(){
    top = NULL;
    size = 0;
  }

  void push(T val);
  void pop();
  T peek();
  bool isEmpty();
};

template<typename T>
void stack<T>::push(T val){
  if(top == NULL){
    top = new node<T>(val);
  }else{
    node<T> *temp = new node<T>(val);
    temp->next = top;
    top = temp;
  }
  size++;
}

template<typename T>
void stack<T>::pop(){
  if(top == NULL)return;
  node<T> *temp = top;
  top = top->next;
  delete temp;
  size--;
  if(size == 0) temp = NULL;
}

template<typename T>
T stack<T>::peek(){
  return top->data;
}

template<typename T>
bool stack<T>::isEmpty(){
  return (top == NULL);
}
