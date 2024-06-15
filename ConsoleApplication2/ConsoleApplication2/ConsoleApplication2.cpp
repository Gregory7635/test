
#include <iostream>
﻿#include <iostream>
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

