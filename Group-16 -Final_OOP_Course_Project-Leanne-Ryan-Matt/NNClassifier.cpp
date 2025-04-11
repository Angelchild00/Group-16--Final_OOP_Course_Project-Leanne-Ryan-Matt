#include "NNClassifier.h"
#include <cfloat>
#include <cmath>
#include <iostream>

NNClassifier::NNClassifier() {}
void NNClassifier::train(const std::vector<SampleData>& data) {
	trainingData = data;
	std::cout << "Training data loaded: " << trainingData.size() << " samples.\n";
}
std::string NNClassifier::predict(const Vector3D& input) {
	double minDistance = DBL_MAX;
	std::string predictedLabel = "UNKNOWN";
	for (const SampleData& sample : trainingData) {
		double distance = input.distanceTo(sample.getVector());
		if (distance < minDistance) {
			minDistance = distance;
			predictedLabel = sample.getLabel();
		}
	}
	return predictedLabel;
}

std::string NNClassifier::getName() const {
	return "Nearest Neighbour Classifier";
}
