package kata

import "fmt"

func CreatePhoneNumber(numbers [10]uint) string {
	result := ""
	numIndex := 0

	for i := 0; i < 14; i++ {
		if i == 0 {
			result += "("
		} else if i == 4 {
			result += ")"
		} else if i == 5 {
			result += " "
		} else if i == 9 {
			result += "-"
		} else {
			result += fmt.Sprint(numbers[numIndex])
			numIndex += 1
		}
	}

	return result
}
