#include <iostream>
#include <fstream>
#include <string.h>
#include "../stack_custom.h"
using namespace std;

int precedence(char c){
  if(c == '^') return 4;
  if(c == '*' || c == '/') return 3;
  if(c == '+' || c == '-') return 2;
  if(c == '(' || c == ')') return 1;
  else return 0;
}

// https://www.free-online-calculator-use.com/infix-to-postfix-converter.html
string infixToPostfix(string s){
  string res = "";
  stack<char> st = stack<char>();

  for(size_t i=0; i < s.length(); i++){
    if(precedence(s[i]) == 0){
      res = res + s[i] + " ";
      continue;
    }
    if(!st.isEmpty() && (precedence(st.peek()) > precedence(s[i]) )){
        res = res + st.peek() + " ";
        st.pop();        
    }
    st.push(s[i]);
  }
  while(!st.isEmpty()){
    char s = st.peek();
    st.pop();
    if(precedence(s) == 1)continue;

    res = res + s + " ";
  }

  return res;
}

void testInfixToPostfix(){
  ifstream ifs("textfile/infixtoPostfix.txt");
  ofstream ofs("textfile/newinfixtoPostfix.txt");

  if(!ifs.is_open()) {
    cout << "text file not found\n";
    return ;
  }

  string s = "";
  while(ifs.good()){
    getline(ifs, s);
    if(s == "")continue;

    cout << s << " -> ";
    s = infixToPostfix(s);
    s += "\n";


    cout << s;
    char a[s.length()];
    strcpy(a, s.c_str());

    ofs.write(a, sizeof a);
  }
}

int main(){
  testInfixToPostfix();
}
