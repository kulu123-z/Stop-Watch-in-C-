#include <iostream>
#include <unistd.h>
// #include <window.h> // for windows

using namespace std;


void displayTime(int h, int m, int s) {
  system("clear");
  cout << h << ":"
       << m << ":"
       << s << endl;
}

int main() {
  int hour = 0;
  int min = 0;
  int sec = 0;

  displayTime(hour, min, sec);

  while(true) {
    sleep(1);
    
    sec++;

    if(sec > 59) {
      min++;
      sec = 0;
    } 

    if(min > 59) {
      hour++;
      sec = 0;
      min = 0;
    }

    displayTime(hour, min, sec);
  }
}
