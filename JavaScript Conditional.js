if (value === val1) { 
	// do 
} else if (value === val2) { 
	//do 
} else { 
	// do 
}

switch (value) {
	case val1: // do
		break;
	case val2: // do
		break;
	default: // do
}

value === val1 ? 
	// do 
: value === val2 ? 
	// do 
: 	// do

console.log(isTrue ? 'yes' : 'no'); // ternary expression

// SHORT CIRCUITING
// && returns the first false value or the final true value
// || returns the first true value or the final false value

// && returns the first false value or the final true value
console.log(3 === 3 && 'cow' && 'chicken'); // => 'chicken'
// the final value is returned if the first value(s) are true
// otherwise the first false value is returned
3 === 3 && 'cow' && console.log('chicken')
// similar to an if block, but in one line
// if the first 2 conditions are true the final statement will be performed

// || returns the first true value or the final false value
console.log(3 === 3 && 'cow' && 'chicken'); // => true (becasue 3 === 3)
// the final value is returned if the first value(s) are true
// otherwise the first false value is returned

function isAdult( age ) {
	return age && age >= 18;
}

// the above is the same as
function isAdult( age ) {
	if (age && age >= 18) {
		retrurn true;
	} else {
		retrurn false;
	}
}

function count(start) {
	start = start || 1;
	// if start is undefined assign 1 by default to start
	// however, this does not work for 0 as that will be false
}

function greet(name) {
	name && console.log('Hi ' + name);
	// similar to an if block
}
