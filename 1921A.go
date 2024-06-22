package main

import (
	"fmt"
	"math"
)

type Point struct {
	x int
	y int
}

func distance(p1, p2 Point) int {
	d := math.Sqrt(float64( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) ))
	return int(d)
}

func main() {
	var t int
	var points [4]Point

	fmt.Scan(&t)

	for i := 0; i<t; i++ {
		for j := 0; j<4; j++ {
			fmt.Scan(&points[j].x, &points[j].y)
		}

		d := 0
		for j := 1; j<4; j++ {
			tmp := points[0] 
			if points[j].x == tmp.x {
				d = distance(points[0], points[j])
				break
			}
		}
		
		fmt.Printf("%d\n", d*d)
	}
}