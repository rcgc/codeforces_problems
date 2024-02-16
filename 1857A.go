package main

import "fmt"

func ReadN(arr []int, i, n int) {
	if n == 0 {
		return
	}
	Scan(&arr[i])
	ReadN(arr, i+1, n-1)
}

func Scan(a *int) (int, error) {
	return fmt.Scan(a)
}

func main() {
	var t int
	var n int
	
	Scan(&t)
	for i := 0; i < t; i++ {
		Scan(&n)
		arr := make([]int, n)
		ReadN(arr, 0, n)
		odd := 0

		for _, v := range arr {
			if v%2 == 1 {
				odd ++
			}
		}
		if odd%2 == 1 {
			fmt.Println("NO")
		} else {
			fmt.Println("YES")
		}
	}
}