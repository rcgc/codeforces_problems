use std::io;

fn main() {
    let mut t:i8=0;
    let mut str = String::new();
    let mut input = String::new();
    
    io::stdin().read_line(&mut input).expect("Not a valid string");
    t = input.trim().parse().expect("Not a valid number");
    for i in 0..t {
      io::stdin().read_line(&mut str).expect("Not a valid string");
      //println!("{}", str);
      let mut ch0 = str.chars().nth(0).unwrap();
      let mut ch1 = str.chars().nth(1).unwrap();
      let mut ch2 = str.chars().nth(2).unwrap();
      if ch0 != 'a' && ch1 != 'b' && ch2 != 'c' {
          println!("NO");
      } else {
          println!("YES");
      }
      str.clear();
    }
}