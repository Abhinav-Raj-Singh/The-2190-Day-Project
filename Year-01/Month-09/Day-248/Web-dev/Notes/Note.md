# Flex Box (WEB-DEVELOPMENT)

1. `One value, width/height: flex-basis`: `flex: auto(10em  , 30% , min-content)` this `grow` and `shrink` values will corresponds to `default shorthand value` and `basis` will become `value assigned`.

2. `when set two integral values in flex shorthand`: then `grow` and `shrink` will get that values and `basis` will become `0%`. 

3. `global keywords`: `flex: revert; flex: revert-layer; flex: unset;` this are kind of presets which has a definite work when we apply them .

4. `flex shorthand can be written as following ways`:

		1. `One-value syntax`: 

			1. `A valid input for grow`: then `flex` will expand as `<flex-grow> 1 0%`.

			2. `A valid input for basis`: then `flex` will expand as `1 1 <flex-basis>`.

		2. `Two-value syntax`: the first value will be always for `flex-grow` and second value can be one from the following:

			1. `a valid input for shrink`: then `flex` expands as `<flex-grow> <flex-shrink> 0%`.

			2. `a valid input for basis`: then `flex` expands as `<flex-grow> 1 <flex-basis>`.

		3. `Three-value syntax`: then first position should contain a valid value for `flex-grow` second for `shrink` and third for `basis`.

5. `flex-grow`: negative value is invalid , defaults to `1 when omitted` (initial is 0).

6. `flex-shrink`: negative value is invalid , defaults to `1 when omitted` (initial is 1).

7. `flex-basis`: defaults to `0% when omitted` (initial is auto).

8. `none`: the `item` will be sized as per the `width and height properties` , it is fully `inflexible`. it neither `shrink` nor `grows` this equivalent setting is `flex: 0 0 auto`.

9. `Description`: for most use author should set `flex` to one of the following values: `auto`, `initial` or `none` or a `positive unitless number` .

10. `default sizing`: by default `flex items` won't `shrink` below their `min-content size` , to change this set the `item's` `min-width` or `min-height`.

11. `auto and default`: when using `flex: initial` then they will take minimum space they require and won't cover extra available space but that space will be covered by the `flex item` having `flex as auto` .


# Flex Axes(WEB-DEVELOPMENT)

1. `Flex Axes`: this is used to control `orientation` of `flex item` inside a `flex container` using the `flex-direction` property.

2. `Axes`: default is `horizontal or row` , we can set to `vertical or column` using `.flex-container{ flex-direction: column;} ` 

3. `Row`: is the main `horizontal axes`.

4. `Column`: is the main `vertical axes`.

5. `Why flex:1 won't work`: we have `3 rectangles` whose `width` is not assigned then in this case when we set to `flex-direction: column` then `flex: 1` won't work when `height` is only assigned because in this `column` case calculation of `width`  won't be possible because of `0% basis` as `shrink` and `grow` will afect from `0 width` and our `3 rectangles` will collapse and become `1` only.

6. `flex-basis referring`: when `flex-drection` is `column` then `flex-basis` is referring to `height` , if `row` then `width`.

7. `flex-direction: row-reverse`: this will keep `direction` as `row` but write from right to left.

8. `flex-direction: column-reverse`: this will keep `direction` as `column` but write from bottom to top.

9. `Direction of main-axes`: when we set `flex-direction` to `row` then the direction of `text` and `container` are same but in `column` this get as `block-axis`.

10. `flex-direction`: only useful when `display` is `flex`.

11. `flex-wrap: wrap`: by default this is set to `nowrap` , when `nowrap` then `flex items` are arranged in `inline` manner but `wrap` changes them in `block` manner. but this is the case when `flex-direction` is `row` but in case of `column` just opposite happens .

12. `definition of flex-direction`: initial value is `row` , applies to `flex containers` , `inherited` `NO` , `computed value` as specified.

  
# Alignment(WEB-DEVELOPMENT)

