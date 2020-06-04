https://atcoder.jp/contests/dp
https://www.youtube.com/playlist?list=PLl0KD3g-oDOGJUdmhFk19LaPgrfmAGQfo



Q) Does anyone know in which situation 2 dimensional DP can be dropped to 1 dimension? Is there any principle or regular pattern?

A) Yes, the magic is observation from the induction rule/recurrence relation!
   
   For this problem (416. Partition Equal Subset Sum), the induction rule:
   
   If not picking nums[i - 1], then dp[i][j] = dp[i-1][j]
   if picking nums[i - 1], then dp[i][j] = dp[i - 1][j - nums[i - 1]]
   You can see that if you point them out in the matrix, it will be like:
   
   			  j
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . .  
   	. . ? . . ? . . . . . .  ?(left): dp[i - 1][j - nums[i], ?(right): dp[i - 1][j]
   i	. . . . . # . . . . . .  # dp[i][j]
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . . 
   Optimize to O(2*n): you can see that dp[i][j] only depends on previous row, so you can optimize the space by only using 2 rows instead of the matrix. Let's say array1 and array2. Every time you finish updating array2, array1 have no value, you can copy array2 to array1 as the previous row of the next new row.
   Optimize to O(n): you can also see that, the column indices of dp[i - 1][j - nums[i] and dp[i - 1][j] are <= j. The conclusion you can get is: the elements of previous row whose column index is > j(i.e. dp[i - 1][j + 1 : n - 1]) will not affect the update of dp[i][j] since we will not touch them:
   			  j
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . .  
   	. . ? . . ? x x x x x x  you will not touch x for dp[i][j]
   i	. . . . . # . . . . . .  # dp[i][j]
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . . 
   	. . . . . . . . . . . . 
   Thus if you merge array1 and array2 to a single array array, if you update array backwards, all dependencies are not touched!
   
       (n represents new value, i.e. updated)
   	. . ? . . ? n n n n n n n
                 #  
   However if you update forwards, dp[j - nums[i - 1]] is updated already, you cannot use it:
   
       (n represents new value, i.e. updated)
   	n n n n n ? . . . . . .  where another ? goes? Oops, it is overriden, we lost it :(
                 #  
   Conclusion:
   So the rule is that observe the positions of current element and its dependencies in the matrix. Mostly if current elements depends on the elements in previous row(most frequent case)/columns, you can optimize the space.
   
   
   
   https://leetcode.com/discuss/general-discussion/458695/dynamic-programming-patterns
   
   
   
   
I used to solve DP problems after DP problems without really it clicking in my head. I would see a solution and wonder "how the heck did they come with that solution..."

Here is my practical guide to solving DP problems.

The order of solving a dp problem should be 1) come up with a recurrence relation first 2) code it up. The first part only needs a pen and paper.

When coming up with a recurrence relation, separately come up with a general case and base cases.
**2.1 when coming up with a general case, assign well defined English meaning to your dp term, dp[...][...][...]... e.g. for https://leetcode.com/problems/longest-increasing-subsequence/, dp[i] = the length of the longest increasing subsequence that ENDS on element i.
**2.2 once you define your meaning, express the answer to the original problem in terms of your dp terms. If you can't do this, then it means your dp definition likely lacks certain necessary information. e.g. for longest increasing subsequence, ans == max(dp[i]) (because you don't know where an optimal solution ends)
**2.3 baes cases are usually straightforwardly defined if you follow the top-down approach. i.e. the conditions in which your recursive function ends.

People usually prefer either the top-down or the bottom-up style. Stick with one or the other and always code in some template. Then, writing code is a matter of translating your recurrence relation. This way, you avoid mistakes.

At its core, DP problems are really graph problems. Here each dp[...][...][...] terms are nodes and edges are drawn based on recurrence relations. For your problem to have a DP solution, this graph MUST BE a DAG. This is usually what textbooks mean "optimal substructure". For me, this connection of DP to its graph representation greatly helped.

Once you "get" the solid understanding, then solve problems to find and internalize common patterns.

To me, the practice of 2.1 and understanding of 4 were the tipping point. After that, DP became really easy for me and a weapon to solve many problems, that even have other solutions (usually greedy, which is harder to come up with)