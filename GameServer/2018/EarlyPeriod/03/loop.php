<?php
// loop.php
// http://dev2.m-fr.net/XXXXX/loop.php

// for 10回繰り返し
for($i = 0; $i < 10; ++$i) {
    echo $i, "<br>\n";
}
// 1〜10までをカウント
for($i = 1; $i <= 10; ++$i) {
    echo $i, "<br>\n";
}

// while 10回繰り返し
$i = 0;
while($i < 10) {
    echo $i, "<br>\n";
    ++$i;
}

// do-wihle 10回繰り返し
$i = 0;
do {
    echo $i, "<br>\n";
    ++$i;
} while($i < 10);

// whileとdo-whileの違い
while(false) {
    echo "in while <br>\n"; // 通らない
}
//
do {
    echo "in do-while <br>\n"; // 通る
} while(false);

