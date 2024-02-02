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
        //assert!(values.len() == 3);
        
        let a = values[0];
        let b = values[1];
        let c = values[2];
        
        /*
            If two numbers are the same, they translate to the same
            bit sequence in binary. 
            This means the application of the bitwise XOR operation
            should return a resultant sequence of all 0s.
        */
        if a ^ b == 0 {
            println!("{}", c);
        } else if b ^ c == 0 {
            println!("{}", a);
        } else if a ^ c == 0 {
            println!("{}", b);
        }
        str.clear();
    }
    input.clear();
}