#include<bits/stdc++.h>

using namespace std;



class Student{

string name;
int age;
string gender;
public:

Student(){
    cout<<"Default Constructor"<<endl;
}

Student(string s,int a,string g ){
    name=s;
    age=a;
    gender=g;
}


void setvalues(string s,int a,string g){
    name=s;
    age=a;
    gender=g;
}

void printInfo(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<gender<<endl;

}

~Student(){
    cout<<"Destructor Call"<<endl;
}


};


int main(){


Student a;
Student b;
Student c;
Student d("Jaimin",20,"Male");
a.setvalues("Yug",10,"Male");
b.setvalues("Vaibhav",10,"Male");
c.setvalues("Heet",10,"Male");

a.printInfo();
b.printInfo();
c.printInfo();
d.printInfo();

return 0;
}