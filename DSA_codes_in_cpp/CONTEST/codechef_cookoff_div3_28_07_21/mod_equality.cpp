#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		int min_no = *min_element(0, 0+n);
		int cnt = count(0, 0+n, min_no);
		bool flag = 0;
		for(int i = 0; i<n; i++){
			if((arr[i] != min_no) and (arr[i]<=(2*min_no))){
				flag = 1;
				break;
			}
		}
		if(flag) cout<<n<<endl;
		else cout<<n-cnt<<endl;
	}

}