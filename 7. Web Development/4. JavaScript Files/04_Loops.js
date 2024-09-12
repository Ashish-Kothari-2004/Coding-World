// Types of javaScript loops: 
// 1. for - loops through a block of code a number of times.
// 2. forEach - The forEach() method calls a function for each element in an array.
// 3. for-in - loops through the properties of an object.
// 4. for-of - loops through the values of an iterable object.
// 5. while - loops through a block of code while a specified condition is true.
// 6. do-while - also loops through a block of code while a specified condition is true.


// 1. for loop.....
for(let i = 1; i <= 10; i++) 
{
    console.log(i);
}


// 2. for-in loop....
// Used with Object properties
let obj = {
    "name": "Ashish",
    "address": "Dehradun",
    "PIN": "248001"
}
for (const key in obj) {

    const element = obj[key];
    console.log(element);
}


// 3. for-of loop.....
// Used with iterable object 
let object = "Ashish";
for (const iterator of object) {
    console.log(iterator);
}


// 4. while loop....
let j = 1;
while(j <= 10)
{
    console.log(j);
    j++;
}


// 5. do-while loop.....
let k = 1;
do{
    console.log(k);
    k++;
} while(k <= 10);
