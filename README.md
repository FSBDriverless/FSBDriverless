# FSB Workspace
Este es el workspace de desarrollo driverless de Formula Student Bizkaia.

## Estructura del workspace:
```
~/fsbdriverless
  |__ build
  |__ devel
  |__ src
      |__ fsb_common
      |   |__ include
      |   |__ src
      |   |   |__ pointcludo_to_laserscan
      |   |   |__ py
      |
      |__ perception
      |   |...
      |
      |__ estimation
      |   |__ include
      |   |__ src
      |
      |__ control
          |...
```

## Source del workspace
Suponiendo que el el proyecto está clonado en $HOME:  
```
echo "source ~/FSBDriverless/workspace/devel/setup.bash">> ~/.bashrc
```

## Poincloud to laserscan launch
Para iniciar el modulo de pointcludo_to_laserscan es necesario ejecutar el
siguiente comando:
```
roslaunch fsb_common node_dv_2.launch
```
