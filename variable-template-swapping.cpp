#include<iostream>
using namespace std;
template <typename T>
void Swap(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=4,b=6;
    cout<<a<<"--"<<b<<endl;
    Swap(a,b);
    cout<<a<<"--"<<b<<endl;
    char c='e',n='k';
    cout<<c<<"--"<<n<<endl;
    Swap(c,n);
    cout<<c<<"--"<<n<<endl;
    return 0;
}
