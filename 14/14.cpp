#include <iostream>
#include <map>

using namespace std;

map<long long int, long long int> numem;

unsigned long long int numlen(unsigned long long int num){
  auto search = numem.find(num);
    if (search != numem.end()) {
      numem.insert({num, search->second});
      return search->second;
    } else {
      if(num == 1){
        return 1;
      }

      else if(num % 2 == 0){
        unsigned long long int len = numlen(num/2);
        numem.insert({num, len+1});
        return len+1;
      }

      else {
        unsigned long long int len = numlen(3*num + 1);
        numem.insert({num, len+1});
        return len+1;
      }
    }

}

int main(){

  int max = 0;
  int max_num = 0;
  int len = 0;
  for(long long int i = 1; i < 1000000; ++i){
    len = numlen(i); 
    if(max < len){
      max = len;
      max_num = i;

    }
  }
  cout <<  max_num;


  
}

