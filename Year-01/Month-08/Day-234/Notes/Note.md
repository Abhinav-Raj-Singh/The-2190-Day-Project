1. `Anchor elements`: To create a link in `HTML` we have to use `Anchor element` 
    and we create this by wrapping either text or another `HTML element` in `<a> </a>`
    on which we have to create a link but this alone won't do anyting then we need to
    add a destination where we have to send the user. We have to add `attribute`(attribute
    is the thing that gives additional information for our tag and this is placed in starting
    part of tag and this requires two things one name of attribute and value to assign to attribute) 
    in our case we will use `href` (this is hypertext reference) and this will look like 
    `<a href="address where you want to send user"> Click here </a>` user will saw only `Click here` 
    text on website. And we can use anocher element to link any available resource on internet (html 
    documents, videos, files, otherwebsite and so on).

2. `Opening links in a new tab`: default behaviour of browser is to open new link in the same 
    tab . to redirect user to another tab use another attribute that is `target` as 
    `<a href="https://www.theodinproject.com/about" target="_blank" rel="noreferrer> About the odin project </a>` 
    this will open our new link in new tab by `_blank` and we used `rel = "noreferrer"` `rel` 
    we can give different inputs two of them are `noopener` this would prevent reverse tabnapping 
    and phishing attacks and `noreferrer` this will do the work of previous one and also prevent 
    previous page's information to newer one.

3. `Absolute and relative links`: 
    1. `Absolute link`: when we send user to other website on internet not redirecting to 
        another page of our own website. such links has two parts `scheme://domain/path` 
        `scheme`(either `http://` or `https://`) and domain(developer.mozilla.org) and 
        then `path` (/EN-US/DOCS/WEB/HTML)of the destination.
    2. `Relative link`: when we sending user to another page of our own website and this doesn't 
        require `scheme` and `domain` only require `path` because this is assumed to be same 
        as of the page from which user received that link.only include `file path` to another
        page relative to the page you are creating the link on. As `files` of same website are 
        in one directory then we can directly use direct file name as `index.html` `about.html`
        then we can use `<a href="about.html">About</a>` to redirect user from `index.html` 
        to `about.html` . But usually we keep only `index.html` in `root folder` directly and 
        rest we put in `pages` and if we did this then `about.html` won't work instead use 
        `pages/about.html` and sometimes may you get any unexpected issues then this is 
        better to `./` prepend this before such relative links to resolve them `./pages/about.html`
        this is best way.

4. `images`:html provide all variety of `elements` to display almost all type of media.use `<img />` 
    tag for this and this is `void tag` so use `src` attribute to locate location of the 
    image , even `src` attribute has two types of links to use relative and absolute. 
    `<img src="https://www.theodinproject.com/mstile-310x310.png" />` for `absolute` path 
    and for `relative` use `<img src="./images/dog.jpg" />`.and make sure that images should 
    be free for your intended purpose and still give credit to creator by adding their name 
    in a README file in your repository with mentioning their image. it is not necessary to add 
    `/` in ending of a void tag because of `html 5` but many developers still prefer to do this 
    and this is even right.

5. `parent directories`: if you wanted to use that `dog image` in `about page` both things are 
    different directories then you have to go to first parent directory by `../` and then use 
    that image as `../images/dog.jpg`.

6. `alt attribute`: beside `src` attribute for image use `alt` attribute also whenever using `src` 
    attribute because use this to describe image because this will good when image is not loading 
    and even for screen readers for visually impaired persons.

7. `image size attributes`: whenever you are putting any image use `src` , `alt` and even `height` 
    and `width` attribute with all images because this will prevent flash loading or jumping in 
    content despite even if you are usign CSS to do further optimisation these 4 attributes are 
    necessary to use with every image to make our content bug proof in all cases.and make sure to 
    mention `height` and `width` as of the actual image as it is as actuall representation of size 
    on our website will be controlled by css so keep here dimensions as it is of original image only.

8. `Note`: when ever you are making link of any other website then make sure to include `https://` 
    with that link otherwise you could face error because browser will try to search that file in 
    your website's directory .

9. `File structure`: usually we keep all files of our website in one `root directory` and then 
    all `html` files in `root directory` itself directly and then `javascript` in `js` , `images` 
    in `img` `css` in `css` 

    1. `rules for writing name of files`: name sure your folder , files name is always in lowercase 
        letters and no gap between letters and also make sure to write concise name because whenever 
        you will be linking things you have to type that long name multiple times. we just use simple 
        concise lower case letters and hyphen only no special number or character in name.also keep 
        relevant names. these naming rules are applied for all kinds of files means `html` `css` 
        `javascript` and so on.
    2. `To navigate multiple directories`:`../../elsewhere.html`.
    3. `Put efforts even in naming files and folder`: because that will display in our url to user 
        so that should be good enogh. 
    4. `Reserved characters`: `< > &` these three are reserved in `html` you can use them to show 
        literaly them in your content and to show `<` use `&lt;` for `>` use `&gt;` and for `&` use 
        `&amp;`. Means special entities will always begins with `&` and ends with `;` and then 
        whatever written in this will be encoding as special character.
    5. `Getting single double quotes`: you can type them straight forward but if you want them in 
        typography style use `&ldquo;` for `left double quote` , `&rdquo;` for `right double quote`.
        use `lsquo` for left single quote and `rsquo` for right single quote.because of `UTF-8` we 
        can write any special character directly into our `html` content even reserved keywords for 
        `html` itself (using combination of `&` and `;`) and then in between them we have to write 
        certain entities to represent them we can't still write them directly.


10. `commit messages`:having good commit message is very important because this will make our project's
     commit history super useful for our co-coder working with us , even when we will refer after some 
     time we will quickly get thought process and mindset of doing that thing and even we could easily 
     and fastly fix bugs.

	1. `Bad vs good commits`: `fixed a bug ` `bad commit` sounds to be `good commit` but not because 
        this not clarifying much about our intention. a good commit describes `why` behind your changes 
        and `what problem changes solve and how it solves them`. `structure of good commit` it consists 
        of two parts `Subject` and `body`

		1. `Subject`: A brief summary of the changes you made to the project. as `this is the 
            change i made to the codebase` (github commit `subject's` limit is 72 words so keep 
            in that limit)
		2. `Body`: A concise yet clear description of what changes you did `Describe the problem your 
            commit solves and how`.
		3. `Fixing bad commit with good commit`: `Fixed a bug` --> `Add missing link and alt text to 
            company's logo(subject)` `Screen readers won't read the images to user with disabilities 
            without this information(body)` and make sure to separate these two things by one line between
            them.some team of developers have their own convention but this is kind of standard .

	2. `How to commit with a subject and body in the message`: use `git commit` and then a new window will 
        open and then write your `commit` there and then close that so don't use `git commit -m <message>` 
        (but make sure you set the git editor in vs code)

	3. `When to commit`: whenever you made some useful changes in codebase then `commit` because this 
        will create a beautiful timeline which could be referred and even reverted in case of any bugs. 
        means make a commit the code you are working on to function like you wanted to do , fixing typos, 
        fixing bugs .

	4. `Some important tips for good commit messages`:
		1. `use an active voice`: `fixed card generator` 
		2. `avoid using vague commit messages`: `saved` or `updated` avoid such .
		3. `Commit early and often`: to get a superb timeline of your codebase and this will be even easy 
            to fix things if they break.