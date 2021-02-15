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

void PrintFigures(int y)
{
    if (y == 0)
    {
        cout << "P  P  P  P  P  P  P  P";
    }
    else
    {
        cout << "R  Kt B  Q  K  B  Kt R";
    }
    cout << endl;
}

int main()
{
    vector <string> figures = {"P", "Kt", "B", "R", "Q", "K"};
    return 0;
}

