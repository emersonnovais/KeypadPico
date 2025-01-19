Projeto Keypad com Raspberry Pi Pico
Este projeto implementa a interface com um teclado matricial (keypad) conectado a um Raspberry Pi Pico, utilizando LEDs e buzzers para respostas interativas às teclas pressionadas. Ele serve como base para atividades didáticas em projetos de microcontroladores.

Vídeo: Apresentação da solução trabalhada e os resultados obtidos nos experimentos
LINK: https://youtu.be/wzcTBoQGNF4

Objetivo
O código visa proporcionar o controle de:

LEDs que mudam de estado conforme teclas específicas (A, B, C, D) são pressionadas.
Dois buzzers que emitem sons ao pressionar uma tecla especial (#).
Um loop contínuo que detecta e exibe no terminal a tecla pressionada.
Além disso, oferece pontos de desenvolvimento para que os alunos implementem funcionalidades e completem o projeto.

Funcionalidades do Projeto
Interface com Keypad:

Detecta teclas pressionadas em um teclado matricial 4x4.
Mapeamento das teclas para diferentes funcionalidades.
Controle de LEDs:

LEDs conectados aos pinos GPIO do Raspberry Pi Pico.
Ações diferentes para as teclas A, B, C e D.
Controle de Buzzers:

Buzzers configurados para emitir sons com frequência e duração específicas ao pressionar #.
Desafio para Estudantes:

Pontos marcados com TODO no código para que os alunos adicionem lógica de controle e outras funcionalidades.
Pré-requisitos
Hardware necessário:

Raspberry Pi Pico.
Keypad matricial 4x4.
LEDs e resistores.
Dois buzzers.
Cabos de conexão.
Bibliotecas utilizadas:

Biblioteca padrão do Raspberry Pi Pico: pico/stdlib.h.
Controle de hardware e PWM: hardware/clocks.h, hardware/pwm.h.
Configuração do Projeto
Conecte os pinos do keypad aos GPIOs do Raspberry Pi Pico conforme a tabela abaixo:

Linha/Coluna	GPIO Conectado
Linha 1	GPIO 18
Linha 2	GPIO 19
Linha 3	GPIO 20
Linha 4	GPIO 4
Coluna 1	GPIO 9
Coluna 2	GPIO 8
Coluna 3	GPIO 16
Coluna 4	GPIO 17

Conecte os LEDs e buzzers aos seguintes GPIOs:

LED verde: GPIO 11.
LED azul: GPIO 12.
LED vermelho: GPIO 13.
Buzzer 1: GPIO 21.
Buzzer 2: GPIO 4.
Compile e envie o código para o Raspberry Pi Pico utilizando um ambiente de desenvolvimento como o VS Code com o Pico SDK configurado.

Estrutura do Código
O código está organizado da seguinte forma:

Definições de constantes: Mapeamento de GPIOs, configuração do keypad e frequência do buzzer.
Declaração e implementação de funções:
Inicialização do buzzer (pwm_init_buzzer).
Emissão de beep (beep).
Inicialização do keypad (keypad_init).
Leitura de teclas do keypad (keypad_get_key).
Função main:
Inicialização do terminal e do keypad.
Loop contínuo para verificar teclas pressionadas e executar ações.
Atividades Propostas
Implementar controle de LEDs:

Use o loop principal para acender LEDs específicos conforme as teclas A, B, C e D são pressionadas.
Configurar buzzers:

Acione os buzzers para emitir sons quando a tecla # for pressionada.
Desenvolver lógica de código secreto (opcional):

Adicione uma funcionalidade onde a combinação correta de teclas ativa uma ação especial.
Observações Finais
Este código é uma base para projetos mais avançados, como sistemas de segurança, jogos simples ou interfaces interativas.
Os comentários e TODO no código foram feitos para facilitar o entendimento e a personalização do projeto pelos desenvolvedores.
Se precisar de ajustes ou mais detalhes no README, é só avisar!
