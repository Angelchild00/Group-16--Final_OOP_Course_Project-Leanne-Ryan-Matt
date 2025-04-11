#pragma once
#include "Classifier.h"
#include <vector>
/**
 * @class NNClassifier
 * @brief Implements the Nearest Neighbor classification algorithm.
 *
 * This classifier uses Euclidean distance to determine the closest labeled sample
 * from the training data and assigns its label to the input vector.
 */
class NNClassifier : public Classifier {
private: 
	/**
	 * @brief Stored training samples for the classifier to use during prediction.
	 */
	std::vector<SampleData> trainingData;

public:
	/**
	* @brief Constructor for NNClassifier.
	*/
	NNClassifier();
	/**
	 * @brief Stores training data for use in prediction.
	 * @param data A vector of labeled SampleData used to train the classifier.
	 */
	void train(const std::vector<SampleData>& data) override;
	/**
	* @brief Predicts the label for a given input vector using the Nearest Neighbor algorithm.
	* @param input A Vector3D representing the gravity vector of the phone.
	 * @return The label of the closest matching training sample.
	*/
	std::string predict(const Vector3D& input) override;
	/**
	* @brief Returns the name of the classifier.
	* @return A string: "Nearest Neighbour Classifier".
	*/
	std::string getName() const override; 
};

