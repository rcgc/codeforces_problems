package main

import "fmt"

// https://stackoverflow.com/questions/39565055/read-a-set-of-integers-separated-by-space-in-golang
func Scan(a *int) (int, error) {
	return fmt.Scan(a)
}

func ReadN(all[] int, i, n int){
	if n == 0 {
		return
	}
	Scan(&all[i])
	ReadN(all, i+1, n-1)
}

func main() {
	var t, n int
	Scan(&t)
	for i := 0; i < t; i++ {
		Scan(&n)

		all := make([]int, n)
		ReadN(all, 0, n)
		max, tmp := 0, 0

		for j := 0; j < n; j++ {
			if all[j] == 0 {
				tmp++
				if tmp > max {
					max = tmp
				}
			} else if all[j] == 1 {
				tmp = 0
			}
		}
		fmt.Printf("%d\n", max)
	}
}