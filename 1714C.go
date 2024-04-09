package main

import (
	"fmt"
	"strconv"
)

func allDistincDigits(n int) (digits string){
	if n < 10 {
		digits = strconv.Itoa(n)
		return digits
	}

	max_digit := 9
	for n > 0 {
		tmp_digit := strconv.Itoa(max_digit)
		digits = tmp_digit + digits
		n = n - max_digit
		max_digit--

		if n - max_digit <= 0 {
			tmp_digit = strconv.Itoa(n)
			digits = tmp_digit + digits
			break
		}
	}
	return digits
}

func main(){
	var t, s int
	fmt.Scanln(&t)
	for i := 0; i < t; i++ {
		fmt.Scanln(&s)
		digits := allDistincDigits(s)
		fmt.Println(digits)
	}
}