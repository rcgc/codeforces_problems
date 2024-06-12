package main

import "fmt"

func main() {
	var t, n int
	fmt.Scan(&t)

	for i :=0; i<t; i++ {
		fmt.Scan(&n)
		if n == 1 {
			fmt.Println(2)
		} else {
			fmt.Println((n+2)/3)
		}
	}
}