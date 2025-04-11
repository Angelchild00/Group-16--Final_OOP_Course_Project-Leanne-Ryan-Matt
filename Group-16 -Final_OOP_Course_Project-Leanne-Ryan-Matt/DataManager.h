#pragma once
#include "SampleData.h"
#include <string>
#include <vector>
/**
 * @class DataManager
 * @brief Handles loading and saving data for the classifier system.
 *
 * Provides static methods for reading labeled sample data from files and
 * writing prediction results to output files.
 */
class DataManager {
public: 
    /**
    * @brief Loads labeled training or test data from a file.
    *
    * Each line of the file should contain comma-separated values in the format:
    * x,y,z,label
    *
    * @param fileName The name of the input file to read.
    * @return A vector of SampleData objects parsed from the file.
    */
	static std::vector<SampleData> loadDataFromFile(const std::string& fileName);
    /**
    * @brief Writes classification results to an output file.
    *
    * Each line is formatted as: (x, y, z) -> predictedLabel
    *
    * @param fileName The name of the output file.
    * @param results A vector of pairs where each pair contains a Vector3D and the predicted label.
    */

	static void writeResultsToFile(const std::string& fileName, const std::vector<std::pair<Vector3D, std::string>>& results);
};

