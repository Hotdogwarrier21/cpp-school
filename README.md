# tchs-cpp-template
Template for tchs students to use when writing c++

## Quickstart
Create your own repository off of this template and then open up a codespace.  
Then run ```just br main``` in your terminal.  
This should have just compiled src/main.cpp to build/main and ran it automatically.
Congrats you have now setup your c++ workspace!

The rest of the readme is a more in depth version of this section.

## Creating your repo
In the very top right find the button that says "Use this template", then create in a new repository, and follow through the instructions provided by github until your repo is created.

## How to open
Click the big button that says "Code" at the top of the page. Then select codespaces in the pop-up that just opened and finally hit create codespace on main.

## How to use (web)
Now that the codespace is created, by default it will open up a new tab that will take a while to load as the container finishes setting up.
Please wait till you files appear before interacting to avoid an incomplete setup.
It may take up to a couple minutes.

Once it is loaded and you can view your code you are able to interact with your code you are good to go and can use it like a typical vscode instance.

## How to use (local vscode)
Now that the codespace is created if you go **[HERE](https://github.com/codespaces)** find your new isntance, click the three dots and choose to open with vscode and it will launch vscode on your computer.
It may ask you to sign into github once installed or install the codespaces extension, both of these are required to continue.

Please make sure you provide enough time for github's servers to finish setting up your codespaces

## Building and running your code
There are 2 ways to build your code, Just and build.sh.

### Just 
Just is the easiest way to run your code as all the commands required to build and run are provided by it.

#### Build
```just build (path to cpp file (ie. src/main.cpp))```

#### Run
```just run (path to executable (ie. build/main))```

#### Build All
```just build-all``` or  
```just ba```

#### Build and Run
```just build-run (name of src file and executable (ie. main))```  
There is an alias set up for the command which is ```just br (name of src file and executable (ie. main))```

### build.sh

#### Build
```./build.sh (path to cpp file (ie. src/main.cpp))```

#### Run
```./build/(executable (ie. main))```

#### Build All
```./build-all```

### Troubleshooting
If you are unable to run ./build.sh either manually or through just, run the following command:  
```chmod +x build.sh```

If you are unable to run ./build-all.sh either manually or through just, run the following command:  
```chmod +x build-all.sh```

If you are unable to run the executable either manually or through just, run the following command:  
```chmod +x build/(executable (ie. main))```

## Closing the codespace
Go **[HERE](https://github.com/codespaces)**, which will you show all your codespaces and allow you to close them.