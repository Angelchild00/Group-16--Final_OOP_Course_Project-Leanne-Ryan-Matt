#pragma once
#include "SampleData.h"
#include <vector>
#include <string>
/**
 * @class ReadWriteToFile
 * @brief Provides static methods to read sample data and write classification results to files.
 *
 * This class is responsible for low-level file operations, including parsing.
 */
class ReadWriteToFile{
public:
    /**
    * @brief Reads labeled sample data from a file.
    *
    * Expects each line in the file to follow the format:
    * x,y,z,label
    *
    * @param fileName The name of the file to read.
    * @return A vector of SampleData entries extracted from the file.
    */
	static std::vector<SampleData> readSamples(const std::string& fileName);
    /**
    * @brief Writes classification results to a file.
    *
    * Each line is formatted as: (x, y, z) -> predictedLabel
    *
    * @param fileName The name of the output file.
    * @param results A vector of pairs, where each pair contains a Vector3D and its predicted label.
    */
	static void writeResults(const std::string& filenName, const std::vector<std::pair<Vector3D, std::string>>& results);
};

