# Projeto: Transmissão de Sinal SOS em Código Morse com Raspberry Pi Pico W

Este projeto implementa a transmissão contínua do sinal "SOS" em código Morse utilizando um LED externo conectado ao pino GPIO 11 da Raspberry Pi Pico W.

## Descrição

O programa acende o LED para representar os sinais de ponto e traço do código Morse, seguindo as especificações:

* **Ponto (.)** : LED aceso por 0,2 segundos.
* **Traço (-)** : LED aceso por 0,8 segundos.
* **Intervalo entre sinais** : 0,125 segundos.
* **Intervalo entre letras** : 0,25 segundos.
* **Intervalo entre repetições do ciclo SOS** : 3 segundos

## Instruções para Compilação e Execução

1. **Configuração do Ambiente de Desenvolvimento** :

* Instale o [Visual Studio Code](https://code.visualstudio.com/).
* Configure o [SDK do Raspberry Pi Pico]() no seu ambiente.

1. **Estrutura de Diretórios** :

* Crie uma pasta para o projeto, por exemplo, `C:\...\Projetos_Criados_RPi\SOS`.
* Dentro desta pasta, crie um diretório `build` para os arquivos de compilação.

1. **Compilação** :

* Abra o terminal e navegue até o diretório `build`:  `C:\...\Projetos_Criados_RPi\SOS\build`.
* Execute o comando `cmake` para gerar os arquivos de construção:

  cmake 
* Compile o projeto com o comando `make`:

  `make`

1. **Upload para a Pico W** :

* Conecte a Raspberry Pi Pico W ao computador mantendo o botão BOOTSEL pressionado.
* Copie o arquivo `.uf2` gerado na pasta `build` para a unidade de armazenamento que aparecerá.

## Simulação no Wokwi

Para simular este projeto no Wokwi, utilize o código do arquivo `diagrams.json` e o código do arquivo `sos.c`.

Este código configura a simulação com a Raspberry Pi Pico W, um resistor e um LED vermelho conectados ao pino GPIO 11.

## Referências

* [Documentação Oficial do Raspberry Pi Pico]()
* [Wokwi - Simulador Online de Circuitos](https://wokwi.com/)
* [Código Morse](https://www.todamateria.com.br/o-que-e-codigo-morse/)
