#include<bits/stdc++.h>
using namespace std;

int largestArea-in-histogram(vector<int> arr)
{
    vector<int> area;
        int left,right;
        int n = heights.size();
        for(int i=0; i<n; i++)
        {
            left = i; right = i;
            while(left>0 && heights[i]<=heights[left-1])
                left--;
            while(right<n-1 && heights[right+1]>=heights[i])
                right++;
            int area_i=(right-left+1)*heights[i];
            area.push_back(area_i);
        }
        return *max_element(area.begin(),area.end());
}


int largestRectangleSize(vector<int> &arr){
    int n = arr.size();

    if(n == 0) return 0;

    int left[n]; int right[n];
    stack<int> s;

// now we need to set left limit and right limit for each i;
    for(int i=0; i<n; i++){

        if(s.empty()){
            left[i] = 0;
            s.push(i);
        }
        else{
            while(!s.empty() and arr[s.top()]>=arr[i])
                s.pop();
            left[i] = s.empty()?0:s.top()+1;
            s.push(i);
        }
    }

    //claearign the stack
    while(!s.empty())
            s.pop();

    // now fill right limit array

    for(int i=n-1; i>=0; i--){
        if(s.empty())
        {
            s.push(i);
            right[i] = n-1;
        }

        while(!s.empty() and arr[s.top()]>=arr[i])
            s.pop();
        right[i] = s.empty()?n-1:s.top()-1;
        s.push(i);
    }

    // now we have both the arrays, traverse and find the maximum area
    
    int maxArea = INT_MIN; 

    for(int i=0; i<n; i++)
    {
        maxArea = max(maxArea, (right[i] - left[i] +1)*arr[i]);
    }

    return maxArea;
}
int main()
{
    vector<int> heights = {4,2,0,3,2,4,3,4};
    cout<<largestAreaDP(heights);
    return 0;
}