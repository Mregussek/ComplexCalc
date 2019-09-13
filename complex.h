#include <math.h>
#include <iostream>

namespace com
{   
    /**
     * Complex Class is a represenation of the whole application,
     * which calculates result from given data.
     */
    class complex
    {
    private:
        const double PI = 3.14159265;
        double re;
        double im;
        double mod;
        double ang;

    public:
        /**
         * Default Constructor, actually does nothing
         */
        explicit complex() = default;
        
        /**
         * Main method from which application starts and displays menu.
         */
        void menu();

    private:
        /**
         * Method for settings complex number by giving Realis and Imaginalis part.
         */
        void setComplex();
        
        /**
         * Continuation of method above, created for an issue, when user gave wrong data
         * and we have to again set it correctly.
         */
        void infiniteSetComplex();

        /**
         * Method for converting and displaying data with given Re and Im part in
         * module and angulus.
         */
        void eConversion();
        
        /**
         * Method for settings complex number by giving Module and Angulus.
         */
        void setInverseComplex();

        /**
         * Continuation of method above, created for an issue, when user gave wrong data
         * and we have to again set it correctly.
         */
        void infiniteSetInverseComplex();

        /**
         * Method for converting and displaying data with given Mod and Ang in 
         * Realis and Imaginalis format.
         */
        void normalConversion();

        /**
         * Calculates cosine from given parameter.
         * Firstly converts to Degrees from Radians and then cosine.
         * 
         * @param a angulus in radians
         * 
         * @return c result of cosine function
         */
        double getCos(double a);

        /**
         * Calculates sine from given parameter.
         * Firstly converts to Degrees from Radians and then sine.
         * 
         * @param a angulus in radians
         * 
         * @return s result of sine function
         */
        double getSin(double a);

        /**
         * Calculates Arctangent from Realis and Imaginalis format.
         * 
         * @return result result of cosine function
         */
        double getArcTg();

        /**
         * Converts radians to degrees.
         * 
         * @param x angulus in radians
         * 
         * @return result angulus in degrees
         */
        double radToDegree(double x);

        /**
         * Converts degrees to radians.
         * 
         * @param x angulus in degrees
         * 
         * @return result angulus in radians
         */
        double degreeToRad(double x);

        /**
         * Calculates module from Realis and Imaginalis format.
         * 
         * @return result module
         */
        double module();
        
        
    };
}