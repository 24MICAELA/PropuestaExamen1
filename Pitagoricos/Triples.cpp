#include <iostream>
#include <cmath>
#include "triples.h"

void encontrar_triples_pitagoricos(int max) {
    int a, b, c;

    for (a = 1; a <= max; a++) {
        for (b = a; b <= max; b++) {
            double c_double = sqrt(a * a + b * b);
            c = static_cast<int>(c_double);

            if (c_double == c && a + b > c && a + c > b && b + c > a) {
                std::cout << a << " - " << b << " - " << c << std::endl;
            }
        }
    }
}