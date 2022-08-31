#include <bits/stdc++.h>
using namespace std;
int lastDigitDiffZero(int n)
{
    long long res = 1;
    for (int i=2;i<=n;i++)
    {
        res *=i;
        while ( res%10 == 0 ) res /= 10;
        res = res % 100;
    }
    while ( res%10 == 0 ) res /= 10;
    return res% 10;
}
int main(){
	cout<<lastDigitDiffZero(5);	
	return 0;
}
