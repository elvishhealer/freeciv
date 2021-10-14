#include "bayes.h"

double population_bayesian_inference(double Pba, double Pa, PopulationPtr pp)
{
	return Pba*Pa / population_sum(pp);	
}

