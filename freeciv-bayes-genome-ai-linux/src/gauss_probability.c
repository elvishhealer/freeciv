#include "gauss_probability.h"

#include<math.h>

double gauss_probability(double x, double mu, double sigma)
{
	return exp(1/sqrt(2*PI) * (x - mu) * (x - mu) / (sigma *sigma));

} 

// FIXME integral of above function
