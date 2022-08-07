#include <iostream>
#include <fstream>
#include <string.h>
#include "../stack_custom.h"
using namespace std;


/* Reverse String */
//nursyah -> haysrun
string reverseString(string s){
  stack<char> st = stack<char>();
  int length = s.length();

  for(int i=0; i < length; i++){
    st.push(s[i]);
  }

  string res = "";
  for(int i=0; i < length; i++){
    char a = st.peek();
    res += a;
    st.pop();
  }
  return res;
}

void testReverseString(){
  ifstream ifs("textfile/reverse.txt");
  ofstream ofs("textfile/newreverse.txt");

  if(!ifs.is_open()) {
    cout << "file not found\n";
    return;
  }

  string s;
  while(ifs.good() ){
    getline(ifs, s);
    if(s == "") continue;
    
    cout << s << " -> ";
    s = reverseString(s);
    s += "\n";
    cout << s;

    char a[s.length()];
    strcpy(a, s.c_str());
    
    ofs.write(a, sizeof a);
  }

}

int main(int argv, const char **args){
  testReverseString();

  return 0;
}
