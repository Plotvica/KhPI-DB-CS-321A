document.getElementById("crt").onclick = () => {
    document.getElementById("result").innerHTML = GenerateArr();
}

function GenerateArr() {
    let arr = [];
    let length = getRndInteger(25, 50);
    for (let i = 0; i < length; i++) {
        arr.push(getRandomFloat(-20, 5, 2))
    }
    return arr;
}

function getRandomFloat(min, max, decimals) {
    const str = (Math.random() * (max - min) + min).toFixed(decimals);
    return parseFloat(str);
}

function getRndInteger(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}