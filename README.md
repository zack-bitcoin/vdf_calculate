Verified Delay Function Calculator
=============

Built for Amoveo.
[The main Amoveo repo.](https://github.com/zack-bitcoin/amoveo). 

requires ubuntu.

## Dependencies
```
   sudo apt-get install erlang libncurses5-dev libssl-dev unixodbc-dev g++ git
```
You might need less than what is listed above ^

[If you still have trouble with dependencies, look at dependencies from Amoveo: ](https://github.com/zack-bitcoin/amoveo/blob/master/docs/getting-started/dependencies.md)

## Downloading vdf software
```
git clone https://github.com/zack-bitcoin/vdf-calculate.git
```

## compiling

On ubuntu, the miner in C language can be compiled and turned on like this: 
```
sh build.sh 
```

## running

Here is an example

```./vdf_calulate deadbEEf 4 500000```

it starts with the block hash in hexidecimal: "deadbeef000000000..."

it takes 4 batches of 1/2 million hashes, taking a checkpoint between each batch.



## killing rogue processes

Then to kill the miner processes, do:
```
sh clean.sh
```

## other notes

This simple C miner is a template for making vdf calculators and vdf verifiers in other languages.

