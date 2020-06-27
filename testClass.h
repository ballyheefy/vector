#pragma once


#include <iostream>

class testClass {


public:
	testClass() 
	{

		// default constructor
		count = 999;
	}

	void printer(void) {
		std::cout << count << "\n";

	}

	bool compare(int a, int b) {
		return(a == b);
	}


protected:

private:
	int count;


};