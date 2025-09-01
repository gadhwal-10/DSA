// time complexity o(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cout<<"Enter a number ";
	cin>>x;
	
	for(int i=1;i<=x ;i++){
		
		if(x%i==0){
			cout<<i<<endl;
		}
	}
	return 0;
}





// time complexity o(root n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    vector<int> ls;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) 
		{	
         ls.push_back(i); 
		        
        if (x / i != i) 
        
		    {
                
				ls.push_back(x / i); 
            }
        }
    }

    sort(ls.begin(), ls.end());

    for (auto p : ls) {
        cout << p << " ";
    }

    return 0;
}
