#include "energy.h"

#include <stdlib.h>
#include <math.h>

double norm(EnergyVector v)
{
	return v.x * v.x + v.y * v.y + v.z * v.z;	
}

double cos_alpha(EnergyVector v)
{
	return norm(v) * norm(v) / angular_momentum_energy(v, rand());
}

double angular_momentum_energy(EnergyVector v, double mass)
{
	return (1/2 * mass * pow(v.x+v.y+v.z, 2)) + mass * 9.81 * (v.x+v.y+v.z); 
}

