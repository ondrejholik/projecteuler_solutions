#include <iostream>
#include <map>

using namespace std;


int main(){

  map<int, int> nums;
  for(int i = 1; i < 10000; ++i){
    int index = 2;
    while(index * i < 10000){
      int product = index * i;
      nums[product] += i;
      ++index;
    }
  }

  int sum = 0;
  for(int i = 1 ; i < 10000 ; ++i){
    int tmp = nums[i];
    if(i == nums[tmp] && i != tmp){
      //cout << i << '\n';
      sum += i;
    }
  }
  cout << sum;




}
