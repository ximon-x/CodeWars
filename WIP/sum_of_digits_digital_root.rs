fn digital_root(n: i64) -> i64 {
	let str_n = n.to_string();
	let mut result = 0;

	for c in str_n.chars() {
		result = &result + c.to_digit(10).unwrap();
        println!("Result is currently {}", &result);
	}

    i64::from(result)
}

fn main() {
    let answer = digital_root(144);

    println!("{}", answer);
}
