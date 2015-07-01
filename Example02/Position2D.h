#pragma once
class Position2D {
public:
	Position2D(double posXtoSet, double posYtoSet);
	Position2D();
	~Position2D();
	double* getPosition(double[]);
	void setPosition(double posXtoSet, double posYtoSet);
protected:
private:
	void init(double posXtoSet, double posYtoSet);



protected:
	static int countOfPosition;

	double mPosX;
	double mPosY;
	double mIdOfPosition;
};

