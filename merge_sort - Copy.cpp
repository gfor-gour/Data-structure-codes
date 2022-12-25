#include<bits/stdc++.h>
using namespace std;

void _merge(vector<int>&arr,int left,int mid,int right){
    
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1],R[n2];
        for(int i=0;i<n1;i++){
            L[i] = arr[left+i];
        }
        for(int i=0;i<n2;i++){
            R[i] = arr[mid+1+i];
        }
        int i=0,j=0,k=left;
            while(i<n1 && j<n2){
                if(L[i]<R[j]){
                    arr[k] = L[i];
                    i++;
                }
                else{
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }
            while(i<n1){
                arr[k++] = L[i];
                i++;
            }
            while(j<n2){
                arr[k++] = R[j];
                j++;
            }
}

void mergesort(vector<int>&arr,int left,int right){

    if(left>=right)
        return;
    int mid = (left+right)/2;
        
    mergesort(arr,left,mid);     
    mergesort(arr,mid+1,right);
    
    _merge(arr,left,mid,right);

}

int main(){
        vector<int> a;
            a = {6,3,9,4,7,5,8,2};
            mergesort(a,0,a.size()-1);

            for(auto &value : a){
                cout << value << " " ;
            }

}