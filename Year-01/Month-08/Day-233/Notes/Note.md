1. `Working with text`: Most content on websites is usually text based. Make sure 
    all text will be wrapped in our body of the webpage and make sure to use boilerplate 
    as base code and then everything over boilerplate.

	1. `Paragraphs`:We think that in manner we written the text in our `html` in code editor
         that will look exactly like that but this is not becasue browser will compress extra 
         spaces and then we need to use specific tags to stop browser to do these unintended 
         things. Wrap content in `<p> </p>` between these and this whole para should be in 
         body and how you can create multiple paras. Try to wrap our all text in paragraph 
         tags to make our website what we intend to do.
	2. `Headings`: there are 6 levels of headings `<h1> </h1>`  to `<h6> </h6>` and `h1` is 
        the biggest and then till `h6` sizes will decrease. using correct heading is also 
        important use `h1` as the main heading and then other headings in other smaller sub 
        sections of the webpage.
	3. `strong`: this element is used to bold text as `<strong> </strong>` and even this 
        signifies something and help us to mark important and even this will change tone of 
        the screen readers.Mostly you will use this with combination with other text elements. 
	4. `em`: this will italic our text and this will even affect our tone of screen reader 
        `<em> </em>`. We usually this use to emphasize on something and even tone of the screen
        reader will do this. And even you will use this combination of other text elements.
	5. `Nesting and indentation`: 
		1. `Nesting`: we usually write combination of elements within something and for this 
            we have to nest , and `element` which nest other `element` in it is `parent element`
            and element which is get nested inside is `child element`. And `elements` at the same
            level are considered to be `siblings`
		2. `Indentation`: this is important because this will make our code much more human 
            readable and will be even convinient for others who will work with us on our projects 
            together usually we `indent` `child element` by `two spaces` inside `parent element` 
            and `siblings` at same level.
	6. `HTML comments`: we usually write this to make much more readable our code for our colleague 
        programmer and even for ourselve to refer that program in future `<!-- -->`   write comment 
        between these `tags` and these comments won't be visible on our website.`Ctrl + /` is the 
        shortcut key for `vs code` to comment and uncomment fast.
	7. `Note`: why to use `strong` and `em` over `b` and `i` because of accessibility because today 
        different kind of person comes with different needs despite `b` and `i` look to have same work 
        but there will be a difference that they won't make our text emphasized if someone used on 
        screen reader means they won't add any value to our text.
	8. `Note`: to get dummy paragraph in `vs code` use `lorem` and `enter`.


2. `Lists`: 
	1. `unordered list`: we use this when order is not important wrap `items` with writing `<li> </li>`
         this will give separate line to them and even a bullet and then all `items` inside a 
         `unordered list`  withing `<ul> </ul>`.
	2. `Ordered list`: where order of each item matters like `instructions for preparing any reciepe` 
        then `wrap` that `instructions` in `<ol> </ol>` and each instruction with `<li> </li>` and in 
        this case you will get numbering with individual `instructions` instead of bulletins.


3. `Links and Images`: 
	1. `Anchor elements`: To create a link in `HTML` we have to use `Anchor element` and we create 
        this by wrapping either text or another `HTML element` in `<a> </a>` on which we have to create
        a link but this alone won't do anyting then we need to add a destination where we have to send 
        the user. We have to add `attribute`(attribute is the thing that gives additional information 
        for our tag and this is placed in starting part of tag and this requires two things one name of 
        attribute and value to assign to attribute) in our case we will use `href` (this is hypertext 
        reference) and this will look like `<a href="address where you want to send user"> Click here </a>` 
        user will saw only `Click here` text on website. And we can use anocher element to link any available
        resource on internet (html documents, videos, files, otherwebsite and so on).