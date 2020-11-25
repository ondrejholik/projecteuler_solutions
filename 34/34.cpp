#include <iostream>
#include <map>
#include <vector>
#include <cmath>

using namespace std;

map<int, int> memfactorial = {{0,1}, {1,1}, {2,2}, {3,6}, {4,24}, {5,120}, {6,720}, {7,5040}, {8,40320} ,{9,362880}};

int factorial(int number){
  if(number == 0 || number == 1){
    return 1;
  }
  return number*factorial(number-1);

}

int divNSum(int number){
  int sum = 0;
  int numlen = log10(number);
  while (number > 0){
    int digit = number%10;
    number /= 10;
    sum += factorial(digit);
  }
  return sum;
}

int main(){
  int sum = 0;
  for(int i = 10; i < pow(10, 7); ++i){
    i == divNSum(i) ? sum += i : 0;
  }

  cout << sum << '\n';
}
