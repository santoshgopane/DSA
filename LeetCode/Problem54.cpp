#include<bits/stdc++.h>  
using namespace std;     

vector<int> spiralOrder(vector<vector<int>>& matrix){

    vector<int> ans;

    int rows = matrix.size();
    int cols = matrix[0].size();

    int count = 0;
    int total = rows*cols;

    int startRow = 0;
    int startCol = 0;
    int endRow = rows-1;
    int endCol = cols-1;

    while(count<total)
    {
        
        for(int idx = startCol; count<total && idx<=endCol;idx++){
            ans.push_back(matrix[startRow][idx]);
        count++;
        }
        startRow++;

        for(int idx = startRow;count<total && idx<=endRow;idx++){
            ans.push_back(matrix[idx][endCol]);
        count++;
        }
        endCol--;

        for(int idx = endCol;count<total && idx>=startCol;idx--){
            ans.push_back(matrix[endRow][idx]);
        count++;
        }
        endRow--;

        for(int idx = endRow;count<total && idx>=startRow;idx--){
            ans.push_back(matrix[idx][startCol]);
        count++;
        }
        startCol++;
    }
    return ans;
}



int main(){
    vector<vector<int>> v = {{1, 2, 3, 0},
                             {4, 5, 6, 13},
                             {7, 8, 9, 11}};
    vector<int> ans = spiralOrder(v);
    for(int i:ans)
        cout<<i<<" ";
}