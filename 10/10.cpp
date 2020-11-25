#include <iostream>
#include <set>

using namespace std;

int main(){

  // 10
  const int max = 2000000;
  set<int> nums;
  int long prime_sum = 0;

  for(int i = 2; i < max; ++i){
    nums.insert(i);
  }

  for(auto i = nums.cbegin(); i != nums.cend(); ++i){
    int n = 2;
    prime_sum += *i;
    
    while(*i*n <  max){
      nums.erase(*i*n);
      ++n;
    }
  }

  cout << prime_sum;
}
