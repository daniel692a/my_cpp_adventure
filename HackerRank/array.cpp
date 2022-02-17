#include <bits/stdc++.h>

using namespace std;

void reverse_array(vector<int> ar){
	for(int i=ar.size()-1; i>=0; i--){
		cout<<ar[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> ar(n);
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	reverse_array(ar);
	return 0;
}
