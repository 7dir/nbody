#ifndef NBODY_SOLVER_EULER_H
#define NBODY_SOLVER_EULER_H

#include "nbody_solver.h"

class NBODY_DLL nbody_solver_euler : public nbody_solver
{
	nbody_engine::memory*	m_dy;
public:
	nbody_solver_euler();
	~nbody_solver_euler();
	const char* type_name() const override;
	void advise(nbcoord_t dt) override;
};

#endif // NBODY_SOLVER_EULER_H
