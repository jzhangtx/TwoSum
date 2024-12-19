package main

import "fmt"

func twoSum(nums []int, target int) (int, int) {
	for i := 0; i < len(nums)-1; i++ {
		for j := i + 1; j < len(nums); j++ {
			if nums[i]+nums[j] == target {
				return i, j
			}
		}
	}

	return -1, -1
}

func main() {
	for {
		fmt.Print("Number of elements in the array: ")
		var count int
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		fmt.Print("The numbers in the array: ")
		nums := make([]int, count)
		for i := 0; i < count; i++ {
			fmt.Scan(&nums[i])
		}

		fmt.Print("The sum: ")
		var target int
		fmt.Scan(&target)

		ind1, ind2 := twoSum(nums, target)
		fmt.Printf("The two that have the sum of %d are %d, %d\n\n", target, ind1, ind2)
	}
}
