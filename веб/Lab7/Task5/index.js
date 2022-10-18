document.getElementById("add").onclick=()=>{
    li=document.createElement("li");
    let arg=document.getElementById("arg").value;
    if (arg=="") {
        return
    }
    document.getElementById("arg").value="";
    li.innerHTML=arg;
    document.getElementById("list").appendChild(li);
}

document.getElementById("rm").onclick=()=>{
    document.getElementById("list").removeChild(document.getElementById("list").lastChild);
}