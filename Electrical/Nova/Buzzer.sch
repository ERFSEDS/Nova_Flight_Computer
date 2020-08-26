EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 19
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Nova-rescue:PS1440P02BT-PS1440P02BT-Nova-rescue-Nova-rescue-Nova-rescue-Nova-rescue-Nova-rescue LS301
U 1 1 5F404605
P 5750 3450
F 0 "LS301" H 5880 3496 50  0000 L CNN
F 1 "PS1440P02BT" H 5880 3405 50  0000 L CNN
F 2 "Transducer:BUZZER_PS1440P02BT" H 5750 3450 50  0001 L BNN
F 3 "https://product.tdk.com/info/en/catalog/datasheets/piezoelectronic_buzzer_ps_en.pdf" H 5750 3450 50  0001 L BNN
F 4 "IPC-7251" H 5750 3450 50  0001 L BNN "Field4"
	1    5750 3450
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0301
U 1 1 5F407098
P 5250 3350
F 0 "#PWR0301" H 5250 3100 50  0001 C CNN
F 1 "GND" V 5255 3222 50  0000 R CNN
F 2 "" H 5250 3350 50  0001 C CNN
F 3 "" H 5250 3350 50  0001 C CNN
	1    5250 3350
	0    1    1    0   
$EndComp
Text HLabel 6300 3350 2    50   Input ~ 0
BUZZER
Wire Wire Line
	5250 3350 5550 3350
Wire Wire Line
	5950 3350 6300 3350
$EndSCHEMATC
