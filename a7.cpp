//time complexity - O(log(min(a, b)))

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter first number ";
	cin>>a;
		cout<<"Enter second number ";
	cin>>b;

	while(a>0 && b>0){
		
		if(a>b){
			a=a%b;
		}
		if(b>a){
			b=b%a;
    }
}
	
	if (a==0){
		cout<<b <<"is gcd";
	}
	else{
		cout<<a<<"is gcd";
	}
	
	return 0;
}
