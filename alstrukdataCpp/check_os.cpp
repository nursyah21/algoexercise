#include <iostream>

#define windows 0

#ifdef _WIN32
  #include <conio.h>
  #define windows true
#endif

using namespace std;

int main(){
  

  #if defined(_WIN32) || defined(WIN32)
  system("cls");
  getch();
  #elif defined(__unix__)
  system("clear");
  #endif

}
