int countSubstring(string sentence, string substr, int counter, int sbstrLength) {
	
	sbstrLength = sbstrLength % substr.length();
	
	//check if counter != sentence length {
	// if match return the method + 1 and increment counter
	if (counter < sentence.length()) {
		//check if the sentence first letter == substr fst letter
		if (sentence[counter] == substr[sbstrLength] ) {
			if (sbstrLength == substr.length() -1) {
				return 1 + countSubstring(sentence, substr, counter += 1, sbstrLength += 1);
			}
			else {
				return countSubstring(sentence, substr, counter += 1, sbstrLength += 1);
			}
		}
		// else return the method and increment counter
		else {
			return  countSubstring(sentence, substr, counter += 1, 0);
		}
	}
	//if sentence length reached return 0
	else return 0;
}

int main()
{
	
	string sentence, substr;
	//take the centence
	cout << "enter sentence" << endl;
	getline(cin, sentence);
	//take the substring
	cout << "enter substring: " << endl;
	cin >> substr;
	// hi this is a test sentence
	cout << "The sentence contains: " << countSubstring(sentence, substr, 0, 0) << " times " << substr << endl;
}
