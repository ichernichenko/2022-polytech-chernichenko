# 1 Какой процесс имеет наименьший идентификатор?
ilia.chernichenko@Ilas-MacBook-Air ~ % ps -ef | head -5
  UID   PID  PPID   C STIME   TTY           TIME CMD
    0     1     0   0  2ноя22 ??        54:06.66 /sbin/launchd

# 2 Какой идетификтор у вашего текущего shell-процесса?
ilia.chernichenko@Ilas-MacBook-Air 05_computer_architecture % ps $$
  PID   TT  STAT      TIME COMMAND
62179 s000  S      0:01.00 -zsh

# 3 Сколько всего запущено процессов?
ilia.chernichenko@Ilas-MacBook-Air 05_computer_architecture % ps -e |wc -l
     596
Количество запущенных процессов: 595 (т.к. wc - это количесвто строк, включая заголовок)