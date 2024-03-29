#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str{};
    string space{};
    string pyramid{};
    string pyramidTemp{};
    cout << "Please enter a string to create a pyramid with: ";
    getline(cin,str);
    cout << "\nPrinting Pyramid:\n";
    for (int x = 0;x<str.length();x++)
    {
        space.empty();
        space.assign(str.length() - x,' ');
        cout << space;
        if (x==0)
        {
            cout << str[0] << endl;
            pyramidTemp = str[0];
        }
        else
        {
            pyramid.clear();
            pyramid = str[x];
            pyramid = pyramidTemp + pyramid;
            reverse(pyramidTemp.begin(),pyramidTemp.end());
            pyramid = pyramid + pyramidTemp;
            cout << pyramid << endl;
            reverse(pyramidTemp.begin(),pyramidTemp.end());
            pyramidTemp += str[x];

        }
    }
    return 0;
}