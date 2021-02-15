#include <iostream>
#include <vector>
#include <string>

using namespace std;

void PrintEmptyLine()
{
    for (int i=0; i<8; i++)
    {
        cout << "*  ";
    }
    cout << endl;
}

int main()
{
    vector <string> figures = {"P", "Kt", "B", "R", "Q", "K"};
    return 0;
}