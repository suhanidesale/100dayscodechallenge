#include <iostream>
using namespace std;

void printsubsequences(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    printsubsequences(input.substr(1), output);            //exclude
    printsubsequences(input.substr(1), output + input[0]); //exclude
}

void printsubsequences2(char in[], char out[] , int i)
{
    if (in[0] == '\0')
    {
        out[i] = '\0';
        cout << out << endl;
        return;
    }

    printsubsequences2(in+1, out,i) ;            //exclude
    out[i] = in[0];
    printsubsequences2(in+1, out , i+1); //include
}

int main()
{
    string input;
    cin >> input;
    string output = "";
    cout<<"1st"<<endl;
    printsubsequences(input, output);


    char in[100];
    cin>>in;

    char out[100] ;
    cout<<"2nd"<<endl;
    printsubsequences2(in,out,0);


    return 0;
}