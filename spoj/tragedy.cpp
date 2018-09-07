#include <bits/stdc++.h>
// typedef long l;
// #define scanf("%s", &x) ss(x)
using namespace std;

long long int reverse(long long int a);

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
    long long int a1, a2;
    scanf("%lld %lld", &a1, &a2);
    long long int temp;
    temp = reverse(a1) + reverse(a2);
    temp = reverse(temp);
    printf("%lld\n", temp);
    }
}

long long int reverse(long long int a)
{
    // long long int n = 0;
    long long int rev = 0, rem;
    while(a != 0)
    {
        rem = a % 10;
        rev = rev*10 + rem;
        a = a/10;
    }
    return rev;
}
