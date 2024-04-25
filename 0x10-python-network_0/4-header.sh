#!/bin/bash
# Send a GET request to the URL, and display the body of the response
curl -sX GET $1 -H "X-HolbertonSchool-User-Id: 98" -L
