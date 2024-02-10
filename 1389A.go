package main

import (
	"fmt"
)

// greatest common divisor (GCD) via Euclidean algorithm
func GCD(a, b int) int {
	for b != 0 {
		t := b
		b = a % b
		a = t
	}
	return a
}

// find Least Common Multiple (LCM) via GCD
func LCM(a, b int) int {
	result := a * b / GCD(a, b)
	return result
}

func main() {
	var t int
	var l, r int

	fmt.Scanln(&t)
	for i := 0; i < t; i++ {
		fmt.Scanln(&l, &r)
		x := l
		y := l+1
		flag := true
		for y <= r {
			lcm := LCM(x, y)
			if lcm >= l && lcm <= r{
				fmt.Println(x, y)
				break
			}
			if flag {
				y += (x-1)
				flag = false
			} else {
				y += x
			}
		}
		if y > r {
			fmt.Println(-1, -1)
		}
	}
}