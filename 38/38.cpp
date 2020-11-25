#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

constexpr bool divisible_by_three(int a, int b, int c){
  return ((2 * a == b)  && ( 3 * a ==  c));
}

constexpr bool divisible_by_two(int a, int b, int c, int d){
  return (((2 * a ) == b) && (a * 3) == c && (a*4) == d);
}

int divide(string num){
  // 


}



int main(){
  int max = 0;
  string s = "987654321";
  sort(s.begin(), s.end(), greater<char>());
  do {
      // convert string to three ints
      
      string tmp = s;

      string stra = tmp.substr(0,3);
      string strb = tmp.substr(3,3);
      string strc = tmp.substr(6,3);
      int a = stoi(stra);
      int b = stoi(strb);
      int c = stoi(strc);
      cout << a << " " << b << " " << c << '\n';


      if(divisible_by_three(a,b,c)){
        if(stoi(s) > max){
          max = stoi(s);
        }
      }
  } while(prev_permutation(s.begin(), s.end()));

  cout << max << '\n';
}
