#include <iostream>
#include <map>
#include <set>

using namespace std;

constexpr bool is_prime(int long num){
     for(int i = 2; i <= num/2; ++i){
      if(num % i == 0){
        return false;
      }
     }
     return true;
   }

constexpr int quadratic_form(int n, int a, int b){
  return n*(n+a)+b;
}



int main(){

  const int max_prime = 86162;
  set<int> primes;
  int max_prime_num = 0;
  int a_sol = 0;
  int b_sol = 0;

  for(int i = 2; i <= max_prime; ++i){
    if(is_prime(i)){
      primes.insert(i);
    }
  }

  int primes_num = 0;


    for(int a = -999; a < 1000; ++a){
      for(int b = -1000; b <= 1000; ++b){
        primes_num = 0;
        for(int n = 0; n <= 79; ++n){
          int sol = quadratic_form(n, a, b);
          primes.find(sol) != primes.end() ? ++primes_num : 0;
      }
        if(primes_num > max_prime_num){
          max_prime_num = primes_num;
          a_sol = a;
          b_sol = b;
        }

    }

  }

    cout << a_sol * b_sol << '\n';

}
