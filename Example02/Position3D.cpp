#include "Position3D.h"


Position3D::Position3D() : Position2D(),mPosZ(0.0) {
}

Position3D::Position3D(double posXtoSet,double posYtoSet, double posZtoSet) 
	: Position2D(posXtoSet, posYtoSet), mPosZ(posZtoSet) {
}

double* Position3D::getPosition(double to_put_position[]) {
	to_put_position[0] = mPosX;
	to_put_position[1] = mPosY;
	to_put_position[2] = mPosZ;

	return to_put_position;
}


Position3D::~Position3D() {
}
