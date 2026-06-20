/*Create a Student class that dynamically 
allocates an array of marks inside the class. 
Add a function to calculate the average.*/
#include<iostream>
using namespace std;
class Student {
    public:
        int *Marks;
    Student (int n){
        Marks=new int[n];
    }
    //to calculate average sum of all marks id needed so write a sum function too.
    int sum(int s)
    {
        int sum =0;
        for (int i=0;i<s;i++){
            sum+=Marks[i];
        }
        return sum;
    }
    float average(int s,int n){
        float aver;
       aver=s/n;
       return aver;
    }
};
int main(){
    cout<<"Enter Size of Array:"<<endl;
    int n;
    cin>>n;
    Student S1(5);
    //lets input values in array and calculate average now.
    for (int i=0;i<n;i++){
        cin>>S1.Marks[i];
    }
    int s=S1.sum(n);
    cout<<"Average of Marks is: "<<endl;
    cout<<S1.average(s,n);
    return 0;
}