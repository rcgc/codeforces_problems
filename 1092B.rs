use std::io;
 
fn main(){
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input);
    let n:i32 = input.trim().parse().unwrap();
    
    let cin = std::io::stdin();
    let mut str = String::new();
    cin.read_line(&mut str).unwrap();
    
    let mut values = str
        .split_whitespace()
        .map(|x| x.parse::<i32>())
        .collect::<Result<Vec<i32>, _>>()
        .unwrap();
    
    values.sort();
    
    let mut acum:i32  = 0;
    
    for i in (0..n).step_by(2){
        acum += values[(i+1) as usize]-values[i as usize];
    }
    
    println!("{}", acum);
    
    str.clear();
    
    input.clear();
}