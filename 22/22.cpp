#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>


using namespace std;

bool strcomp(string a, string b){

  return a < b;

}

int score_of_name(string name){

  int sum = 0;
  for(auto x : name){
    sum += (int)x - 64; 
  }

  return sum;
}


int main(){
  // Read names from file
  ifstream file("names.txt");
  string str; 
  vector<string> names;
  while (std::getline(file, str)) {
    names.push_back(str);
  }
      
  // Sort names to vector

  sort(names.begin(), names.end(), strcomp);
  int index = 1;
  int sum = 0;

  for(auto name : names){
    sum += index * score_of_name(name);
    ++index;
  }

  cout << sum << '\n';

}
