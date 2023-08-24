def reverse_words(text: str):
    words = text.split(" ")
    result = ""

    for word in words:
        reversed_word = ""

        for i in range(len(word) - 1, -1, -1):
            reversed_word += word[i]

        print(reversed_word)

        result = result + reversed_word + " "

    return result[:1]


print(reverse_words("This is an example!"))
