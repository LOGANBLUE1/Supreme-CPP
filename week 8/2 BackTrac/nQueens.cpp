#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

    unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> upperLeftDiagnolCheck;
    unordered_map<int,bool> bottomLeftDiagnolCheck;

void printSolution(vector<vector<char> >board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j]<<" ";
        }cout << endl;
    }cout<<endl<<endl;
}


bool isSafe(int row,int col,vector<vector<char> >&board,int n){

      if(rowCheck[row] == true )
            return false;
            
        if(upperLeftDiagnolCheck[col-row] == true)//for upper diagonal difference of indeces of values is const
            return false;
            
        if(bottomLeftDiagnolCheck[row+col] == true)//for bottom diagonal sum of indeces of values is const
            return false;

        return true;
//     int i = row;
//     int j = col;
//     //check row
//     while(j >= 0){
//         if(board[i][j] == 'Q'){
//         return false;
//         }
//         j--;
//     }
//     //chack top left diagonal
//         i = row;
//         j = col;
//     while(j >= 0 && i >= 0){
//         if(board[i][j] == 'Q'){
//         return false;
//         }
//     i--;j--;
//     }
//     //check bottom left diagonal
//         i = row;
//         j = col;
//     while(j >= 0 && i < n ){
//         if(board[i][j] == 'Q'){
//         return false;
//         }
//         i++;j--;
//     }
//    return true;
}


void solve(vector<vector<char> >&board,int col,int n){
    // base case
    if( col >= n ){
        printSolution(board,n);
        return;
    }
    // solve 1 case and rest on recurtion
    for(int row=0;row<n;row++){
        if( isSafe(row,col,board,n) ){
            //rakh do
            board[row][col] = 'Q';
                rowCheck[row] = true;
                upperLeftDiagnolCheck[col-row] = true;
                bottomLeftDiagnolCheck[row+col] = true;

            solve(board,col+1,n);
            // back track 
             board[row][col] = '-';
                rowCheck[row] = false;
                upperLeftDiagnolCheck[col-row] = false;
                bottomLeftDiagnolCheck[row+col] = false;
        }
        
    }
}

int main()
{
    int n = 4;
    vector<vector<char> >board(n,vector<char>(n,'-'));
    int col = 0;

    solve(board,col,n);
    return 0;
}