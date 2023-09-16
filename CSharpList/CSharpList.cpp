#include <iostream>
#include <vector>
#include "CSharp.h"
using namespace std;

int main()
{
    cout << "Hello World!\n";

    ListSharp<int> List = {};
    List.Add(100);
    List.Add(200);
    List.Add(300);

    cout << List.GetData(1) << endl;

    cout << "+++++++++++" << endl;

    List.Remove(100);
    

    for (int i = 0; i < List.Count(); i++)
    {
        cout << List.GetData(i) << endl;
    }

    DictionarySharp<int,string> DC = {};
    DC.Add(0, "Man");
    DC.Add(1, "Man");
    DC.Add(2, "Mana");

    cout << DC.GetKeys(2) << endl;
    cout << DC.GetValues(2) << endl;

    cout << ToUpperAll("as");
}