//
// Created by Marta Brüning on 24.11.25.
//

#include <iostream>
#include <gtest/gtest.h>
#include "../include/arithmetic.h"

class ArithmeticTest : public ::testing::Test {
protected:
    void SetUp() override {
        arithmetic_test = new math::Arithmetic();
    }
    void TearDown() override {
        delete arithmetic_test;
    }

    math::Arithmetic* arithmetic_test;

};

TEST(ArithmeticTest, test_add) {;
    std::cout << "Add test case" << std::endl;
}