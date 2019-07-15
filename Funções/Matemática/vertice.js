

function vertice (a, b, c) {

  var delta = b*b - 4*a*c;
  var Xv = - b / (2*a);
  var Yv = - delta / (4*a);
  console.log("Valor Delta: " + delta);
  console.log("Valor X: " + Xv + "\n" + "Valor Y: " + Yv);
}

vertice(1,3,5);

