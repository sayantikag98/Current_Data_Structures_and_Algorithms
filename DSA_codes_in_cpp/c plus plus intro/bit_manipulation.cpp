#include<bits/stdc++.h>
using namespace std;

bool check_kth_bit(int num, int k){
    if(((1<<k)&num)!=0) return true;
    else return false;
}

int set_kth_bit (int num, int k){
    num=((1<<k)|num);
    return num;
}


int clear_kth_bit (int num, int k){
    if(((1<<k)&num)!=0){
        num = (1<<k)^num;
    }
    return num;
}

int toggle_kth_bit (int num, int k){
    num = (1<<k)^num;
    return num;
}


int count_of_set_bits (int num){
    int count = 0;
    while(num>0){
        if((num & 1)==1) count++;
        num>>=1;
    }
    return count;
}

//BRIAN KERNIGHAN ALGORITHM
int count_of_set_bits1 (int num){
    int count = 0;
    while(num>0){
        num &= (num-1);
        count++;
    }
    return count;
}


// built-in function to count the number of set bits
int count_of_set_bits2 (int num){
    return __builtin_popcount(num);
}


int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int num,k;
    cin>>num>>k;

    bool ans = check_kth_bit(num,k);
    int ans1 = set_kth_bit(num,k);
    int ans2 = clear_kth_bit(num,k);
    int ans3 = toggle_kth_bit(num,k);
    int count = count_of_set_bits(num);
    int count1 = count_of_set_bits1(num);
    int count2 = count_of_set_bits2(num);


    cout<<ans<<"\n";
    cout<<ans1<<"\n";
    cout<<ans2<<"\n";
    cout<<ans3<<"\n";
    cout<<count<<"\n";
    cout<<count1<<"\n";
    cout<<count2<<"\n";

    return 0;
}