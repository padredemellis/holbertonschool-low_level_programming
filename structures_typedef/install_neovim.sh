#!/bin/bash

# Actualizar e instalar sudo
apt update && apt install sudo -y

# Instalar neovim
sudo apt update && sudo apt install neovim -y

# Crear directorio de configuración para nvim
mkdir -p ~/.config/nvim

# Crear archivo de configuración con el tema y ajustes
cat > ~/.config/nvim/init.vim << EOF
" Instalación automática de vim-plug
if empty(glob('~/.config/nvim/autoload/plug.vim'))
  silent !curl -fLo ~/.config/nvim/autoload/plug.vim --create-dirs
    \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
  autocmd VimEnter * PlugInstall --sync | source \$MYVIMRC
endif

" Plugins
call plug#begin('~/.config/nvim/plugged')
Plug 'shougo/sonokai'       " Tema similar a SynthWave 84
call plug#end()

" Configuración del tema
let g:sonokai_style = 'shusia'
let g:sonokai_enable_italic = 1
colorscheme sonokai
set termguicolors

" Configuraciones solicitadas
set number

set noexpandtab
set tabstop=4
set shiftwidth=4
set smarttab

autocmd BufWritePre * :%s/\s\+$//e

set list
set listchars=tab:>-,trail:.,nbsp:~

autocmd FileType c setlocal noexpandtab tabstop=4 shiftwidth=4 smarttab
autocmd FileType c autocmd BufWritePre <buffer> :%s/\s\+$//e
autocmd FileType c setlocal number
EOF

# Instalar plugins
nvim --headless +PlugInstall +qall > /dev/null 2>&1

echo "Instalación completada! Configuración de nvim guardada en ~/.config/nvim/init.vim"
