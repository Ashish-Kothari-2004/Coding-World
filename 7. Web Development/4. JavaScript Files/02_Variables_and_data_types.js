// 1. var is globally scoped while let and const are block scoped.
// 2. var can be updated and re-declared within its scope.
// 3. let can be updated but not re-declared.
// 4. const can neither be updated nor be re-declared.
// 5. const must be initialized during declaration unlike let and var.

// js variables are case sensitive
var a = 23;
var b = "ashish";
console.log(a);
console.log(b);
console.log(typeof a, typeof b);


// Data types...........
let c = 433;
let d = 23.23;
let e = "Hello";
let f = true;
let g = undefined;
let h = null;
console.log(c, d, e, f, g, h);
console.log(typeof c, typeof d, typeof e, typeof f, typeof g, typeof h);
// Note: typeof null is object not null.


// Object in javascript: An object is a collection of properties, and a property is an association between a name (or key) and a value. A property's value can be a function, in which case the property is known as a method. Objects in JavaScript, just as in many other programming languages, can be compared to objects in real life.
let obj = {
    "name": "ashish", 
    "job code": 2323543
}
console.log(obj);
obj.salary = "20Crores";// It will add to objecte
console.log(obj);
obj.salary = "50Crores";// It will change the value of salary
console.log(obj);