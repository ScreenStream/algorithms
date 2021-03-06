 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME dp)

 add_subdirectory(knapsack)

 add_library(${TARGET_NAME}
         STATIC
         fibonacci-number.cpp
         coin-change.cpp
         minimum-path-sum.cpp
         house-robber.cpp
         min-cost-climbing-stairs.cpp
         climbing-stairs.cpp
         unique-paths.cpp
         decode-ways.cpp
         minimum-falling-path-sum.cpp
         minimum-costs-for-tickets.cpp
         2-keys-keyboard.cpp
         perfect-squares.cpp
         triangle.cpp
         maximal-square.cpp
         longest-common-subsequence.cpp
         longest-palindromic-subsequence.cpp
         shortest-common-supersequence.cpp
         longest-increasing-path-in-matrix.cpp
         count-square-submatrices-with-all-ones.cpp
         number-of-dice-rolls-with-target-sum.cpp
         knight-probability-in-chessboard.cpp
         target-sum.cpp
         combination-sum-IV.cpp
         knight-dialer.cpp
         domino-and-tromino-tiling.cpp
         soup-servings.cpp
         dice-roll-simulation.cpp
         minimum-swaps-to-make-sequences-increasing.cpp
         number-of-longest-increasing-subsequence.cpp
         unique-paths-II.cpp
         out-of-boundary-paths.cpp
         number-of-ways-to-stay-in-the-same-place-after-some-steps.cpp
         count-vowels-permutation.cpp 
         minimum-cost-tree-from-leaf-values.cpp 
         unique-binary-search-trees.cpp 
         minimum-score-triangulation-of-polygon.cpp 
         remove-boxes.cpp 
         minimum-cost-to-merge-stones.cpp 
         burst-balloons.cpp 
         guess-number-higher-or-lower-II.cpp 
         palindromic-substrings.cpp 
         edit-distance.cpp 
         distinct-subsequences.cpp
         minimum-ascii-delete-sum-for-two-strings.cpp
         longest-palindromic-substring.cpp 
         best-time-to-buy-and-sell-stock.cpp 
         best-time-to-buy-and-sell-stock-with-transaction-fee.cpp 
         best-time-to-buy-and-sell-stock-with-cooldown.cpp 
         best-time-to-buy-and-sell-stock-III.cpp 
         best-time-to-buy-and-sell-stock-IV.cpp 
         dungeon-game.cpp 
         minimum-number-of-refueling-stops.cpp
         cherry-pickup.cpp
         cherry-pickup-II.cpp
         number-of-ways-of-cutting-a-pizza.cpp
         wildcard-matching.cpp
         longest-valid-parentheses.cpp
         regular-expression-matching.cpp
         maximal-rectangle.cpp
         interleaving-string.cpp
         word-break.cpp
         word-break-ii.cpp
         longest-string-chain.cpp
         house-robber-II.cpp
         longest-increasing-subsequence.cpp
         largest-divisible-subset.cpp
         russian-doll-envelopes.cpp
         maximum-length-of-pair-chain.cpp
         delete-and-earn.cpp
         partition-to-k-equal-sum-subsets.cpp
         palindrome-partitioning-ii.cpp
         matrix-block-sum.cpp
         range-sum-query-2d-immutable.cpp
         longest-arithmetic-sequence.cpp
         longest-arithmetic-subsequence-of-given-difference.cpp
         best-time-to-buy-and-sell-stock-ii.cpp
         predict-the-winner.cpp
         stone-game.cpp
         greatest-sum-divisible-by-three.cpp
         count-numbers-with-unique-digits.cpp
         longest-turbulent-subarray.cpp
         number-of-ways-to-wear-different-hats-to-each-other.cpp
         smallest-sufficient-team.cpp
         linked-list-in-binary-tree.cpp
         student-attendance-record-ii.cpp
         ugly-number-ii.cpp
         numbers-at-most-n-given-digit-set.cpp
         stone-game-iii.cpp
         stone-game-ii.cpp
         minimum-distance-to-type-a-word-using-two-fingers.cpp
         delete-operation-for-two-strings.cpp
         odd-even-jump.cpp
         super-egg-drop.cpp
         length-of-longest-fibonacci-subsequence.cpp
         least-operators-to-express-number.cpp
         race-car.cpp
         unique-binary-search-trees-ii.cpp
         house-robber-iii.cpp
         paint-fence.cpp
         counting-bits.cpp
         wiggle-subsequence.cpp
         paint-house.cpp
         can-i-win.cpp
         cheapest-flights-within-k-stops.cpp
         filling-bookcase-shelves.cpp
         minimum-difficulty-of-a-job-schedule.cpp
         number-of-ways-to-paint-n-3-grid.cpp
         maximum-sum-of-3-non-overlapping-subarrays.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         knapsack
         ${CMAKE_SOURCE_DIR})