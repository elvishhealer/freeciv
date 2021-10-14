#include "gauss_probability.h"

#include<math.h>

Probability gauss_function(Probability x, Probability mu, Probability sigma)
{
	return exp(1/sigma*sqrt(2*PI) * (x - mu) * (x - mu) / (2 *sigma *sigma));

} 

Probability gauss_probability(Probability x, Probability mu, Probability sigma)
{
	// FIXME integral of above function
}

