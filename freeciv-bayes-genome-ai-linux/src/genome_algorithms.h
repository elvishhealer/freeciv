#ifndef _FC_GENOME_ALGOS1_H_
#define _FC_GENOME_ALGOS1_H_

#include "genome.h"

/* 
 * front_bits_thresholdf :
 * 
 * if the left bits are one of the BitString (mostly int) are 1,
 * you have e.g. a long path for e.g. the AI bomber to the city.
 *
 * parameters :
 * threshold on BitString's front 1 bits, ls == left-shift value
 */
int front_bits_thresholdf(BitGenomePtr bgp, BitString front_bs, int ls); 

#endif
