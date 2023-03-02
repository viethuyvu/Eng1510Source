import string

paragraph = input("Enter a paragraph...\n")

# Remove leading and trailing white space
paragraph = paragraph.strip()

# Split the paragraph into words
words = paragraph.split()

word_count = len(words)
sentence_count = 0

# Count the number of sentences
for char in paragraph:
    if char in ".?!" and char not in words:
        sentence_count += 1

if not paragraph:
    print("Word count: 0")
    print("Sentence count: 0")
    print("You did not enter any text!")
else:
    if sentence_count == 0:
        print("Word count:", word_count)
        print("Sentence count: 0")
        print("You did not enter any sentences!")
    else:
        print("Word count:", word_count)
        print("Sentence count:", sentence_count)
        print("Average words per sentence: {:.1f}".format(word_count/sentence_count))
