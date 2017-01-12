#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

//searches possibility vector and clears if found
void VectorSearchAndClear(vector<char> &boxPoss, char searchFor){
	for(int i=0;i<boxPoss.size();i++){
		if(boxPoss[i]==searchFor){
			boxPoss.erase(boxPoss.begin()+i);
		}
	}
}

void RowTrim(vector<char> &boxPoss, vector<char> board, int boxNum){
	//compute row num
	int rowNum=boxNum/9;
	for(int i=rowNum*9;i<rowNum*9+9;i++){
		if(board[i]!=0)
	}
}

int main(int argc, char* argv[])
{
	string input;
	cin << input;
	vector<char> board;
	vector<vector<char> > poss;
	int temp;
	//interate through input string and push to board
	for (int i=0;i<input.size();i++){
		//temp=input[i]-'0'; for use with integer board
		board.push_back(temp);
	}
	//for each empty square on the board, compute the possible occupying numbers
	for(int i=0;i<board.size();i++){
		//if the number occupying a box is not zero, that is the only possibility for that box
		if(board[i]!='0'){
			poss[i].push_back(board[i]);
		}
		//else we push back the ints 1-9, and then trim
		else{
			for(int j=1;j<10;j++){
				poss[i].push_back(j);
			}

		}
	}
}
