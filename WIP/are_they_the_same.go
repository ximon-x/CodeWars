package kata

func Comp(array1 []int, array2 []int) bool {
	if array1 == nil || array2 == nil {
		return false
	}

	var found bool

	for _, i := range array1 {
		found = false

		for _, j := range array2 {
			if j%i == 0 {
				found = true
			}
		}

		if found == false {
			return false
		}
	}

	return true
}
