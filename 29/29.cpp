#include <iostream>
#include <set>
#include <array>
#include <cmath>

using namespace std;

constexpr array<int,2> expnum(int a, int b){
  
  array<int,2> sol = {a,b};
  for(int i = 6; i >= 2; --i){
    if(pow(a, (1.0/i)) == round(pow(a, (1.0/i)))){
      sol[0] =  pow(a, 1.0/i);
      sol[1] *= i;
      break;
    }
  }
  return sol;

}

int main(){

  set<array<int,2>> nums;
  for(int a = 2; a <= 100; ++a){
    for(int b = 2; b <= 100; ++b){
      nums.insert(expnum(a,b));
    }
  }

  cout << nums.size() << '\n';


}
