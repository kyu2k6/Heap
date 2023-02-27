#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void createArray(char* nums);

int main() {
	
	bool play = true;
	char input[20];
	int array[101];

	while (play == true) {
		cout << "Manual, Random, Quit: ";
		cin.get(input, 20);
		cin.get();	
		if (strcmp(input, "Manual") == 0) {
			char nums[100000];
			cout << "What numbers are you inputing(put a space between each number)? ";
			cin.get(nums, 100000);
			cin.get();
			createArray(nums);
		}
		else if (strcmp(input, "Random") == 0) {
			
		}
		else if (strcmp(input, "Quit") == 0) {
			play = false;
		}
		else {
			cout << "Invalid Input" << endl;
		}
	}

}

void createArray(char* nums) {
	int temp;
	for (int i = 0;i < strlen(nums); i++) {
		if (num[i] == ' ') {
			cout << temp << endl;
		}
		else {
			temp += num[i];
		}
	}
}



