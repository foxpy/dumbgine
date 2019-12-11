In this document I am trying to describe a generic idea of what this engine
is supposed to look like.

#### cross-platform
Engine should run in Windows and Linux on devices with OpenGL 3.0 or higher.

#### games are zip files
Engine reads all game data from a single zip file (or maybe unpacked folder).
These zip files should not contain any OS/arch specific content, just a bunch
of assets, maps, textures, shaders, sounds and scripts.

#### game window should be able to have any size
Games **must not** run in fullscreen mode, this is not desktop-friendly. What
should be implemented is just borderless window which takes up all screen space.
This way users may easily Alt-Tab without any lag. talking about dynamic
resolution: the major benefit is automatic support for all kinds of monitor
ratios and resolutions. That's very cool! Some games do this and I absolutely
love the feature. Examples: Minecraft, Factorio, Starbound.

#### Lua as scripting language
Internal logic of games should fully depend on Lua. Yes, this is not very fast,
but you can't expect dumb engine to run very complex games, right? With some
common sence it should be possible to write pretty good games and distibute them
easily. What can be easier than to share a single zip file?

#### potato-friendly
Engine should run smoothly on low end video accelerators like Intel HD 3000...
of course on low settings. Low settings should look acceptable, though. Also,
absolute crap cards like Intel GMA or very old ATI/nVidia accelerators are not
covered by this statement. They are too old to be used for any post 2000 games
anyway.

#### functionality > cpu performance
If there is some cool additional functionality to be implemented, which costs a
tiny bit of additional CPU processing power, it should be implemented. However,
some significant CPU eaters are prohibited. Engine should run on low end
hardware, right?

## Additional features
It would be awesome to implement:
- gamepad input
- OpenAL 3D sound
- built-in UDP networking with reliable and unreliable messages
