#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){

  map<int, int> nums;
  set<int> abundant;

  for(int i = 1; i <= 28123; ++i){
    int index = 2;
    while(index * i <= 28123){
      int product = index * i;
      nums[product] += i;
      ++index;
    }
  }

  for(int i = 1 ; i <= 28123; ++i){
    if(nums[i] > i){
      abundant.insert(i);
    }
  }

  long long int sum = 0;
  for(int i = 1; i <= 28123; ++i){
    bool notsum = true;
    for(auto a: abundant){
      if(i > a){
        int tmp = i - a;
        const bool is_in = abundant.find(tmp) != abundant.end();
        is_in ? notsum = false : 0;
      }
    } 
    notsum ? sum += i : 0;
  }
  cout << sum << '\n';

}

