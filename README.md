# electron-quick-start

**Clone and run for a quick way to see Electron in action.**

This is a minimal Electron application based on the [Quick Start Guide](https://electronjs.org/docs/tutorial/quick-start) within the Electron documentation.

**Use this app along with the [Electron API Demos](https://electronjs.org/#get-started) app for API code examples to help you get started.**

A basic Electron application needs just these files:

- `package.json` - Points to the app's main file and lists its details and dependencies.
- `main.js` - Starts the app and creates a browser window to render HTML. This is the app's **main process**.
- `index.html` - A web page to render. This is the app's **renderer process**.

You can learn more about each of these components within the [Quick Start Guide](https://electronjs.org/docs/tutorial/quick-start).

## To Use

To clone and run this repository you'll need [Git](https://git-scm.com) and [Node.js](https://nodejs.org/en/download/) (which comes with [npm](http://npmjs.com)) installed on your computer. From your command line:

```bash
# Clone this repository
git clone https://github.com/electron/electron-quick-start
# Go into the repository
cd electron-quick-start
# Install dependencies
npm install
# Run the app
npm start
```

Note: If you're using Linux Bash for Windows, [see this guide](https://www.howtogeek.com/261575/how-to-run-graphical-linux-desktop-applications-from-windows-10s-bash-shell/) or use `node` from the command prompt.

## Resources for Learning Electron

- [electronjs.org/docs](https://electronjs.org/docs) - all of Electron's documentation
- [electronjs.org/community#boilerplates](https://electronjs.org/community#boilerplates) - sample starter apps created by the community
- [electron/electron-quick-start](https://github.com/electron/electron-quick-start) - a very basic starter Electron app
- [electron/simple-samples](https://github.com/electron/simple-samples) - small applications with ideas for taking them further
- [electron/electron-api-demos](https://github.com/electron/electron-api-demos) - an Electron app that teaches you how to use Electron
- [hokein/electron-sample-apps](https://github.com/hokein/electron-sample-apps) - small demo apps for the various Electron APIs

## License

[CC0 1.0 (Public Domain)](LICENSE.md)

# electron test specifics...


<H1>Electron Installation</H1> ( https://www.npmjs.com/package/electron ) 

To install prebuilt Electron binaries, use npm. The preferred method is to install Electron as a development dependency in your app:
npm install electron --save-dev --save-exact


quick start app:

git clone https://github.com/electron/electron-quick-start
cd electron-quick-start
npm install
npm start




<h1>packager Installation</H1> ( https://www.npmjs.com/package/electron-packager )
This module requires Node.js 4.0 or higher to run.

# for use from cli 
npm install electron-packager -g



electron-packager <sourcedir> <appname> --platform=<platform> --arch=<arch> [optional flags...]

can leave out platform and arch if just making a version for the current system/architechture

used:
electron-packager electron-quick-start quickstartapp

to crate the package from just OUTSIDE the apps directory


<H1>dmg creator:</H1> ( https://www.npmjs.com/package/electron-installer-dmg )

installing:
# For use from cli
npm i electron-installer-dmg -g

usage:
Usage: electron-installer-dmg <path/to/.app> <appname>
 
Create DMG installers for your electron apps.
 
Usage:
  electron-packager ./FooBar-darwin-x64/FooBar.app FooBar
 
Options:
  --out=<path>         The directory to put the DMG into. [Default: `process.cwd()`].
  --icon=<path>        Path to the icon file that will be the app icon in the DMG window.
  --icon-size=<px>     How big to make the icon for the app in the DMG. [Default: `80`].
  --background=<path>  Path to a PNG image to use as the background of the DMG.
  --debug              Enable debug messages.
  --overwrite          Overwrite any existing DMG.
  -h --help            Show this screen.
  --version            Show version.


used:
electron-installer-dmg quickstartapp-darwin-x64/quickstartapp.app qstart
to create the dmg from just OUTSIDE the packaged app. 

## This project specifics

