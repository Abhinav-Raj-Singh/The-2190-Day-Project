# Javascript

1. `Some important strings methods in JS`:

    1. `.length`: gives `length` of the `string`.

    2. `Extracting string characters`: there are 4 methods to do this:

        1. `.charAt(0)`:this extract the `character by index` and starts from 0.

        2. `.charCodeAt(0)`: this return the `UTF-16 code` of the `character` in the `string` at that index.

        3. `.codePointAt(0)`: this return the `UTF-16 code` of the `character` in the `string` at that index.

        4. `.at(2)`: this return the `character` at 3rd position in `string`. Difference between this and `.charAt` is that `.at` even take `negative values` when we wanted to `print number from right hand side` and in that numbers start from `-1` but `.charAt` not do this and to print `-1` using `.charAt` use as `.charAt(string_name.length-1)` .

        5. `string_name[2] this is property access`: this return the `character` at 3rd position in `string`. It `.trimStart()`: remove `whitespaces` from `left  sidmakes `strings` look like `arrays`(but they are not) if not `character` is found at that index `property access` will `return undefined` , while `.charAt()` returns an `empty string`.`Property access `is `read only` we can't use this to write anything at particular index but this won't give error if we try to write using this in `sloppy mode`. but in `"use strict";` will throw error.

    3. `.concat`: this works same as `+` use as `alert(one.concat(two));` this will print result of both one and two but make sure `strings` are `immutable` means we can't c`.trimStart()`: remove `whitespaces` from `left  sidhange their `values` we can only `replace` their original value by just `re assigning` new value only.

	4. `Extracting String Parts`:

        1. `.slice(start,end)`: this starts from `0th index` and `end` is not included we can either `print` that part or even `store` in another `string` as `string_two = string_one.slice(0,3);`. If you `omit` the `second parameter` then `slice` will take from that `start` to rest of the `string`. If we put only one parameter in `slice` and`.trimStart()`: remove `whitespaces` from `left  sid that even in `negative` then `slice` will start from `right` and goes to that index and then print rest of string `from` that index to till end. And if `both` parameters are negative as `slice(-12,-6)` then this will calculate both `parameters` from right hand side.But if second parameter's magnitude is greater than first parameter's magntiude then this then this will print empty string.

        2. `.substring(starting_position,ending_position);`: the difference between `.slice` and this this consider negatives values as `0` and rest things are same as of `.slice` and only difference is that when magnitude of first parameter is greater then second parameter  we `.slice` return `empty string` wherease this return a `string` after `swapping` both parameters.

        3. `.substr(starting_position,length_parameter);`: this works similar to `.slice` but it is not recommended to use this instead use `.substring` or `.slice` over it.

    5. `Changing case of a string`:

        1. `.toUpperCase();`: `let text2 = text1.toUpperCase();` this will `uppercase` `all characters` of the `string`.

        2. `.toLowerCase();`: `let text2 = text1.toLowerCase();` this will `lowercase` `all characters` of the `string`.

    6. `.isWellFormed()`: this return true/false , return true when `string` not contains `lone surrogates`.

    7. `triming extra whitespaces`:

        1. `.trim()`: remove `whitespaces` from `both` left and right side of the `string`.

        2. `.trimStart()`: remove `whitespaces` from `left  side` of the `string`.

        3. `.trimEnd()`: remove `whitespaces` from `right  side` of the `string`.

    8. `padding`: by `padding` we can `add` whatever we want in `string` `either` in starting of that `string` or ending of the `string`. Keeping in mind that `strings` are `immutable`.

        1. `.padStart(first_parameter,second_parameter)`: thi		s is used to `pad` `second_parameter` in the `starting` of the `string` until `string_length `didn't get equal to first_parameter's value. `alert(text.padStart(25,'0 sdf'));`.

        2. `.padEnd(first_parameter,second_parameter)`: this is used to `pad` `second_parameter` in the `ending` of the `string` until `string_length `didn't get equal to first_parameter's value. `alert(text.padEnd(25,'0 sdf'));`.

    9. `.repeat(n);`: this will `repeat` the `string` `n times` `either` we are printing or `storing` that result in `another string`.

    10. `.replace`: this will won't change original string at all but we can either store that replaced result or print.
        1. `.replace(first_parameter,second_parameter);`: this will replace first_parameter's first occurrence with second_parameter. we will `wrap` our both parameters in `quotes`.

        2. `.replace(/first_parameter/i,second_parameter);`: this will replace first_parameter's first occ		surrence with second_parameter but in `case-insensitive` manner means even if only words matched this will `replace`. we will `wrap` our second parameter only in `quotes` and first parameter will be without `quotes`.

        3. `.replace(/first_parameter/g,second_parameter);`: this will replace first_parameter's all occurrences with second_parameter but in `case-sensitive manner`.we will `wrap` our second parameter only in `quotes` and first parameter will be without `quotes`.

        4. `.replace(/first_parameter/gi,second_parameter);`: this will replace first_parameter's all occurrences with second_parameter but in `case-insensitive manner`.we will `wrap` our second parameter only in `quotes` and first parameter will be without `quotes`.

    11. `.replaceAll(/first_parameter/g,second_parameter)`: this `replace all occurrenes` of first parameter with second_parameter but `case is sensitive` here but make sure second_parameter will be in `quotes` but first_one is not.

    12. `converting a string into array`: make sure this even won't change our `original string` we can just store result in `another variable`. If the separator is `omittted` then the whole `string` will contain at the `index 0` as `one  single element`.

        1. `string_name.split("");`: this will split the `string` on `characters`.

        2. `string_name.split(",");`: this will split the `string` on `commas`.

        3. `string_name.split(" ");`: this will split the `string` on `whitespaces`.

        4. `string_name.split(" | ");`: this will split the `string` on `space-pipe-space`.

        5. `Danger Point`: when your `string` has `emoji's` also then `split` is most unsafe `Spread` is partially safe `Intl.Segmenter` is 100% safe.

    13. `Operations on strings`: make sure first cases of both the strings are same for getting intended outputs.

        1. `Greater than or less than`: start comparing from `left` and once a char is greater than or less  than as per our `condition` then this return T/F. And if all characters are `matching till end` then the shorter `string` will be considered shorter. if same `length` and even matching till end both will greater than and less than will return false.

        2. `checking equality`: for getting two `strings` to be `equal` , their lenghts and even their `case` of each character should be same. 

    14. `String or any data type as primitive or as object type`: when used as by `default behaviour` they are `primitive` but when used as `new data_type(variab_name)` then that variable_name variable of data_type will be considered as `object`. Make sure only `supported types` can do `this thing` and they won't change the original variable they will create a another copy and then that variale's copy will be of object type.This is rare in practice. And to convert back then use `valueOf`.



