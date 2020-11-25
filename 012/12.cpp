#include <iostream>

using namespace std;

bool is_dividible_by(int num, int by){

  int div = 0;
  for(int i = 2; i < num; ++i){


    if(num % i == 0){
      ++div;
    }
  }

  return by < div;
}


int main(){

  int divby = 500; 
  int long sum = 0;
  int long index = 0;
  while(true){

    sum += index;
    if(is_dividible_by(sum, divby)){

      cout << sum;
      break;
    }
    ++index;


  }


}
