#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

bool comparator(int x, int y) {
    return x>y;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int arr[]{1,2,3,4,5};
    cout<<sizeof(arr)/sizeof(arr[0])<<"\n";
    vector <int> v  {
        1,4, 3 , 2,9
    };
    sort(v.begin(), v.end(),  comparator);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    bool res = is_sorted(v.begin(),v.end(), greater<int>());
    cout<<res<<endl;

    
     

    return 0;
}


// points got to know today:
// 1. abs(x) will give us the absolute value of x
// 2. vector <int> v {4,3,2,1};
// sort(v.begin(), v.end(), comparator);
// bool comparator (int x, int y) return (x<y);
// only passing comparator is enough dont have to pass parameters explicitly or the brackets also
// readymade comparator for sorting the array in decreasing order is greater<int>