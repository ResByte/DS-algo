/*
This is code for boost::phoenix tutorial. 
It is part of functional programming paradigm in boost. 
Using Boost.Phoenix it is possible to return another function. 
Phoenix v/s lamda function
*/
#include <boost/phoenix/phoenix.hpp>
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	std::vector<int> v{1,2,3,4,5};

	auto lambda = [](int i){return i % 2 == 1;};
	std::cout << std::count_if(v.begin(), v.end(), lambda) << '\n';

	std::vector<long> v2;
	v2.insert(v2.begin(),v.begin(),v.end());

	using namespace boost::phoenix::placeholders;
	auto phoenix = arg1 % 2 == 1;
	std::cout << std::count_if(v.begin(),v.end(), phoenix) << '\n';
	std::cout << std::count_if(v2.begin(), v2.end(), phoenix) << '\n';
	return 0;
}
