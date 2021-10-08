#include <iostream>
using namespace std;

void Bubblesort(int n, int a[])
{
    for (int i = 1; i <= n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j <= n - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }

        if (flag == 0) //for already sorted array
        {
            break;
        }
    }
}

int main()
{
    int n, a[n];
    cout << "Enter no of elements: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Bubblesort(n, a);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}