#include<bits/stdc++.h>

using namespace std;

void showMatrix(vector<vector<int>> mtx){
    for(int i=0; i<mtx.size(); i++){
        for(int j=0; j<mtx[0].size(); j++){
            cout << mtx[i][j] << " ";
        }
        cout << "\n";
    }
}

vector<int> spiralOrderMatrix(vector<vector<int>> &arr){
    int m = arr.size();
    int n = arr[0].size();
    vector<int> res;
    int direction = 0;
    int idx = 0;
    int left = 0, right = n-1, top = 0, bottom = m-1;

    while(left <= right && top <= bottom){
        // left to right
        if(direction == 0){
            for(int i=left; i<=right; i++)
                res.push_back(arr[top][i]);
            top++;
        }

        // top to bottom
        else if(direction == 1){
            for(int i=top; i<=bottom; i++)
                res.push_back(arr[i][right]);
            right--;
        }
        // right to left
        else if(direction == 2){
            for(int i=right; i>=left; i--){
                cout << " right, left " << right << ", " << left << "\n";
                res.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        // bottom to top
        else if(direction == 3){
            for(int i=bottom; i>=top; i--)
                res.push_back(arr[i][left]);
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return res;
}


int main(){
    vector<vector<int>> mtx = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    vector<int> res = spiralOrderMatrix(mtx);
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
