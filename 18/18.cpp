#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <tuple>

using namespace std;


struct node {
  int data;
  struct node *left;
  struct node *right;
};

// New node creation
struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return (node);
}

void fill_tree(const vector<vector<int>> &ar, int start, node *parent){

  


}

int main(){

  vector<vector<int>> tmp;
  // Load txt
  ifstream triangle("18_triangle.txt");
  string line;
  string delimiter = " ";
  while (getline (triangle, line)) {
    size_t pos = 0;
    string token;
    vector<int> t;
    while ((pos = line.find(delimiter)) != string::npos) {
      token = line.substr(0, pos);
      t.push_back(stoi(token));
      line.erase(0, pos + delimiter.length());
    }
    tmp.push_back(t);

  }

  // Parse to tree

  


  // Bin product search
}
