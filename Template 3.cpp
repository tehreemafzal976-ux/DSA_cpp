/*Student
Create a Student class.
Requirements:
Name
Dynamic array of marks
Constructor asks for number of subjects
Input function
Average function
Destructor
Concepts
. Dynamic allocation
.  Destructor*/
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
        string name;
        int *Marks;
        int subjects;
    Student(string n){
        name=n;
        cout<<"Input no of subjects here:";
        cin>>subjects;
        Marks=new int[subjects];
    }
    //input function
    void input(){
            for(int i=0;i<subjects;i++){
                cin>>Marks[i];
            }
    }
    //average function
    void average(){
        int sum=0;
        for (int i=0;i<subjects;i++){
            sum+=Marks[i];
        }
        double aver=sum/subjects;
        cout<<aver<<endl;
    }
    ~Student(){
        delete[] Marks;
    }
};
int main(){
    Student s1("Tahira");
    s1.input();
    s1.average();
    return 0;
}
//debbugged successfully///////