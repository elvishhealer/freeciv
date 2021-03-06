#include "bitgenome.h"

#include<stdlib.h>

void make_bitgenome(BitGenomePtr gp)
{
	gp = (BitGenomePtr)malloc(sizeof(BitGenome));
	gp->string = 0;
}

void free_bitgenome(BitGenomePtr gp)
{
	free(gp);
}

double bitgenome_fitness(BitGenomePtr gp)
{
	return (double)gp->string / sizeof(BitString);
}

int bitgenome_count(BitGenomePtr gp)
{
	return sizeof(gp->string);
}

void or_bitgenome(BitString bs, BitGenomePtr gp)
{
	gp->string |= bs;
}

