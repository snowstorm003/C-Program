#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int n; string str="";
	cin>>n;
	while(n<100 || n>999)
		cin>>n;
	str=to_string(n);
	reverse(str.begin(), str.end());
	n=stoi(str);
	cout<<n<<"\n";
	return 0;
}