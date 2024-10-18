#include <iostream>
#include <cstdio>
#include <cmath>
#include <stack>

using namespace std;
int main()
{
    stack<double> v;
    double n;

    while(cin>>n) v.push(n);

    while(!v.empty())
    {
        printf("%.4f\n", sqrt(v.top()));
        v.pop();
    }

    return 0;
}
