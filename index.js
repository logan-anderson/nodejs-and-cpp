// import native addon

// expose module API
exports.isPrime = require('bindings')('prime').isPrime;