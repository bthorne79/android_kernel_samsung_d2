#!/bin/bash

#
#  Build Script for Kraken Kernel for D2!
#  Based off AK'sbuild script - Thanks!
#

# Bash Color
green='\033[01;32m'
red='\033[01;31m'
blink_red='\033[05;31m'
restore='\033[0m'

clear

# Resources
THREAD="-j$(grep -c ^processor /proc/cpuinfo)"
KERNEL="zImage"
DTBIMAGE="dtb"
DEFCONFIG="kraken_d2_defconfig"

# Kernel Details
VER=KrakenKernel
#BDATE=$(date +"%Y%m%d")
KVER=$(date +"%Y%m%d_%H%M%S")


# Vars
export LOCALVERSION=~`echo $VER`
export CROSS_COMPILE=${HOME}/Kraken/kernel/prebuilts/gcc/linux-x86/arm/arm-linux-androideabi-5.3-uber/bin/arm-linux-androideabi-
export ARCH=arm
export SUBARCH=arm
export KBUILD_BUILD_USER=
export KBUILD_BUILD_HOST=
export CCACHE=ccache

# Paths
KERNEL_DIR=`pwd`
REPACK_DIR="${HOME}/Kraken/kernel/d2-AnyKernel2" >&2
PATCH_DIR="${HOME}/Kraken/kernel/d2-AnyKernel2/patch" >&2
MODULES_DIR="${HOME}/Kraken/kernel/d2-AnyKernel2/modules" >&2
ZIP_MOVE="${HOME}/Kraken/kernel/zips/d2-zips" >&2
ZIMAGE_DIR="${HOME}/Kraken/kernel/kernel/samsung/d2/arch/arm/boot" >&2
VARIANT="D2" >&2

# Functions
function clean_all {
		rm -rf $MODULES_DIR/*
		cd $REPACK_DIR
		rm -rf $KERNEL
		rm -rf $DTBIMAGE
		cd $KERNEL_DIR
		echo
		make clean && make mrproper
}

function set_timestamp() {
#BDATE=$(date +"%Y%m%d")
KVER="$KVER" >&2
}

function make_kernel {
		echo
		make $DEFCONFIG
		make $THREAD CONFIG_DEBUG_SECTION_MISMATCH=y
		cp -vr $ZIMAGE_DIR/$KERNEL $REPACK_DIR
}

function make_modules {
		rm `echo $MODULES_DIR"/*"`
		find $KERNEL_DIR -name '*.ko' -exec cp -v {} $MODULES_DIR \;
}

function make_dtb {
		$REPACK_DIR/tools/dtbToolCM -2 -o $REPACK_DIR/$DTBIMAGE -s 2048 -p scripts/dtc/ arch/arm/boot/
}

function make_zip {
		cd $REPACK_DIR
		zip -r9 KrakenKernel_"$REV"_"$VARIANT"_"$KVER".zip *
		mv KrakenKernel_"$REV"_"$VARIANT"_"$KVER".zip $ZIP_MOVE
		rm -rf KrakenKernel_"$REV"_"$VARIANT"_"$KVER".zip
		cd $KERNEL_DIR
}


DATE_START=$(date +"%s")

echo -e "${green}"
echo "Kraken Kernel Creation Script:"
echo -e "${restore}"

while read -p "Do you want to clean stuffs (y/n)? " cchoice
do
case "$cchoice" in
	y|Y )
		clean_all
		echo
		echo "All Cleaned now."
		break
		;;
	n|N )
		break
		;;
	* )
		echo
		echo "Invalid try again!"
		echo
		;;
esac
done

echo

while read -p "Do you want to build kernel (y/n)? " dchoice
do
case "$dchoice" in
	y|Y)
		make_kernel
		make_dtb
		make_modules
		make_zip
		break
		;;
	n|N )
		break
		;;
	* )
		echo
		echo "Invalid try again!"
		echo
		;;
esac
done

echo -e "${green}"
echo "-------------------"
echo "Build Completed in:"
echo "-------------------"
echo -e "${restore}"

DATE_END=$(date +"%s")
DIFF=$(($DATE_END - $DATE_START))
echo "Time: $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."
echo
