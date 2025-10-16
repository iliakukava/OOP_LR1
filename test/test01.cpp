#include <gtest/gtest.h>
#include "../include/Solution.h"

// Тестирование основных чисел 0-9
TEST(TurkishNumbersTest, BasicNumbers) {
    EXPECT_EQ(translator(0), "sıfır");
    EXPECT_EQ(translator(1), "bir");
    EXPECT_EQ(translator(2), "iki");
    EXPECT_EQ(translator(3), "üç");
    EXPECT_EQ(translator(4), "dört");
    EXPECT_EQ(translator(5), "beş");
    EXPECT_EQ(translator(6), "altı");
    EXPECT_EQ(translator(7), "yedi");
    EXPECT_EQ(translator(8), "sekiz");
    EXPECT_EQ(translator(9), "dokuz");
}

// Тестирование круглых десятков
TEST(TurkishNumbersTest, RoundTens) {
    EXPECT_EQ(translator(10), "on");
    EXPECT_EQ(translator(20), "yirmi");
    EXPECT_EQ(translator(30), "otuz");
    EXPECT_EQ(translator(40), "kırk");
    EXPECT_EQ(translator(50), "elli");
    EXPECT_EQ(translator(60), "altmış");
    EXPECT_EQ(translator(70), "yetmiş");
    EXPECT_EQ(translator(80), "seksen");
    EXPECT_EQ(translator(90), "doksan");
}

// Тестирование составных чисел (11-99)
TEST(TurkishNumbersTest, CompositeNumbers) {
    // Числа 11-19
    EXPECT_EQ(translator(11), "on bir");
    EXPECT_EQ(translator(12), "on iki");
    EXPECT_EQ(translator(13), "on üç");
    EXPECT_EQ(translator(14), "on dört");
    EXPECT_EQ(translator(15), "on beş");
    EXPECT_EQ(translator(16), "on altı");
    EXPECT_EQ(translator(17), "on yedi");
    EXPECT_EQ(translator(18), "on sekiz");
    EXPECT_EQ(translator(19), "on dokuz");
    
    // Различные составные числа
    EXPECT_EQ(translator(21), "yirmi bir");
    EXPECT_EQ(translator(27), "yirmi yedi");
    EXPECT_EQ(translator(32), "otuz iki");
    EXPECT_EQ(translator(38), "otuz sekiz");
    EXPECT_EQ(translator(43), "kırk üç");
    EXPECT_EQ(translator(49), "kırk dokuz");
    EXPECT_EQ(translator(54), "elli dört");
    EXPECT_EQ(translator(55), "elli beş");
    EXPECT_EQ(translator(66), "altmış altı");
    EXPECT_EQ(translator(77), "yetmiş yedi");
    EXPECT_EQ(translator(88), "seksen sekiz");
    EXPECT_EQ(translator(94), "doksan dört");
    EXPECT_EQ(translator(99), "doksan dokuz");
}

// Тестирование граничных значений
TEST(TurkishNumbersTest, EdgeCases) {
    EXPECT_EQ(translator(0), "sıfır");      // Минимальное значение
    EXPECT_EQ(translator(99), "doksan dokuz"); // Максимальное значение
    EXPECT_EQ(translator(9), "dokuz");
    EXPECT_EQ(translator(10), "on");
    EXPECT_EQ(translator(19), "on dokuz");
    EXPECT_EQ(translator(20), "yirmi");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

