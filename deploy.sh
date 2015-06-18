#!/bin/bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/rsa
git pull origin master
hexo g
hexo d

