#pragma once
#include "Position2D.h"
class Position3D :
	public Position2D
{
public:
	Position3D();
	Position3D(double posXtoSet, double posYtoSet, double posZtoSet);
	virtual ~Position3D();
	double* getPosition(double to_put_position[]);

protected:
	double mPosZ;
};

