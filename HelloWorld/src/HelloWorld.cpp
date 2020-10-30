//============================================================================
// Name        : HelloWorld.cpp
// Author      : miguel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <boost/compute/core.hpp>

using namespace std;
namespace compute = boost::compute;

int main() {
	// get default device and setup context
	compute::device device = compute::system::default_device();

	// print the device's name
	std::cout << "hello from " << device.name() << std::endl;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

