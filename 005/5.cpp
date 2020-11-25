#include <iostream>
#include <numeric>

using namespace std;



int main(){

  int lcmi = 1;

  for(int i = 1; i <= 20; ++i){

    lcmi = lcm(lcmi,i);

  }

  cout << lcmi;



}
