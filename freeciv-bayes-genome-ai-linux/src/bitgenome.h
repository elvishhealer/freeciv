#ifndef _FC_BITGENOME_H_
#define _FC_BITGENOME_H_

typedef int BitString;

typedef struct bitgenome {
	BitString string;
} BitGenome;

typedef BitGenome *BitGenomePtr;

void make_bitgenome(BitGenomePtr gp);
double bitgenome_fitness(BitGenomePtr gp);

void or_bitgenome(BitString bs, BitGenomePtr gp);

#endif
