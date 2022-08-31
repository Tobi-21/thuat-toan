#include <iostream>
using namespace std;
int b[1005];
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=(a[i]*i)-(a[i-1]*(i-1));
	}
	for (int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
