
#include <iostream>
#include <list>
using namespace std;
void duplicateOddValues(list<int>& lst) {
    list<int>::iterator iter = lst.begin();
    while (iter != lst.end()) {
        if (*iter % 2 != 0) {
            lst.insert(iter, *iter);
            iter++;
        }
        else {
            iter++;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    list<int> lst = { 1, 2, 3, 4, 5 };

    cout << "Исходный список: ";
    for (int elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    duplicateOddValues(lst);

    cout << "Преобразованный список: ";
    for (int elem : lst) {
        std::cout << elem << " ";
    }
    cout << endl;
    list<int>::iterator iter = lst.begin();
    int* a = &(*iter);
    cout << "указатель на первый элемент преобразованного списка " << a;


    return 0;
}
