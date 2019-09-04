// wizard based text game
// starts in an inn with wiz-boy
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
  //initialize the gift given, and then set acceptable inputs
  string gift;
  char ales [6][20]={"mug", "Mug", "ale","Ale","mug of ale", "Mug of ale"};
  char heels [6][20]={"heel", "Heel", "bread","Bread","heel of bread","Heel of bread"};
  char platter [12][50]={"platter", "Platter", "cheese","Cheese","onions","Onions","raw onions","Raw onions", "platter of raw onions", "Platter of raw onions", "platter of raw onions and cheese", "Platter of raw onions and cheese"};
  //initial output and input
  std::cout << "Due to the state of his robes, you can tell this wizard has fallen on hard times.\nWould you like to buy him a mug of ale, a heel of bread, or a platter of raw onions and cheese?" << '\n';
  std::cin >> gift;
  //compare gift to possible outputs
  bool compares = false;
  int count = 0;
  while (!compares && count<=6) {
    count = count + 1;
    string check = ales[count];
    compares = gift.compare(check);
  };
  if (compares) {
    std::cout << "The wizard, without hesitation, starts drinking the ale, and asks 'how about a heel of bread to go with that ale?'" << '\n';
  };
};
