#include <iostream>
#include <fstream>
#include <string.h>
#include "../stack_custom.h"
using namespace std;

/* Balanced Brackets */
// {[]} balanced
// {[] not balanced
// {] not balanced
bool isBrackets(char c){
  const char brackets[] = {'{','}','[',']','(',')'};
  for(int i=0; i < 6; i ++){
    if(c == brackets[i])return true;
  }
  return false;
}
bool isBalance(char a, char b){
  if(a == '[' && b == ']' ||
     a == '(' && b == ')' ||
     a == '{' && b == '}')return true;

  return false;
}
string clearBrackets(string s){
  stack<char> st = stack<char>();
  int length = s.length();
  
  string brackets = "";

  for(int i=0; i < length; i++){
    if(isBrackets(s[i])){
      brackets += s[i];
    }
  }
  return brackets;
}
string balancedBrackets(string s){
  stack<char> st = stack<char>();

  s = clearBrackets(s);
  int length = s.length();
  if(length % 2 != 0) return "not valid\n";


  for(int i=0; i < length; i++){
    if(st.isEmpty()){
      st.push(s[i]);
      continue;
    }
    if(isBalance(st.peek(), s[i])){
      st.pop();
    }else{
      st.push(s[i]);
    }
  }

  if(st.size == 0) return "valid\n";
  return "not valid\n";
}

void testBalancedBrackets(){
  ifstream ifs("textfile/balanceBrackets.txt");
  ofstream ofs("textfile/newbalanceBrackets.txt");

  if(!ifs.is_open()){
    cout << "file not found\n";
    return;
  }


  string s;
  while(ifs.good()){
    getline(ifs, s);
    if (s == "") continue;

    cout << s << " -> ";
    s = balancedBrackets(s);
    cout << s;

    char a[s.length()];
    strcpy(a, s.c_str());
    
    ofs.write(a, sizeof a);
  }
}


int main(int argv, const char **argc){
  testBalancedBrackets();
}
