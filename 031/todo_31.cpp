#include <iostream>
#include <vector>
#include <map>
#include <tuple>

using namespace std;

vector<int> coins = {200,100,50,20,10,5,2,1};
//vector<int> coins = {5,2,1};
map<tuple<int,int>, long int> mem ; //{
                                 //{make_tuple(0,0),0},
                                 //{make_tuple(1,1),1}
                                //};

long int returnCash(int rem, int begin){
  if(rem == 0 || rem == 1){
    return rem;
  }

  int index = 0;
  long int sum = 0;
  for(auto coin = coins.cbegin()+begin; coin != coins.cend(); ++coin){
    if(rem >= *coin){
      int search = rem - *coin;
      begin = index;
      tuple<int,int> p = make_tuple(search,begin);
      if(search == 0){
        sum = sum + 1;
      }
      else if(mem.find(p) != mem.end()){
        sum = sum + mem[p];
      }
      else {
        long int cache = returnCash(search, begin);
        sum = sum +cache;
        mem[p] = cache;
      }
    }
    ++index;
  }
  return sum;
}

int main(){

  long int sum = returnCash(5,  0);
  cout << sum << '\n';

  return 0;
  /*for(auto a: mem){
    cout << a.first << "->" << a.second << '\n';
  }
  */

}
