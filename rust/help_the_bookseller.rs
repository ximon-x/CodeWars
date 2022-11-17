use std::collections::HashMap;

fn stock_list(list_art: Vec<&str>, list_cat: Vec<&str>) -> String {
    let mut answer = String::new();
    let mut books = HashMap::new();

    for code in list_cat {
        books.insert(String::from(code), 0);
    }

    println!("{:?}", books);
    answer
}

let mut b = vec!["BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600"];
let mut c = vec!["A", "B", "C", "D"];

let result = stock_list(b, c);
println!("{}", result);
