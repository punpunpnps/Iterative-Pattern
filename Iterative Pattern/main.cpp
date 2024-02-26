#include <iostream>
#include <thread>
#include <chrono>

void printTile(const std::string& emoji) {
    std::cout << emoji;
}

void generatePattern(int rows, int cols) {
    std::string emojis[][2] = {
        {"🍀", "🌟"},
        {"🚀", "🌈"},
        {"🍄", "💖"},
        {"🐾", "🎈"},
    };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printTile(emojis[i % 4][j % 2]);
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows = 8;
    int cols = 30;

    generatePattern(rows, cols);

    return 0;
}
