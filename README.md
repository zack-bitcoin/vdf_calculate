Verified Delay Function Calculator
=============

Built for Amoveo.
[The main Amoveo repo.](https://github.com/zack-bitcoin/amoveo)

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

```./vdf_calculate deadbEEf 4 500000```

it starts with the block hash in hexidecimal: "deadbeef000000000..."

it takes 4 batches of 1/2 million hashes, taking a checkpoint between each batch.

The output should be
```
912b2910841b75a30347cf3449c642fc7f27f44b02734b00269d345be5592aaf
fb48002e29d53855a7e1be14006199a35ddd5549fdbf3f10b89e924f466d45fa
1e16cdb59e2fdefc336c13d5dcb61e862b97bfea44356df0353c2f1ae1483488
7798d3847849286ce7217913e0eac65720f02ebb7b74acc0415f32d8b6418ca0
```


## killing rogue processes

Then to kill the miner processes, do:
```
sh clean.sh
```

## other notes

This simple C miner is a template for making vdf calculators and vdf verifiers in other languages.

