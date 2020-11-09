#ifndef CREATE_DISCRIMINANT_H
#define CREATE_DISCRIMINANT_H

#include "proof_common.h"

integer CreateDiscriminantForWorker(std::vector<uint8_t>& seed, int length = 1024, int iteration = -1) {
    integer D = HashPrimeForWorker(seed, length, {0, 1, 2, length - 1}, iteration) * integer(-1);
    return D;
}

integer CreateDiscriminant(std::vector<uint8_t>& seed, int length = 1024, int iteration = -1) {
    integer D = HashPrimeFast(seed, length, {0, 1, 2, length - 1}, iteration) * integer(-1);
    return D;
}

integer CreateDiscriminantFast(std::vector<uint8_t>& seed, int length = 1024, int iteration = -1) {
    integer D = HashPrimeFast(seed, length, {0, 1, 2, length - 1}, iteration) * integer(-1);
    return D;
}

integer CreateDiscriminantSlow(std::vector<uint8_t>& seed, int length = 1024, int iteration = -1) {
    integer D = HashPrime(seed, length, {0, 1, 2, length - 1}) * integer(-1);
    return D;
}

#endif // CREATE_DISCRIMINANT_H
