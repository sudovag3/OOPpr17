#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

typedef std::set<int, std::less<int> > type_set;

// Перегрузка оператора + для выполнения объединения множеств
type_set operator+(const type_set& A, const type_set& B) {
    type_set I;
    // Используем функцию set_union для выполнения объединения множеств A и B
    std::set_union(A.begin(), A.end(), B.begin(), B.end(), std::inserter(I, I.begin()));
    return I;
}

int main() {
    type_set A = {1, 2, 3, 4, 5};
    type_set B = {4, 5, 6, 7, 8};
    
    // Выполняем объединение множеств A и B с помощью оператора +
    type_set I = A + B;

    // Выводим результат объединения
    for (int n : I)
        std::cout << n << ", ";
    std::cout << "\n";

    return 0;
}
