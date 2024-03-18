#!/bin/bash

filename="hisham.txt"

while IFS= read -r line; do
    echo "$line"
    # Add your processing logic here
done < "$filename"
