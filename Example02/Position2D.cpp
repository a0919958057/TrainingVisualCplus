#include "Position2D.h"
#include <iostream>

using namespace std;

Position2D::Position2D() {
	init(0.0, 0.0);
}

Position2D::Position2D(double posXtoSet, double posYtoSet) {
	init(posXtoSet, posYtoSet);
}



Position2D::~Position2D() {
	// TODO: 離開時要說這是第幾個被刪除的
}

double* Position2D::getPosition(double to_put_position[]) {
	to_put_position[0] = mPosX;
	to_put_position[1] = mPosY;

	return to_put_position;
}

void Position2D::setPosition(double posXtoSet, double posYtoSet) {
	this->mPosX = posXtoSet;
	this->mPosY = posYtoSet;
}

void Position2D::init(double posXtoSet, double posYtoSet) {
	countOfPosition++;
	this->setPosition(posXtoSet, posYtoSet);
	this->mIdOfPosition = countOfPosition;
	cout << "ID:" << this->mIdOfPosition << 
		"\tPos:(" << this->mPosX << "," << this->mPosY << ")" << endl;
	return;
}

int Position2D::countOfPosition = 0;