#include<bits/stdc++.h>
using namespace std;

bool solve(vector<vector<char>>& board,int rows[],int cols[],int boxes[],int i,int j)
{
    if(j==9)
    {
        i++;
        j=0;
    }
    if(i==9)
    {
        return true;
    }
    if (board[i][j] != '.') {
        return solve(board,rows,cols,boxes,i,j+1);
    }
    i%=9;
    j%=9;
    for(int k=1;k<10;k++)
    {
    int mask = 1 << k;
    int boxIdx = (i / 3) * 3 + (j / 3);
    if ((rows[i] & mask) || (cols[j] & mask) || (boxes[boxIdx] & mask)) {
        continue;
    }
    rows[i] |= mask;
    cols[j] |= mask;
    boxes[boxIdx] |= mask;
    board[i][j]=k+'0';
    if(solve(board,rows,cols,boxes,i,j+1))
    {
        return true;
    }
    board[i][j]='.';
    rows[i] ^= mask;
    cols[j] ^= mask;
    boxes[boxIdx] ^= mask;
    }
    return false;
}
void solveSudoku(vector<vector<char>>& board) {
    int rows[9] = {0};
    int cols[9] = {0};
    int boxes[9] = {0};

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') {
                continue;
            }
            int val = board[i][j] - '0';
            int mask = 1 << val;
            int boxIdx = (i / 3) * 3 + (j / 3);
            rows[i] |= mask;
            cols[j] |= mask;
            boxes[boxIdx] |= mask;
        }
    }
    solve(board,rows,cols,boxes,0,0);
}

int main()
{
    vector<vector<char>>board(9,vector<char>(9));
    cout<<"Enter the elements of the board:"<<endl;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>board[i][j]; 
        }
    }
    solveSudoku(board);
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<board[i][j]<<','; 
        }
        cout<<endl;
    }
}