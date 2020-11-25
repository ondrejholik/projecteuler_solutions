#include <iostream>
#include <set>

using namespace std;

constexpr bool is_prime(int long num){
  for(int i = 2; i < num/2; ++i){
    if(num % i == 0){
      return false;
    }
  }
  return true;

}

int main(){

  int long min_divider=1;
  int long num = 600851475143;
  int long max = num;

  // min divider
  for(int i = 2; i <= max; ++i){
    if(600851475143 % i == 0){
      if(is_prime(i)){
        min_divider = i;
      }
      max = num / i;
    }
  }

  cout << min_divider;


}
