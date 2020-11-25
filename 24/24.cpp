#include <iostream>
#include <vector>


using namespace std;

constexpr int factorial(int n){

  if(n == 1 || n == 0){
    return 1;
  }

  return n * factorial(n-1);


}

int main() {

  int pernum = 1000000-1;
  vector<int> nums = {0,1,2,3,4,5,6,7,8,9};
  
  while(pernum != 0){
    int div = nums.size()-1;
    int fact = factorial(div);
    int num = (pernum / fact);
    pernum -= num * fact;
    cout << nums[num];
    nums.erase(nums.begin() + num);
  }
  for(auto a: nums){
    cout << a;
  }
  cout << '\n';



}
