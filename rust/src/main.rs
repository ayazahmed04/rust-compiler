fn main() {
    println!("Hello ");
    // this is intentional
    let _ya: i32 = add(2, 3);
    println!("yazi ");
    println!("{}", _ya);
    println!("Minus {}", minux(5, 4));
    println!("Multiply {}", multiply(5, 4));
}

pub fn add(a: i32, b: i32) -> i32 {
    a + b
}
pub fn minux(a: i32, b: i32) -> i32 {
    a - b
}
pub fn multiply(a: i32, b: i32) -> i32 {
    a * b
}
