#include <iostream>
#include <vector>

using namespace std;

class BigInt{
  public:
    BigInt(string num){
      for(auto const &s : num){
        number.push_back(stoi(s));
      }
    }

    BigInt(vector<int> num){
      int index = 0;
      for(auto v : num){
        number.push_back(v);
      }
    }

    vector<int> get(){
      return number;
    }
    void operator += (BigInt num);

    int length();

    private:
    	vector<int> number;


};


void BigInt::operator += (BigInt num){
      int zbytek = 0;
      int tmp = 0;
      int index = 0;

      for(vector<int>::iterator a = num.get().begin(); a != num.get().end(); ++a){
       if((*a + number[index]) + zbytek > 9){
          tmp = (*a + number[index] + zbytek) / 10;
          *a = (number[index] + *a + zbytek) % 10;
          zbytek = tmp;
        } 

        else {
          *a = *a + number[index] + zbytek;
          zbytek = 0;
        }
        ++index;
      }
}

int main(){
}
