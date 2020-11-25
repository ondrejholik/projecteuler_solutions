#include <iostream>
#include<iomanip>


using namespace std;

int main(int argc, char * argv[]){
  int a = stoi(argv[1]);
  cout << setw(3) << setfill('0') << a << '\n';
}
