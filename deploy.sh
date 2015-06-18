#!/bin/bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/rsa
git pull origin master
git clean -f
hexo g
hexo d

