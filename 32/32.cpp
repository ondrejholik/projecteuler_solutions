#include <iostream>
#include <set>
#include <cmath>
#include <string>
#include <numeric>

using namespace std;



int main(){

  set<int> numbers;

  for(int i = 1; i < 1000; ++i){
    for(int j = 1; j < 2000; ++j){
      if(floor(log10(i)+1 + log10(j)+1) + floor(log10(i*j)+1)  == 9){
        string si = to_string(i);
        string sj = to_string(j);
        string sp = to_string(i*j);

        set<int> a;
        set<int> b;
        set<int> c;


        for(auto const &i : si){
          if(i == '0'){
            break;
          }
          a.insert((int)i);
        }
        for(auto const &j : sj){
          if(j == '0'){
            break;
          }          
          b.insert((int)j);
        }

        for(auto const &p : sp){
          if(p == '0') {
            break;
          }
          c.insert((int)(p));
        }

        int size_sum = a.size() + b.size() + c.size();

        a.insert(b.begin(), b.end());
        a.insert(c.begin(), c.end());
        if(a.size() == 9 && size_sum == 9){
          numbers.insert(i*j);
          cout << i << " * " << j << " = " << i*j  <<  '\n';
        }
      }
    }
  }

  
  cout << accumulate(numbers.begin(), numbers.end(), 0) << '\n';
}
