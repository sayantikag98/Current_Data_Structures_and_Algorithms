#include <iostream>
using namespace std;

void column_display(int** arr, int n, int m){
    for(int j = 0; j<m; j++){
        for(int i = 0; i<n; i++){
            cout<<arr[i][j]<<" ";
        }
    }
}

void wave_display(int** arr, int n, int m){
    for(int j = 0; j<m; j++){
        if(j%2==0){
            for(int i = 0; i<n; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i = n-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    
}

void spiral_display(int** arr, int i, int j, int n, int m){
    if(i>=n and j >= m) return;
    for(int k = i; k<n; k++){
        cout<<arr[k][j]<<" ";
    }
    for(int l = j+1; l<m; l++){
        cout<<arr[n-1][l]<<" ";
    }
    for(int k = n-2; k>=i; k--){
         cout<<arr[k][m-1]<<" ";
    }
    for(int l = m-2; l>=j+1; l--){
         cout<<arr[i][l]<<" ";
    }
    spiral_display(arr, i+1, j+1, n-1, m-1);
}


void matrix_multiply(int** arr, int n, int m, int** arr1, int n1, int m1){
    int mul_ans [2][4];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m1; j++){
            int mul1 = 0;
            for(int k = 0; k<n1; k++){
                mul1+=(arr[i][k]*arr1[k][j]);
            }
            mul_ans[i][j] = mul1;
        }
        
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m1; j++){
            cout<<mul_ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}

// 1 2 3       arr[0][0] = arr[n-1][0]       arr[n-1][0] = arr[n-1][n-1]   
// 4 5 6       arr[1][0] = arr[n-1][1]       arr[n-1][1] = arr[n-2][n-1]
// 7 8 9       arr[2][0] = arr[n-1][2]       arr[n-1][2] = arr[n-3][n-1]

void anti_clockwise_rotation(int **arr, int k, int n){
    if(k>=n-1) return;
    for(int i = k; i<n-1; i++){
        int temp = arr[n-1][i];
        arr[n-1][i] = arr[i][k];
        int temp1 = temp;
        temp = arr[n-1-i+k][n-1];
        arr[n-1-i+k][n-1] = temp1;
        temp1 = temp;
        temp = arr[k][n-1-i+k];
        arr[k][n-1-i+k] = temp1;
        arr[i][k] = temp;
        
    }
    anti_clockwise_rotation(arr, k+1, n-1);
}





int main() {
    int **arr2  = new int*[6];
    arr2[0] = new int [6]{1,2,3,4,5,6};
    arr2[1] = new int [6]{7,8,9,10,11,12};
    arr2[2] = new int [6]{13,14,15,16,17,18};
    arr2[3] = new int [6]{19,20,21,22,23,24};
    arr2[4] = new int [6]{25,26,27,28,29,30};
    arr2[5] = new int [6]{31,32,33,34,35,36};

    cout<<"------------COLUMN-WISE DISPLAY----------------\n";
    
    column_display(arr2, 6,6);
    cout<<"\n\n";
    
    cout<<"------------WAVE DISPLAY----------------\n";
    
    wave_display(arr2, 6,6);
    cout<<"\n\n";
    
    cout<<"------------SPIRAL DISPLAY----------------\n";
    spiral_display(arr2, 0, 0, 6, 6);
    cout<<"\n\n";
    cout<<"------------ANTI-CLOCKWISE ROTATION----------------\n";
    anti_clockwise_rotation(arr2, 0, 6);
    
    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    cout<<"------------MATRIX MULTIPLICATION----------------\n";
    
    int** arr = new int* [2];
    arr[0] = new int [3]{1,2,3};
    arr[1] = new int [3]{4,5,6};
    
    
    int** arr1 = new int*[3];
    arr1[0] = new int[2]{7, 8};
    arr1[1] = new int [2]{9, 10};
    arr1[2] = new int [2]{11, 12}; 
    
    matrix_multiply(arr, 2, 3, arr1, 3, 2);
	return 0;
}
