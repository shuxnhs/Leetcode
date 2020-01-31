package usually

/**
 *  鸡蛋掉落
 *   你将获得 K 个鸡蛋，并可以使用一栋从 1 到 N  共有 N 层楼的建筑。
 *   每个蛋的功能都是一样的，如果一个蛋碎了，你就不能再把它掉下去。
 *   你知道存在楼层 F ，满足 0 <= F <= N 任何从高于 F 的楼层落下的鸡蛋都会碎，从 F 楼层或比它低的楼层落下的鸡蛋都不会破。
 *   每次移动，你可以取一个鸡蛋（如果你有完整的鸡蛋）并把它从任一楼层 X 扔下（满足 1 <= X <= N）。
 *   你的目标是确切地知道 F 的值是多少。
 *   无论 F 的初始值如何，你确定 F 的值的最小移动次数是多少？
 */

// 解法：动态规划
// dp[n][k] n层楼k个鸡蛋
// dp[i][1] = i     有i层楼一个鸡蛋只能从下面一层一层往上试，需要i次
// dp[n][k] = min(1 + max(dp[i-1][k-1], dp[n-i][k]))  其中：(i in [1, n])
// k个鸡蛋从i层往下扔时，有两种情况：
// 碎了：楼层i层下，那么只能从下面往上扔 dp[i-1][k-1]
// 没碎：楼层i层上，，往上扔dp[n-i][k]
// 取两种情况的最大值+本次的最小值就是最小移动次数 min(1+max(dp[i-1][k-1], dp[n-i][k]))

func superEggDrop(K int, N int) int {
	const maxK = 100
	const maxN = 10000
	var dp [maxN + 1][maxK + 1]int
	for i := 0; i <= maxN; i++ {
		dp[i][1] = i
		dp[i][0] = 0
	}
	for n := 1; n <= N; n++ {
		for k := 2; k <= K; k++ {
			var min = int(^uint(0) >> 1)
			for i := 1; i <= n; i++ {
				max := 1 + Max(dp[i-1][k-1], dp[n-i][k])
				if min > max {
					min = max
				}
			}
			dp[n][k] = min
		}
	}
	return dp[N][K]
}
func Max(x, y int) int {
	if x < y {
		return y
	}
	return x
}
