#include<bits/stdc++.h>
using namespace std;
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

    int maximalRectangle(vector<vector<char>>& matrix) {
        
        // let's create the integer matrix first
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> mat(row,vector<int>(col));
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j] == '1')
                    mat[i][j] = 1;
                else 
                    mat[i][j] = 0;
            }
        }

        // creating the height vector 
        vector<int> arr(mat[0].begin(),mat[0].end());
        int maxArea = largestRectangleSize(arr);

        for(int i=1; i<row; i++)
        {
            for(int j=0; j<col; j++){
                if(mat[i][j] == 1)
                    arr[j]++;
                else 
                    arr[j] = 0;
            }

            maxArea = max(maxArea,largestRectangleSize(arr));    
        }

        return maxArea ;
    }


int main()
{
    vector<vector<int>> matrix;
    vector<int> v = {1,0,1,0,0};
    matrix.push_back(v);
    v={1,0,1,1,1};
    matrix.push_back(v);
    v={1,1,1,1,1};
    matrix.push_back(v);
    v={1,0,0,1,0};
    matrix.push_back(v);

    cout<<maximalRectangle(matrix);
    return 0;
}