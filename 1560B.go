package main

import (
	"fmt"
	"math"
)

func main() {
	var t int
	var a, b, c int
	fmt.Scanln(&t)
	
	for i:=0; i<t; i++ {
		fmt.Scanln(&a, &b, &c)
		diff := int(math.Abs(float64(a-b)))
		if a > 2*diff || b > 2*diff || c > 2 * diff {
			fmt.Println("-1");
			continue
		}
		if c <= diff {
			fmt.Println(c+diff)
			continue
		} else {
			fmt.Println(c-diff)
			continue
		}
	}
}