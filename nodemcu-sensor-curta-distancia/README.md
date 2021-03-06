


# nodemcu-sensor-curta-distancia

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

### Configuração

No exemplo a escala utilizada é de 6 em 6cm, para aumentar basta alterar os valores definidos aqui:

```
#define DIST_RED_CM 6
#define DIST_YELLOW_CM 12
#define DIST_BLUE_CM 18
#define DIST_GREEN_CM 24

```

## Hardware necessário
```
- a) 1 Nodemcu 
- b) 1 Sensor ultrassônico HC-SR04 
- c) 1 Buzzer DR-08H
- d) 1 Protoboard
- e) 4 LEDs comum de 4mm   
- f) 4 Resistores de 300Ω 
- g) 16-20 Cabos de conexão
```

 ### a) Placa Nodemcu v1 
 Possui pinos de alimentação somente de 3.3v
 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499726-a0e47100-6e31-11ea-9768-2aabb681259e.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499726-a0e47100-6e31-11ea-9768-2aabb681259e.png" alt="reset" style="max-width:100%;"></a></p> 

  ### b) Sensor ultrassônico HC-SR04 
  Emite som e verifica o eco do retorno, assim faz a aferição da distância.
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76180933-37603380-619e-11ea-9ff6-56c12c26a39b.png">
  <img src="https://user-images.githubusercontent.com/22710963/76180933-37603380-619e-11ea-9ff6-56c12c26a39b.png" alt="reset" style="max-width:100%;"></a></p> 

 ### c) Buzzer DR-08H
  <p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77565026-62d36580-6ea2-11ea-9a5e-389752b9158f.png">
  <img src="https://user-images.githubusercontent.com/22710963/77565026-62d36580-6ea2-11ea-9a5e-389752b9158f.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### d) Protoboard 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png" alt="reset" style="max-width:100%;"></a></p> 

 ### e) LEDS comuns de 4mm
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499523-14d24980-6e31-11ea-9ee1-2f44635a20be.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499523-14d24980-6e31-11ea-9ee1-2f44635a20be.png" alt="reset" style="max-width:100%;"></a></p> 

 ### f) Resistores  
 <p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png">
  <img src="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png" alt="reset" style="max-width:100%;"></a></p> 

  ### g) Cabos de conexão
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png" alt="reset" style="max-width:100%;"></a></p>     
  



  
