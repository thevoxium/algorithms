#include <bits/stdc++.h> 
using namespace std; 
  
void swap( int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
} 
  
void bubblesort(int a[],int n){
    int i, j;
    for (i=0; i<n-1; i++){
        for (j=0; j<n-1-i; j++){
            if (a[j]>a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
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
    bubblesort(arr, 5);  
    cout << "Sorted array: \n";  
    print(arr, 5);  
    return 0;  
}  
  
