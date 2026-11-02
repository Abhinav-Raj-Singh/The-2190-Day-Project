1. `Useful HTML tags`: 

		1. `button`:to get a button on your website use `<button> </button>` code in your file.


2. `Selectors`:

        1.`Descendant combinator`: Combinators allows us to combine    multiple selectors differently either `grouping` or `chaining` them as they show relation between `selectors`. There are `4` types

					1. `Descendant combinator`: which is represented by a single space between `selectors` in `CSS`. This will only work on the `selector` whose last `selector` matches that is their should belong to one line.like `.ancestor .child` would be fine if `class` `.child` has ancestor `.ancestor` `class` (or we can if `child` is nested inside class `ancestor` no matter how deep nested in).there is not limit on how many `combinators` you can add like `.one .two .three .four` but nesting should be correct as learnt previously that is `four` inside `three` , `three` inside `two` and `two` inside `one`.


3. `Properties to get started with`: All properties have their default value if value is not put by us then browser will pick up that default value.

		1. `Color and background-color`: `Color` property sets `element's` text color, while `background-color` sets color of an `element`. both properties can accept one of several kinds of values. The most common one is a `keyword` (actual color name) as `red` or `transparent` keyword. They also accept `HEX` , `RGB` and `HSL` values


4. `Typography basics and text-align`: 

		1. `Font Types`: `font family` can be a single value or a comma-separated list of values that determine `font` an element uses.there are two categories like `font family name `as `"Times New Roman"` (use double quotes because of white spaces between words) or generic family name `serif` (generic family names never require double quotes). Browser will look line by line from left to rigth which font it can render that will show in that font so written as `font-family: "Times New Roman", serif;` start as the font you want to used and end with a `generic font family`.
        
		2. `font-size`: `font-size: 22px` not space between `22 and px` and this is used to set size of `font`.

		3. `font-weight`: this affects boldness of text, assuming the `font` supports specified weights it could be written as `font-weight: bold` or `font-weight: 700`(this is equivalent of `bold`) and this numbers could be from `1 ~ 1000` , usually this goes from `100` to `900` and in incremenets of `100` ,`100` is thinest one and `900` thickest one.

		4. `text-align`: will align text horizontally within an element and we can use common keywords as of word processors like `text-algin: center`.


5. `Image height and width`: by default image's `height` and `width` are what the actual dimensions that `image` has and to change either one `height` or `width` without losing proportion then set either to number and another to `auto` as `img{height: auto; width: 500px;}`. It’s best to include both of these properties and the `HTML attributes` for `image` `elements`, even if you don’t plan on adjusting the values from the `image` file’s original ones. as otherwise `image` will take longer time to load and if we entered `height` and `width` then that space will get reserved and don't get any unexpected drift.


6. `Additional methods for adding CSS to HTML`: 

		1. `Internal CSS or embedded CSS`: in this you place all `CSS` code inside `HTML` itself instead of creating a separate one . you place that all `CSS` in a pair of opening and closing of `<style>` `tags` and then place this in opening and closing `tags` of `<head>` and here we don't need `<link>` `element` that links external `CSS` file. Rest all things will be same as in `External CSS`. 

			1. `Pros`:
				1. wanted to add unique styles to a single page of a website.

			2. `Cones`:

				1. This will make our `HTML` file longer.

		2. `Inline CSS`: This allows to add `styles` directly to `HTML` `elements` , though this method is not recommended. First here we don't have `selector` we directly added `style` tag to the opening pair of `div` and then avlues are within quotation marks . If you wanted to add a unique style to single element this method works fine. But why not , use this method:

			1. This creates mess when you are adding lots of declartions to a single element and will bloat `HTML` file.

			2. Wanted same style to many `elements` then you have to make many repetitions which again cause bloat.

			3. This could override the other two `CSS` methods and can give unexpected results.

			4. ```HTML
			   <body>
              <div style="color: white; background-color: black;">...</div>
              </body>
			   ```
		
        
7. `Notes`:
		1. Browser always evaluate `CSS` `Selectors` from right to left . as `check first` `check second` are two classes then `.second` will refer to `check second` itself.