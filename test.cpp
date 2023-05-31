#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "operations.h"

TEST_CASE("Sum function") {
// Тест 1: Проверяем, что сумма двух положительных чисел вычисляется правильно
CHECK(sum(5, 7) == 12);

// Тест 2: Проверяем, что сумма положительного и отрицательного чисел вычисляется правильно
CHECK(sum(-3, 8) == 5);
}

TEST_CASE("Multiply function") {
// Тест 1: Проверяем, что произведение двух положительных чисел вычисляется правильно
CHECK(multiply(5, 7) == 35);

}