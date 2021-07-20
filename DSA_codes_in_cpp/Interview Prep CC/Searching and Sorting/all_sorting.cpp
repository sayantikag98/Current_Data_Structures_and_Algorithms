#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long


void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void selection_sort(int* arr, int n){
    loop(i,0,n-1){
        int min = i;
        loop(j,i+1,n){
            if(arr[min]>arr[j]) min = j;
        }
        swap(arr,min,i);
    }
}


void insertion_sort(int* arr, int n){
    loop(i,1,n){
        int temp = arr[i];
        int ind = i;
        for(int j = i-1; j>=0 and arr[j]>temp; j--){
            arr[j+1] = arr[j];
            ind = j;
        }
        arr[ind] = temp;    
    }
}


void bubble_sort(int* arr, int n){
    loop(i,0,n-1){
        bool swapped = false;
        loop(j,0, n-i){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
                swapped = true;
            }
        }
        if(swapped==false) break;
    }
}

void merge(int* arr, int l, int mid, int r){
    int i = l, j = mid+1, k = 0;
    int* new_arr = new int [r-l+1];
    while(i<=mid and j<=r){
        if(arr[i]<=arr[j]){
            new_arr[k++] = arr[i++];
        }
        else{
            new_arr[k++] = arr[j++];
        }
    }
    while(i<=mid){
        new_arr[k++] = arr[i++];
    }
    while(j<=r){
        new_arr[k++] = arr[j++];
    }
    loop(y,0,k){
        arr[l++] = new_arr[y];
    }
}

void merge_sort(int* arr, int l, int r){
    if(l==r) return;
    int mid = l+((r-l)/2);
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    merge(arr, l, mid, r); 
}

int partition(int* arr, int l, int r){
    // Steps:

    //1. select pivot as the last index
    //2. select i as the first index
    //3. compare arr[i] and arr[pivot] if arr[i]>arr[pivot] then dont change i
    // otherwise increment i by 1
    //4. start the loop of j from the second index to the second last index
    //5. Inside the loop compare arr[j] and arr[pivot] if arr[j]<=arr[pivot] 
    // then swap arr[i] and arr[j] and increment i
    //6. swap arr[i] and arr[pivot]
    //7. return i as the pivot index

    int i = l;
    int pivot = r;
    if(arr[i]<=arr[pivot]) i++;
    loop(j, l+1, r){
        if(arr[j]<=arr[pivot]){
            swap(arr,i,j);
            i++;
        }
    }
    swap(arr,pivot,i);
    return i;
}

int partition_random(int* arr, int l, int r){
    // pick any random element from l to r in the array and swap it with the last element and then return the pivot index
    // this is randomized quick sort whose average time complexity is O(nlogn) because normal
    // quick sort in the worst case can have O(n^2) time complexity.

    int random = l + (rand()%(r-l+1));
    swap(arr,r,random);
    return partition(arr,l,r);
}


void quick_sort(int* arr, int l, int r){
    if(l>=r) return;
    int pivot = partition_random(arr, l, r);
    quick_sort(arr, l, pivot-1);
    quick_sort(arr, pivot+1, r);
}

void counting_sort(int* arr, int n){
    int max = arr[0];
    loop(i,1,n){
        if(max<arr[i]) max = arr[i];
    }
    vector<int> freq(max+1);
    loop(i, 0, n){
        freq[arr[i]]++;
    }
    loop(i,1,max+1){
        freq[i]+=freq[i-1];
    }
    vector<int> ans (n);
    rloop(i,n-1,-1){
        int ind = arr[i];
        freq[ind]--;
        ans[freq[ind]] = ind;
    }
    loop(i,0,n){
        arr[i] = ans[i];
    }
}


int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    int* arr = new int[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    // selection_sort(arr,n);
    // insertion_sort(arr,n);
    // bubble_sort(arr,n);
    // merge_sort(arr,0,n-1);
    quick_sort(arr,0,n-1);
    // counting_sort(arr,n);

    loop(i,0,n){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    

    return 0;
}