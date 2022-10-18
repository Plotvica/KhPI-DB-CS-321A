document.getElementById("add").onclick = () => {
    console.log(1);
    div = document.createElement("div");
    div.style.position = "absolute";
    div.style.top=String(getRandomInt(500))+"px";
    div.style.left = String(getRandomInt(500))+"px";
    div.style.width = String(getRandomInt(300))+"px";
    div.style.height = String(getRandomInt(100))+"px";
    div.style.backgroundColor = `rgb(${getRandomInt(255)}, ${getRandomInt(255)}, ${getRandomInt(255)})`;
    div.innerHTML=getRandomInt(10000)
    document.getElementsByTagName("body")[0].appendChild(div);
}

document.getElementById("rm").onclick = () => {
    document.getElementsByTagName("body")[0].removeChild(document.getElementsByTagName("body")[0].lastChild);
}

function getRandomInt(max) {
    return Math.floor(Math.random() * max);
}