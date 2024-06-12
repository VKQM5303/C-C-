#include <stdio.h>
int main(void)
{
	srand(time(0)); 
	char const *articles[] = {"the", "a", "one", "some", "any"};
	char const *nouns[] = {"boy", "girl", "dog", "town", "car"};
	char const *verbs[] = {"drove", "jumped", "ran", "walked", "skipped"};
	char const *prepositions[] = {"to", "from", "over", "under", "on"};

	char sentence[80]; 
	int i;
	for (i = 0; i < 20; i++)
	{
		sprintf(sentence, "%s %s %s %s %s %s."
				, articles[rand() % 5]
				, nouns[rand() % 5]
				, verbs[rand() % 5]
				, prepositions[rand() % 5]
				, articles[rand() % 5]
				, nouns[rand() % 5]
			);
		sentence[0] = toupper(sentence[0]);
		puts(sentence);
	}
	return 1;
}