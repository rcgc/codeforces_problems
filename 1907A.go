package main

import (
	"fmt"
	"strconv"
)

func main() {
	var t int
	var position string
	var letters string = "abcdefgh"

	fmt.Scanln(&t)
	
	for j := 0; j < t; j++ {
		fmt.Scanln(&position)
		col := position[0]
		row, _ := strconv.Atoi(string(position[1]))

		for k := 1; k <= 8; k++ {
			if k != row {
				fmt.Printf("%s%d\n", string(col), k)
			}
		}

		for _, v := range letters {
			if byte(v) != col {
				fmt.Printf("%s%d\n", string(v), row)
			}
		}
	}
}