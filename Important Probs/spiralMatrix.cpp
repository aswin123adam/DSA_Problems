#include <iostream>
#include <vector>
 using namespace std;
 
 int main(){
    int start = 1;
    int len;
    cin>>len;
    vector<vector<int>> mat( len, vector<int> (len, 0));
    int dir = 1;
    int top = 0, bottom = len - 1 , left = 0 , right = len - 1;
    while(top <= bottom && left <= right){
        if( dir == 1){ //left -> right
            for(int i = left ; i<= right ; i++){
                mat[top][i] = start++;
            }
            top++;
            ++dir;
        }
        else if( dir == 2 ){ //top -> bottom
            for(int i = top ; i <= bottom ; i++){
                mat[i][right] = start++;
            }
            right--;
            ++dir;
        }
        else if( dir == 3 ){  //right -> left
            for(int i = right ; i>= left; i--){
                mat[bottom][i] = start++;
            }
            bottom--;
            ++dir;
        }
        else if( dir == 4 ){  //bottom -> top
            for(int i = bottom ; i >= top ; i--){
                mat[i][left] = start++;
            }
            left++;
            dir=1;
        }
    }
    for(int i = 0; i < len ; i++){
        for(int j = 0; j < len ; j++){
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }

 }