#  My Own hands on learning On CSS

1. `Naming css files`: we create `css` files in a separate `directory` in `root directory` there are 2 ways in which we create `css` files as:
		1. `Page wise`: When we wanted to `style` a `index.html` then create `index.css`,`about.css` in this way.
		2. `specific part of each page`: for `headings` `heading.css`.

2. `Horizontal aligning`: make sure when you set `width` and then `right margin` and `left margin` to `auto` and still don't see the changes then set that `element` to `display: block;` `block level` as that will be `inline`.

3. `To make our links modern and not 1990s:`: generally when we use `anchor tag` this gives that dark blue color along with a permanent underline , to fix this refer below points.

	1. `To remove blue color`: write `a{color: inherit; }`.
	2. `To remove permanent underline`: write `a{text-decoration: none;}`.
	3. `To get a underline below link when user hover on it`: `a:hover{text-decoration: underline}`.

4. `Hover`: whenever you want that specific settings appear when user `hover` on that word or sentence then write `selector` and then `:hover` as suffix and then write what you wanted to add.

5. `To soften corners of any image using css`: follow below steps
	1. `selector`: select that image make sure sometimes `.bottom` directly won't works so proper target as `.bottom img`.
	2. `settings to set`: `display: block;` as `img` is `inline element` then `border-radius: 12px`.


# My Own hands on learning on Git

1. `Git Branch creations notes`:

	1. `Branch name`: whenever we are creating a `git branch` for creating and testing any feature or any add ones name as `feature/styling` as this conveys you are working on `styling`.

	2. `creating a branch`: `git branch name` this will create a new branch of name `name`.

	3. `switching between branches in git`: `git switch name` this will `switch` from your current `branch(maybe main)` to `name`.

	4. `git branch`: this will show all `branches` your `repo` has and mark current working branch with a `asterisk` as prefix of that `branch's name`.

	5. `publishing any branch on github`: type `git push -u origin branch-name`.

2. `Git naming notes`:

	1. `First word of title`: it is good practice to `capitalize` very first word of the `git commit message`.

	2. When working on `css` then `Style global image elements for layout and alignment` this is fine means use `Style` for `css`.

	3. `Refactor`: when you are just changing something in your code base not adding extra then add `Refactor` as `prefix` in `title` of `git message`.

	4. `Assign`: when you are putting any value in something and mentioning this in `git message` then instead of `add` use `Assign` like `Assign top to class of hero image of recipe`. And use this only in `body` of the `commit message`.
    
	5. `asset`: when you are adding any `photo` `video` then write `asset` after mentioning `name` in both `title` and `body` of the `commmit message` .    