#include<iostream>
#include<string>

using namespace std;

#include "Deque.h"
#include "Deque.cpp"
#include "DequeNode.h"
#include "DequeNode.cpp"

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    Deque<char> dq;

    // Insert all characters into deque
    for(int i = 0; i < str.length(); i++)
    {
        dq.insertRear(str[i]);
    }

    bool palindrome = true;

    // Compare front and rear characters
    while(!dq.isEmpty())
    {
        // One character left
        if(dq.getFront() == dq.getRear())
        {
            dq.deleteFront();

            if(!dq.isEmpty())
                dq.deleteRear();
        }
        else
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Palindrome String" << endl;
    else
        cout << "Not a Palindrome String" << endl;

    return 0;
}