
#include "iostream"
#include "string"
#include "LaborkaConfig.h"

	/*std::cout << "sin(90)" << degreemath::sin(90) << std::endl;
	std::cout << "cos(90)" << degreemath::cos(90) << std::endl;
	std::cout << "tg(90)" << degreemath::tg(90) << std::endl;
	std::cout << "ctg(90)" << degreemath::ctg(90) << std::endl;*/

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include "cmath"
#endif

int main(int argc, char* argv[]) {

	if (argc == 3) {
		double result = 0;
		std::string option = argv[1];

		if (!option.compare("--sin")) {
#ifdef USE_TRIGONOMETRY_DEGREE
			result = degreemath:sin(atof(argv[2]));
#else
			result = cos(atof(argv[2]));
#endif

			std::cout << "wynik: " << result << std::endl;

		}
		else if (!option.compare("--cos")) {
#ifdef USE_TRIGONOMETRY_DEGREE
			result = degreemath:cos(atof(argv[2]));
#else
			result = cos(atof(argv[2]));
#endif

			std::cout << "wynik: " << result << std::endl;
		}
		else if (!option.compare("--tg")) {
#ifdef USE_TRIGONOMETRY_DEGREE
			result = degreemath:tg(atof(argv[2]));
#else
			result = cos(atof(argv[2]));
#endif

			std::cout << "wynik: " << result << std::endl;
		}
		else if (!option.compare("--ctg")) {
#ifdef USE_TRIGONOMETRY_DEGREE
			result = degreemath:ctg(atof(argv[2]));
#else
			result = cos(atof(argv[2]));
#endif

			std::cout << "wynik: " << result << std::endl;
		}
		return 0;
	}
}

