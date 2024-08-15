

#include<iostream>
#include<string>
using namespace std;

class Binary {
public:
float f;

float operator+(Binary x){
    float rsult=0.0;
    rsult=f+x.f;
    return rsult;
}

float operator-(Binary y){
    float rsult= 0.0;
    rsult=f-y.f;
    return rsult;

}

float operator*(Binary z){
    float rsult=0.0;
    rsult=f*z.f;
    return rsult;
}

float operator/(Binary s){
    float rsult=0.0;
    rsult=f/s.f;
    return rsult;
}

};


int main(){

   Binary obj1,obj2;
   obj1.f=8.0;
   obj2.f=2.0;

    float sum = obj1+obj2;
    float sub = obj1-obj2;
    float mul = obj1*obj2;
    float div = obj1/obj2;
   
   cout<<sum<<endl;
   cout<<sub<<endl;
   cout<<mul<<endl;
   cout<<div<<endl;

    return 0;
}