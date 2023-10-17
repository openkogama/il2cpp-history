
/* Cell Clone() */

Cell Assembly-CSharp.dll::Cell::Cell_Clone(Cell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  pCVar1 = this->cube;
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Cube);
  }
  pCVar1 = Cube::Cube_Clone_1(pCVar1,(MethodInfo *)0x0);
  CStack_2._4_4_ = 0;
  CStack_2.cube = pCVar1;
  func_?(&CStack_2,pCVar1);
  if (pCVar1 != (Cube *)0x0) {
    CStack_2.lightValue = -(((pCVar1->fields)._.unIndentedSides & 0x3f) != 0x3f);
    return CStack_2;
  }
  CStack_2.cube = (Cube *)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  CVar4 = (Cell)(*pcVar3)();
  return CVar4;
}


/* Cell(Cube) */

void Assembly-CSharp.dll::Cell::Cell__ctor(Cell *this,Cube *cube,MethodInfo *method)

{
  this->cube = cube;
  func_?(this,cube);
  if (cube != (Cube *)0x0) {
    this->lightValue = -(((cube->fields)._.unIndentedSides & 0x3f) != 0x3f);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

