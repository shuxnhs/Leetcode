package usually

import "sort"

/**
 *  多数元素
 * 给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 * 你可以假设数组是非空的，并且给定的数组总是存在多数元素。
 */
func majority(nums []int) int {
	countMap := make(map[int]int)
	for i:=0; i< len(nums); i++ {
		countMap[nums[i]]++
	}
	var max, maxRes int
	for key,value := range countMap{
		if value >= max{
			max = value
			maxRes = key
		}
	}
	return maxRes
}

func majorityElement(nums []int) int {
	sort.Ints(nums)
	return nums[len(nums) / 2]
}
