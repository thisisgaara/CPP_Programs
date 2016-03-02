#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
   	string ip1, ip2;
	string ip3;
	cin >> ip1 >> ip2;
	cout << ip1.size() << " " << ip2.size() << endl;
	cout << ip1 + ip2 << endl;
	char temp;
	temp = ip1[0];
	ip1[0] = ip2[0];
	ip2[0] = temp;
	cout << ip1 << " "  << ip2;

    return 0;
}
