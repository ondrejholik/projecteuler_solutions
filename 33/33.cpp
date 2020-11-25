#include <iostream>
#include <numeric>
#include <cmath>
#include <set>
#include <string>


using namespace std;


int main(){
  int denominator = 1;
  int multiplier = 1;

  for(int p = 10; p < 100; ++p){
    for(int q = p+1; q < 100; ++q){
      int divider = gcd(p,q);
      if(divider > 1 && p % 10 != 0 && q % 10 != 0){

        double is_same = 0;
        double p_first = floor(p / 10);
        double p_second = p - p_first*10;

        double q_first = floor(q / 10);
        double q_second = q - q_first*10;

        //cout << p << '\n';
        //cout << p_first << ' ' << p_second << '\n';
        //cout << '\n';
        //cout << q << '\n';
        //cout << q_first << ' ' << q_second << '\n';
        //cout << "------------------------\n";


        if(p_first == q_first){
          is_same = p_second/q_second;
        }

        else if(p_first == q_second){
          is_same = p_second/q_first;
        }

        else if(p_second == q_first){
          is_same = p_first/q_second;
        }

        else if(p_second == q_second){
          is_same = p_first/q_first;
        }

        if(is_same == (double)p/q){
          
          cout << p << '/' << q << '\n';
          multiplier *= p;
          denominator *= q;
        }
      }
    }
  }
  cout << multiplier << '\n';
  cout << denominator << '\n';
  double tmp = gcd(multiplier, denominator);
  cout << multiplier/tmp << " / " << denominator / tmp << '\n';
}
