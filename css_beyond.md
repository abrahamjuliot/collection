- Flexbox Basics
 - display: flex
 - flex-direction
 - justify-content
 - flex-wrap
 - flex-grow
 - flex
 - order
 - align-self

```css

.container {
	display: flex;
	flex-direction: row;
	justify-content: space-between;
	flex-wrap: wrap;
}

.container .item {
	flex-grow: 1;
}

.col-1, .col-2 {flex: 1}
.col-3 {flex: 3; order: -1}

.col-2 {
	align-self: center;
}

@media (max-width: 640px) {
	main {
		flex-direction: column;
	}
}
```

- Multi-Column Layout
 - column-count
 - column-gap
 - column-rule
 - column-width
 - column-span
 - columns
 
```css

main {
	column: 250px 3;
	column-rule 2px dotted #eee;
	column-gap: 3em;
}

h1 {
	column-span: all;
}
```

- Transition Basics
 - transition-property
 - transiiton-duration
 - transition-timing-function: ease, linear, ease-in, ease-out, ease-in-out, step-start, step-end, steps(4, end), cubic-bezier(p1x, p1y, p2x, p2y)
 - transition-delay

- Transforms
 - rotate()
 - rotateX()
 - rotateY()
 - rotateZ()
 - transform-origin
 - scaleX()
 - scaleY()
 - scaleZ()
 - scale()
 - skew()
 - translateX()
 - translateY()
 - translate()
 
- 3D Transforms (GPU powered)
 - perspective
 - roatate3d()
 - rotateZ()
 - perspective-origin
 - translate3d()
 - translateZ()
 - transform-style: preserve-3d
 - backface-visibility: hidden
 
```css

body {
	perspective: 800px
	perspective-origin: 50% 50%;
}
.wrap {
	transform-style: preserve-3d;
	transition: transform 1s ease;
}
.wrap:hover {
	transform: rotate3d(1,1,0,65deg) // x,y,z,deg
}
```

- Keyframe Animations
 - @keyframes name { }
 - from {} to {}
 - 0% {} 100% {}
 - if 0% and 100% are not defined, the browser will use the default state of the element
 - animation-name (mulitple animation names may be provided)
 - animation-duration
 - animation-delay
 - in the shorthand, duration is first and followed by delay (1s 1s)
 - animation-timing-function (apply to keyframs individuall and or to animation)
 - animation-iteration-count (value or infinite)
 - animaiton-direction (reverse, alternate, alternate-reverse, normal)
 - animation-fill-mode (backwards, forwards, both)
 - animation-play-state (running, paused)
 - animation: name 1s ease infinite forwards

- Media Queries
 - <meta name="viewport" content="width=device-width, initial-scale=1.0">
 - @media () {}
 - @media all and () {}
 - @media only screen and () {}
 - @media () and () {}
 - @media print () {}
 - min-width // this or wider
 - max-width // this or narrower
 - max-device-width // device screen size as opposed to window size
 - use mid-width for mobile first design
 - use percentage based widths for fluid layouts
 
