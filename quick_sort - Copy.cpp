#include<bits/stdc++.h>
using namespace std;

void _swap(int arr[],int i,int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

int partition(int arr[],int l,int r){
        int pivot = arr[r];
        int i = l - 1;
            for(int j=l;j<r;j++){
                    if(arr[j]<pivot){
                        i++;
                        _swap(arr,i,j);
                    }
            }
            _swap(arr,i+1,r);
            return i+1;

}

void quicksort(int arr[],int l,int r){
    //l = left & r = right index 
        if(l<r){
            int pi = partition(arr,l,r);
            quicksort(arr,l,pi-1);
            quicksort(arr,pi+1,r); 
        }
}

int main(){
    int arr[10] = {6,3,9,5,2,8,7,5,3,1};
        quicksort(arr,0,9);
            for(int i=0;i<10;i++){
                cout << arr[i] << " " ;
            }
            cout << endl;
                return 0;
}