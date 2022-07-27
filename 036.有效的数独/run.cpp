#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;
using vecIter = vector<int>::iterator;
/**
 请你判断一个 9 x 9 的数独是否有效。只需要 根据以下规则 ，验证已经填入的数字是否有效即可。

 数字 1-9 在每一行只能出现一次。
 数字 1-9 在每一列只能出现一次。
 数字 1-9 在每一个以粗实线分隔的 3x3 宫内只能出现一次。（请参考示例图）

 */

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][10] = {0};
        int col[9][10] = {0};
        int box[9][10] = {0};
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cout <<"-> " <<j/3 + (i/3)*3 << endl;
                if (board[i][j]=='.') continue;
                int curNum = board[i][j] - '0';
                if(row[i][curNum]) return false;
                if(col[j][curNum]) return false;
                
                if(box[j/3 + (i/3)*3][curNum]) return false;
                
                row[i][curNum] = 1;
                col[j][curNum] = 1;
                box[j/3 + (i/3)*3][curNum] = 1;
            }
        }
        return true;
    }
};



int main()
{
    
    vector<vector<char>> board =
    {{'5','3','.','.','7','.','.','.','.'}
    ,{'6','.','.','1','9','5','.','.','.'}
    ,{'.','9','8','.','.','.','.','6','.'}
    ,{'8','.','.','.','6','.','.','.','3'}
    ,{'4','.','.','8','.','3','.','.','1'}
    ,{'7','.','.','.','2','.','.','.','6'}
    ,{'.','6','.','.','.','.','2','8','.'}
    ,{'.','.','.','4','1','9','.','.','5'}
        ,{'.','.','.','.','8','.','.','7','9'}};

    Solution s;
    cout << s.isValidSudoku(board) << endl;
    
    return 0;
    
}
