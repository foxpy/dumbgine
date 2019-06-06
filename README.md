# dumbgine

## What is it?

This is yet another dumb game engine.

## What is it for?

For nothing. It is just my personal project.

## But why?

Just for fun.

## How can it be useful for me?

You can participate in its development by leaving an issue or pull request.

## There are another oss game engines, why should I take attention to yourth?

Probably for education and fun. These are my reasons to develop dumbgine.
Also, you may possible like some of my ideas.

## What are your ideas?

My aim is to build a single dumbgine executable (it may be dynamically linked,
though) which would run "dumbgine games". "dumbgine game" is a folder or e. g.
zip archive which contains all assets and scripts. Running "dumbgine games"
should be easy as:
```bash
# Get the dumbgine executable
cd ~/code
git clone https://github.com/foxpy/dumbgine.git
cd dumbgine
make
sudo make install

# Get some "dumbgine game"
wget -O ~/games/dumbgame.zip https://whatever.wherever/something/dumbgame.zip

# Run it
dumbgine ~/games/dumbgame.zip
```

## I don't like it!

Well, looks ike you have to skip this repository.

## I like it!

Cool! It would be awesome from you to support the development. At the moment of
writing, this repository doesn't even exist, but it should start from easy
stuff like OpenGL triangles and slowly become more and more advanced.
