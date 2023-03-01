#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void createArray(char* nums, int* array, int& c);

int main() {
	
	bool play = true;
	char input[20];
	char oarray[101];
	int array[101];
	int count;

	while (play == true) {
		cout << "Manual, Random, Quit: ";
		cin.get(input, 20);
		cin.get();
		count = 0;	
		if (strcmp(input, "Manual") == 0) {
			char nums[100000];
			cout << "What numbers are you inputing(put a space between each number)? ";
			cin.get(nums, 100000);
			cin.get();
			createArray(nums, array, count);
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

void createArray(char* nums, int* array, int& c) {
	int count = 0;
	for (int i = 0;i < strlen(nums); i++) {
		if (nums[i] == ' ') {
			if(count == 1) {
				int temp = 0;
				temp = nums[i-1] - '0';
				array[c] = temp;
				c++;
				count = 0;
			}	
			else {
				int temp = 0;
				for (int j = 0; j < count; j++) {
					temp = 10 * temp + (nums[i- count + j] - '0');
				}
				array[c] = temp;
				c++;
				count = 0;
			}
		}
		else{
			int temp = 0;
			count++;
			if (i = strlen(nums) - 1) {
				for (int a = 0; a < count; a++) {
					temp = 10 * temp + (nums[i + a + 1 - count] - '0');
				}
				array[c] = temp;
				c++;
			}
		}
	}
	cout << array[0]<< endl;

}



