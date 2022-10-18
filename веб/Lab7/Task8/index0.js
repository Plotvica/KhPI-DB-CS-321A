document.getElementById("add").onclick=()=>{
    li=document.createElement("li");
    let arg=document.getElementById("arg").value;
    if (arg=="") {
        return
    }
    document.getElementById("arg").value="";
    li.innerHTML=arg;
    document.getElementById("list").appendChild(li);
    document.getElementById("add").disabled=true;
}



document.getElementById("list").addEventListener("click", (event)=>{
    let target=event.target;
    if (target.tagName!="LI") {
        return;
    }
    target.style.backgroundColor="black";
    target.style.color="white";
    target.className="toRm"
    document.getElementById("rm").disabled=false;
});

document.getElementById("arg").onkeyup=()=>{
    if (document.getElementById("arg").value=="") {
        document.getElementById("add").disabled=true;
    }else{
        document.getElementById("add").disabled=false;
    }
}


document.getElementById("rm").onclick=()=>{
    let l=document.getElementById("list").children;
    if (l==null) {
        return;
    }
    for (let item of l) {
       if (item.className=="toRm") {
        item.remove();
       }
    }
    document.getElementById("rm").disabled=true;
}