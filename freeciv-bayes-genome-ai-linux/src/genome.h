#ifndef _FC_GENOME_H_
#define _FC_GENOME_H_

#include "population.h"
#include "bitgenome.h"

typedef Population Genome;
typedef PopulationPtr GenomePtr;

void make_genome(GenomePtr gp);
void free_genome(GenomePtr gp);

void add_to_genome(Data d, GenomePtr gp);

double genome_fitness(GenomePtr gp);

void bitgenome2genome(BitGenomePtr bgp, GenomePtr gp);

// FIXME mix with bitgenome void or_genome(GenomePtr gp 

#endif
