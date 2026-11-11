# Growing And Shrinking

1. `The flex shorthand`: the `flex` declaration is actually `shorthand` for `3 properties` which we can set on `flex items`. This affects how `flex items` size themselves within their `container`. `shorthand properties` are `CSS` `properties` that let you set the multiple other `css` properties simultaneously. when we will set `flex: 1` this will set `flex-grow: 1`, `flex-shrink: 1` , `flex-basis: 1`.

2. `flex grow`: expects a single number as its value, which is used as `flex-item's` `growth-factor` and always for any `container` or `item` to set `flex` on that we have to first convert that in `flex` by  selecting that `container` using appropriate `selector` and then `display: flex`.

3. `Flex-shrink`: this is similar to `flex-grow` but this affects `shrink-factor` of a `flex-item` and we use this when `flex item` is larger then the `flex-container` and default value is `flex-shrink: 1`.

4. `Important trap`: when we specified width to `flex-items` and applied `flex-grow` and `flex-shrink` sometimes they don't take values and look up to `flex-container` is there is sufficient space they `grow` as their `flex-container` could handle and similarly `shrink`.

5. `flex-basis`: this sets a baseline  for `flex items` for properties like `flex-grow` and `flex-shrink` from which baseline these properties start affecting , default value is `flex-basis: 0%` when using `shorthand` but standalone `flex-basis` is set to `auto` and  we set usually `flex-basis: auto` so `shrink` and `grow` look up for `width` assigned.

6. `default values of shrink , grow and basis`: this set to default only when we set `flex:1` then `shrink` is 1 , `grow` is 1 and `basis` is `0%`.

7. `What is flex auto`: `flex: auto` this equivalents to `grow` 1 , `shrink` 1 and `basis` auto.

8. `In practice`: we usually set `flex-shrink: 0` to prevent `shrinking` and `flex-basis: auto` other values are possible to use but they are rare in practice.

9. `Basic values of flex`: but make sure below `minimum size` that `flex item` require that won't shrink below that.

	1. `flex-initial`: equivalent to `flex: 0 1 auto` and in this `sizes` will be determined by the `properties` individual basis what assigned by the us , and if we assigned to `auto` then `items` will `shrink` as per content but won't `grow` .

	2. `flex-auto`: equivalent to `flex: 1 1 auto` , if `sizes` of individual `items` are assigned then that will be applicable if not then they will `grow` , `shrink` in the available free space as per `content` that `items` `contains` .

	3. `flex-none`: equivalent to `flex: 0 0 auto` if `sizes` of individual `items` are assigned then that will be applicable if not then they won't `grow` , `shrink` in the available free space as per `content` that `items` `contains` even if they overflow the `container`.
	
	4. `flex: <number[1,∞]>`: equivalent to `flex: <number[1,∞]> 1 0` if `sizes` of individual `items` are assigned then that will not be applicable as `basis:0` if not then they will `grow` , `shrink` in the available free space as per maintaining a proper `proportion` of all `items` that `container` has .