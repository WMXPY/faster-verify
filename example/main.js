const {
    LeastSquares,
    IsNumber,
    IsArray,
    MD5
} = require("../build/Release/dorimt.node"); // native c++
const isPrime = require('./isPrime.js'); // js

console.time("native");
console.log(MD5("2133333333"));
console.timeEnd("native");