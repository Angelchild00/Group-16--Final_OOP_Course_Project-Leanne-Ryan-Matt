#include "DataManager.h"
#include "ReadWriteToFile.h"
#include <fstream>
#include <sstream>
#include <iostream>

std::vector<SampleData> DataManager::loadDataFromFile(const std::string& fileName) {
	return ReadWriteToFile::readSamples(fileName);
}
void DataManager::writeResultsToFile(const std::string& fileName, const std::vector<std::pair<Vector3D, std::string>>& results) {
	return ReadWriteToFile::writeResults(fileName, results);
}