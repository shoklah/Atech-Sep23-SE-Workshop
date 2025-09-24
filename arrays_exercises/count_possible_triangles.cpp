#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

// int count_triangles(vector<int> &input){
//     int triangular_count = 0;
//     int size = input.size();

//     for(int i = 0;  i + 1 < size; i++){
//         for(int j = i + 1; j + 1 < size; j++){
//             for(int k = j + 1; k < size; k++){
//                     int a = input[i];
//                     int b = input[j];
//                     int c = input[k];

//                     if(c < a + b && b < a + c && a < b + c){
//                         cout << "A new triangula: [ " << a << "," << b << "," << c << " ]" << endl;
//                         triangular_count++;
//                     }
//                 }
//             }
//     }

//     return triangular_count;
// }


// int count_triangles(vector<int> &input) {
//     sort(input.begin(), input.end());

//     for(int i : input){
//     cout << i << " ";
//     }
//     cout << endl;

//     int size = input.size();
//     int triangular_count = 0;

//     for(int i = 0;  i + 1 < size; i++){
//         for(int j = i + 1; j + 1 < size; j++){
//             int sum = input[i] + input[j];
//             int begin = j + 1;
//             int end = size - 1;

//             while (begin < end) {
//                 int mid = begin + (end - begin) / 2;

//                 if (input[mid] > sum) {
//                     // we move left, no match yet
//                     end = mid - 1;
//                 } else {
//                     begin = mid + 1;
//                     // we move right
//                 }
//             }
    
//             triangular_count += begin - j - 1;
//             if (input[begin] < sum)
//                 triangular_count++;
//         }
//     }

//     return triangular_count;
// }

int count_triangles(vector<int> &input) {
    sort(input.begin(), input.end());

    int size = input.size();
    int triangular_count = 0;

    for (int i = size - 1; i >= 2; i--) {
        int rightElement = i; 
        //int rightElement = input[i];// 300
        int middleElement = rightElement - 1; // 200
        int leftElement = 0; // 10

        cout << "This is the rightElement" << rightElement << "\n";
        cout << "This is the middleElement" << middleElement << "\n";

        while (leftElement < middleElement) {
            if (input[leftElement] + input[middleElement] > input[rightElement]) {
                triangular_count += (middleElement - leftElement);
                middleElement--;
            } else {
                leftElement++;
            }
        }
    }

    return triangular_count;
}



int main(){
    //vector<int> input = {4, 6, 3, 7};
    //vector<int> input = {10, 21, 22, 100, 101, 200, 300};
    //vector<int> input = {1, 2, 3};
    // vector<int> input = {22, 22,22, 22, 22, 22};
    vector<int> input = {};
    //reverse(input.begin(), input.end());

   cout << count_triangles(input) << endl;
}