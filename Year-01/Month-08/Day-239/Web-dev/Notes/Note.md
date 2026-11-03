1. `The Cascade`: 

	1. `The Cascade of CSS`: Sometimes despite creating proper `CSS` files but browser will give us unexpected results because sometimes of  default styles , not understanding how a property works or not understanding this little thing `cascade`. the `Cascade` is what determines which rules actually get applied to `HTML`. There are different factors which `cascade` use to determine this.Three important factors which uses are following:

		1. `Specificity`: A `CSS` declaration that is more specific will take more `precedence`  over the declaration which is less specific ones. Like `Inline CSS` has the highest `precedence` then the `selectors` and even `selectors` there is also a `hierarchy` like `ID selectors` are most specific then `class` and then `type`. `Specificity` is only accounts when there are multiple conflicting declarations targeting a particular `element` then will act as a tie breaker `ID` will be `first` then `Class` and then `Type`. In this below example `red` would be applicable as both are the `class` but for `red` it is more `specific`. `ID` will always beats `class` no matter how much `class` is `specific`. In Second example rule 2 is more specific because it uses both `ID` and `class` selector so color would be `red`. any symbol or whitespaces would add anything into specificity. `Type selector` has a higher `precedence` over `universal selector`. 
			1. ```HTML
			   <!-- index.html -->
	
	<div class="main">
	  <div class="list subsection">Red text</div>
	</div>
	
				// CSS File below
				.main .list{
	    color:red
	}
	
	.subsection{
	    color: blue;
	}
	
	
			   ```
		   
			2. ```HTML
			   <!-- index.html -->
	
	<div class="main">
	  <div class="list" id="subsection">Red text on yellow background</div>
	</div>
			 // CSS
			 /* rule 1 */
	#subsection {
	  background-color: yellow;
	  color: blue;
	}
	
	/* rule 2 */
	.main #subsection {
	 color: red;
	}
	
			   ```

		2. `Inheritance`: These refers to certain properties which are automatically transfered from ancestors to descendants like `font-size`, `color`,`font-family` etc are usually inherited by `child` from `parent`. but `display` is the property that is not `inherited`.But this wouldn't be applicable if we are targeting `children` specifically and `parent` specifically then both can have different styles.

		3. `Rule order`:we will use this after considering all above 2 factors still there is conflict then the rule that is last defined will be applicable .


	2. `wattenberger blogs`: Let's take a look at different tiers of `Cascade`.

		1. `Importance`:first looks at the what type of rule we are looking , four basic types of rules are: This tier is usually reserves to ensure that our animations works properly. when there is any tie at any tier then fight goes to next tier until any one wins.

			1. `transition`: Rules that apply to an active transition takes the utmost importance.
			2. `!important`: when we add this to end of our declaration, It jumps to this level of cascade(means this is second level important) and once we added this this skips all and give importance which are needed to override styles from third-party libraries.
			3. `animation`: rules that apply to an active animation.
			4. `normal`: where the bulk of rules live.
			5. `ex`: `p {color: orchid !important;}` this will be above then `p {color: orchid !important;}` this .

		2. `Origin`: this looks where the rule was defined. there are 3 places where a rule can be defined. and in this `!important browser default` wins over an `!important website` rule wherease `website rule` wins over a `browser default`.
			1. `Website`: this is the only level that you have control over, as a web developer.
			2. `user`
			3. `browser`: each browser has own set of styles.

		3. `Specificity`: there are five levels of `selectors`:
			1. `inline`: these are the most `specific` ones.
			2. `layer`: `cascade` `layers` allow to define explicit `layers` of styles,for intentional handling of specificity. `layers` win by being declared later. Unlayered styles will take precedence. 
				1. ```HTML
				   @layers one, two; // defining our layers
				   
				   @layer one{
				   body{
				   color: red;
				   }
				   }
				   @layer two {
  body { color: green; }
}
				   ```
			
3. `Inspecting HTML and CSS`: 
	1. `The inspector`: either `right click ` and then `inspect` option from them on the webpage whose you wanted to `inspect`.
	2. `Inspecting elements`: then either you can select any `elements` from this `elements` section or click on left most upper side option to hover on any `elements` from the webpage itself. and then click on any `element` that will show all applied `styles` in `styles` section. you will also see `overwritten styles` 
	3. `Testing styles in the inspector`: you can alter any `styles` value on screen this won't affect our source code but this will be way useful because this won't require reload and will show the preview live screen without reloading.
	4. `changing style`: you can hover any right click on any `element` whose style you wanted to change and then click on `.cls` and then type `color_me` by this you can see a slideshow of colors and this can help you to figure out which color will look fine on your particular `element`. and then `:hover` will change background color.`Box Model` to change dimensions of box again select any `element` either by right click on that and inspect or hover and select and then click on `sidebar` and then double click on any value and change as you required. default value is to `pixels`,other values such as  `25%` or `10vw` are also accepted.