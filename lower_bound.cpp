#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> V;
    vector<int>::iterator low;
    int N, temp, Y, Q;
    cin >> N;
    N+=1;
    while(--N)
        {
        cin >> temp;
        V.push_back(temp);
    }
    cin >> Q;
    Q+=1;
    while(--Q)
        {
        cin >> Y;
        if(binary_search(V.begin(), V.end(), Y))
            {
            low = lower_bound(V.begin(), V.end(), Y);
            cout << "Yes" << ' ' << (low - V.begin()) +1<< '\n';
        }
        else
            {
            low = lower_bound(V.begin(), V.end(), Y);
            cout << "No" << ' ' << (low - V.begin())+1 << '\n';
        }
    }
    return 0;
}
