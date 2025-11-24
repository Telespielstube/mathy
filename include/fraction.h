//
// Created by Marta Brüning on 22.11.25.
//

#ifndef MATHY_FRACTION_H
#define MATHY_FRACTION_H

namespace math {
    class Fraction {
        public:
            template <typename T> T static add(T fraction1, T fraction2);
    };

    template <typename T> T static add(T fraction1, T fraction2) {
        return fraction1 / fraction2;
    }
}
#endif //MATHY_FRACTION_H