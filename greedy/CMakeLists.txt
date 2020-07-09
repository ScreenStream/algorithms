 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME greedy)

 add_library(${TARGET_NAME}
         STATIC
         min-cost-to-connect-ropes.cpp
         jump-game.cpp
         maximum-length-of-pair-chain.cpp
         jump-game-ii.cpp
         video-stitching.cpp
         minimum-number-of-taps-to-open-to-water-a-garden.cpp
         rearrange-string-k-distance-apart.cpp
         can-place-flowers.cpp
         break-a-palindrome.cpp
         minimum-number-of-k-consecutive-bit-flips.cpp
         course-schedule-iii.cpp
         gas-station.cpp
         candy.cpp
         non-decreasing-array.cpp
         wiggle-subsequence.cpp
         assign-cookies.cpp
         boats-to-save-people.cpp
         bag-of-tokens.cpp
         queue-reconstruction-by-height.cpp
         lemonade-change.cpp
         divide-array-in-sets-of-k-consecutive-numbers.cpp
         hand-of-straights.cpp
         group-the-people-given-the-group-size-they-belong-to.cpp
         cinema-seat-allocation.cpp
         advantage-shuffle.cpp
         reorganize-string.cpp
         string-without-aaa-or-bbb.cpp
         remove-duplicate-letters.cpp
         smallest-subsequence-of-distinct-characters.cpp
         reduce-array-size-to-the-half.cpp
         maximum-nesting-depth-of-two-valid-parentheses-strings.cpp
         longest-happy-string.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)