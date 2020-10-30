//============================================================================
// Name        : HelloWorld.cpp
// Author      : miguel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
#include <iostream>
#include <boost/format.hpp>

using namespace std;
using namespace boost;

int main()
{
    unsigned int arr[5] = { 0x05, 0x04, 0xAA, 0x0F, 0x0D };

    cout << format("%02X-%02X-%02X-%02X-%02X")
            % arr[0]
            % arr[1]
            % arr[2]
            % arr[3]
            % arr[4]
         << endl;
}

*/
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

