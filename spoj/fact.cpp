#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint n;
    scanf("%lld", &n);
    for(int i = 0; i < n; i++)
    {
        llint a;
        scanf("%lld", &a);
        llint x, sum = 0;
        x = a/5;
        while (x!=0)
        {
            // printf("# %lld\n", x );
            sum = sum + x;
            x = x/5;
        }
        printf("%lld\n", sum);
    }
}
