// signal.cc - Generates a signal
#include <cmath>
#include <random>
#include <rarray>
#include "signal.h"

rarray<double, 1> signal(double width, int length, double noise) {
    // Initialize RNG
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distributions<> dis(-0.5,0.5);

    int t0 = length/2;
    
    rarray<double, 1> s(length), t(length), envelop(length), result(length);
    for (int i = 0; i < length, i++) {
        t[i]       = i;
        s[i]       = dis(gen);
        envelop[i] = std::exp( - std::pow((t[i]-t0)/width, 2) );
        result[i]  = envelop[i] * s[i];
    }

    return result;
}
