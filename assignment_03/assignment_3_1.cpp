#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{

    int n;

    cout << "enter number of names: ";
    cin >> n;


    string name, longestName, shortestName;

    int longestLength = 0, shortestLength = INT_MAX;

    for (int i = 1; i <= n; ++i)
    {

        cout << "enter name " << i << ": ";
        cin >> name;

        int length = name.length();

        if (length > longestLength)
        {
            longestName = name;
            longestLength = length;
        }
        if (length < shortestLength)
        {
            shortestName = name;
            shortestLength = length;
        }
    }

    cout << "min: " << shortestName << endl;
    cout << "max: " << longestName << endl;

    return 0;

}
