#pragma once
#include "Classifier.h"
#include <string>
#include <vector>
#include <iostream>

/** 
* @class AnotherClassifier
* @brief A placeholder class that implements the Classifier interface. Is not functional.
* 
* This class is currently used to represent polymorphism and abstraction.
* All functions only print that they are not implemented
*/
class AnotherClassifier : public Classifier {
public:
	/**
	* @brief Prints a message to state that the function is not implemented
	* @param data A vector of data samples for training (not used).
	* 
	*/
	void train(const std::vector<SampleData>& data) override;
	
	/**
	* @brief Prints a message indicating prediction is not implemented.
	* @param input A Vector3D sample to classify (ignored).
    * @return A placeholder string "UNKNOWN".
	* 
	*/
	std::string predict(const Vector3D& input) override;

	/**
	* @brief Returns the name of the classifier.
	* @return A string: "AnotherClassifier".
	*/

	std::string getName() const override;
};

