package kata

func contains(s []int, e int) bool {
    for _, a:= range s {
	if a == e {
	    return true
	}
    }
    return false
}

func ArrayDiff(a, b[]int) []int {
    var newArray []int

    for i := 0; i < len(a); i++ {
	if !contains(b, a[i]) {
	    newArray = append(newArray, a[i])
	}
    }

    return newArray
}
