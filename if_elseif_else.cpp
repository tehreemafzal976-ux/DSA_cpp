#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age here: " << endl;
    cin >> age;
    if (age > 15 && age < 25)
    {
        cout << "THe Person is young enough." << endl;
    }
    else if (age > 25 && age < 40)
    {
        cout << "The person is perfectly eligible." << endl;
    }
    else
    {
        cout << "Person os ineligible." << endl;
    }
    return 0;
}