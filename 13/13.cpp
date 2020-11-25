#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class BigInt{

  public:
    BigInt(string num){
      for(auto i: num){
        number.push_back((int)i);
      }
    }

  BigInt operator+(const BigInt& b){
    int index = b.;
    for(auto i = b.cend(); i != b.cbegin(); --i){


    }

  }

  private:
   vector<int> number; 

   




}

int main(){
    ifstream infile("13_data.txt");
    vector<int> sum = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    map<char,int> conv = {{'0',0}, {'1',1}, {'2',2}, {'3',3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7',7}, {'8',8},{'9',9}};
    string line;
    int index = 0;
    for(string line; getline(infile, line); ){
      index = 0;
      for(string::size_type i = 0; i < line.size(); ++i){
        sum[index] += conv[line[i]];
        ++index;
        }
    }

    cout << "sem" << endl;



    int remaining = 0;
    int tmp = 0;
    for(vector<int>::iterator i = sum.end(); i != sum.begin(); --i){
      tmp = *i%10;
      *i = (*i/10)+remaining;
      remaining = tmp;
    }

    cout << "sem" << endl;

    for(int j = 0; j < 4; ++j){
      cout << sum[j];
    }
    cout << "sem" << endl;
}

