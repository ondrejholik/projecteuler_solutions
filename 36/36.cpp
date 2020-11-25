#include <iostream>
#include <string>

using namespace std;

// is palindrom


// to bin
string toBin(int number){
  string bin = "";
  while(number != 0){
    int r = number % 2;
    bin += to_string(r);
    number -= r;
    number /= 2;
  }
  reverse(bin.begin(), bin.end());
  string tmp = "";
  bool write = false;
  for(auto a : bin){
    if(a == '1'){
      write = true;
    }
    if(write){
      tmp += a;
    }
  }
  return tmp;
}

bool isPal(string num){
  for(int i = 0; i < num.size(); ++i){
    if(num[i] != num[num.size()-i-1]){
      return false;
    }
  }
  return true;
}

int main(){
  int sum = 0;

  for(int i = 0; i < 1000000; ++i){
    if(isPal(to_string(i)) && isPal(toBin(i))){
      sum += i;
      cout << i << ' ' << toBin(i) << '\n';
    }
  }

  cout << "------------\n" << sum << '\n';
}
