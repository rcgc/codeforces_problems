package main

import "fmt"

func main() {
	var n int
	var s string
	tmp, acum := 0, 0

	fmt.Scanln(&n)
	fmt.Scanln(&s)

	for i := 0; i<n; i++ {
		if s[i]== 'x' {
			tmp++
			if tmp >= 3 {
				acum++
			}
		} else {
			tmp = 0
		}
	}
	fmt.Println(acum)
}