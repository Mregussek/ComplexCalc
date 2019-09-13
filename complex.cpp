#include "complex.h"

void com::complex::menu()
{
    std::cout << "1. re + j im\n";
    std::cout << "2. mod - ang\n";
    std::cout << "3. Exit\n";
    std::cout << "Choose: ";
    char dec;
    std::cin >> dec;

    switch(dec)
    {
        case '1':
            this ->setComplex();
            this ->eConversion();
            break;
        case '2':
            this ->setInverseComplex();
            this ->normalConversion();
            break;
        case '3':
            exit(0);
        
        default:
            this ->menu();
            break;
    }
}

void com::complex::setInverseComplex()
{
    std::cout << "Module: ";
    double mod;
    std::cin >> mod;

    std::cout << "Angulus: ";
    double ang;
    std::cin >> ang;

    std::cout << "\n";
    std::cout << "Is this correct? - ";
    char dec;

    std::cout << "Mod: " << mod << " - Ang: " << ang << "\n";

    std::cout << "[Y/N] - ";
    std::cin >> dec;

    if(dec == 'n' || dec == 'N')
        infiniteSetInverseComplex();  
    else
    {
        this ->mod = mod;
        this ->ang = ang;
    }
}

void com::complex::normalConversion()
{
    double cos = getCos(this ->ang);
    double sin = getSin(this ->ang);
    double re = this ->mod * cos;
    double im = this ->mod * sin;

    if(im > 0)
        std::cout << re << " " << " + j " << im << "\n";
    else if(im < 0)
        std::cout << re << " " << " - j " << -1 * im << "\n";
    else
        std::cout << re << "\n";
}

void com::complex::eConversion()
{
    double mod = module();
    double ang = radToDegree( getArcTg() );

    std::cout << "Module: " << mod << " - " << "Ang: " << ang << "\n";
}

double com::complex::getCos(double a)
{
    double c = cos( degreeToRad(a) );
    return c;
}

double com::complex::getSin(double a)
{
    double s = sin( degreeToRad(a) );
    return s;
}

double com::complex::getArcTg()
{
    double result = atan2(im, re);

    return result;
}

double com::complex::radToDegree(double x)
{
    double result = x * 180.0 / PI;

    return result;
}

double com::complex::degreeToRad(double x)
{
    double result = x * PI / 180;

    return result;
}

void com::complex::setComplex()
{
    std::cout << "Write re: ";
    double re;
    std::cin >> re;

    std::cout << "Write im: ";
    double im;
    std::cin >> im;

    std::cout << "\n";
    std::cout << "Is this correct? - ";
    char dec;

    if(im > 0)
        std::cout << re << " " << " + j " << im << "\n";
    else if(im < 0)
        std::cout << re << " " << " - j " << -1 * im << "\n";
    else
        std::cout << re << "\n";

    std::cout << "[Y/N] - ";
    std::cin >> dec;

    if(dec == 'n' || dec == 'N')
        infiniteSetComplex();  
    else
    {
        this ->re = re;
        this ->im = im;
    }
}

double com::complex::module()
{
    double pow_re = pow(re, 2);
    double pow_im = pow(im, 2);
    double sum = pow_re + pow_im;
    double result = sqrt(sum);

    return result;
}

void com::complex::infiniteSetComplex()
{
    char dec;
    double re;
    double im;

    do
    {
        std::cout << "Write re: ";
        std::cin >> re;

        std::cout << "Write im: ";
        std::cin >> im;

        std::cout << "\n";
        std::cout << "Is this correct? - ";

        if(im > 0)
            std::cout << re << " " << " + j " << im << "\n";
        else if(im < 0)
            std::cout << re << " " << " - j " << -1 * im << "\n";
        else
            std::cout << re << "\n";
        
        std::cout << "[Y/N] - ";
        std::cin >> dec;
    } while (dec == 'n' || dec == 'N');

    this ->re = re;
    this ->im = im;
}

void com::complex::infiniteSetInverseComplex()
{
    double mod;
    double ang;
    char dec;

    do
    {
        std::cout << "Module: ";
        std::cin >> mod;

        std::cout << "Angulus: ";
        std::cin >> ang;

        std::cout << "\n";
        std::cout << "Is this correct? - ";

        std::cout << "Mod: " << mod << " - Ang: " << ang << "\n";

        std::cout << "[Y/N] - ";
        std::cin >> dec;
    } while (dec == 'n' || dec == 'N');
    
    this ->mod = mod;
    this ->ang = ang;
}