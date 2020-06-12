const isPrime = (num) => {
    let flag = true;
    for (let i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

for (let index = 0; index < 10; index++) {
    console.log(index + 1)
    isPrime(1610612741)
}