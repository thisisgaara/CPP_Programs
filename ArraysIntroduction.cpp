#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int count = 0;
  int digit = 0;

  stack<int> st;
  cin >> count;
  for (int i = 0; i < count; i++)
        {
                cin >> digit;
                st.push(digit);
        }
   while(!st.empty())
   {
                cout <<  st.top() << " ";
                st.pop();
        }
   return 0;
}
