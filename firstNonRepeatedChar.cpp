
#include <iostream>
using namespace std;
#define NO_OF_CHARS 256


int* getCharCountArray(char* str)
{
	int* count = (int*)calloc(sizeof(int), NO_OF_CHARS);
	int i;
	for (i = 0; *(str + i); i++)
		count[*(str + i)]++;
	return count;
}

int firstNonRepeating(char* str)
{
	int* count = getCharCountArray(str);
	int index = -1, i;

	for (i = 0; *(str + i); i++) {
		if (count[*(str + i)] == 1) {
			index = i;
			break;
		}
	}

	// To avoid memory leak
	free(count);
	return index;
}

int main()
{
	char str[] = "geeksforgeeks";
	int index = firstNonRepeating(str);
	if (index == -1)
		cout << "Either all characters are repeating or "
			"string is empty";
	else
		cout << "First non-repeating character is "<<
			str[index];
	getchar();
	return 0;
}


