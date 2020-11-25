#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;



string conc(int m, int n){
  string result;
  for(int i = 1; i <= n; ++i){
    result += to_string(m*i);
  }
  return result;
}


int main(){
  string s = "987654321";
  set<string> perms;
  int max = 0;

  sort(s.begin(), s.end(), greater<char>());
  do {
    perms.insert(s);
  } while(prev_permutation(s.begin(), s.end()));


  for(int i = 10; i < 91827; ++i){
    for(int j = 2; j < 5; ++j){
      string c = conc(i,j);
      if(perms.contains(c)){
        max = stoi(c) > max ? stoi(c) : max;
      }
    }
  }

  cout << max << '\n';

}
