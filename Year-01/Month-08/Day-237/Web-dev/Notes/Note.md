1. `Other Notes`: 
	1. `<Div>`: is one of the basic `HTML` element and it is an empty container. many times we require just a `contain` for `elements`.


2. `Introduction to CSS`: `CSS` is used to give `style` to our plain texted `HTML` website.
	1. `Adding CSS to HTML`: There are 3 methods to add CSS to Html.
		1. `External CSS`: most common method you will find in this we create a separate `CSS` file and then link this to `HTML` file in this case go inside the `HTML` file in which you wanted to link a `CSS` file and then in `head` tag of that file `<link rel="stylesheet" href="styles.css">` place `link` void tag and then `href` is the location of `CSS` file `rel` is required as it tells relationship between `HTML` file and `linked` file.(we can whatever we want usually but `.css` as extension and usually `style` or `styles` is used).
			1. `Pros of this way`:
				1. It keeps `CSS` and `HTML` files are separate which make ease to look in both files individually and they look cleaner.
				2. As `CSS` file is separate this is good if there are multiple pages shares same `style` on a website.
		2. `Internal CSS`
		3. `Inline CSS` 
	2. `Basic Syntax`: `CSS` is made of various rules . Each rule is made of `selector` and a semicolon separating list of declarations and with each of those declaration is made up of a property-value pair.
		1. `Selectors`: referred to `HTMl` elements to which `CSS` rules apply.
			1. `Universal selector`: will select the `elements` of every type (in the whole document).in example below every `element` would have the `color: purple;` style applied to it.
				1. ```html
				   *{
				   color: purple;
				   }
				   ```
				2. `Type Selector`: will select all `elements` of the  given `element` type syntax is just `the name of the element`. in below example all `div` type `elements` in the whole document will get `color: white`
					1. ```html
					   div{
					   color: white;
					   }
					   ```
				3. `Class Selector`: will select all the `elements` of the given `class`, which is just an `attribute` you place on an `HTML` element. this won't work on any `class` name begins with number. and if your `class` name contains of multiple words then instead of using `whitespaces` use `hyphen` as `severe-alert`.
					1. ```html
					   <div class="alert-text"> Please agree to our terms and                           conditions </div>
					   .alert-text{
							color: red;
						} 
					   ```
					   
				4.  `ID selectors`: similar to `class selectors` . they select an element with the given `ID` which is another attribute you place on `HTML element`. difference between `ID` and `Class` is that an `element` can only have one `ID`. It cannot be repeated on a single page and should not contain any white spaces. Don't over use `ID` `attribute` where `classes` will suffice. You can use `ID` where it make sense like taking advantage of specificity or having links redirect to a section on the current page.`IDs` can't start with leading numbers.
					1. ```html
					   <div id="title"> My Awesome 90's Page </div>
					   #title {
						   background-color: red;
					   }
					   ```
				5. `The grouping selector`: when there are two `groups` which has common `styles` then we can combine there common `styles` under `grouping selector` and rest could be written as it to save our repetion as below.
					1. ```html
					   .read{
					   color: white;
					   background-color: black;
					   /* several unique declarations*/
					   }
					   .unread{
					   color: white;
					   background-color: black;
					   /* several unique declarations*/
					   }
					   // Above can be rewritten as below
					   .read,.unread{
					   color: white;
					   background-color: black;
					   }
					   .read{
					   /* several unique declarations*/
					   }
					   .unread{
					   /* several unique declarations*/
					   }
					   ```
				6. `Chaining selectors`: in below example we have two `elements` with `subsection` `class` both will have different `styles` but we can apply certain by combining second word as `.subsection.header{color: red;}` by this all the elements having both `class` `subsection` and `header` this `style` will get applied to it. we can also use this to `chain` `ID` and `class` as `.subsection#pereview{color: blue;}` but you can't chain more than one type of `selector`
					1. ```html
						   <div>
						  <div class="subsection header">Latest Posts</div>
						  <p class="subsection preview">This is where a preview                           for a post might go.</p>
	                      </div>
					   ```