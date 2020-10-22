#include <iostream>
#include <algorithm>
#include <string>

using std::for_each;
using std::cout;
using std::string;

int main()
{
  const auto word = string("HELLO, WORLD\n");

  const auto print_ = [](auto &c){cout<<c;};
  for_each (word.begin(), word.end(), print_ ); 
 
  for(auto& c:word) print_(c);
 
  return 0;
}
