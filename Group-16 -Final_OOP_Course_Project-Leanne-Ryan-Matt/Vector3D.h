#pragma once
#include <string>

/**
 * @class Vector3D
 * @brief A class to store and manage 3D gravity vector values (x, y, z).
 *
 * Used to represent the orientation-related input data for classification.
 * Includes methods for access, distance calculation, and string formatting.
 */

class Vector3D
{
private: 
	/**
	* @brief Gravity value along the x-axis.
	*/
	double x;
	/**
	* @brief Gravity value along the y-axis.
	*/
	double y;
	/**
    * @brief Gravity value along the z-axis.
    */
	double z;

public:
	/**
    * @brief Default constructor. Initializes all components to 0.
    */
	Vector3D();
	/**
    * @brief Parameterized constructor.
    * @param x Gravity value along the x-axis.
    * @param y Gravity value along the y-axis.
    * @param z Gravity value along the z-axis.
    */
	Vector3D(double x, double y, double z);
	/**
	* @brief Gets the x value.
	* @return Value of x.
	*/
	double getX() const;
	/**
	* @brief Gets the y value.
	* @return Value of y.
	*/
	double getY() const;
	/**
	* @brief Gets the z value.
	* @return Value of z.
	*/
	double getZ() const; 
	/**
	* @brief Sets the x value.
	* @param x The new x value.
	*/
	void setX(double x);
	/**
	* @brief Sets the y value.
	* @param y The new y value.
	*/
	void setY(double y);
	/**
    * @brief Sets the z value.
    * @param z The new z value.
    */
	void setZ(double z);
	/**
	* @brief Calculates the Euclidean distance between this vector and another.
	* @param other Another Vector3D object to compare against.
	* @return The Euclidean distance as a double.
	*/
	double distanceTo(const Vector3D& other) const;
	/**
	* @brief Returns a string representation of the vector.
	* @return A string in the format: (x, y, z)
	*/
	std::string toString() const; 


};

