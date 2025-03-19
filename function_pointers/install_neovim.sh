#!/bin/bash

echo -e "\033[1;36m"  # Activa cian brillante

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# ACTUALIZACIÓN DEL SISTEMA
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
echo -e "\033[1;35m\n[+] Actualizando repositorios...\033[0m"
sudo apt update | sed 's/^/  \033[3;36m➤\033[0m /'

echo -e "\033[1;35m\n[+] Instalando sudo...\033[0m"
sudo apt install sudo -y | sed 's/^/  \033[3;36m➤\033[0m /'

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# NEOVIM + CONFIGURACIÓN SYNTHWAVE
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
echo -e "\033[1;35m\n[+] Instalando Neovim...\033[0m"
sudo apt install neovim -y | sed 's/^/  \033[3;36m➤\033[0m /'

echo -e "\033[1;35m\n[+] Creando estructura de directorios...\033[0;36m"
mkdir -pv ~/.config/nvim | sed 's/^/  /'

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# CONFIGURACIÓN VISUAL (SYNTHWAVE 84)
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
echo -e "\033[1;35m\n[+] Aplicando tema Synthwave 84...\033[0m"
cat > ~/.config/nvim/init.vim << E0F
$(curl -s https://gist.githubusercontent.com/AndromedaCode/7f437c2f6b363d4a94d9e0bff3d5c245/raw/6482a5e4b6c6a9f40c3d4d97d6a6a6c1b3e3b6f2/synthwave84.vim)
E0F

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# POST-INSTALACIÓN
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
echo -e "\033[1;35m\n[+] Cargando extensiones...\033[0;36m"
nvim --headless +PlugInstall +qall 2>&1 | sed 's/^/  /'

echo -e "\033[1;35m\n[¡Instalación completada!]\033[0m"
echo -e "Configuración: \033[1;36m~/.config/nvim/init.vim\033[0m"
echo -e "Tema cargado: \033[1;95mSynthwave '84\033[0m \033[3;36m(Modo neón activado)\033[0m"
