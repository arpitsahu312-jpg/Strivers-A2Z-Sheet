#include<bits/stdc++.h>
using namespace std;

    bool search(vector<vector<char>>& board, const string& word,int i,int j,int k)
        {
            if(k==word.size())
            {
                return true;
            }
            if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='*' || board[i][j]!=word[k])
            {
                return false;
            }
            char temp=board[i][j];
            board[i][j]='*';
            bool ans=(search(board,word,i+1,j,k+1) || search(board,word,i-1,j,k+1) ||
            search(board,word,i,j+1,k+1) || search(board,word,i,j-1,k+1));
            board[i][j]=temp;
            return ans;
        }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                   if(search(board,word,i,j,0))
                   {
                     return true;
                   }
                }
            }
        }
       return false;
    }

    int main()
    {
        int m,n;
        cout<<"Enter the value of m,n:";
        cin>>m>>n;
        vector<vector<char>> board(m,vector<char>(n));
        cout<<"Enter the elements of the array:"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>board[i][j]; 
            }
        }
        string str;
        cout<<"Enter the word to be searched:";
        cin>>str;
        cout<<exist(board,str);
        return 0;
    }

