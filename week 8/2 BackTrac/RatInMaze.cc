#include<iostream>
#include<vector>
using namespace std;

int di[4] = {1 ,0 ,0 ,-1};
int dj[4] = {0 ,-1 ,1 ,0};
char dir[4] = {'D','L','R','U'};

bool isSafe(int i,int j,int row,int col,int maze[][3],vector<vector<bool> >visited){
    if( ((i >= 0 && i < row) && (j >= 0 && j < col)) && (visited[i][j] == false) && (maze[i][j] == 1)){
        return true;
    }
    return false;
}

void solveMaze(int maze[][3],int row,int col,int i,int j,vector<vector<bool> >&visited,vector<string>&path,string output){
    //base case
    if( i == row-1 && j == col-1 ){
        path.push_back(output);
        return;
    }

    for(int k=0;k<4;k++){
        int newi = i + di[k];
        int newj = j + dj[k];
        char Dir = dir[k];

        if(isSafe(newi,newj,row,col,maze,visited)){
            visited[newi][newj] = true;
            solveMaze(maze,row,col,newi,newj,visited,path,output+Dir);
            //backtrack
            visited[newi][newj] = false;
        }
    }


    // //Down - i+1,j
    // if(isSafe(i+1,j,row,col,maze,visited)){
    //     visited[i+1][j] = true;
    //     solveMaze(maze,row,col,i+1,j,visited,path,output+'D');
    //     //backtrack
    //      visited[i+1][j] = false;
    // }
    // //Left - i,j-1
    // if(isSafe(i,j-1,row,col,maze,visited)){
    //      visited[i][j-1] = true;
    //     solveMaze(maze,row,col,i,j-1,visited,path,output+'L');
    //      visited[i][j-1] = false;
    // }
    // //Right - i,j+1
    // if(isSafe(i,j+1,row,col,maze,visited)){
    //      visited[i][j+1] = true;
    //     solveMaze(maze,row,col,i,j+1,visited,path,output+'R');
    //     visited[i][j+1] = false;
    // }
    // //Up - i-1,j
    // if(isSafe(i-1,j,row,col,maze,visited)){
    //      visited[i-1][j] = true;
    //     solveMaze(maze,row,col,i-1,j,visited,path,output+'U');
    //     visited[i-1][j] = false;
    // }
}

int main()
{
    int maze[3][3] = { {1,0,0},
                       {1,1,0}, 
                       {1,1,1} };

    if(maze[0][0] == 0){
        cout<<"No solution exist"<<endl;
    }
    int row = 3;
    int col = 3;

    vector<vector<bool> >visited(row,vector<bool>(col,false));

    visited[0][0] = true;
    //for storing all the paths
    vector<string>path;
    string output = "";

    solveMaze(maze,row,col,0,0,visited,path,output);

    cout<<"Printing the results "<<endl;
     for(vector<string>::iterator k = path.begin(); k != path.end(); ++k) {
    // use *k to access the current element
    cout<<*k<<" ";
}cout<<endl;

    return 0;
}