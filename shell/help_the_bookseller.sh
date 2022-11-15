#!/bin/bash

stock_list() {
	L=$1
	M=$2

	for stock in L
	do
		echo "$L"
	done

}

stock_list "$1" "$2"
