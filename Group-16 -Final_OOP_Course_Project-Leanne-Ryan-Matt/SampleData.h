#pragma once
#include "Vector3D.h"
#include <string>
/**
 * @class SampleData
 * @brief Represents a labeled data sample consisting of a gravity vector and a corresponding label.
 *
 * Used for both training and prediction in classifier systems.
 */
class SampleData {
private:
	/**
	* @brief A 3D gravity vector (x, y, z).
	*/
	Vector3D vector;
	/**
	* @brief The orientation label associated with the vector.
	*/
	std::string label;
public:
	/**
	* @brief Default constructor for SampleData.
	*/
	SampleData();
	/**
	* @brief Parameterized constructor.
	* @param vector The gravity vector.
    * @param label The orientation label.
    */
	SampleData(const Vector3D& vector, const std::string& label);
	/**
	* @brief Retrieves the vector component of the sample.
	* @return The Vector3D object.
	*/
	Vector3D getVector()const;
	/**
	* @brief Retrieves the label of the sample.
	* @return The label as a string.
	*/
	std::string getLabel() const;
	/**
	* @brief Sets the vector component of the sample.
	* @param vec The new Vector3D to set.
	*/
	void setVector(const Vector3D& vec);
	/**
	* @brief Sets the label for the sample.
	* @param label The new label to set.
	*/
	void setLabel(const std::string& label);
	/**
	* @brief Converts the sample to a formatted string.
	* @return A string representation: "(x, y, z) -> label".
	*/
	std::string toString() const;

};

