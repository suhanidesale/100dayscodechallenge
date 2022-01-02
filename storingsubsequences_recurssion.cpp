#include <iostream>
#include <vector>
using namespace std;

void printsubsequences(string input, string output, vector<string> &v)
{
    if (input.length() == 0)
    {
        v.push_back(output);
        return;
    }
    printsubsequences(input.substr(1), output , v);            //exclude
    printsubsequences(input.substr(1), output + input[0] , v); //exclude
}

int main()
{
    string input;
    cin >> input;
    string output = "";
    cout << "1st" << endl;
    vector<string> v;
    printsubsequences(input, output, v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}