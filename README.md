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

```./vdf_calculate "deadbEEf000000000000000000000000000000000000000000000000000000" 4 500000```

it starts with the 32-byte block hash in hexidecimal: "deadbeef000000000..."

it takes 4 batches of 1/2 million hashes, taking a checkpoint between each batch.

The output should be
```
2b13fa3fdf9f1cb45f30951276abd9ba34bf22378d2b28e25acb6d2a2a7a800b
64833522834fd8344228b59a7f79fc7bc960f42824608348ee65ef6ebed5910d
2c9dbae3eb46722cc9dd03c543dd9c5787a7a2982fb9e3f57bbed1d67b0a73ab
26d798fccd8a3f08bc2a0f3d50151cc7528981b5bde44ec612b02c0d454b526f
```


## killing rogue processes

Then to kill the miner processes, do:
```
sh clean.sh
```

## other notes

This simple C miner is a template for making vdf calculators and vdf verifiers in other languages.

