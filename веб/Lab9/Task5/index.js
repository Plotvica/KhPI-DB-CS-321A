/* window.addEventListener("load", function (event) {
    let data = this.document.getElementById("result").innerText.split(" ");
    let spaned = data.map((e) => `<span>${e}</span>`);
    document.getElementById("result").innerHTML = spaned.join(" ");
}); */

document.getElementById("result").onmouseover=()=>{
    let block = document.getElementById("result");
    nIntervId =setInterval(() => {
        switch (block.style.backgroundColor) {
            case "green":
                block.style.backgroundColor="red";
                break;
        
            default:
                block.style.backgroundColor="green";
                break;
        }
    }, 1000);
}

document.getElementById("result").onmouseout=()=>{
    clearInterval(nIntervId );
    document.getElementById("result").style.backgroundColor="white";
}