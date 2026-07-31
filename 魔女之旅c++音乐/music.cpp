#include<bits/stdc++.h>
using namespace std;
#include"music.h"
signed main(){
MusicPlayer player;
MusicList m;
m.readFile("music.txt");
player.playList(m);
return 0;
}