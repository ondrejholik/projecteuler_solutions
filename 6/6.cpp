#include <iostream>

using namespace std;


constexpr int square_of_the_sum(int end){
  int sol = (end*(end+1))/2;
  return sol*sol;
}
constexpr int sum_of_the_square(int n){
  return n*(n+1)*(2*n+1)/6; 
}


int main(){

  // first hundred natural numbers...
  int end = 100;
  cout << square_of_the_sum(end) - sum_of_the_square(end);
}