1. `flex: 1`: we have seen so far that this will grows every `flex item` in the `flex direction` equally in the available space, but we can even `align` using `flex box alignment` tools.

2. `justify-content: space-between;`: this will discrete all the `flex items` with proper spacing available in that particular `flex container`.

3. `justify-content: center;`: this will `center` all the `flex items` in the `flex container` with respect to the `main axes` .

4. `align-items: center;`: this will `center` our `flex items` across the cross axes means exact `center` of our `flex container`.

5. `changing orientation will change working of justify-content and align-items`: when changed from initial `row` to `column` then `justify-content` will do `centering` `vertically` and `align-items` will do `horizontal centering`.

6. `Gap`: adding `gap` will work as `margin` means when we `centered` and even added `gap` then they will get centered and then spacing betweem them we add as `gap: 8px;`.

7. `axes`: `flex box` works directly as per the `main axes`  you set and what is `cross axes`. And in `flexbox ` everything is about `primary or main axes` this is very useful becasue when we will switch to `vertical` to `horizontal` or vice versa , layout will adapt automatically.

8. `options we have in justify-content`: there are 6 options which are used commonly which are the following: and these could be written as `justify-content: option;` and use this `justify-content` for the `primary axis`.`flex container`

	1. `flex-start`: then all the `childrens` will start from the `starting point` `left` in `horizontal` and `top` in the `vertical`.

	2. `flex-center`: all `childrens` will be `centers` with respect to the `primary axis`.

	3. `flex-end`: then last `children` will start from the `ending point` `right` in `horizontal` and `bottom` in the `vertical`.

	4. `space-between`: equal spacing between all the `childrens` (excluding end margins).

	5. `space-around`: then equal spacing between all the `childrens` (including end `margins`) means end `margins` will also `spacing`  but not as equal to as `spacing` between `childrens` has.

	6. `space-evenly`: then equal spacing between all the `childrens` (including end `margins`) means end `margins` will also `spacing`  as equal to as `spacing` between `childrens` has.

9. `align items`: we use this for `cross axis` and here we have 5 most common options which are as the following: this is applied directly to the `flex container`
	1. `stretch`: this will `stretch` `size` of the `childrens` to all possible space available.
    
	2. `flex-start`: in this `size` of `childrens` will be as per `content` and they will be starting from the starting point in `horizontal` `left` , `vertical` `top`.

	3. `flex-center`: in this `size` of `childrens` will be as per `content` and they will be `centered` in the `cross axis`.

	4. `flex-end`: in this `size` of `childrens` will be as per `content` and they will be `aligned` to the end point of the `cross axis`.

	5. `flex-baseline`: this is similar to `flex-start` but there is a minute difference and that is all the `end` line of the `childrens` wildl be equall so largest `child's` ending line will be work as `baseline` and all other `childrens` even `align` as per that and this whole we stacked in `starting` point.

10. `align-self`: this is same to same as `align-items` even has same options and even that options works as it is but there is a difference that this `align-self` is used directly upon a `flex children` wherease `align-items` is used to `flex container`. This even has `strech` , `flex-start` , `flex-end` , `center` , `baseline`. But there is no `justify-self` in `flexbox`.

11. `In short`: 

	1. `justify`: to position something along the `primary axis`.

	2. `align`: to position something along the `cross axis`.

	3. `content`: a group of `stuff` that can be distributed. In simpler way , `childrens` to be `distributed` in a `container`.

	4. `items`: single items that can be positioned `individually`.

12. `Brainstormer`: `justify-content` and `justify-self` doesn't exist because we have to think them as a `group` not `individually`.

13. `hypothetical size`: when we entered a huge size that is not possible and we have two such cases but one is in `flow layout` and another one is `flex layout` and `parent container` of both has a limit then `flex layout` will actually limit and stop overflowing if we applied that despite harcoding the value.