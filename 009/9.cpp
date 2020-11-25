#include <iostream>
#include <cmath>

using namespace std;


int main(){

  const int end = 1000/2;
  for(int i = 1; i < end; ++i){

    for(int j = 1; j < end; ++j){

      for(int k = 1; k < end; ++k){

        if(i+j+k == 1000 && k*k == i*i+j*j){
          cout << i*j*k;
          return 0;

        }

      }

    }

  }


}
