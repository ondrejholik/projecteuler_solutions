#include <iostream>
#include <cmath>

using namespace std;

constexpr bool is_palindromic(int a, int b){

  int original = a*b;
  int n = original;
  int reversed = 0;
  int remainder = 0;

  while(n != 0){

    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n /= 10;

  }
  return original == reversed;
}


int main(){

  int max = 0;

  for(int i = 100; i < 1000; ++i){

    for(int j = 100; j < 1000; ++j){

      if(is_palindromic(i,j) && i*j > max){
        max = i*j;
      }
    }


  }

  cout << max;



}
