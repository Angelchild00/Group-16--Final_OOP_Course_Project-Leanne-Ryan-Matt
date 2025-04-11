#include "ReadWriteToFile.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

std::vector<SampleData> ReadWriteToFile::readSamples(const std::string& fileName) {
	std::vector<SampleData> data;
	std::ifstream file(fileName);

	if (!file) {
		std::cerr << "[Read] Error opening file: " << fileName << std::endl;
		return data;
	}
	std::string line;
	while (std::getline(file, line)) {
		std::replace(line.begin(), line.end(), ',', ' ');
		std::istringstream iss(line);
		double x, y, z;
		std::string label;

		if (!(iss >> x >> y >> z))
			continue;
		std::getline(iss, label);
		if (!label.empty() && label[0] == ' ')
			label = label.substr(1);
		Vector3D vector(x, y, z);
		data.emplace_back(vector, label);
	}
	return data; 
}
void ReadWriteToFile::writeResults(const std::string& fileName, const std::vector<std::pair<Vector3D, std::string>>& results) {
	std::ofstream outFile(fileName);
	if (!outFile) {
		std::cerr << "[Write] Error writing to file: " << fileName << std::endl;
		return;
	}
	for (const auto& result : results) {
		outFile << result.first.toString() << " -> " << result.second << "\n";
	}
		std::cout << "[Write] Results written to: " << fileName << std::endl; 
}
