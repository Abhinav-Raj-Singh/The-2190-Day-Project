# The Box Model
1. Most important thing in `CSS` is about positioning and layout as this is crucial to put text as it where we want to. 
	1. `The box model`: almost every single `element` on the webpage is a box(either rectangular or square shape) either put alongside or one in another. to see this link a `css` to `html` and in `css` write `*{outline: 2px solid red;}` you will see how this `box model` is actually working.even circles would look like circle but they as layout rectangular.
		1. `padding`: increase space between the `border` of box and `content` inside the box.
		2. `border`: adds space (even if it's only a pixel or two) between the `margin` and the `padding`.
		3. `margin`: increase space between the borders of a `box` and the `border` of the `adjacent boxes`.
		4. `Box model in depth`: 
			1. `the default style`: it is that when you didn't did anything then the `box` will no larger then the content(in terms of height) in it.
			2. `padding`: To make your `box` bigger then add `padding` to it. and `padding` `.one{padding:20px;}` occurs in background of the `content` , essentially inside the `border` and then go towards content.
				1. we can even configure individual `paddings` as `padding-top`,`padding-bottom` , `padding-right` and `padding-left`.
			3. `hierarchy`: `content box` is the very most inside thing of the `box` then `padding` then `border` and then `margin`.
			4. `border`: `.one{border:20px solid red}` (we did solid because otherwise border won't be visible) and our box will be as `margin` then 20px `border` then 20px `padding` and then `content`.
				1. `Properties of border`: these are used to style border.
					1. `To set properties of each border individually use`: `border-top`, `border-bottom` , `border-right`, `border-left`. 
					2. `To set width,style, color`: `border-width` , `border-style` , `border-color`.
					3. `Combining`: you can combine as `border-bottom-color: red;` (this will only accepts direct value to place solid use `border-bottom: 1px solid red;`).
			5. `margin`: 
				1. `syntax`: `.one{margin: 20px}`. this is usually used to apart two elements , basically for creating space between adjacent elements. `margin` is shared between two `elements` means the `element` which has the highest `margin` that will be taken in consideration not both will be use (60,50 then 60 will overall and not 110).+
				2. `3 cases of margin`: if both `element's` `margin` is positive then maximum will be taken. both are negative then smallest will be taken and if both are opposite then their sum is used. 
				3. `setting individual vs overall margin`: when you set just `margin: 20px` then all `margin-top: 20px`, `margin-bottom: 20px` , `margin-left: 20px` , `margin-right: 20px` get set to `20px` to set individually use them individually.mostly when you are using any property repeating and then there is conflict then last will be taken like if i set individual `margin` and then at last i set overall `margin` to different value then last one would be considered .
				4. `negative margin`: this is allowed `margin: -20px` this is fine.
				5. `margin can set using`: using `lenghts`, `percentages` , or the keyword `auto` and even use `negative` values.
				6. `setting individual margin in smarter manner`: `margin: 0px 1px 3px 4px` first value if `top` , then `right` then `bottom` then `left`.
				7. `auto and centering`: `margin` also accepts `auto` then our value will be  `0` or `space available` in that side.auto is handy for h`orizonal centering.`
				8. `centering horizontally`: for this specify `width` and then set left and right to `auto` without specifying `width` there will be no impact. and this is only useful for `horizontal centering` same concept is not applicable for `vertical centering` .
				9. `Collapsing margins`: this is applicable for `vertical` only if there is no `content` , `padding` or `border` separating adjacent `elements` then they will collapse and single margin will be equal to greatest among them. this is useful because:
					1. This prevents empty `elements` adding extra `vertical` space (`margin`).
					2. They allow for a more consistent approach to declaring `margins` throughout the page.
					3. `margin collapse` also applies to nested `elements`.
					4. `Negative margins`: while positive `margins` push things away , `negative` pulls towards it.
			6. `width and height`: `.one{width: 60px; height: 20px;}` we can use these to control `box` size and if `content` is more then the `box` size then `content` will overflow.
			7. `overall dimensions of the box height and width`: this is taken as `height(we given to element)+ twice of padding+ twice of border` and same for `width`. and by using `.one{box-sizing:border-box;}` then dimensions will get as per `width` and `height` we mentioned but size of the content will get subtraced by twice of `padding` and twice of `border`. and usually we use `box-sizing` to almost all `elements` by placing it in `universal selector` because this makes our work flow easier.
			8. `universal selectors`: to make our content more `aligned` throughout the page we usually put some things in `universal selector` by selecting all `elements` as `*{ margin: 0px; padding: 0px;box-sizing: border-box(or content-box);` because `margin` , `padding` and `box-sizing` makes best `alignment` and usually we set `margin` and `padding` to 0 for `universal` because mostly browsers handle on their own and if we need specific requirement for any specific `elements` then we select that and then perform on that. and usually we select `border-box` in `universal selector`. 
			9. `content-box v/s border-box`: this are options from `box-sizing` and these become important when we add `padding` or `border` .
				1. `content-box`: if we placed values of `padding` and `border` then our `content-box` will kept as it is means overall size of the `box` will increase that means `padding` and `border` will added on top of what `dimensions` we already gave.
				2. `border-box`: this will kept the size of the `box` as it is what we have given as input and this will compromise on our `content-box` and decrease size of it to make changes possible.
			10. `em`: this is relative unit means if `font size` of a `para` is set to `16px` then `margin: 4em;` will be `64px`.

# CLI
1. `copying files in current repository`: `cp source .` then this `dot` will represent `current working directory`.