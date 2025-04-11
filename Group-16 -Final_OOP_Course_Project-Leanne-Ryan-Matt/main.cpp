#include <iostream>
#include <memory>
#include "NNClassifier.h"
#include "AnotherClassifier.h"
#include "KNNClassifier.h"
#include "DataManager.h"

int main() {

	std::unique_ptr<Classifier> classifier = nullptr;

	std::cout << "Phone Orientation Main Menu: \n";
	std::cout << "Choose a Classifier: \n";
	std::cout << "1. Nearest Neighbour Classifier\n";
	std::cout << "2. Another Classifier (not implemented)\n";
	std::cout << "3. KNN Classifier (not implemented)\n";
	std::cout << "Choice (1, 2, 3): ";

	int choice;
	std::cin >> choice; 

	switch (choice) {
	case 1:
		classifier = std::make_unique<NNClassifier>();
		break;
	case 2: 
		classifier = std::make_unique<AnotherClassifier>();
		break;
	case 3: 
		classifier = std::make_unique<KNNClassifier>();
		break;
	default: 
		std::cout << "Invalid choice. Exiting program...\n";
		return 1;
	}

	std::cout << "\n Selected: " << classifier->getName() << "\n";


	//load training data

	std::vector<SampleData> trainingData = DataManager::loadDataFromFile("trainingData.txt");
	classifier->train(trainingData);

	std::cout << "\nHow did you want to test the data?\n";
	std::cout << "1. Single Sample (enter x,y,z)\n";
	std::cout << "2. Load unknownData.txt and write to result.txt\n";
	std::cout << "Choice: ";

	int mode;
	std::cin >> mode;

	if (mode == 1) {
		double x, y, z;
		std::cout << "Enter Gravity Vector (x,y,z): ";
		std::cin >> x >> y >> z;
		Vector3D input(x, y, z);
		std::string result = classifier->predict(input);
		std::cout << "Predicted orientation is: " << result << "\n";
	}
	else if (mode == 2) {
		std::vector<SampleData> unknownData = DataManager::loadDataFromFile("unknownData.txt");
		std::vector<std::pair<Vector3D, std::string>> results;

		for (const auto& sample : unknownData) {
			std::string prediction = classifier->predict(sample.getVector());
			results.emplace_back(sample.getVector(), prediction);
		}

		DataManager::writeResultsToFile("result.txt", results);
	}	
	else {
		std::cout << "Invalid Input. Exiting program...\n";
	}
	std::cout << "Program Complete, exiting...";
	return 0;
}