#ifndef _FC_POPULATION_H_
#define _FC_POPULATION_H_

#include "list.h"

// statistics distribution/population of doubles
// also a genome

typedef struct population { ListPtr pop; int count; 
} Population;

typedef Population *PopulationPtr;

void make_population(PopulationPtr pp);
void free_population(PopulationPtr pp);

void add_to_population(Data d, PopulationPtr pp);
void add_to_population_back(Data d, PopulationPtr pp);

// statistical methods 

double population_sum(PopulationPtr pp);
double population_estimate(PopulationPtr pp);
double population_max(PopulationPtr pp);

#endif
