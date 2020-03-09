# arduino-sensor-curta-distancia

Circuito simples que apura uma curta distância utilizando sensor ultrassônico HC-SR04 e indica a aproximação de um objeto com acendimento de Leds coloridos em 5 níveis.

### Aferir distância de objetos indicando aproximação com leds coloridos(simulação) (vídeo)
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://youtu.be/kk56dAbhrLw" >
  <img src="https://user-images.githubusercontent.com/22710963/76180418-a046ac00-619c-11ea-9605-251b99427352.png" alt="reset" style="max-width:100%;"></a>
</p> 


##### Ambiente Virtual de Hardware e Software [TinkerCad](https://www.tinkercad.com)  
- É possível simular tanto componentes de hardware quanto a lógica de programação envolvida no circuito. Bastante útil porque dispensa a compra dos componentes eletrônicos físicos e a instalação da IDE no computador pra testes.

### Software necessário

- [IDE Arduino](https://www.arduino.cc/en/Main/Software)
- [Documentação sintaxe C++](https://www.arduino.cc/reference/en/)

### Software p/ gerar esquemas de circuitos elétricos 

- Útil para documentar projetos

- Versão paga [Fritzing](https://fritzing.org/home/)

- Versão gratuita (permite que seja atualizada) [Fritzing](https://softfamous.com/fritzing/download/)

## Hardware necessário
```
- a) 1 Placa Arduino com cabo USB
- b) 5 Resistores de 300Ω 
- c) 5 LEDs comum de 4mm 
- d) 1 Protoboard
- e) 16-20 Cabos de conexão 
- f) 1 Sensor ultrassônico HC-SR04 
```

 ### a) Placa Arduino com cabo USB
 Porta de 5V e 40mA
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png" alt="reset" style="max-width:100%;"></a></p> 

 ### b) Resistores  
 Servem para diminuir a tensão.
 
 <p>O de 300Ω instalado entre o negativo do LED e a conexão com GND do Arduino.</p>
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png">
  <img src="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png" alt="reset" style="max-width:100%;"></a></p> 
   
  ### c) LEDS comuns de 4mm
  Diodo com 2V e 15mA, perna maior ligada no positivo
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### d) Protoboard 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png" alt="reset" style="max-width:100%;"></a></p> 

  ### e) Cabos de conexão
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png">
  <img src="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png" alt="reset" style="max-width:100%;"></a></p>     
  
  ### f) Sensor ultrassônico HC-SR04 
  Emite som e verifica o eco do retorno, assim faz a aferição da distância.
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76180933-37603380-619e-11ea-9ff6-56c12c26a39b.png">
  <img src="https://user-images.githubusercontent.com/22710963/76180933-37603380-619e-11ea-9ff6-56c12c26a39b.png" alt="reset" style="max-width:100%;"></a></p> 


## Instalação dos Leds
Perna maior do LED é ligado no positivo e a perna menor precisa de um resistor de 220 ou 330 Ohm entre a ligação com o GND (negativo)
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png">
  <img src="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png" alt="reset" style="max-width:100%;"></a></p> 
  
  ## Fórmula Lei de Ohm
  V = R * I
  
 > O "I" significa a intensidade da corrente elétrica, no entanto, muitas vezes se fala apenas da corrente elétrica (sem a palavra intensidade). Quando existe uma diferença de potencial elétrico entre componentes (polarizado) acontece um fluxo de partículas que equilibra o campo elétrico. Esse fluxo é a corrente elétrica.
 
> A corrente elétrica é medida em Ampere (A) que nada mais é do que a quantidade de elétrons que passa nesse fio em um tempo determinado!

> A tensão elétrica (V) é medida em Volts (V) (em homenagem ao físico Alessandro Volta).

> A resistência (R) é medida em Ohm (Ω) e a intensidade da corrente elétrica (I) em Ampere (A).

> A relação entre tensão, resistência e intensidade da corrente define a Lei de Ohm: V = R * I

> Para calcular a corrente: I = V / R

> Para calcular a resistência: R = V / I

> Para calcular a tensão: V = R * I

### Tabela de Cores dos resistores na convenção internacional
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png">
  <img src="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Circuito
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76180813-dafd1400-619d-11ea-9b43-6e869470bc24.png">
  <img src="https://user-images.githubusercontent.com/22710963/76180813-dafd1400-619d-11ea-9b43-6e869470bc24.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Links úteis
> [Manual do mundo](https://www.youtube.com/watch?v=vEdYjAbzrAE&list=PLYjrJH3e_wDPwKigz0AcIgzk9BF4lqDuy)
 
###  Aplicações
<p> Luz com autoacendimento em jardins ou áreas externas. </p>
<p> Contador de pessoas que passam por algum lugar sem utilizar catracas (ao passarem fazem sombra e incrementam um contador) 
</p>


  
