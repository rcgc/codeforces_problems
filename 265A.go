package main

import "fmt"

func main(){
	var s, t string
	idx := 0

	fmt.Scanln(&s)
	fmt.Scanln(&t)

	for i := 0; i<len(t); i++ {
		if t[i] == s[idx] {
			idx++
		}
	}
	fmt.Println(idx+1)
}