# 2.2 Conditionals

# 2.2.1 Comparisons

1. `Comparing a number in string and a direct number`: then `js` will convert that `string number` to number. `true == 1` and `false == 0`.

2. `Some types boolean comparison`: may give unintended answer as `let a = 0; alert(Boolean(a)) // false` wherease `let b = "0"; alert(Boolean(b)); // true` because `js` compare converted values , `booleans` use different rules , `strings` different.

3. `Empty string is considered as false`: `alert('' == false); //true`

4. `strictly equal to operator === or strictly non equal to !==`: this direct compares `data types` and then values this doesn't attempt to `convert`. 

5. `null and undefined`: `null === undefined // false` , `null == undefined // true`.

6. `Equality vs comparisons`: comparisons convert `null` to `0` and `undefined` to `NaN` but equality won't. `null == 0 // false` `null >= 0 // true` but `undefined` that is `NaN` will be false in all comparisons as that is `special type`. make sure not to use `variables` having `null` or `undefined` until we are fully sure for both comparisons , equality. `undefined == null // true`.

7. `Number in strings and comparing`: `"2" > "12"` this won't convert to number this will compare in `dictionary order`.

# 2.2.2 Comparisons using if/else

1. `if/ese conditionals`:

	1. `Syntax`: `if (condition) { /* code to run if condition is true */ } else { /* run some other code instead */ }`. 

2. `if else if else conditionals`:

	1. `Syntax`: `if (condition) { /* code to run if condition is true */ } else if (condition) { /* code to run else if condition is true */ }else { /* run some other code instead */ }`. 

3. `When any value is not false in conditionals`:Any value that is not `false`, `undefined`, `null`, `0`, `NaN`, or an empty `string` (`''`) actually returns `true`.

4. `Nesting if/else`: this is allowed and each if/else workd `independently`.

5. `Logical operators`: 
	1. `&& - AND`.

	2. `|| - OR`.

	3. `! - NOT`: this will `negate` the `condition`.