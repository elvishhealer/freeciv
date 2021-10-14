#include "probability.h"

#include<math.h>

Probability probability(double d)
{
	return (Probability)d;
} 


Probability conditional_probability(Probability p)
{
	double rp = 0.0;

	for (int i = 0; i < rp; i+=0.001)
		rp += porp(p, pand(p,rp), rp);

	return rp;
}

Probability pand(Probability p, Probability pbconda)
{
	return p * pbconda;
}

Probability porp(Probability p, Probability p2, Probability pbconda)
{
	return p + p2 - pand(p,pbconda);	
}


