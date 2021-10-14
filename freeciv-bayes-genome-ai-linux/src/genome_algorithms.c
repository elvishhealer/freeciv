#include "genome_algorithms.h"

int front_bits_thresholdf(BitGenomePtr bgp, BitString front_bs, int ls)
{
	if (bgp->string & (front_bs << ls)) 
		return 0; // NOTE : match
	else
		return -1; // NOTE : no match
}

