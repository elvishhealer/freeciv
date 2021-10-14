#include "population.h"

#include<stdlib.h>

void make_population(PopulationPtr pp)
{
	pp = (PopulationPtr)malloc(sizeof(Population));
	make_list(pp->pop);
	pp->count = 0;
} 

void add_to_population(Data d, PopulationPtr pp)
{
	add_to_list(d, pp->pop);
	
	pp->count ++;
}

double population_sum(PopulationPtr pp)
{
	double sum = 0.0;

	while (pp->pop->next != NULL) 
		sum += (double)*(pp->pop->data);

	return sum;
}

double population_estimate(PopulationPtr pp)
{
	return population_sum(pp) / pp->count;
}

double population_max(PopulationPtr pp)
{
	double max = -2.0; // NOTE - inf
	
	while (pp->pop->next != NULL) {
		if (*(pp->pop->data) >= max)
			max = (double)*(pp->pop->data);
	}
	
	return max;
}	
	

