#ifndef _FC_GENOME_H_
#define _FC_GENOME_H_

#include "population.h"

typedef Population Genome;
typedef PopulationPtr GenomePtr;

void make_genome(GenomePtr gp);
void add_to_genome(Data d, GenomePtr gp);

double genome_fitness(GenomePtr gp);

// mix with bitgenome void or_genome(GenomePtr gp 

#endif
