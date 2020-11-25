#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cfloat>
#include <cfenv>
#include <cmath>
#include <map>
#include <array>

using namespace std;


int main(){

  map<long double, array<long double, 3>> nums;


  string line;
  fstream infile("99_new.txt");
  int index = 1;

  while (getline(infile, line))
  {
    long double a,b;
    istringstream iss(line);
    if (!(iss >> a >> b)) { break; } // error
    long double sol = log(a)*b;
    nums.insert({sol, {a,b,(long double)index}});
    ++index;
  }


  for(auto a : nums){
    cout << a.first << ' ' << a.second[0] << ' ' << a.second[1] << ' ' <<  a.second[2] << '\n';
  }

  cout << '\n';
  cout << nums.rbegin()->first << ' ' << nums.rbegin()->second[0]<< ' ' << nums.rbegin()->second[1] << ' ' << nums.rbegin()->second[2]  << '\n';

}
