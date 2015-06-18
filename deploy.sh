#!/bin/bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/rsa.pub
git pull origin master
hexo g
hexo d

