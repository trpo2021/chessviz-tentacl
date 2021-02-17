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
    PrintFigures(1);
    PrintFigures(0);
    for (int i=0; i<4; i++)
    {
        PrintEmptyLine();
    }
    PrintFigures(0);
    PrintFigures(1);
    return 0;
}

