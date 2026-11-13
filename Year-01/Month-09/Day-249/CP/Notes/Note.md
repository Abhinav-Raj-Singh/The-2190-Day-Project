# Learnings from Competitive programming


# Big O Notation

1. `Rules for Big-O notation`:

	1. `should not have constant`: like `O(N+K)` where `k` is constant then this will be written as `O(N)` because `N` will only change when changing input and will grow and always `N` will dominant over `K`.But for `O((N+M)/K)` this will get to `O(N+M)` as both are the variables and will work differently and we can't judge from this.
    
	2. `Should not have constant factors`: like `O(N/2)` or `O(N*2)` they will become `O(N)` the reason is same here as of first.

	3. `Only include the fastest growing function for each variable only`: `O(N^2 + N)` here both are variables but `N^2` will be faster and more dominant so this will becmoe `O(N^2)`.

	4. `Can never be 0, has to be at least O(1)`: because for any code bare minimum would be `O(1)`. because even wrong code will run for atleast `1` time.

	5. `Important quiz`: 
		1. `N + (M)(N^2) + (M^2)(N) + M`: then either simplify using mathematics or 
        consider what if this case is the `worse case` that is `N` `M` both are very very high then `(M)(N^2)` will dominate over `N` and `(M^2)(N)` over `M` so `O((M)(N^2)+(M^2)(N))`.

		2. `(N^3)/64 + 20N + (32NM)^2`: then `(N^3 + (N^2)(M^2)` and in worse case `N and M` are huge then `(N^2)(M^2)` and `N^3` will dominate because that has degree 4 , so `O((N^3)+(N^2)(M^2))` but if it is mentioned `M>=N` then `O((N^2)(M^2))`.


# Calculating Time Complexity Of Loops

1. `Simple loops`: when we are doing `constant time operations` in a loop then `TC` will be approx `O(N)` that is number of iterations of that loop.

2. `Nested loops`: then multiply number of iterations of each simple loop to get `TC`. But make sure when there are loops at same level then they will be added and loops which are not at same level they will be multiplied for calculating `TC`.

3. `Harcoded values`: while calculating `TC` of `nested loops` , then suppose `N = 3` and `M = 5` then `O(3*5)` as values are given they are no more variable then `O(15)` but this will become `O(1)` approx because these are constant time operations.

4. `Using mathematics for calculating time complexities`: sometimes we can't figure out directly `TC` of an `algorithm` in that case use mathematics.
 
	1. `Ex`: `for(int i = 1 ; i < n ; i *= 2){ // Elementary operations}` `TC` of this will be `i` is doubling every time so this won't run fully for `n` times assume that number may be as `2 raise to x` this times loop will run suppose this runs `N` times then taking log both sides on base 2 then `x . log2 to the base 2 = logN to the base 2` then `x = log N to the base 2` so `TC` is `log N to the base 2`.
    