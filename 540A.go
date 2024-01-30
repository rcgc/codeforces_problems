package main

import (
	"fmt"
	"math"
	"strconv"
)

func getMin(n, target int) int{
	diff := int(math.Abs(float64(target) - float64(n)))
	inverse := 0
	
	if target >= n {
		inverse = int(10-target+n)
	} else {
		inverse = int(10-n+target)
	}

	if diff <= inverse {
		return diff
	} else {
		return inverse
	}
}

func main() {
	var start string
	var key string
	var n, acum int

	fmt.Scanln(&n)
	fmt.Scanln(&start)
	fmt.Scanln(&key)

	for i:=0; i<n; i++ {
		s, _ := strconv.Atoi(string(start[i]))
		k, _ := strconv.Atoi(string(key[i]))
		acum += getMin(s, k)
	}
	fmt.Println(acum)
}