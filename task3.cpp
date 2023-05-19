#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>*> A;
    for (int i = 0; i < 4; ++i) {
        A.push_back(new std::vector<int>{i % 2, (i + 1) % 2});
    }

    // Итерация по вектору указателей A
    for (auto pv : A) {
        // Итерация по вложенным векторам, доступ к элементам через разыменование указателя
        for (int n : *pv)
            std::cout << n << ", "; // Вывод элемента
        std::cout << "\n"; // Переход на новую строку между вложенными векторами

        delete pv; // Освобождение памяти, выделенной для вложенного вектора
    }

    return 0;
}
