#include<bits/stdc++.h>
using namespace std;

class my_vector{
    int siz, capacit;
    int *arr;
    public:
    my_vector(){
        siz = 0, capacit = 0;
        arr = NULL;
    }
    my_vector(int size){
        this->siz = size;
        this->capacit = size;
        arr = new int [capacit];
        for(int i = 0; i<size; i++){
            arr[i] = 0;
        }
    }
    my_vector(int size, int val){
        this->siz = size;
        this->capacit = size;
        arr = new int [capacit];
        for(int i = 0; i<size; i++){
            arr[i] = val;
        }
    }


    void push_back(int num){
        if(capacit==0){
            arr = new int [1];
            arr[0] = num;
            siz++;
            capacit++;
        }
        else{
            if(siz==capacit){
                int* arr1 = new int [2*capacit];
                for(int i = 0; i<siz; i++){
                    arr1[i] = arr[i];
                }
                arr1[siz] = num;
                arr = arr1;
                delete(arr1);
                siz++;
                capacit*=2;
            }
            else if(siz<capacit){
                arr[siz] = num;
                siz++;
            }
        }
        
    }

    void pop_back(){
        if(siz) siz--;
    }

    int back(){
        return arr[siz-1];
    }

    int size(){
        return siz;
    }

    int capacity(){
        return capacit;
    }

    int operator [] (int index){
        // try{
                if(index>=0 and index<siz){
                    return arr[index];
                }
                else{
                    return -1;
                    // throw "Index out of bound!!";
                }
        // }
        // catch (exception e){
        //     cout<<"Index out of bound"<<endl;
        // }
        
    }
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    my_vector v;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i = 0; i<10; i++){
        v.push_back(10);
        cout<<v.size()<<endl;
        cout<<v.capacity()<<endl;
    }
    cout<<v[100]<<endl;
    my_vector v1(5);
    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<endl;
    }
    my_vector v2(5,10);
    for(int i = 0; i<v2.size(); i++){
        cout<<v2[i]<<endl;
    }


    return 0;
}