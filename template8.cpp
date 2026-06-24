/*Student Result
Dynamic marks
Operator
==
Two students equal if
Average same.*/
#include<iostream>
using namespace std;
class Student{
    public:
    int *Marks;
    float  Average;
    //constructor
    Student(){
        Marks=new int[5];
    }
    void input(){
        cout<<"input here for marks:"<<endl;
        for (int i=0;i<5;i++){
            cin>>Marks[i];
        }
    }
    void calculate(){
        float sum =0;
        for (int i=0;i<5;i++)
        {
            sum+=Marks[i];
        }
        Average=sum/5;
    }
    //Overloading 
    friend bool operator == (Student &s1, Student &s2)
    {
        if(s1.Average==s2.Average)
        return true;
        else 
        return false;
    }
    //make destructor
    ~Student(){
        delete[] Marks;
    }
};
int main(){
    Student s1;
    s1.input();
    s1.calculate();
    Student s2;
    s2.input();
    s2.calculate();
    cout<<(s1==s2)<<endl;    
    return 0;
}
