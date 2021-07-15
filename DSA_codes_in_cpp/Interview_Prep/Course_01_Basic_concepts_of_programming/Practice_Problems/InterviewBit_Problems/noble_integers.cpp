#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&A){
	if(A.size()==1 and A[0] == 0) return 0;
    else if(A.size()==1 and A[0] != 0) return -1;

    sort (A.begin(), A.end());
    // for(int &i: A){
    // 	cout<<i<<" ";
    // }
    // cout<<endl;

    int n = A.size(); 
    int left, right;
    for(int i = 0; i<n; i++){
        left = i+1;
        right = n-1;
        int sub = (right -left) + 1;
        if(sub == abs(A[i]) and A[i]!=A[left]){
        	// cout<<A[i]<<" "<<sub<<" "<<left<<" "<<right<<endl;
            // cout<<i<<endl;
            return 1;
        }
        
    }
    return -1;

}


int main(){
	vector<int> v;
	int num;
	while(cin>>num){
		v.push_back(num);
	}
	cout<<func(v)<<endl;
}