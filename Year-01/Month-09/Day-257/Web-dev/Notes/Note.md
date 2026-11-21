# Flexbox

1. `issue of centering`: sometimes we try to `center` our text , but we couldn't in `flexbox` then try to use `align-items: center;` this will `center` your text sometimes placement of `container` is also fine but we miss just this think.


# Javascript

# 1. Variables and Operators

1. `How to run Javascript code`: intially in `foundation` we will run through `browser` later on from `NodeJS` path we will run through computer locally. `JS code` always runs from `top` to `bottom`. So make sure when you are trying to access anything that should be already created first. It is a `interpreted` `language` and use `just-in-time` `compiling` now days.

2. `How to write javascript in the html file itself`: in `body` include `<script> </script> tag` and write whatever you want in `javascript`.

3. `console.log("")`: whatever you will write in this `double quotes` you will see output printed in `console` when you will `inspect` your `website`. 

4. `Link external javascript file in html`: this is similar to linking external css , in header tag write `<script src="file_name.js"></script>`.

5. `Variables`: storage `container` for data in code.

	1. `Declaring and printing variables on console`: when declaring make sure to use `let` as prefix `let` as `let name = "check";`. Printing `console.log(name);`. Make sure to `declare` one `variable` only one time .
    
	2. `Declaring multiple variables in one line`: `let user = 'John' , age = 25;`. It is not recommended to do so because this decrease `readibility` of our `program` but below ways are allowed to do so.

	3. ```javascript
	  let user = 'John',
      age = 25,
       message = 'Hello';
	   ```

	4. ```Javascript
	    let user = 'John'
		, age = 25
	  , message = 'Hello';
	   ```

6. `Variable naming rules`: 

	1. `Must contain`: only `letters` , `digits`, `symbols` `$` and `_` only.
	2. `First character`: don't be a `digit`.
	3. `Multi word variable name`: then expect first word each other words should start with `capital` `first` letter as `myVeryLongWord`. And this is `camelCase`.
	4. `case matters`
	5. `Symbols don't have extra meanings`.
	6. `Use english language only to write`
	7. `Can't use reserved names`
	8. `Declare first and then use`: even though this is allowed to use `variable` first and then even create it but this is not recommended and also in `strict mode` this is not allowed at all means once you wrote `"use strict;"` after this line all used first `variable` and then `declared` will throw error.
	9. `making constant variable`: we can easily `re assign ` any  `variable` just first `declare` with `let` and then use the `name` of the `variable` directly and `re assign` value to prevent this use `const` to `declare` a `variable` as `const pi = 3.14;`. This is used when we wanted to share a fact.
		1. `Upper case and underscore naming`: use this when we are `harcoding` something like `const COLOR_RED = "#F00";`
		2. `Normal naming`: `const pageLoadTime: ;` use this when we our `variable` will be calculated at `run time `.

	10. `Declaring variables using var`: this is same as `let` but now majorly we use `let`.

	11. `Name things right`: A `variable` name should have a `clean`, `obvious meaning`, `describing` the `data` that it `stores`. `variable` `naming` tells whether a `program` is written by `newbie` or `experienced programmer`.Some rules below:

		1. Use `human-readable` names like `userName` or `shoppingCart`.
		2. Stay away from `abbreviations` or `short names `like a, b, and c, `unless you know` what you’re doing.
		3. Make names `maximally descriptive` and `concise`. Examples of bad names are `data` and `value`. Such names` say nothing`. It’s only okay to use them if the context of the code makes it exceptionally obvious which `data` or `value` the `variable` is `referencing`.
		4. Agree on terms within your `team` and in your mind. If a site visitor is called a `“user”` then we should name related variables `currentUser` or `newUser` instead of `currentVisitor` or `newManInTown`.
		5. `Reuse or recreate?`: many `devs` `reuse` already used `variable` but this is not recommended at all , An extra `variable` is `good`, not `evil`.

7. `Numbers in javascript`: `javascript` follows the following order to solve any `mathematical` `equation`. `PEMDAS`
	1. `Order of evaluation`
		1. **`Parentheses`** (or Brackets) are evaluated first.
		2. **`Exponentiation`** is done next, from right to left.
		3. **`Multiplication`** and **`Division`** are done next, from left to right.
		4. **`Addition`** and **`Subtraction`** are done last, from left to right.
	2. `Numbers and operators`: 
		1. `Number types`:Despite there are `two types` of `numbers` but in `JS` they are considered as just `numbers`.
			1. `Integers`
			2. `Floating points numbers`
		2. `Different types of number system`:
			1. `Binary`
			2. `Octal`
			3. `Hexadecimal`
	3. `type of`: this tells us `data type` of the `value` inside a `variable` as `console.log(typeof variable_name);` this will gives us `data type of` `value` present in `variable_name` is .
	4. `Useful number methods`:
		1. `toFixed`: `console.log(my_Variable.toFixed(2));` this will print only 2 digits `after decimal point` and `even round of` last digit as per the rules of mathematics.

8. `Dynamic vs static code`: 
	1. `Dynamically`: changes as requested and show different things in different circumstances.
	2. `Static`: won't change keep same as it is.

9. `Order of running`: generally the order we keep in our file that order is used when running our `website` , so place things accordingly.

10. `External , internal , inline javascript`: 
	1. `Internal`: written inside the `script tag` in the `body` of `HTML`.
	2. `External`: this is created a separate file and then link as we link external css and this is useful when we wanted to keep our HTML clutter free and even reuse that file across multiple pages.
		1. `First way to link`: in head tag `<script type="module" src="script.js"></script>`.
		2. `Secon way`: `script defer src="script.js"></script>`.
	3. `Inline`: this is not recommended to do so. As this will clutter our `HTML` a lot.
    
11. `Comments`: Adding meaningful `comments` makes `program` more readable.
	1. `Single line`: `// comment`
	2. `Multi line`: `/* */`

