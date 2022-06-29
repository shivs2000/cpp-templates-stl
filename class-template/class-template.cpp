#include<iostream>
using namespace std;
template <class T>
class Weight{
    private:
    
    T kg;

    public:
    void setData(T x){
        kg=x;
    }
    T getData(){
        return kg;
    }
};

int main(){
    Weight<int> obj1;
    obj1.setData(34);
    cout<<obj1.getData()<<endl;


   //settign different object with diferent datatype
   Weight<double> obj2;
   obj2.setData(23.3455);
   cout<<obj2.getData();

cout<<"changes checking";

}