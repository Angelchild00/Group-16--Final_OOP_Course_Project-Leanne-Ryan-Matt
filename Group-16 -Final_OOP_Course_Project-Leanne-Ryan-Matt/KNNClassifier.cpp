#include "KNNClassifier.h"
void KNNClassifier::train(const std::vector<SampleData>& data) {
	std::cout << "{KNN Classifier} train() called, function not implemented" << std::endl;
}
std::string KNNClassifier::predict(const Vector3D& input) {
	std::cout << "{KNN Classifier} predict() called, function not implemented" << std::endl;
	return "UNKNOWN";
}
std::string KNNClassifier::getName() const {
	return "KNNClassifier";
}