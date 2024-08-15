#!/usr/bin/env just --justfile

set shell := ["bash", "-c"]

alias br := build-run
alias ba := build-all

default:
    @echo "Usage: just build path_to_cpp_file

build path_to_cpp_file:
  chmod +x {{justfile_directory()}}/build.sh
  {{justfile_directory()}}/build.sh src/{{ path_to_cpp_file }}.cpp

run path_to_executable:
  {{justfile_directory()}}/build/{{path_to_executable}}

build-run name:
  @just build {{ name }}

  @just run {{ name }}

build-all:
  chmod +x build-all.sh
  {{justfile_directory()}}/build-all.sh