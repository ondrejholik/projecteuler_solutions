#include <iostream>

using namespace std;

int main(int argc, char** argv){

  int size = atoi(argv[1])+1;
  long long int arr[size][size];
  for(int i = 0; i  < size; ++i){

    for(int j = 0; j < size; ++j){

      if(i == 0 || j == 0){
        arr[i][j] = 1;
      }

      else {
        arr[i][j] = arr[i-1][j] + arr[i][j-1];
      }
    }

  }

  cout << arr[size-1][size-1];

}
