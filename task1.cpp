#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> my_list = {5, 2, 9, 1, 5, 6, 7, 5};

    // Сортируем список
    my_list.sort();

    // Удаляем повторяющиеся элементы
    my_list.unique();

    // Удаляем заданный пользователем элемент (например, 5)
    my_list.remove(5);

    // Вывод списка
    for (int n : my_list)
        std::cout << n << ", ";
    std::cout << "\n";

    // Пример использования merge:
    std::list<int> my_list2 = {8, 3, 4};
    my_list2.sort();
    my_list.merge(my_list2); // объединяет элементы двух списков в отсортированном порядке.
    
    for (int n : my_list)
        std::cout << n << ", ";
    std::cout << "\n";

    return 0;
}
