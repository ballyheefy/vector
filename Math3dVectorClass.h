#pragma once
#include <assert.h>

const double VectorInitializationValue = 0;
const size_t MandatoryVectorSize = 3;

class Math3dVectorClass {

public:

	Math3dVectorClass () { // default construtcor
		_x = VectorInitializationValue;
		_y = VectorInitializationValue;
		_z = VectorInitializationValue;
	}

	Math3dVectorClass(double x, double y, double z) : _x(x), _y(y), _z(z) {}

	Math3dVectorClass(double *p, size_t s) {
		assert(s == MandatoryVectorSize);
		double* dp = p;
		_x = *dp++;
		_y = *dp++;
		_z = *dp;
	}

	Math3dVectorClass(const Math3dVectorClass *v) : _x(v->_x), _y(v->_y), _z(v->_z) {
		// the copy constructor
	}

	Math3dVectorClass(const Math3dVectorClass& v) : _x(v._x), _y(v._y),_z(v._z) {
		// the copy constructor
	}

	const double getX(void) { return _x; }
	const double getY(void) { return _y; }
	const double getZ(void) { return _z; }
	void setX(const double x) { _x = x; }
	void setY(const double y) { _y = y; }
	void setZ(const double z) { _z = z; }
protected:


private:

	double _x;
	double _y;
	double _z;
};