#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

template <typename T>
class myVec{
    T *arr;
    int size, capacity;

    public:

    myVec(){
        size = 0;
        capacity = 0;
        arr = new T [capacity];   
    }
    void resize(){
        T *temp = new T[2*capacity];
        loop(i,0,size){
            temp[i] = arr[i];
        }
        if (capacity==0) capacity++;
        else capacity*=2;
        delete [] arr;
        arr = temp;
    }

    void push_back(T val){
        cout<<val<<"\n";
        if(size+1 > capacity){
            resize();
        }
        cout<<arr[size]<<"\n";
        arr[size] = val;
        cout<<arr[size]<<"\n";
        size++;
    }
    
    int size_Vec(){
        return size;
    }

    int capacity_Vec(){
        return capacity;
    }

    void print(){
        loop(i,0,size){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

    void get_Val(int index){
        if(index<0 or index>=size){
            cout<<"Index out of Bound"<<endl;
            
        }
        else{
            cout<<arr[index]<<"\n";
        }
        return;
    }
};




int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);



    myVec<string> mv;
    cout<<mv.size_Vec()<<endl;
    cout<<mv.capacity_Vec()<<endl;
    mv.print();
    mv.push_back("My");
    cout<<mv.size_Vec()<<endl;
    cout<<mv.capacity_Vec()<<endl;
    mv.print();
    mv.push_back("name");
    cout<<mv.size_Vec()<<endl;
    cout<<mv.capacity_Vec()<<endl;
    mv.print();
    mv.push_back("is");
    cout<<mv.size_Vec()<<endl;
    cout<<mv.capacity_Vec()<<endl;
    mv.push_back("Sayantika");
    cout<<mv.size_Vec()<<endl;
    cout<<mv.capacity_Vec()<<endl;
    mv.push_back("Ghosh");
    cout<<mv.size_Vec()<<endl;
    cout<<mv.capacity_Vec()<<endl;
    mv.get_Val(3);
    mv.get_Val(6);
    mv.print();
   
    

    return 0;
}