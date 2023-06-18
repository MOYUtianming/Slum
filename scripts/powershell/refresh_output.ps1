Remove-Item -Force -Recurse _output

New-Item  -ItemType Directory _output

$caseNum = 2;

for ($i = 0; $i -le $caseNum; $i++) {
    $str = "_output/case{0}" -f $i
    New-Item -ItemType Directory $str
}
