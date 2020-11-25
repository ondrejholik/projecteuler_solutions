#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> num(1000);
  num[0] = 1;
  int zbytek = 0;
  int tmp = 0;
  for(int i = 1; i <= 99; ++i){
    for(vector<int>::iterator a = num.begin(); a != num.end(); ++a){

      if((*a *i) + zbytek > 9){
        tmp = (*a*i+zbytek) / 10;
        *a = (i * *a + zbytek) % 10;
        zbytek = tmp;
      }

      else{
        *a = *a * i + zbytek;
        zbytek = 0;
      }
    }
  }

  int long sum = 0;
  for(auto a: num){
    sum += a;
    cout << a;
  }
  cout << '\n';
  cout << sum;


}

