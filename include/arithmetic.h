//
// Created by Marta Brüning on 22.11.25.
//

#ifndef MATHY_MATHY_H
#define MATHY_MATHY_H
#include <iostream>


namespace math {

    class Arithmetic {
    public:
        /**
         * Template functions for the artithmetic operations
         *
         * @tparam T     In the template parameter list of a template declaration, typename can be used as an alternative
         *               to declare a type template parameter.
         * @param a      The first number.
         * @param b      The second number.
         *
         * @return       The result of the arithmetic operation.
         */
        template <typename T> static T add(T a, T b);
        template <typename T> static T sub(T a, T b);
        template <typename T> static T mul(T a, T b);
        template <typename T> static T div(T a, T b);
    };
    template< typename  T> T Arithmetic::add(T a, T b) {
        return a + b;
    }

    template <typename T> T Arithmetic::sub(T a, T b) {
        return a - b;
    }

    template< typename  T> T Arithmetic::mul(T a, T b) {
        return a * b;
    }

    template <typename T> T Arithmetic::div(T a, T b) {
        if (b == 0 && a == 0) {
            throw std::logic_error("Division 0 by 0!");
        }
        if (b == 0)  {
            throw std::invalid_argument("Division by zero!");
        }
        return a / b;
    }

}



#endif //MATHY_MATHY_H


