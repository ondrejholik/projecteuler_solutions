#include <iostream>
#include <set>

using namespace std;

// Slow... 

constexpr bool is_prime(int long num){
  for(int i = 2; i <= num/2; ++i){
    if(num % i == 0){
      return false;
    }
  }
  return true;

}


constexpr int find_prime(int num){
  int prime_num = 0;
  int long nums = 3;
  int prime = 2;

  while(prime_num != num - 1){
    if(is_prime(nums)){
      prime = nums;
      ++prime_num;
    }
    ++nums;
  }
  return prime;

}

int main(){


  cout << find_prime(10001);


}
