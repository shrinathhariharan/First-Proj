#include <iostream>
#include <cmath>

double getValue(char letterValue)
{
    std::cout << "Enter the '" << letterValue << "' value: ";
    double numInput{};
    std::cin >> numInput;
    return numInput;
}

void zeroFinder(double a, double b, double c)
{
    const double discriminant{std::pow(b, 2) - 4 * a * c};
    const bool real{discriminant >= 0};

    double plusSolution{(-b + std::sqrt(std::abs(discriminant))) / (2 * a)}; //turns all solutions into real and stores through variables
    double minusSolution{(-b - std::sqrt(std::abs(discriminant))) / (2 * a)};

    std::cout << "The solutions are:\n";
    if (real)
    {
        if (plusSolution == minusSolution)
        {
            std::cout << "The solution is:\n" << plusSolution << " (multiplicity 2)\n"; //finds the solution for discriminant = 0
            std::cout << "The x-intercept is:\n (" << plusSolution << ", 0)";
        }
        else
        {
            std::cout << "The solutions are:\n" << plusSolution << '\n' << minusSolution << '\n'; // finds solutions for discriminant > 0
            std::cout << "The x-intercepts are:\n (" << minusSolution << ", 0)\n (" << plusSolution << ", 0)\n";
        }
    }
    else
        std::cout << "The solutions are:\n" << plusSolution << 'i' << '\n' << minusSolution << 'i' << '\n'; //finds solutions for discriminant < 0 (imaginary)
}

void vertexFinder(double a, double b, double c)
{
    double xVertex{-b / (2 * a)}; //finds x vertex
    double yVertex{a * std::pow(xVertex, 2)}; // finds y vertex through two steps 
    yVertex = yVertex + (b * xVertex) + c; //-Second step
    
    std::cout << "The vertex is:\n (" << xVertex << ", " << yVertex << ")\n";
}

int main()
{
    std::cout << "This finds the zeros, intercepts, and vertex for a given quadratic!\n";

    double aValue{getValue('a')}; //asks the user to input ax^2+bx+c
    double bValue{getValue('b')};
    double cValue{getValue('c')};

    zeroFinder(aValue, bValue, cValue);

    std::cout << "The y intercept is: \n" << "(0, " << cValue << ")\n";

    vertexFinder(aValue, bValue, cValue);

    return 0;


}
