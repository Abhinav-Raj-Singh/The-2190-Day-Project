/*
let check = Infinity;

alert(check);

let BigInt = 123n;

alert(typeof(BigInt));

let str = "Hello";
let str2 = 'Check';
let phrase = `Hello, ${str2}`;

alert(phrase);

let ae = `evaluating arithmetic expression, ${2+5}`;
alert(ae);

let r = null;
alert(r);

let  p;
alert(p);

let age = undefined;
alert(age);*/

// Declaring strings

const string = "The revolution will not be televised.";
console.log(string);

// Below are the examples of bad strings
/*
const badString1 = This is a test;
const badString2 = `This is a test;
const badString3 = This is a test`;
*/

const one = "Hello";
const two = "Bro";
const joined = `${one} ${two}`;
console.log(joined);

// Multi line string

const multiLineString = `Hello,
Bro
How are You
`;

console.log(multiLineString);
alert(multiLineString);

// Multi line string using \n

const escapedString = "Hello\nBro\n How are you\n Escaped character";
alert(escapedString);

// Printing quotes in string

const quoteString = "I'm";
console.log(quoteString);

const escapingString = "I\"m";
alert(escapingString);


const isGreater = 4>2;
alert(`is 4 greater than 2: ${isGreater}`);