# GS-Edge
# 💧 Medidor de Nível de Água com Arduino Uno

## 📝 Descrição do Problema

Monitorar o nível da água é fundamental para evitar enchestes, garantir abastecimento adequado e evitar que bombas sejam ligadas ou desligadas incorretamente. Em locais onde não há sensores industriais, é possível usar soluções de baixo custo com Arduino.

Este projeto tem como objetivo medir a altura da água usando um **sensor ultrassônico HC-SR04**, exibir o nível atual em um **display LCD 16x2**, e acionar um **LED de alerta** quando o nível estiver muito baixo.

---

## 💡 Visão Geral da Solução

A solução consiste em:
- Um **Arduino Uno** que processa os dados.
- Um **sensor HC-SR04** posicionado acima da superfície da água, que mede a distância entre o sensor e a água.
- Um cálculo que transforma a distância medida no **percentual de preenchimento** do reservatório.
- Um **display LCD** que mostra o nível atual e a distância da água.
- Um **LED** que acende se o nível estiver abaixo de 20%.

### 🔌 Componentes Utilizados

| Componente           | Quantidade |
|----------------------|------------|
| Arduino Uno          | 1          |
| Sensor HC-SR04       | 1          |
| Display LCD 16x2 (I2C)| 1         |
| LED Vermelho         | 1          |
| Resistor 220Ω        | 1          |
| Jumpers e Protoboard | Vários     |

### 🔧 Esquema de Ligação

> 💡 Imagem do circuito:

https://imgur.com/a/HMmgnuu

---

## ▶️ Simulação do Projeto

Você pode simular este projeto na plataforma:

### 🔬 **Wokwi**
- Link direto: https://wokwi.com/projects/432946477278926849

> Certifique-se de que o LCD esteja configurado com interface I2C (endereço padrão: `0x27`) e os pinos do sensor estejam conectados conforme o código.

---

## 🧑‍💻 Instruções de Uso

1. **Monte o circuito** conforme o esquema.
2. **Carregue o código** no Arduino usando a IDE Arduino.
3. **Abra o monitor serial** para acompanhar as leituras (opcional).
4. **Observe o LCD** exibindo o nível da água.
5. Quando o nível estiver abaixo de 20%, o **LED se acenderá**.

---

## ✅ Conclusão

Este projeto é uma solução prática, acessível e educativa para o monitoramento de enchentes. Ele pode ser expandido para controlar bombas d'água, enviar alertas por rede, ou ser integrado a um sistema IoT.

---

### 📂 Arquivos disponíveis
- Código `.ino` para Arduino
- Imagens do circuito
- Links para simulação
- Vídeo de demonstração

---

