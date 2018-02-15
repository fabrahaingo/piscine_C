#!/bin/sh
ldapwhoami | sed -n '$p' | cut -c 4-
