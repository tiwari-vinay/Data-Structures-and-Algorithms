#include <bits/stdc++.h>
using namespace std;

int maximumSubArraySum(vector<int> arr)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int cur = 0; int count=0;
        for (int j = i; j < n; j++)
        {
            cur += arr[j]; 
            sum = max(cur, sum);
        }
    }
    return sum;
}

int maxSum(vector<int> arr)
{
    int n = arr.size();
    int sum = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
    }
    sum = max(sum, maxEnding);
    return sum;
}
void maxSubseqSum(vector<int> arr)
{
    int count = 0;
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int cur = 0;
        if (arr[i] > 0)
        {
            cur += arr[i];
            sum = max(sum, cur);
            count++;
        }
        if (count == 1)
        {
            continue;
            count = 0;
        }
    }
    cout << "the maximum subseq. sum is :" << endl
         << sum;
}

int main()
{
    vector<int> arr{33, 4, -22, 50};
    cout << maximumSubArraySum(arr);
    // cout<<maxSum(arr);


    maxSubseqSum(arr);// we can pass our number of arguement in the function to calculate the number of element in the subseq. in that sum . isnt that crazy?

    return 0;
}