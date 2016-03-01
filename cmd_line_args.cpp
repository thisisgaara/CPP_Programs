#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, char ** argv)
{
  int myint = 0;
  std:stringstream convert (argv[1]);
  convert >> myint;
  cout << myint; //prints the integer
}
