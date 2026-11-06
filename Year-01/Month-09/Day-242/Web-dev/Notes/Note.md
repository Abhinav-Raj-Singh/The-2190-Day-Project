# Block and Inline

1. In css we have two types of `box type` which are `Block` and `Inline` which determine the `element` behaviour and interaction. The `Display` property controls how the `HTML` elements will appear on the webpage. 


2. `Block vs Inline`: 

	1. `Block`: Most of the elements we learnt are `block elements` that is their default style is `display: block` , by default `elements` will appear on the page stacked atop each other, each new `element` starting on the newline. 

	2. `Inline`: `Inline elements` doesn't start on a new line . They appear in the line whatever `elements` they are placed beside. like `<a>` `anchor tag or link` this appears where we placed and generally in `Inline elements` we doesn't require to add `padding` or `margin`.

	3. `The middle ground inline-block`: `display: inline-block` this is good practice to bunch up `box` in a line but in modern `CSS` you will use `flexbox` as it is considered to be good practice.


3. `Divs and spans`: sometimes for your `styling` your `purpose`  you won't found any `semantic html tag` then `div` and `span` comes in.

	1. `div`: is a `block-level` `container` by default , stretches along `parent` and starts on a `new line` . used to `group` related `elements` inside page components. such as `grouping cards` , `sections`, `sidebars` , `navigation bars` . when you wrap `content` in a `div` you assign a `class` or `id` to make it convenient hook for `css layout` and `styling`.

	2. `span`: is a generic `inline-level` `container`. It sits inside a line and take as much space as its `content` is , it doesn't start from new line line like `div`.use when to `style` or `target` a part of a sentence, like to highlight a word or attach a `tooltip` in a sentence then you can `wrap up` that in `span` and attach to `id` or `class` to manipulate using `CSS`.  


4. `Note`: neither `div` nor `span` gives extra meaning to `content` they are like `semantic tags` do they just provide extra flexibility.


5. `Introduction to css layout or Normal flow`: 

	1. `Normal layout flow`: `elements` lay out in `normal flow` if you haven't applied any `CSS` to change the way they behave. you can adjust their behaviour either by `CSS or flexbox in css` or removing their `normal behaviour`.Starting with the `normal flow` is the best way to begin because it ensures atleast your website is readable either by user itself or even through screen reader.

	2. `How are elements laid out by default`: this begins as `boxes` of individual `elements` are laid out in such way that `padding` , `margin` and `border` are added to `content box` that is `box model`. by default `block-level elements` take space as parent `element` containing wherease `inline-level elements` takes space as space that `content` require to. And in `normal flow` `block-level` `elements` are laid out top to bottom vertically and strecthing horizontally (by default and when we explicitly mention `width` then that will stretch accordingly) wherease `inline-level` `elements` are laid where we placed in the `parent element` if there is any `content` overflowing them that will be shifted to new line not like `block-level element`.

	3. `changing inline level element to block level element and vice versa`: if you wanted a `element` that is `block-level` but behave like `inline` then select that `element` using `selector` and then write `display: inline` similarly for `block-level`.
    
	4. `over riding normal flow`: 
		1. `The display property`: standard values are `block`, `inline` or `inline-block`. here `inline-block` is quiet interesting, this is hybrid of `block` and `inline` means this will allow to access features of both of them means then your `element` will so left to right and then change line if require as `inline elements` do and will even accept `height , width, padding , margin` as `block-level elements` do.
        
		2. `floats`: giving values like `left` will move that `block-level elements`  to left side completely.

		3. `positioning`: using this you can change `positioning` of a `box` inside another `box` default value is `static` , on putting `fixed` then they will be moved to `top` if you wanted and this is relative and from browser's pov.

		4. `specific layout systems through display`: we have also specific layout methods which we can access through `display` values. most important are `flexbox` and `css grid`.

		5. `Responsive design`: this means that our website should adapt all types of possible devices like adapt to mobile, web , tab, or any other possible device. and in this we use `@media` tag and in this we set a particular cap on dimensions and if dimensions are equal or less than this then show these `elements`  in this % of original assigned dimensions like `@media(max-width: 768px){ .container{width: 100%}}`.

		6. `other layout techniques`: these are used less commonly
			1. `Table layout`: used for styling `HTML table` and even on none `HTML table elements` by using `display: table`.
			2. `multi-column layout`: this used to lay out the `content` of a `block` in columns as newspapers has.
            
	5. `difference between block, inline, and inline-block`: 
		1. `inline`: appear `box` side by side but don't respect `padding` , `width` and `height`.
		2. `block`: appear in new line and not side by side and respect `padding` , `width` and `height`.
		3. `inline-block`: appear side by side and even respect `padding` , `width` and `height`.