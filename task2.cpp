#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> A = {{0, 1}, {1, 0}, {1, 1}, {0, 0}};

    // Итерация по вектору A
    for (const auto &v : A) {
        // Итерация по вложенным векторам
        for (int n : v)
            std::cout << n << ", "; // Вывод элемента
        std::cout << "\n"; // Переход на новую строку между вложенными векторами
    }

    return 0;
}
