#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    long long int max=0;
    for(int grid_i = 0;grid_i < 20;grid_i++){
    	for(int grid_j = 0;grid_j < 20;grid_j++)
    		cin >> grid[grid_i][grid_j];
    }
    for(int i=0;i<20;++i){
        for(int j=0;j<20;++j){
            if(i<17){
                if(grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j]>max)
                    max=grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];
            }
            if(j<17){
                if(grid[i][j+1]*grid[i][j+2]*grid[i][j+3]*grid[i][j]>max)
                         max=grid[i][j+1]*grid[i][j+2]*grid[i][j+3]*grid[i][j];
            }
            if(i<17 && j<17){
                if(grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3]>max)
                    max=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
            }
            if(i>2 && j<17){
                if(grid[i][j]*grid[i-1][j+1]*grid[i-2][j+2]*grid[i-3][j+3]>max)
                    max=grid[i][j]*grid[i-1][j+1]*grid[i-2][j+2]*grid[i-3][j+3];
            }
        }
    }
    cout<<max;         
    return 0;
}
