#include<bits/stdc++.h>

using namespace std;

//MULTI LEVEL INHERITANCE

class A{
public:
void function1(){
    cout<<"Function one of A";
}
};



class B:public A{
public:
void function2(){
    cout<<"Function two of B";
}
};



class C:public B{
public:
void function3(){
    cout<<"Function three of C";
}
};

class D {
public:
void function4(){
    cout<<"Function D"<<endl;
}
};


class E:public A,public D{
    public:
    void function5(){
        cout<<"This is function of E";
    }
};



int main(){
 
 C a;
 a.function3();
 a.function2();
 a.function1();
 
 E d;
 d.function1();
 d.function4();
 d.function5();
     return 0;
}