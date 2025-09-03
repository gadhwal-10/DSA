//time complexity - O(root n)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cout<<"Enter a number ";
	cin>>x;
    int cnt=0;
	for(int i=1;i*i<=x ;i++){
		
		if(x%i==0){
			cnt++;
		if(x/i!=i){
			cnt++;
		}
}
	}
	
	if (cnt==2){
		cout<<"prime";
	}
	else{
		cout<<"not a prime";
	}
	
	return 0;
}









