#include <bits/stdc++.h> 
using namespace std; 
  
void swap( int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
} 
  
void recursivebubblesort(int arr[],int n){
    if (n==1){
        return;
    }
    
    for (int i=0; i<n-1; i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    recursivebubblesort(arr, n-1);
}
  
 void print(int a[],int n){
    for (int i=0; i<n; i++){
        cout << a[i] << "...";
    }
}
  
 
int main()  
{  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    recursivebubblesort(arr, 5);  
    cout << "Sorted array: \n";  
    print(arr, 5);  
    return 0;  
}  
  
