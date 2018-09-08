```html
svg(
	height='100'
	width='100'
	xmlns='http://www.w3.org/2000/svg'
	version='1.1')
	rect(height='80' width='100')
	rect(
		height='50' 
		width='80' 
		fill='white'
		x='10' y='10')
	rect(
		height='10' 
		width='40' 
		x='30' y='90')
		
svg()
	rect(height='100' width='70' fill='white' stroke='#FF2626' stroke-width='10' x='5' y='5' rx='5')
	circle(cx='40' cy='105' r='3' fill='white')

style.
	circle.badge {
		fill: none;
		stroke: #008B6F;
		stroke-width: 7px;
	}
	line.badge {
		stroke: black;
		stroke-width: 5px;
	}
	text.badge {
		font-size: 60px;
		text-anchor: middle;
		font-family: 'FilmotypeMajor', Arial;
		stroke: #000;
		stroke-width: 2px;
		fill: #F6F7F3;
	}
	polygon.badge {
		fill: #008B6F;
		stroke: black;
		stroke-width: 2px;
	}
	svg {
		height: auto;
		width: 50%;
	}

svg(
	xmlns='http://www.w3.org/2000/svg'
	version='1.1'
	viewBox='0 0 268 268')
	circle.badge(
		r='130'
		cx='134'
		cy='134')
	line.badge(x1='47' y1='198' x2='221' y2='198')
	polygon.badge(
		points='52,190,134,30,216,190')
	text.badge(x='134' y='142') SVG
	g(transform='translate(45,67) rotate(10 12.5 12.5) scale(0.6)')
		polygon(points='7,10,12,0,17,10' fill='#59BFC6')
		polygon(points='0,25,5,15,10,25' fill='#59BFC6')
		polygon(points='15,25,20,15,25,25' fill='#59BFC6')

	// alternate polygon using path
	// M is start path
	// L is lines between points
	// is close path
	path(d='M7,10 L7,10 L12,0 L17,10 Z')
	// C denotes cubic-bezier
	path(d='M100,300 C0,150, 250, -100, 250, 50')
	
	// use http://polynom.co or http://anthonydugois.com/polynomic to build svg
	
	// Quadratic Bezier Curve
	path(d='M100 200 Q200 0 300 200')
	
	// Elliptical rc Curve
	path(d='')

// symbols
style.
	.defined-icon {
		display: none;
	}
	.displayed-icon {
		height: auto;
		width: 30%;
	}
svg(
	xmlns='http://www.w3.org/2000/svg'
	class='defined-icon'
	)
	symbol(id='phone')
		rext()
		circle()
		
// and to reuse the symbol
svg(
	xmlns='http://www.w3.org/2000/svg'
	viewBox='0 0 80 110'
	class='displayed-icon'
	version='1.1'
	xmlns:xlink='http:www.w3.org/1999/xlink'
	)
	title Schmuffle Phone Icon
	desc describe your svg for screen readers
	use(xlink:href='#phone')
	
```
