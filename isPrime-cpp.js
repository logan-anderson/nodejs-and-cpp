const testing = require('./index')

for (let index = 0; index < 10; index++) {
    console.log(index + 1)
    testing.isPrime(1610612741)
}