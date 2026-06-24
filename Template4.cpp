/*Matrix
Create a Matrix class.
Requirements:
    rows
    cols
    dynamic 2D array
Functions:
1. input()
2. display()
3. Destructor
concepts:
1. int**
2. new
3. delete*/
#include <iostream>
using namespace std;
class Matrix
{
public:
    int rows;
    int cols;
    int **arr;
    // constructor
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;
        arr = new int *[r];
        for (int i = 0; i < r; i++)
        {
            arr[i] = new int[c];
        }
    }
    void input()
    {
        cout << "input elements in array:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        cout << "elements in array:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << "  ";
            }
            cout << endl;
        }
    }
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
};
int main()
{
    Matrix M(3, 4);
    M.input();
    M.display();
    return 0;
}