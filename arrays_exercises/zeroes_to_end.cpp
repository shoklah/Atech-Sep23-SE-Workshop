#include <vector>
#include <iostream>
using namespace std;

void printArray(vector<int> &input) {
    for(int i = 0; i < input.size(); i ++){
        cout << input[i] << " ";
    }
    cout << "\n";
}

int moveZeroesToEnd(vector<int> &input){
    int size = input.size();

    int current = 0;
    int notZero = 0;

    for(; current < size; current++){
        if(input[current] != 0){
            int holder = input[notZero];
            input[notZero] = input[current];
            input[current] = holder;
            notZero++;
        }
    }

    return 0;
}

int main() {
    vector<int> input = {1, 2, 0, 4, 3, 0, 5, 0};
    moveZeroesToEnd(input);
    printArray(input);
}
