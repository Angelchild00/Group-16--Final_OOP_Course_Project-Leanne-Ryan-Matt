#pragma once
#include "SampleData.h"
#include <string>
#include <vector>

/**
 * @class Classifier
 * @brief Abstract base class for all classifiers.
 *
 * Defines the interface that all classifier implementations must follow.
 * Includes methods for training, predicting, and identifying the classifier.
 */

class Classifier {
public:
	/**
	* @brief Virtual destructor.
	*
	* Ensures proper cleanup of derived classes when using polymorphism.
	*/
	virtual ~Classifier() {}
	/**
	* @brief Train the classifier with a set of labeled data samples.
	* @param data A vector of SampleData used for training.
	*/
	virtual void train(const std::vector<SampleData>& data) = 0;
	/**
	* @brief Predict the label of an input vector.
	* @param input A Vector3D representing the input features.
	* @return A string representing the predicted label.
	*/
	virtual std::string predict(const Vector3D& input) = 0;
	/**
	 * @brief Retrieve the name of the classifier.
	 * @return A string representing the classifier's name.
	 */
	virtual std::string getName() const = 0; 
};

