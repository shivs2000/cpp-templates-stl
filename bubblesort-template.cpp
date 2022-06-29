// CPP code for bubble sort
// using template function
#include <iostream>
using namespace std;
  
// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T> void Bubblesort(T a[],int  n){
    for(int i=0;i<n-1;i++){
        for(int j=n-1;i<j;j--){
            if(a[j]>a[j-1])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                
            }
        }
    }
}
int main(){
    int a[5]={12,10,3,89,20};
    int n=sizeof(a)/sizeof(a[0]);
    Bubblesort<int>(a,n);
    cout <<"sorted array"<<endl;
      for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";

      }
      cout<<endl;

}