#include "AnotherClassifier.h"

void AnotherClassifier::train(const std::vector<SampleData>& data) {
	std::cout << "{Another Classifier} train() called, function not implemented" << std::endl;
}
std::string AnotherClassifier::predict(const Vector3D& input) {
	std::cout << "{Another Classifier} predict() called, function not implemented" << std::endl;
	return "UNKNOWN";
}
std::string AnotherClassifier::getName() const {
	return "AnotherClassifier";
}
