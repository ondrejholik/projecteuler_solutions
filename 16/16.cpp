#include <iostream>
#include <vector>

using namespace std;


int main() {

  vector<int> num(1000);
  num[0] = 1;
  int zbytek = 0;
  int tmp = 0;
  for(int i = 0; i < 1000; ++i){

    for(vector<int>::iterator a = num.begin(); a != num.end(); ++a){
      if(*a*2 + zbytek > 9){
        tmp = *a*2 / 10;
        *a = (2 * *a + zbytek) % 10;
        zbytek = tmp;
      }

      else{
        *a = *a * 2 + zbytek;
        zbytek = 0;
      }
    }

    
  }

  int long sum = 0;
  for(auto a: num){
    sum += a;

  }
  cout << sum;


}
