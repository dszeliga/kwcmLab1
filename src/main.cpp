
#include "iostream"
#include "string"
#include "LaborkaConfig.h"
int main(){

	/*std::cout << "sin(90)" << degreemath::sin(90) << std::endl;
	std::cout << "cos(90)" << degreemath::cos(90) << std::endl;
	std::cout << "tg(90)" << degreemath::tg(90) << std::endl;
	std::cout << "ctg(90)" << degreemath::ctg(90) << std::endl;*/

#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include "cmath"
#endif

double result;
#ifdef USE_TRIGONOMETRY_DEGREE
	result = degreemath:sin(90.0);
#else
	result = cos(3.14/4.0);
#endif

	std::cout << "wynik: " << result << std::endl;
	return 0;
}