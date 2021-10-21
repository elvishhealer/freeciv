#ifndef _FC_ENERGY_H_
#define _FC_ENERGY_H_

typedef struct {
	double x;
	double y;
	double z;
} EnergyVector;

double norm(EnergyVector v);
double cos_alpha(EnergyVector v);

double angular_momentum_energy(EnergyVector v, double mass);

#endif
