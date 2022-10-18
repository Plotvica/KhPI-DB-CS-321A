
document.forms.calc.addEventListener('submit', (e) => {
  e.preventDefault();
  let a=document.getElementById("length").value;
  let b=document.getElementById("width").value;
  console.log();
  if (a<=0||b<=0) {
    alert("Incorrect values!");
    return;
  }
  switch (e.submitter.id) {
    case "P":
        alert((Number(a)+Number(b))*2);
        break;
    case "S":
        alert(a*b);
        break;
  }
});