# Alignment

1. `justify-content`:Some useful `justification` rules:-

	1. `justify-content: space-between;`: this will discrete all the `flex items` with proper spacing available in that particular `flex container`.

	2. `justify-content: center;`: this will `center` all the `flex items` in the `flex container` with respect to the `main axes` .

	3. `space-around`: then equal spacing between all the `childrens` (including end `margins`) means end `margins` will also `spacing`  but not as equal to as `spacing` between `childrens` has.

	4. `space-evenly`: then equal spacing between all the `childrens` (including end `margins`) means end `margins` will also `spacing`  as equal to as `spacing` between `childrens` has.

	5. `justify-content:start;`: then all the `childrens` will start from the `starting point` `left` in `horizontal` and `top` in the `vertical`.
    
	6. `justify-content:end;`: then last `children` will start from the `ending point` `right` in `horizontal` and `bottom` in the `vertical`.


2. `align-items`: Some useful rules:

	1. `align-items: center;`: this will `center` our `flex items` across the `cross axis` means exact `center` of our `flex container`.

	2. `align-items: stretch;`: this will `stretch` `size` of the `childrens` to all possible space available.

	3. `align-items: start;`: in this `size` of `childrens` will be as per `content` and they will be starting from the starting point in `horizontal` `left` , `vertical` `top`.

	4. `align-items: end;`: in this `size` of `childrens` will be as per `content` and they will be `aligned` to the end point of the `cross axis`.

	5. `align-items: baseline;`: this is similar to `flex-start` but there is a minute difference and that is all the `end` line of the `childrens` wildl be equall so largest `child's` ending line will be work as `baseline` and all other `childrens` even `align` as per that and this whole we stacked in `starting` point.

3. `align-self`: this is same to same as `align-items` even has same options and even that options works as it is but there is a difference that this `align-self` is used directly upon a `flex children` wherease `align-items` is used to `flex container`. This even has `strech` , `start` , `end` , `center` , `baseline`. But there is no `justify-self` in `flexbox`.

4. `changing orientation will change working of justify-content and align-items`: when changed from initial `row` to `column` then `justify-content` will do `centering` `vertically` and `align-items` will do `horizontal centering`.

5. `align-content vs align-item`: `align-content` will do `alignments` of all `childs` in that `cross axis` but in overall `axis` but `align-item` will do on particular `child` in the `cross axis` but in their particular `cross axis` only.

6. `axis`: `flex box` works directly as per the `main axes`  you set and what is `cross axes`. And in `flexbox ` everything is about `primary or main axes` this is very useful becasue when we will switch to `vertical` to `horizontal` or vice versa , layout will adapt automatically.

7. `In short`: 

	1. `justify`: to position something along the `primary axis`.

	2. `align`: to position something along the `cross axis`.

	3. `content`: a group of `stuff` that can be distributed. In simpler way , `childrens` to be `distributed` in a `container`.

	4. `items`: single items that can be positioned `individually`.

8.  `flex-wrap: option;`: when set this then `childs` will get some `distribution` of `rows` each and then setting `align-item` will set that particular child in that particular `distribution` of `rows` . In `flexbox` we have three options for `wrap` which are `wrap` , `nowrap` and `wrap-reverse`:

	1. `wrap`: will lay `items` on multiple lines.
    
	2. `nowrap`: will lay `items` on one line.

	3. `wrap-reverse`: will lay `items` on multiple lines but from bottom to top `order`.

9. `flex-box size reference`: when we refer anything havnig prefix `main` for `flexbox` then we are referring `horizontal` and `cross` for `vertical` as `main start` , `main end` , `main size` all are for `horizontal` wherease `cross start` , `cross end` , `cross size` all are for `vertical`.

10. `order in flexbox`: `order` when we wanted to place a specific `child` at a particular position in a container then use `order: 2;` then selected `child` will be placed at that place and that will be placed at its place.

11. `Display`: this will set `flex childrens` to be `inline` or `block` by `display: flex;` for `block` and `display: inline-flex;` for `inline`.

12. `flex-flow: column wrap;`: this is shorthand for `wrap` and `flex-direction`.

13. `align-content`: as `justify-content` do work on `main axis` this `algin-content` do the same work on the `cross-axis` when there is any extra space is on `cross-axis`. And this works only on multi line `flex` `containers` like `wrap or wrap-reverse`.

	1. `align-content: normal`: default behaviour as they are set.

	2. `align-content: flex-start/start`: `items` packed at the starting of the `container`. `flex-start` honors the `flex-direction` wherease `start` honors the `writing-mode` direction.

	3. `align-content: flex-end/end`: `items` packed at the ending of the `container`. `flex-end` honors the `flex-direction` wherease `end` honors the `writing-mode` direction.

	4. `align-content: center;`: `item` centered in the `container`. 

	5. `align-content: space-between;`: `item` evenly distributed , first line is at the start of the `container` and last line at last.

	6. `align-content: space-around;`: `item` evenly distributed with equal space around each line.

	7. `align-content: space-evenly;`: `item` evenly distributed with equal space around each them.

	8. `align-content: stretch;`: `lines` `stretch` to take up the available space.

	9. `safe vs unsafe`: this are used as `prefix` for `justify-content`, `align-content`, `align-items`. default behaviour is `unsafe` but sometimes they create issue in narrow device screens to prevent that overflow or any unintended behaviour on narrow screens write them as `justify-content: safe center`.

14. `gap`: this is used to maintain `gaps` and it controls spacing between `flex items` only:

	1. `gap: 8px`: this will create spacing between the `flex items`.

	2. `row-gap`: this will create spacing between vertical `flex items`.

	3. `column-gap`: this will create spacing between horizontal `flex items`.

15. `place-items`: this is the shorthand for `justify-items` or `align-items` if we gave one value then that will be applied to both , if given to then `first` will be applied to `align-items` and second one for `justify-items`.

16. `order`: we can set `order` to different `flex items` means bydefault all are `0` and they work as `axis` works in mathematics if we set `child` to `-1` then that will appear before `0` position `childs` of the `container` and if we set `-2` then that `-2` will appear before `-1 order childs` and if we `1` then that will appear right most side of the `container`.

17. `use shorthand properties over direct using`: as `shorthand properties` set all `properties` very smartly.