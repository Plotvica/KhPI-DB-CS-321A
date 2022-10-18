document.getElementById("crt").onclick = () => {
    document.getElementById("result").innerHTML = GenerateArr();
}

document.getElementById("add").onclick = () => {
    let arr = document.getElementById("result").innerHTML.split(",");
    arr.push(getRandomFloat(-20, 5, 2));
    document.getElementById("result").innerHTML = arr;
}

document.getElementById("rm").onclick = () => {
    let arr = document.getElementById("result").innerHTML.split(",");
    if (document.getElementById("idRm").value == "") {
        alert(`Введіть номер елементу для видалення від 0 до ${arr.length}`)
        return;
    }
    if (document.getElementById("idRm").value < 0 || document.getElementById("idRm").value > arr.length - 1) {
        alert(`Введіть номер елементу для видалення від 0 до ${arr.length}`)
        return;
    }
    arr.splice(document.getElementById("idRm").value, 1);
    document.getElementById("result").innerHTML = arr;
}

document.getElementById("chg").onclick = () => {
    let arr = document.getElementById("result").innerHTML.split(",");
    arr[arr.length - 1] = getRandomFloat(-20, 5, 2);
    document.getElementById("result").innerHTML = arr;
}

function SortCustom(data, flag) {
    let data1 = data.splice(0, data.length / 2);
    if (flag) {
        data1.sort((a, b) => a - b);
    } else {
        data1.sort((a, b) => b - a);
    }
    return data1.concat(data);
}

document.getElementById("srt").onclick = () => {
    let flag =document.getElementById("up").checked;
    let arr = document.getElementById("result").innerHTML.split(",");
    document.getElementById("result").innerHTML = SortCustom(arr,flag);
}

document.getElementById("cpy").onclick = () => {
    let arr = document.getElementById("result").innerHTML.split(",");
    document.getElementById("resultCopy").innerHTML = Change2Parts(arr);
}

document.getElementById("filt").onclick = () => {
    let arr = document.getElementById("result").innerHTML.split(",");
    document.getElementById("resultCopy").innerHTML = CustomFilter(arr);
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


function Change2Parts(arr) {
    part1=arr.slice(0,arr.length/2);
    arr.splice(0,arr.length/2);
    arr.push(part1);
    return arr.flat();
}

function CustomFilter(arr) {
    let res=[];
    arr.forEach(e => {
        if (e<0) {
            res.push(e);
        }
    });
    return res
}