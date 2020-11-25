#include <iostream>
#include <cmath>

using namespace std;


int main(){

  int sum = 0;
  int iNumsSize = 5;
  long int final_sum = 0;
  for(int iNums = 2; iNums < 999999+1; ++iNums){
    sum = 0;
    iNumsSize = log10(iNums)+1;
    for (int i=iNumsSize-1; i>=0; i--) {
      int y = pow(10, i);
      int z = iNums/y;
      int x2 = iNums / (y * 10);
      sum += pow((z-x2*10),5);
    }
    sum == iNums ? final_sum += sum : 0;
    if(sum == iNums){
      cout << iNums << '\n';
    }

  }

  cout << "-------" << '\n';
  cout << final_sum << '\n';


}
