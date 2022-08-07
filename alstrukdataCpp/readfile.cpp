#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void testWritefile(){
  ifstream ifs("textfile/soal.txt");
  ofstream ofs("textfile/newtext.txt");

  if(!ifs.is_open()) {
    cout << "text file not found\n";
    return ;
  }

  string s = "";
  while(ifs.good()){
    getline(ifs, s);

    s += "\n";

    char a[s.length()];
    strcpy(a, s.c_str());

    ofs.write(a, sizeof a);
  }
}

void testReadfile(){
  ifstream ifs("textfile/soal.txt");

  if(!ifs.is_open()) cout << "text file not found\n";

  string s = "";
  while(ifs.good()){
    getline(ifs, s);
    cout << s << "\n";
  }
}

int main(){
  testWritefile();
}
