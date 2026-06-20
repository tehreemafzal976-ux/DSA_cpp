// allocate object Dynamically print its values
#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    int noofpages;
};
int main(){
   Book *b=new Book;
   b->title="English";
   b->noofpages=190;

   cout<<b->title<<endl;
   cout<<b->noofpages;
    return 0;

}