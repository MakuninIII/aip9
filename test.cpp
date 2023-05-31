#include <iostream>
#include "operations.h"

void testSum() {

int result = sum(5, 7);
int expected = 12;
if (result == expected) {
std::cout « "Тест 1 пройден." « std::endl;
} else {
std::cout « "Тест 1 не пройден. Ожидалось: " « expected « ", получено: " « result « std::endl;
}

result = sum(-3, 8);
expected = 5;
if (result == expected) {
std::cout « "Тест 2 пройден." « std::endl;
} else {
std::cout « "Тест 2 не пройден. Ожидалось: " « expected « ", получено: " « result « std::endl;
}
}

void testMultiply() {
int result = multiply(5, 7);
int expected = 35;
if (result == expected) {
std::cout « "Тест 1 пройден." « std::endl;
} else {
std::cout « "Тест 1 не пройден. Ожидалось: " « expected « ", получено: " « result « std::endl;
}
}