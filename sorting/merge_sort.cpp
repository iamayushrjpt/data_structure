#include<iostream>
using namespace std;

void merge(int a[],int low ,int mid, int high){
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int b[100];
    while(i<=mid && j<high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;k++;
        }
        else{
            b[k]=a[j];
            j++;k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        k++;i++;
    }
    while(j<=high){
        b[k]=a[j];
        k++;j++;
    }
    for(int i=low;i<=high;i++){
        a[i]=b[i];
    }
}

void merge_sort(int a[], int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


main(){
    int a[]={2,5,3,9,1,4};
    print(a,6);
    merge_sort(a,0,6);
    print(a,6);

}
