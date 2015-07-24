#!/bin/bash
sed -i "s#http://i.imgur.com#http://ppdg.ml#g" *.md
git add .
git commit -m "post"
git push origin master

