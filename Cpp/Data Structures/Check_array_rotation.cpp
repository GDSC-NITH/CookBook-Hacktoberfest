#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{

    int k = 0;
    for (int i = 1; i < size; i++)
    {
        if (input[i] < input[i - 1])
        {
            k += i;
        }
    }
    return k;
}
int main()
{

    int t;
    cin >> t;   // No. of Test Cases
    while (t--)
    {

        int size;
        cin >> size;   // Size of array
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];  // Input array
        }

        cout << arrayRotateCheck(input, size) << endl;
        delete[] input;
    }

    return 0;
}
