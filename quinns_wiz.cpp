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
  gift_input:
  std::cin >> gift;
  //compare gift to possible outputs
  int compares = 2;
  int count = 0;
  string check;
  while (compares!=0 && count<6) {
    check = ales[count];
    compares = gift.compare(check);
    count = count + 1;
  };
  if (compares==0) {
    std::cout << "The wizard, without hesitation, starts drinking the ale, and asks 'does this come with bread or perhaps a platter of onions and cheese?'" << '\n';
    goto end_rude_wiz;
  };
  compares = 2;
  count = 0;
  while (compares!=0 && count<6) {
    check = heels[count];
    compares = gift.compare(check);
    count = count + 1;
  };
  if (compares==0) {
    std::cout << "The wizard, without hesitation, starts eating the bread, and asks 'does this come with ale or perhaps a platter of onions and cheese?'" << '\n';
    goto end_rude_wiz;
  };
  compares = 2;
  count = 0;
  while (compares!=0 && count<12) {
    check = platter[count];
    compares = gift.compare(check);
    count = count + 1;
  };
  if (compares==0) {
    std::cout << "The wizard, without hesitation, starts eating the platter, and asks 'does this come with bread or perhaps a mug of ale?'" << '\n';
    goto end_rude_wiz;
  };
  std::cout << "The bartender didn't understand your order. Try again:\n";
  goto gift_input;
  end_rude_wiz:
  std::cout << "End test\n";
  //need more content
};
