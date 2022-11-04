package kata

import "strings"

func FindShort(s string) int {
	words := strings.Fields(s)

	answer := len(words[0])
	for _, word := range words {

		if len(word) < answer {
			answer = len(word)
		}
	}

	return answer
}
