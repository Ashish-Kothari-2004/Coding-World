// What is Array in JavaScript?
// JavaScript Array is a data structure that allows you to store and organize multiple values within a single variable. It is a versatile and dynamic object. It can hold various data types, including numbers, strings, objects, and even other arrays. Arrays in JavaScript are zero-indexed i.e. the first element is accessed with an index 0, the second element with an index of 1, and so on.

// Creating an Array
// 1. Creating an Array using Array Literal
// const array_name = [item1, item2, ...]; // It is a common practice to declare arrays with the const keyword.

// 2. Creating an Array using Array Constructor (JavaScript new Keyword) 
// const cars = new Array("Saab", "Volvo", "BMW");

// Note: Both the above methods do exactly the same. Use the array literal method for efficiency, readability, and speed.

alert("Do you really want to continue...........???")
// 1. Creating array and accessing its elements........
let course = ["BCA", "BTech", "MCA", "BBA"];
let std_name = new Array("Roahn", "Amit", "Rohit");
console.log(course[0]);
console.log(course[1]);
console.log(course[2]);
console.log(course[3]);
console.log();
console.log(std_name[0]);
console.log(std_name[1]);
console.log(std_name[2]);
console.log(std_name[3]);// undefined
console.log(std_name.length); // Output: 3
console.log(std_name);
console.log(std_name[std_name.length - 1]);// Accessing last element
course[2] = "BCom";// Modifying the Array Elements
console.log(course[2]); // Output: BCom

// 2. Adding Elements to the Array
console.log();
console.log(course);
course.push("BscIT");// Add Element to the end of Array 
console.log(course);
course.unshift("BEd");// Add Element to the beginning
console.log(course);

// 3. Removing Elements from an Array
console.log();
console.log(course);
a = course.pop();// Removes and returns the last element
console.log("Popped element is: ", a);
console.log(course);
b = course.shift();// Removes and returns the first element
console.log(course);
course.splice(1, 2);// Removes 2 elements starting from index 1
console.log(course); 

// 4. Iterating Through Array Elements
// We can iterate array and access array elements using for and forEach loop.
for(let i = 0; i < course.length; i++)
{
    console.log(course[i]);
}

// 5. Array Concatenation
let concatArray = course.concat(std_name);
console.log(concatArray);
console.log(course.concat(std_name));// New string will return since strings are immutable in javascript
console.log(course);
console.log(std_name);


// 6. Conversion of an Array to String
// We have a builtin method toString() to converts an array to a string.
console.log(course.toString());
console.log(typeof course); // Output: Object

// 7. Recognizing a JavaScript Array
// a. By using Array.isArray() method
// b. By using instanceof method 
// Difference Between JavaScript Arrays and Objects
// a. JavaScript arrays use indexes as numbers.
// b. objects use indexes as names..
console.log(Array.isArray(course)); // Output: true
console.log(course instanceof Array);// Output: true

// 8.  A common error is faced while writing the arrays:
arr1 = [1,2, 3, 4, 5];// It will create an array with 5 elements 
arr2 = new Array(8);// It will create an array with size 8

console.log(arr1); // Output: [ 1, 2, 3, 4, 5]
console.log(arr1.length);// Output 5
console.log(arr2);// Output: [ <8 empty items> ]
console.log(arr2.length); // Output: 8