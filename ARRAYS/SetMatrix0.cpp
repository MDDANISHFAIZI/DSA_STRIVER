#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {

    int n = matrix.size();
    int m = matrix[0].size();

    vector<pair<int,int>> zeros;

    // Step 1: Store all original zero positions
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                zeros.push_back({i, j});
            }
        }
    }

    // Step 2: Make corresponding rows and columns zero
    for(auto p : zeros) {

        int row = p.first;
        int col = p.second;

        // Zero entire row
        for(int j = 0; j < m; j++) {
            matrix[row][j] = 0;
        }

        // Zero entire column
        for(int i = 0; i < n; i++) {
            matrix[i][col] = 0;
        }
    }
}

int main() {

    vector<vector<int>> matrix = {
        {1,1,1,1},
        {1,0,0,1},
        {1,1,0,1},
        {1,1,1,1}
    };

    setZeroes(matrix);

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}