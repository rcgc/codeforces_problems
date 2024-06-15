package main

import (
	"fmt"
	"sort"
)

func ReadN(arr []int, i, n int) {
	if n == 0 {
		return
	}
	fmt.Scan(&arr[i])
	ReadN(arr, i+1, n-1)
}

func Scan(a *int) (int, error) {
	return fmt.Scan(a)
}

func main() {
	var t, n int
	fmt.Scan(&t)

	
	for i := 0; i<t; i++ {
		fmt.Scan(&n)
		arr := make([]int, n)
		ReadN(arr, 0, n)

		sort.Ints(arr)
		min := arr[0]
		acum := 0

		for j := 0;  j < n; j++{
			acum += arr[j]-min
		}
		fmt.Println(acum)
	}
}