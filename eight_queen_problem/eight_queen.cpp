#include<iostream>
#include<cmath>

using namespace std;

const int SIZE = 8;

int t = 0;

int board[SIZE][SIZE] = {0};

int queen_in_row[SIZE] = {-1, -1, -1, -1, -1, -1, -1, -1};


void print_board(){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if (board[i][j] == 0){
                cout << "- ";
            }
            else{
                cout << "Q ";
            }
        }
        cout << endl;
    }
    cout << "............" << endl;
    
}

bool is_threated_by_one_queen(int queen_x, int queen_y, int cell_x, int cell_y){
    if (queen_y < 0 || queen_x < 0){
        return false;
    }
    return (queen_x == cell_x) || (queen_y == cell_y) || (abs(queen_x - cell_x) == abs(queen_y - cell_y));
}

bool is_threated(int x, int y){
    for(int i = 0; i < SIZE; i++){
        if(is_threated_by_one_queen(i, queen_in_row[i], x, y)){
            return true;
        }
    }
    return false;
}

void fill(int row){
    if(row >= SIZE){
        print_board();
        t++;
        return;
    }
    for(int i = 0; i < SIZE; i++){
        if(!is_threated(row, i)){
            board[row][i] = 1;
            queen_in_row[row] = i;
            fill(row + 1);
            board[row][i] = 0;
            queen_in_row[row] = -1;
            
        }
    }
}

int main(){
    fill(0);
    cout << t << endl;

}