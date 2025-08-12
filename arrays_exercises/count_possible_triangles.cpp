#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int count_triangles(vector<int> &input){
    int triangular_count = 0;
    int size = input.size();

    for(int i = 0;  i + 1 < size; i++){
        for(int j = i + 1; j + 1 < size; j++){
            for(int k = j + 1; k < size; k++){
                    int a = input[i];
                    int b = input[j];
                    int c = input[k];

                    if(c < a + b && b < a + c && a < b + c){
                        cout << "A new triangula: [ " << a << "," << b << "," << c << " ]" << endl;
                        triangular_count++;
                    }
                }
            }
    }

    return triangular_count;
}

int main(){
    vector<int> input = {10, 21, 22, 100, 101, 200, 300};
    reverse(input.begin(), input.end());

    cout << count_triangles(input) << endl;
}