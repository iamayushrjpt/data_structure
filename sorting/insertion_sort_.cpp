#include<iostream>
using namespace std;


void print_array(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
void insertion(int a[],int n){
     int i,j,temp;
     for(i=1;i<n-1;i++){
        temp=a[i];
        j=i-1;
        while(a[j]>temp && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

}
main(){
    int n=7;
    int a[n]={7,9,10,4,2,6,13};

    print_array(a, n);
    insertion(a,n);
    print_array(a, n);
}
