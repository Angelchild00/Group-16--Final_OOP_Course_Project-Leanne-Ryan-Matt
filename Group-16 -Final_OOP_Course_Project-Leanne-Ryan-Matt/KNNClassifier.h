#pragma once
#include "Classifier.h"
#include <vector>
#include <string>
#include <iostream>
/**
 * @class KNNClassifier
 * @brief A placeholder for a k-nearest neighbor classifier.
 *
 * This class implements the Classifier interface but does not perform actual classification.
 * It is included for demonstration and interface testing purposes.
 */

class KNNClassifier : public Classifier {
	/**
	* @brief Prints a message indicating this function is not implemented.
	* @param data A vector of training samples (ignored).
	*/
	void train(const std::vector<SampleData>& data) override;
	/**
	* @brief Prints a message indicating this function is not implemented.
	* @param input A Vector3D sample to classify (ignored).
	* @return Always returns "UNKNOWN".
	*/
	std::string predict(const Vector3D& input) override;
	/**
	* @brief Returns the name of this classifier.
	* @return A string: "KNNClassifier".
	*/
	std::string getName() const override;
};

