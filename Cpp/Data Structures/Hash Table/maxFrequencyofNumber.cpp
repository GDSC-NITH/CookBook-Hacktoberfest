#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    // Write your code here
    unordered_map<int, int> count;


    int maxfreq = 0;
    int maxAns = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        (count[arr[i]])++;//updaating map array element key

        maxfreq = max(maxfreq, (count[arr[i]]));
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (maxfreq == (count[arr[i]]))
        {
            maxAns = arr[i];
            break;
        }
    }
    cout<<"Maximum Frequency :"<<maxfreq<<endl;
    return maxAns;
}

int main()
{
    array<int> arr[]={1, 2, 2, 2, 3, 4, 5, 4, 3, 2, 2, 1, 1, 2, 2};
    int size=arr.size();
    vector<int> vect(arr,arr+15);

    int ans = maximumFrequency(vect, vect.size());
    cout << ans << endl;

    return 0;
}