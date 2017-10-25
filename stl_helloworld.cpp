#include <iostream>
#include <algorithm>
#include <string>

using std::for_each;
using std::cout;
using std::string;

int main()
{
  auto word = string("HELLO, WORLD\n");

  auto print_ = [](auto &c){cout<<c;};
  for_each (word.begin(), word.end(), print_ ); 
  
  return 0;
}
