void conVowl(){
	char letter;
	int vowel_count = 0;
	int consonant_count = 0;
	for (letter = 'A'; letter <= 'Z'; letter++){
		switch(letter){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel_count++;
				break;
			default:
				consonant_count++;	
		}
	}
	printf("vowel=%d\nconsonant=%d\n",vowel_count,consonant_count);
}
