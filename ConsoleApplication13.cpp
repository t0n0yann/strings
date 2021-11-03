

#include <iostream>
using namespace std;
int main()
{
    string y;
    cin >> y;
    string x = "Lorem Ipsum is simply dummy text of the printing and typesetting industry";
    cout << x.find(y) << "\n";
    int b = x.find(y);
    string a = y;
    int j = a.length();
    cout << b + (j - 1);
}

