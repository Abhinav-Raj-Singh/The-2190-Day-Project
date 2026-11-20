# Points to Note

1. `Point-3`: Test cases matter, unless there's a limit explicitly imposed in the `constraints`. like when written following line then `test cases` won't matter `The sum of n over all the testcases doesn't exceed 10^5`. when this line is written then compare your `solution code` directly with `10^8` but when this is not mentioned then divide `10^8` by worst  `test cases limit`and you will will a number then compare your solution with that obtained `average time complexity` to avoid `TLE` in even `worse` case keep your solution's `Time Comlexity` below that obtained number.

2. `Point-4`: The `constants` and `constant factor` are removed when calculating Big-O still matter. We only remove them and even ignore when our `variable` will grow relatively higher and faster that we won't bother about them. like `N+2` we can ignore `2` but `N + 10^6` we can't ignore `10^6`.

3. `Note`: when you are writing `solution` then always write `time complexity` of that also and even when refer someone's else code then their code's `time complexity` also to check how much optimised code that one is and is there is scope to optimise more. And even try to optimise more and more as possible to become better `cpr`.


# Space Complexity

1. `Space Complexity`: this is extension of `time complexity` and whenever we will talk about `time complexity` we will talk about this also . This is the same idea as of `time complexity `just the difference is that in this we won't talk how `fast` our code will run we will talk about how much `space` our code will take.

2. `What is space complexity`: extra `memory` used by the `algorithm`. This is the  `worst case approximate space` your `algorithm` will take. everytime  `memory limit` is also written in the question as `time limit` is mentioned .Examples are below:

	1. `Variables`: Even if you just `declared` them and not `assigned` still they will occupy some `space` and when `assign` them their will take up more `space`.
	2. `Arrays/Vectors` 
	3. `Recursion Stack`

3. `Why need space and time complexity`: a goog `cpr` always try to write optimised solution to avoid `wastage` of our `resources` as `time` and `memory` both are limited.

4. `How to calculate space complexit`: check what space our program is taking and we will use even `Big-O` Notation and even will use all rules of `time complexity` , just we will talk in perspective of `space`.

# Binary numbers(xoring)

1.  `Properties of bitwise operators`: 

	1. `xoring with itself gives 0`: `a^a` is `0`.
	2. `xoring with 0 gives that number`: `a^0` is `a`.
	3. `xoring follows associative property`: `a^b^c` is same as `a^c^b`.

