
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
  uStack_2 = ZEXT48(pCVar1);
  func_?(&uStack_2,pCVar1);
  if (pCVar1 != (Cube *)0x0) {
    CVar3._5_3_ = uStack_2._5_3_;
    CVar3.lightValue = ((pCVar1->fields)._.unIndentedSides & 0x3f) != 0x3f;
    CVar3.cube = (Cube *)uStack_2;
    return CVar3;
  }
  uStack_2 = CONCAT44(uStack_2._4_4_,&UNK_?);
  func_?();
  pcVar4 = (code *)swi(3);
  CVar3 = (Cell)(*pcVar4)();
  return CVar3;
}


/* Cell(Cube) */

void Assembly-CSharp.dll::Cell::Cell__ctor(Cell *this,Cube *cube,MethodInfo *method)

{
  this->cube = cube;
  func_?(this,cube);
  if (cube != (Cube *)0x0) {
    this->lightValue = ((cube->fields)._.unIndentedSides & 0x3f) != 0x3f;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

