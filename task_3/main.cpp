#include <iostream>
#include <cmath>

class complexNumber {
public:

    double firstImageNumber;
    double firstRealNumber;
    void setValues(double image, double real) {
        firstImageNumber = image;
        firstRealNumber = real;
    }

     double abs() const {
        return firstRealNumber * firstRealNumber - firstImageNumber * firstImageNumber;
    }

    complexNumber operator+(const complexNumber &c) const
    {
        complexNumber temp{};

        temp.firstRealNumber = firstRealNumber + c.firstRealNumber;
        temp.firstImageNumber = firstImageNumber + c.firstImageNumber;

        return temp;
    }
    complexNumber operator - (complexNumber &c) const
    {
        complexNumber temp{};

        temp.firstRealNumber = firstRealNumber - c.firstRealNumber;
        temp.firstImageNumber = firstImageNumber - c.firstImageNumber;

        return temp;
    }
    complexNumber operator *(const complexNumber &c) const {
        complexNumber temp{};
        temp.firstRealNumber = firstRealNumber * c.firstRealNumber;
        temp.firstImageNumber = firstRealNumber * c.firstImageNumber;

        return temp;
    }
    complexNumber operator /(const complexNumber &c) const {
        complexNumber temp{};
        double r = c.firstRealNumber * c.firstRealNumber + c.firstImageNumber * c.firstImageNumber;
        temp.firstRealNumber = (firstRealNumber * c.firstRealNumber + firstImageNumber * c.firstImageNumber) / r;
        temp.firstRealNumber = (firstImageNumber * c.firstRealNumber - firstRealNumber * c.firstImageNumber) / r;
        return temp;
    }

};
std::ostream& operator<<(std::ostream& stream, const complexNumber& obj) {
    return stream << obj.firstImageNumber << " + " << obj.firstRealNumber << "i";
}
class Vector {
    double a1, a2, a3;
    double b1, b2, b3;
    double vector_a[3];
    double vector_b[3];
public:
    void setValues(double _a1, double _a2, double _a3, double _b1, double _b2, double _b3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;
        vector_a[0] = a1;
        vector_a[1] = a2;
        vector_a[2] = a3;
        b1 = _b1;
        b2 = _b2;
        b3 = _b3;
        vector_b[0] = b1;
        vector_b[1] = b2;
        vector_b[2] = b3;
    }
    double plus() {
        double vector_c[3];
        vector_c[0] = vector_a[0] + vector_b[0];
        vector_c[1] = vector_a[1] + vector_b[1];
        vector_c[2] = vector_a[2] + vector_b[2];
        for (double t : vector_c)
        {
            return t;
        }
    }
    double multiply() {
        double vector_c[3];
        vector_c[0] = vector_a[0] * vector_b[0];
        vector_c[1] = vector_a[1] * vector_b[1];
        vector_c[2] = vector_a[2] * vector_b[2];
        for (double t : vector_c)
        {
            return t;
        }
    }
};
class aCircle {
    float p = 3.14;
    double r{};
public:
    void setValues(double _r) {
        r = _r;
    }
     double square() const {
        return p*pow(r, 2);
    }

     double distance() const {
        return 2 * p * r;
    }

};
int main() {
    return 0;
};