1. `Some important tips for good commit messages`:
		1. `use an active voice`: `fixed card generator` 
		2. `avoid using vague commit messages`: `saved` or `updated` avoid such .
		3. `Commit early and often`: to get a superb timeline of your codebase and this 
            will be even easy to fix things if they break.
		4. `The seven rules of a great Git commit message`:
			1. `Separate subject with body with a blank line`: the text till first break is 
                considered as `commit title` . Not all commit message require `subject` and `body` if 
                the message is directl itself like `fix typo in introduction to user guide` such one 
                liners code be written by using `git commit -m "Fix typo in introductuion to user guide` 
                `git log --oneline` this will print `subject` of the `commit message` there are more such 
                useful commands which works when there is one line space between `subject` and `body`. 
			2. `Limit the subject line to 50 characters`: if this sounds hard to do then you are making 
                multiple changes under one `commit` so it is recomended when you are doing `atomic commits` 
                you can do this thing very easily but consider 72 the hard limit.
			3. `Capitalize the subject line` : begin all subject lines with capital letter.
			4. `Do not end the subject line with a period`: trailing punctuation in subject line is not 
                required.
			5. `Use the imperative mood in the subject line`: Imperative mood is just used when you are 
                giving command or instruction .like `clean your room`. It sounds rude but subject line has 
                to be in this mood. you can relax this restriction in body.
			6. `Wrap the body at 72 characters`
			7. `Use the body to explain what and why vs. how`: In most cases you can leave how the change 
                has been made because code will explain , if can't then comments would . Just focus on making 
                clear the reasons why you made the change in the first place—the way things worked before the 
                change(and what was wrong with that), the way they work now, and why you decided to solve it 
                the way you did.
		5. `bullet points`: furthre paragraphs comes with blank lines , and bullet points are evevn okay as space and then  `*` or `-` and then a space and then start writing