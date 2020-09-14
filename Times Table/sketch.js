let ratio;
let factor = 0;

function setup(){
    createCanvas(windowWidth, windowHeight);
    ratio = height / 2 - 32;
}

function getVector(index, total){
    const angle = map(index % total, 0, total, 0, TWO_PI);
    const v = p5.Vector.fromAngle(angle + PI);
    vect.mult(ratio);
    return vect;
}

function draw(){
    background(0);
    const total = 200;
    factor += 0.015;

    translate(width/2 , height/2);
    stroke(255, 150);
    noFill();
    ellipse(0, 0, ratio*2);

    strokeWeight(2);

    for(let i=0; i<total; i++){
        const a = getVector(i, total);
        const b = getVector(i*factor, total);
        line(a.x, a.y, b.x, b.y);
    }

}
