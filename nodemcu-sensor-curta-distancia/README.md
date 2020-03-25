


# arduino-sensor-curta-distancia

Circuito simples que apura uma curta distância (30cm nesse exemplo mas dá pra alterar os valores para 3m mais ou menos) utilizando sensor ultrassônico HC-SR04 numa placa Nodemcu com leds indicativos e buzzer.

### Aferir distância de objetos indicando aproximação com leds coloridos(simulação) (vídeo)
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://youtu.be/cKQxw5mlMgw" >
  <img src="https://user-images.githubusercontent.com/22710963/77497528-485ea500-6e2c-11ea-86ff-b34c922d3c04.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Circuito
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77496978-fb2e0380-6e2a-11ea-99c5-576f4100f042.png">
  <img src="https://user-images.githubusercontent.com/22710963/77496978-fb2e0380-6e2a-11ea-99c5-576f4100f042.png" alt="reset" style="max-width:100%;"></a>
</p> 

## Hardware necessário
```
- a) 1 Nodemcu 
- b) 1 Sensor ultrassônico HC-SR04 
- c) 1 Buzzer 
- d) 1 Protoboard
- e) 4 LEDs comum de 4mm   
- f) 4 Resistores de 300Ω 
- g) 16-20 Cabos de conexão
```

 ### a) Placa Nodemcu v1 
 Possui pinos de alimentação somente de 3.3v
 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77498122-ad66ca80-6e2d-11ea-9e7e-d297029221c1.png">
  <img src="https://user-images.githubusercontent.com/22710963/77498122-ad66ca80-6e2d-11ea-9e7e-d297029221c1.png" alt="reset" style="max-width:100%;"></a></p> 

  ### b) Sensor ultrassônico HC-SR04 
  Emite som e verifica o eco do retorno, assim faz a aferição da distância.
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76180933-37603380-619e-11ea-9ff6-56c12c26a39b.png">
  <img src="https://user-images.githubusercontent.com/22710963/76180933-37603380-619e-11ea-9ff6-56c12c26a39b.png" alt="reset" style="max-width:100%;"></a></p> 


 ### c) Buzzer   
  
  <p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499290-78a84280-6e30-11ea-96d9-bb67d2146b85.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499290-78a84280-6e30-11ea-96d9-bb67d2146b85.png" alt="reset" style="max-width:100%;"></a></p> 
   
 
  ### d) Protoboard 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png" alt="reset" style="max-width:100%;"></a></p> 

 ### e) LEDS comuns de 4mm
  Diodo com 2V e 15mA, perna maior ligada no positivo
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499523-14d24980-6e31-11ea-9ee1-2f44635a20be.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499523-14d24980-6e31-11ea-9ee1-2f44635a20be.png" alt="reset" style="max-width:100%;"></a></p> 

 ### f) Resistores  
 Servem para diminuir a tensão.
 
 <p>O de 300Ω instalado entre o negativo do LED e a conexão com GND do Arduino.</p>
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png">
  <img src="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png" alt="reset" style="max-width:100%;"></a></p> 

  ### g) Cabos de conexão
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png" alt="reset" style="max-width:100%;"></a></p>     
  


### Links úteis

- [Manual do mundo](https://www.youtube.com/watch?v=vEdYjAbzrAE&list=PLYjrJH3e_wDPwKigz0AcIgzk9BF4lqDuy)

- [IDE Arduino](https://www.arduino.cc/en/Main/Software)
 
- [Documentação sintaxe C++](https://www.arduino.cc/reference/en/)

- [Fritzing](https://fritzing.org/home/) - Licença comercial

- [Fritzing](https://softfamous.com/fritzing/download/) - Versão gratuita (antiga mas permite que seja atualizada)
 
###  Aplicações
 
 - Sensor de estacionamento 
 
 - Abertura de porta ou acendimento de luzes automaticamente

 - Detectar presença ou aproximação de pessoas

 - Robótica detectar colisões e desviar de obstáculos



  
