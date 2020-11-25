#include <iostream>
#include <array>
#include <string>

using namespace std;


string num_sum(int num, const array<string, 10> &upten, const array<string, 10> &teen, const array<string,10> &dec){

  string text = "";

  if(num >= 1000){
    text += upten[num/1000] + "thousand";
    num = num % 1000;
  }

  if(num >= 100){
    text += upten[num/100]+"hundred";
    num = num % 100;
    if(num > 0){
      text += "and";
    }
  }

  if(num >= 10){
    if(num < 20){
      text += teen[num-10];
      num = 0;
    }
    else {
      text += dec[num/10];
      num = num % 10;
    }
  }

  if(num < 10 && num > 0){
    text += upten[num];
  }

  //return (int)text.size();
  return text;
}


int main(int argc, char **argv){
  
  array<string,10> upten = {{"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}};
  array<string,10> teen = {{"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}};
  array<string,10> dec = {{"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}};

  int sum = 0;
  for(int i = 1; i <= 1000; ++i){
    //sum += num_sum(i, upten, teen, dec);
    cout << i << " " <<  num_sum(i, upten, teen, dec) << '\n';
    sum += num_sum(i, upten, teen, dec).size();
  }

  cout << sum;




}
