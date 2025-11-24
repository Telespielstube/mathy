//
// Created by Marta Brüning on 24.11.25.
//

#include <iostream>
#include <gtest/gtest.h>
#include "../include/arithmetic.h"

/**
 * Test class that includes some casses to test simple arithmetic operations. There is actually no need to init an
 * object of Arithmetic because all functions are static and all test cases are independent.
 */
class ArithmeticTest : public ::testing::Test {
// protected:
//     void SetUp() override {
//         arithmetic_test = new math::Arithmetic();
//     }
//     void TearDown() override {
//         delete arithmetic_test;
//     }
//
//     math::Arithmetic* arithmetic_test{};

};

/**
 * Some independent test cases to test the static arithmetic functions.
 */
TEST(ArithmeticTest, add_two_positive_numbers) {
    std::cout << "Test add function if 5 + 6 is greater than 6." << std::endl;
    EXPECT_GE(math::Arithmetic::add(5,6), 6);
}

TEST(ArithmeticTest, add_two_negative_numbers) {
    std::cout << "Test add function if -5 + (-6) is equal -11." << std::endl;
    EXPECT_EQ(math::Arithmetic::add(-5,-6), -11);
}

TEST(ArithmeticTest, multiply_two_numbers) {
    std::cout << "Test multiply function if 3 * 8 equals 24." << std::endl;
    EXPECT_EQ(math::Arithmetic::mul(3, 8), 24);
    EXPECT_NO_THROW(math::Arithmetic::mul(3, 8));
}

TEST(ArithmeticTest, div_two_numbers) {
    std::cout << "Test divide function if 16 / 4 equals 4." << std::endl;
    EXPECT_EQ(math::Arithmetic::div(16, 4), 4);
}

TEST(ArithmeticTest, div_zero_by_seven) {
    std::cout << "Test divide function if 0 / 7 equals 0." << std::endl;
    EXPECT_EQ(math::Arithmetic::div(0, 7), 0);
}

TEST(ArithmeticTest, div_number_by_0) {
    std::cout << "Test divide function if 3 / 0 thorws an error message." << std::endl;
    EXPECT_THROW(math::Arithmetic::div(3, 0), std::invalid_argument);
}

TEST(ArithmeticTest, div_zero_by_zero) {
    std::cout << "Test divide function if 0 / 0 thorws an error message." << std::endl;
    EXPECT_THROW(math::Arithmetic::div(0, 0), std::invalid_argument);
}
