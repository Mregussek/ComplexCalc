#include <math.h>
#include <iostream>

namespace com
{   
    class complex
    {
    public:
        explicit complex() = default;
        void menu();

    private:
        void setComplex();
        void eConversion();
        
        void setInverseComplex();
        void normalConversion();

        double getCos(double);
        double getSin(double);
        double getArcTg();
        double radToDegree(double);
        double degreeToRad(double);
        double module();
        void infiniteSetComplex();
        void infiniteSetInverseComplex();

    private:
        const double PI = 3.14159265;
        double re;
        double im;
        double mod;
        double ang;
    };
}