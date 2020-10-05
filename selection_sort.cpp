#include <bits/stdc++.h> 
using namespace std; 
  
void swap( int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
} 
  
void selectionsort(int a[],int n){
    int i, j, min;
    for (i=0; i<n-1; i++){
        min = i;
        for (j=i+1; j<n; j++){
            if (a[min]>a[j]){
                min = j;
            }
        }
        swap(&a[min], &a[i]);
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
    selectionsort(arr, 5);  
    cout << "Sorted array: \n";  
    print(arr, 5);  
    return 0;  
}  
  
