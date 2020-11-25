#include <iostream>


using namespace std;


int main(int argc, char *argv[]){

  if(argc != 2){
    cout << "requires one parameter(int)\n";
    return -1;
  }
  int area = strtol(argv[1], nullptr, 0);

  int square_counter = 1;
  int add = 2;
  long int sum = 0;
  int index = 1;
  int max = 4;

  while(square_counter != area){
    if(square_counter + 2 == area){
      max = 5;
    }
    for(int i = 0; i < max; ++i){
      sum += index;
      index += add;
    }
    add += 2;
    square_counter+=2;
  }

  cout << sum  << '\n';


}
