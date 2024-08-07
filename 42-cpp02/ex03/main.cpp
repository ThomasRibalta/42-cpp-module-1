#include "Point.hpp"


int main(void)
{
	Point a(2, 0);
	Point b(0, 2);
	Point c(0, 0);
	Point e(1, 1);
    std::cout << "AFFIRMATION : LES POINTS SONT DANS LE TRIANGLE ABC (1 vrai, 0 FAUX) : " << std::endl;
	std::cout << "Le point e est dans le triagnle ABC : " << bsp(a, b, c, e) << std::endl;
	Point f(3, 0);
	std::cout << "Le point f est dans le triagnle ABC : " << bsp(a, b, c, f) << std::endl;

	return (0);
}
