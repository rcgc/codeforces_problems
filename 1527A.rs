use std::io;
 
fn log2(mut n:i32) -> i32 {
    let mut count:i32 = -1;
    while n>0 {
        count+=1;
        n = n >> 1;
    }
    return count;
}

fn power2(mut p:i32) -> i32{
    let mut a:i32 = 2;
    
    //Stores final answer
    let mut ans:i32 = 1;
    while p > 0 {
        let last_bit:i32 = (p & 1);
        
        // Check if current LSB is set
        if last_bit != 0 {
            ans = ans * a;
        }
        
        a = a * a;
        
        // Right shift
        p = p >> 1;
    }
    return ans;
}

fn main(){
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input);
    let t:i16 = input.trim().parse().unwrap();
    
    for _ in 0..t {
        input = String::new();
        let _ = io::stdin().read_line(&mut input);
        let n:i32 = input.trim().parse().unwrap();
        
        let p = log2(n);
        let ans = power2(p);
        println!("{}", ans-1);
        input.clear();
    }
    input.clear();
}