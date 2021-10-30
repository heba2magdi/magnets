#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t ,c,m=0,r;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
		cin>>r;
		a[i]=r;
	}
	c=0;
		for(int j=0;j<t-1;j++){
		if(a[j]!=a[j+1])
		{
//			cout<<"\n*"<<j<<"*"<<j+1<<endl;
			c++;
		}

	}
	cout<<c+1;

}
