#pragma once

#include "Math3dVectorClass.h"

class Triangle {

public:

	Triangle(const Math3dVectorClass v1, const Math3dVectorClass v2, const Math3dVectorClass v3)
	{	
		_v1 = new Math3dVectorClass(v1);
		_v2 = new Math3dVectorClass(v2);
		_v3 = new Math3dVectorClass(v3);

	}

	double triangleArea(void) {

	}

private:
	// disable the default constructor 
	Triangle() {

	}

	Math3dVectorClass *_v1; // Vertex 1..3
	Math3dVectorClass *_v2;
	Math3dVectorClass *_v3;
};