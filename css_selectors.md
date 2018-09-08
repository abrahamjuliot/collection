- Attribute Selectors:

```css

[name] {color: red}
[name="contact"] {color: blue}
form[name="contact"] {color: green}
input[type="text"] {color: white}
input[type="button"],
input[type="reset"],
input[type="submit"] {cursor: pointer}
```
- DRY (dont repeat yourself) css
 - elements can have multiple classes assigned to it
  - avoid repeating the same bits of code in your style sheet

```css

/* DRY Classes */
.rounded {border-radius: 50%}
.btn {cursor: pointer}
@media (min-width: 760px) {
	.inline {
		width: auto;
		display: inline-block
	}
}
```

- Child, Adjacent, and General Sibling Combinators
 - The > targets a direct child of an element
 - The + targets an element's immediate sibling
 - The ~ targets all the specified siblings that follow an element
 
```css

form > a {color: blue}
.btn + .btn {margin-left: 20px}
h1 ~ label {background: tomato}
```

- Psuedo-classes
 - :first-child
 - :last-child
 - :only-child
 - :empty
 
```css

li:first-child {
	background: blue;
	color: white;
}

li:last-child {
	background: white;
	color: blue;
}

li:only-child {
	color: #bbb;
}

li:empty {
	background: grey;
}
```

- Attribute Selectors
 - a[href^="http:"] // ^ (begins with attr selector)
 - a[href$=".pdf"] // $ (ends with attr selector)
 - img[src*="thumbnails"] //  (contains attr selector)

- Element States Pseudo-Classes
 - input:focus
 - :disabled
 - :input[type="checkbox"]:checked + label // + (adjacent selector) selects immediate sibling that is a label

- Structural pseudo-classs
 - :nth-child() // tagets all matching items
 - ([select every ? item]n+[start with the ? item])
 - the first can be ommited if it is 1 and the second can be ommited if it is a 0
 - -n+3 (negative targets every item that precedes)
 - :nth-of-type() // only tagets matching items of the same type
 - use http://nth-calculator.com/
 - :root
 - :target
 - :not()
 
 ```css
 
 input:not([type="submit"]) {
 box-shadow: inset 0 2px 0 rgba(0,0,0, .15);
 }
 ```
 
 - Psuedu-Elements
  - ::first-line
  - ::first-letter
  - ::before
  - ::after
  - attr()
	
	```css
	
	.jpg::before {
		content: "JPG - ";
		font-size: .75em;
  }
	
	.zip::before {
		content: url(../img/icn-zip.svg);
		margin-right: 8px;
	}
	
	h1::before {
		content: "";
		display: inline-block;
		width: 24px;
		height: 24px;
		border-radius: 50%;
		background: coral;
		margin: 0 10px;
	}
	
	a::after {
		content: attr(title);
		display: inline-block;
		color: initial;
		font-size: .65em;
		margin-left: 5px;
	}
	```
