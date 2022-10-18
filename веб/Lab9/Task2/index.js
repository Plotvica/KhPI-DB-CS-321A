document.getElementById("adapt").onclick = () => {
    let res;
    let data = document.getElementById("data").value.split(" ");
    if (data.length > 7) {
        res = data.slice(0, 7).join(" ") + "...";
    } else {
        res = data.join(" ");
    }
    document.getElementById("result").innerHTML = res;
}

document.getElementById("sort").onclick = () => {
    let inner;
    let data = document.getElementById("data").value.split(" ");
    data.sort((a, b) => b.length - a.length)
    let ol=document.createElement("ol");
    data.forEach(e => {
        inner+=`<li>${e}</li>`
    });
    ol.innerHTML=inner;
    document.getElementById("result").innerHTML=`<ol>${inner}</ol>`;
}