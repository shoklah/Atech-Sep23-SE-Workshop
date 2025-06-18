#include <iostream>
#include <vector>

void printAlternates(std::vector<int> input) {
    for(int i = 0; i < input.size(); i += 2){
        std::cout << input[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> input = {10, 20, 30, 40, 50};
    printAlternates(input);
}