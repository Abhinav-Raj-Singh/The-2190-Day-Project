# Data Types and Conditionals

1. `Data types`: language in which variables are not bound to `data type's` value we will place that language is `dynamically typed`.

	1. `Number`: integer and floating values are allowed.
		1. `Some special numeric values`: 
			1. `Infinity`: either when did `1/0` or harcoded in variable as `let check = Infinity;`.
			2. `NaN`: this is a computational error result of incorrect or undefined mathematical operation as `"not a number"/2` or `NaN+2`. Only exception is ``NaN ** 0` is `1``. 

		2. `BigInt`: after safe range their `approximation` is only stored as there will be `precision loss` at that time. to create it just `append n` at last of the number as `let check = 1234567890123456789012345678901234567890n;`.
        
        
	2. `String`: this may consist 0 ( `empty string` ) , 1 or as many.
		1. `Double quotes`
		2. `Single quotes`
		3. `Backticks`: there is no difference between double and single quotes so which ever you chose to use , use that consistently throughout your code . But `backticks` are used to `embed variables or expressions` in a string as when we will wrap `bt Hello, ${name} bt` then this will print hello along with value in name in one line. We can even put arithmetic expression and that expressions result will be placed there as `let ae = bt evaluating arithmetic expression, ${2+5} bt;`. Even you can add two `variables` in one as `let joined = bt${one} ${two}bt` but difference in this way or using `+` is that this will automatically add a space between the both `strings`. You can even write multi line `strings` when you will `print` that `string` that will be printed that line order in which you typed `exact line breaks` will be shown.
			1. `Line break characters \n`: when you will apply this in `string` then from that point `string` line will be broke and start from `new line`.
		4. `How to use quotes in strings`: 
			1. `Using another quote to wrap`: when wanted to show `double quotes` then `wrap` with `single quotes` and when wanted to show both then wrap with `backticks`.  
			2. `Escape that character`: `const string = "I\"m"`.
		5. `Number and string concatenating`: `2+"This"` this will be `"2This"`.
			1. `Converting to Number`: then `Number(variable);`.
			2. `Converting to String`: then `String(variable);`.
            
	3. `Boolean (logical type)`: can be used as `let check = true;` or `let isGreater = 4>1;`.

	4. `The null value`: `let age = null;` in `js` this is not a `reference to a non-existing object` or a `null pointer` this is `special type` representing `nothing`, `empty` or `value unknown`.

	5. `The undefined value`: this is a type its own. this means `value is not assigned`. When a `variable` is `empty` then that it is `Undefined` as `let age; alert(age); // Shows undefined` we can even explicitly assign as `let age = undefined` but `explict method` for undefined is not recommended because we reserve `default intial value` instead we use `null`.
    
	6. `Objects and Symbols`: These are `special type`, all above were `primitive data types` means they will contain only one value in constrast `object` store more collections of data and more `complex entities`. The `symbol` type is used to create unique identifiers to `objects`.