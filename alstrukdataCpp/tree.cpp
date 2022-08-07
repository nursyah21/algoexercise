#include <iostream>
using namespace std;

/* structure data */
struct node{
  int data;
  node *left;
  node *right;

  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

struct tree{
  node *root;

  void display();
  void display(node *root);

  void insert(int data);

  void search(int data);
  void search(int data, node *root);
  void remove(int data);
};


/* implementation method */
void tree::display(){
  display(root);
  cout << "\n";
}

void tree::display(node *root){
  if(root == NULL)return;
  cout << root->data << " ";

  if(root->left != NULL) display(root->left);
  if(root->right != NULL) display(root->right);
}

// this is for debugging
// log(n)
void tree::insert(int data){
  if(root == NULL){
    root = new node(data);
    cout << "insert root " << root->data << "\n";
    return;
  }
  node *temp = root;

  int height = 0;
  while(true){
    height++;
    if(data > temp->data){
      if (temp->right != NULL) {
        temp = temp->right;
        continue;
      }
      temp->right = new node(data);
      cout << height << " insert right " << temp->right->data << "\n";
    }
    else if(data < temp->data){
      if (temp->left != NULL) {
        temp = temp->left;
        continue;
      }
      temp->left = new node(data);
      cout <<  height << " insert left " << temp->left->data << "\n";
    }

    break;
  }


}

void tree::search(int data){
  search(data, root);
}

void tree::search(int data, node *root){
  if(root == NULL) {
    cout << "not found\n";
    return;
  }
  if(root->data == data){
    cout << "found\n";
    return;
  }

  if(data > root->data)search(data, root->right);
  if(data < root->data)search(data, root->left);
}

void tree::remove(int data){
  // find last elm, and elm want to delete
  node *temp = root;
  while(true){
    if(temp == NULL){
      cout << "element not found!";
      return;
    }
    if(data == temp->data){
      break;
    }
    
    if(data > temp->data){
      temp = temp->right;
    }else if(data < temp->data){
      temp = temp->left;
    }
  }

  cout << "found last elm\n";

  // copy data last elm to data elm want to delete
  node *delelm = temp;
  node *lastelm = root;
  node *beforelastelm = root;

  // specialcase
  if(delelm->data == data){
    root = NULL;
  }

  // find last elm, and beforelastelm;
  while(true){
    if(lastelm == NULL)break;
    if(lastelm->right != NULL){
      lastelm = lastelm->right;
      continue;
    }else if(lastelm->left != NULL){
      lastelm = lastelm->left;
      continue;
    }
    break;
  }
  while(true){
    if(beforelastelm == lastelm)break;
    if(beforelastelm->right != NULL && beforelastelm->right != lastelm){
      beforelastelm = beforelastelm->right;
      continue;
    }else if(beforelastelm->left != NULL && beforelastelm->left != lastelm){
      beforelastelm = beforelastelm->left;
      continue;
    }
    break;
  }

  // delete last elm
  
  delelm->data = lastelm->data;
  
  delete lastelm;
  
  // delete next beforelastelm
  if(beforelastelm->left == lastelm) beforelastelm->left = NULL;
  if(beforelastelm->right == lastelm) beforelastelm->right = NULL;

  if(lastelm != NULL) lastelm = NULL;

}


int main(){
  tree tr = tree();

  tr.insert(10);
  tr.remove(10);
  tr.display();
  return 0;

  tr.insert(12);
  tr.insert(8);
  tr.insert(16);
  tr.insert(20);
  tr.insert(8);
  tr.display();

  tr.search(8);

  tr.display();
  tr.remove(10);

  tr.display();

  return 0;
}