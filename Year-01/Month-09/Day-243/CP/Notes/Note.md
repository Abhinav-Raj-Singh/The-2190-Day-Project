# Time Complexity


# Elementary Operations

1. `The elementary operations`: such input whose `size` won't affect the computing time of a computer such `operation` is known as `constant time operation` or `elementary operation` and this is represented as `O(1)`. Or we can say An `operation` that takes `constant time` . Following `operators` are included in this list.

	1. `Boolean operators`: `And` , `Or` , `Not`.
    
	2. `Arithmetic operators`: `+` , `-` , `*` , `/` , `%`.

		1. `%` is heavier than `*` , `/` and these are heavier than `+` , `-`.`

	3. `Comparison of primitive data types`: `>` , `<` , `==` . `Primitive data types` as `int,float, char etc` ,`string` is not `primitive data type`.

	4. `Input and output of primitive data type`.

	5. `Don't forget!`: in `C++` almost `10^8` `elementary operations` per second is executed.

	6. `pow`: this is not an `elementary operator`.


# Time Complexity

1. `What is Time Complexity more formally`: this is a `mathematical function` that describes how the number of `operations` in an `algorithm` grows with the `size` of the `input`.this is `approximation` how long the program will run. 

	1. `Note`: use `10^8` `elementary operations` almost 1 second of time.
    
2. `Contraints`: they tell us the limit of the `input` which helps us to figure out the `time` under which our program must run to didn't get `TLE`.

3. `Why we approximate`: because as the `input size` increases number of `operations` also grows. and we want generic `function` so we find `time complexity` for any desire value.

4. `How contraints help us`: they used to figure out which approach would work when you have 2 to 3 approaches and confused which one to implement you can find `time complexity` of each approach and then decide the most `optimised` `approach` to `implement`.