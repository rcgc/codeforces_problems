package main

import "fmt"

func main() {
	var n int

	fmt.Scanln(&n)

	if n%2 == 0 {
		fmt.Println("Mahmoud")
	} else {
		fmt.Println("Ehab")
	}
}