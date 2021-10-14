#ifndef _FC_GAUSS_PROB_H_
#define _FC_GAUSS_PROB_H_

#include "probability.h"

// Gauss curve probability

#define PI 3.14152

Probability gauss_function(Probability x, Probability mu, Probability sigma);
Probability gauss_probability(Probability x, Probability mu, Probability sigma);

#endif
