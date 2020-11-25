#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;



int main(){

  const int max = 1000000;
  set<int> nums;
  set<string> primes;
  int long prime_sum = 0;

  for(int i = 2; i < max; ++i){
    nums.insert(i);
  }

  for(auto i = nums.cbegin(); i != nums.cend(); ++i){
    int n = 2;

    // i is prime
    primes.insert(to_string(*i));

    while(*i*n < max){
      nums.erase(*i*n);
      ++n;
    }
  }
  int sum = 0;

  for(auto prime : primes){
    bool circular = true;
    string tmp = prime;
    int index = 1;
    while(index != tmp.size()+1){
      if(!primes.contains(tmp)){
        circular = false;
        break;
      }
      rotate(tmp.begin(), tmp.begin()+1, tmp.end());
      ++index;
    }

    if(circular){
      cout << prime << '\n';
      ++sum;
    }

  }

  cout << "-----------\n";
  cout << sum << '\n';
}
