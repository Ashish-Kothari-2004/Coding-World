let real_name = "ashish";
console.log(real_name[0]);
console.log(real_name[1]);
console.log(real_name[2]);
console.log(real_name[3]);
console.log(real_name[4]);
console.log(real_name[5]);
console.log(real_name[6]);//  undefined
console.log(real_name.length);// returns array length

let friend = "Rohan";
console.log("His name is " + real_name + " and his friends name is " + friend);

// Template literals.............
console.log(`His name is ${real_name} and his friend name is ${friend}`);// `This is backtick`
console.log(`${real_name}'s friend is ${friend}`);

// Escape sequence character............
console.log("This is a ashish\'s code");
console.log("Text with a tab space\t");
console.log("Text with a new line character\n");


// Note: In javascript Strings are immutable means we cannot change string after creating a string.
// String functions..........
console.log(real_name.toUpperCase());
console.log(real_name.toLowerCase());
console.log(real_name.charAt(2));
console.log(real_name.concat(friend));
console.log(real_name.endsWith("h"));
console.log(real_name.startsWith("h"));
console.log(real_name.indexOf("i"));
console.log(real_name.slice(1, 4));// "ashish" --> shi
console.log(real_name.slice(1))// slice from 1 to end of the string  "ashish" --> "shish"
console.log(real_name.concat(friend));// ashishRohan
console.log(real_name.concat(friend, "Sharma"));
console.log(real_name.replace("as", 23));
console.log(real_name.length);// length is a property
