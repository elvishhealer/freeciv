#include "bitgenome.h"

#include<stdlib.h>

void make_bitgenome(BitGenomePtr gp)
{
	gp = (BitGenomePtr)malloc(sizeof(BitGenome));
	gp->string = 0;
}

double bitgenome_fitness(BitGenomePtr gp)
{
	return (double)gp->string / sizeof(BitString);
}

void or_bitgenome(BitString bs, BitGenomePtr gp)
{
	gp->string |= bs;
}

