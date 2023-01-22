Remove-Item -Force -Recurse data

New-Item  -ItemType Directory data

$caseNum = 2;

for ($i = 0; $i -lt $caseNum; $i++) {
    $str = "data/case{0}" -f $i
    New-Item -ItemType Directory $str
}
