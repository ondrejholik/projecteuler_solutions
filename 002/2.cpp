#include <iostream>

using namespace std;

int main(){

  int sum = 0;

  int first = 1;
  int second = 2;

  while(first < 4000000){
    
    if(first % 2 == 0){
      sum += first;
    }
    if(second % 2 == 0){
      sum += second;
    }
    first = first + second;
    second = first + second;
  }

  cout << sum;

}
