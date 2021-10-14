#ifndef _FC_PROB_H_
#define _FC_PROB_H_

// probability system

typedef double Probability;

Probability probability(double d);

Probability conditional_probability(Probability d);

Probability pand(Probability p, Probability pbconda); 
Probability porp(Probability p, Probability p2, Probability pbconda); 

#endif
