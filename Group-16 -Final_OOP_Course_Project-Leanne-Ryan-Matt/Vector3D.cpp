#include "Vector3D.h"
#include <cmath>
#include <sstream>
#include <iomanip>

Vector3D::Vector3D() : x(0), y(0), z(0) {}

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

double Vector3D::getX() const {
	return x;
}
double Vector3D::getY() const {
	return y;
}
double Vector3D::getZ() const {
	return z;
}

void Vector3D::setX(double x) {
	this->x = x;
}
void Vector3D::setY(double y) {
	this->y = y;
}
void Vector3D::setZ(double z) {
	this->z = z;
}
double Vector3D::distanceTo(const Vector3D& other) const {
	return std::sqrt(
		std::pow(x - other.x, 2) +
		std::pow(y - other.y, 2) +
		std::pow(z - other.z, 2)
	);
}
std::string Vector3D::toString() const {
	std::ostringstream oss;
	oss << std::fixed << std::setprecision(5)
		<< "(" << x << "," << y << "," << z << ")";
	return oss.str();
}
