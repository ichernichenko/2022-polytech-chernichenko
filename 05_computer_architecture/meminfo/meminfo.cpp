#include <iostream>
#include <fstream>

void show_meminfo()
{
  int palki_total = 10;
  char parameter[20];
  int memTotal;
  int memFree;
  int memAvailable;
  char unit[3];

  std::ifstream in("../meminfo.dat", std::ios_base::in);
  if (in)
  {
    in >> parameter >> memTotal >> unit;
    in >> parameter >> memFree >> unit;
    in >> parameter >> memAvailable >> unit;
  }
  else
  {
    std::cout << "Ошибка чтения файла";
    return;
  }
  double busy_percent = (100 * (memTotal - memAvailable)) / memTotal;

  int palki_count = busy_percent / palki_total;
  int tochki_count = palki_total - palki_count;
  for (int i = 0; i < palki_count; i++)
  {
    std::cout << "|";
  }
  for (int i = 0; i < tochki_count; i++)
  {
    std::cout << ".";
  }
  std::cout << " " << busy_percent << "%\n";
}

int main()
{
  show_meminfo();
  return 0;
}