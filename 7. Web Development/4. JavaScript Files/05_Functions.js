function nice(name)
{
    console.log("Hey " + name + " What are you doing!");
    console.log("Hey " + name + " What do you do ?");
}
function sum(a , b ,c = 2)
{
    return a + b + c;
}

nice("ashish");// Function invocation or function call
nice("Rohan");
console.log ("The sum of the numbers is: ", sum(2, 2));
console.log ("The sum of the numbers is: ", sum(7, 1));
console.log ("The sum of the numbers is: ", sum(1));// Passing only one value, returns NAN(Not a Number) since b in not define

// Arrow function in JavaScript......
const func = (x) => {
    console.log("I am an arrow function with x = ", x);
}

func(232);// Function invocation or function call
func(1234);
func(14);