#include "SampleData.h"

SampleData::SampleData() : vector(Vector3D()), label("") {}
SampleData::SampleData(const Vector3D& vec, const std::string& label) : vector(vec), label(label) {}

Vector3D SampleData::getVector() const{
	return vector;
}
std::string SampleData::getLabel() const {  
	return label; 
}
void SampleData::setVector(const Vector3D& vec) {
	vector = vec; 
}
void SampleData::setLabel(const std::string& newLabel) {
	label = newLabel;
}
std::string SampleData::toString()const {
	return vector.toString() + "->" + label;
}