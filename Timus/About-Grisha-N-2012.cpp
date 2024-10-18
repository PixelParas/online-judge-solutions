//
// Created on 18-10-2024.
//

#include <cstdio>

using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int t = 300-60;
    t /= 45;
    if(t < (12-n)){
        printf("NO");
    }else{
        printf("YES");
    }

    return 0;
}
