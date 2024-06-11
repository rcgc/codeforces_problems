use std::io;
 
fn main(){
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input);
    let t:i16 = input.trim().parse().unwrap();
    
    for _ in 0..t {
        let cin = std::io::stdin();
        let mut str = String::new();
        cin.read_line(&mut str).unwrap();
        
        let values = str
            .split_whitespace()
            .map(|x| x.parse::<i32>())
            .collect::<Result<Vec<i32>, _>>()
            .unwrap();
        
        let a = values[0];
        let b = values[1];
        let c = values[2];
        
        if a < b && b < c {
            println!("STAIR");
        } else if a < b && b > c {
            println!("PEAK");
        } else {
            println!("NONE");
        }
        str.clear();
    }
    input.clear();
}