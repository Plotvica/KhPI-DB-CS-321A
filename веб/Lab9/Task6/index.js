/* window.addEventListener("load", function (event) {
    let data = this.document.getElementById("result").innerText.split(" ");
    let spaned = data.map((e) => `<span>${e}</span>`);
    document.getElementById("result").innerHTML = spaned.join(" ");
}); */

/* document.getElementById("result").onmouseover=()=>{
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
} */

let first = document.getElementsByTagName("img")[0];
document.getElementById("start").onclick=()=>{
    nIntervId =setInterval(() => {
        let mrg=first.style.marginLeft
        mrg=Number(mrg.replace("px",""));
        if (mrg==""&&mrg==0) {
            mrg=-2000
        }else{
            mrg+=200
        }
       
        first.style.marginLeft=`${mrg}px`;
    }, 1000);
    document.getElementById("start").disabled=true;
}

document.getElementById("stop").onclick=()=>{
    clearInterval(nIntervId)
    document.getElementById("start").disabled=false;
}

