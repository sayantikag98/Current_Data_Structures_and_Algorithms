#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

int func_add (int b, int n1, int n2){
    int carry = 0;
    int final_ans = 0, mul = 1;
    while(n1>0 or n2>0 or carry!=0){
        int dig1 = n1%10;
        int dig2 = n2%10;
        int ans = dig1+dig2+carry;
        carry = ans/b;
        ans%=b;
        final_ans+=(ans*mul);
        mul*=10;
        n1/=10;
        n2/=10;
    }
    return final_ans;
}

int sub_ans1=0;

void func_mul(int b, int n1, int n2){
    int new_mul = 1;
    int temp;
    
    while(n2>0){
        int dig = n2%10;
        int carry = 0;
        int sub_ans = 0, mul = 1;
        temp = n1; // STEP MISSED
        while(temp>0 or carry!=0){  // FORGET TO INCLUDE THE CARRY CONDITION IN THE WHILE LOOP
            int dig1 = temp%10;
            int ans = (dig*dig1)+carry;
            carry = ans/b;
            ans%=b;
            sub_ans +=(ans*mul);
            mul*=10;
            temp/=10;
        }
        sub_ans*=new_mul;
        sub_ans1 = func_add(b, sub_ans, sub_ans1);
        new_mul*=10;
        n2/=10;
    }
    cout<<sub_ans1<<endl;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int b, n1, n2;
    cin>>b>>n1>>n2;
    func_mul(b, n1, n2);

    return 0;
}