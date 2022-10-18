document.getElementById("crt").onclick = () => {
    document.getElementById("result").innerHTML = GenerateArr();
}

document.getElementById("add").onclick = () => {
    let arr=document.getElementById("result").innerHTML.split(",");
    arr.push(getRandomFloat(-20, 5, 2));
    document.getElementById("result").innerHTML=arr;
}

document.getElementById("rm").onclick = () => {
    let arr=document.getElementById("result").innerHTML.split(",");
    if (document.getElementById("idRm").value=="") {
        alert(`Введіть номер елементу для видалення від 0 до ${arr.length}`)
        return;
    }
    if (document.getElementById("idRm").value<0||document.getElementById("idRm").value>arr.length-1) {
        alert(`Введіть номер елементу для видалення від 0 до ${arr.length}`)
        return;
    }
    arr.splice(document.getElementById("idRm").value, 1);
    document.getElementById("result").innerHTML=arr;
}

document.getElementById("chg").onclick = () => {
    let arr=document.getElementById("result").innerHTML.split(",");
    arr[arr.length-1]=getRandomFloat(-20, 5, 2);
    document.getElementById("result").innerHTML=arr;
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