
/* Cell Clone() */

Cell Assembly-CSharp.dll::Cell::Cell_Clone(Cell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  original = this[1].cube;
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  CVar1.cube = Cube::Cube_Clone_1(original,(MethodInfo *)0x0);
  uVar2 = 0;
  if (CVar1.cube != (Cube *)0x0) {
    bVar3 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)CVar1.cube,(MethodInfo *)0x0);
    CVar1._5_3_ = (int3)((ulonglong)uVar2 >> 0x28);
    CVar1.lightValue = -((bVar3 & 0x3f) != 0x3f);
    return CVar1;
  }
  func_?(0,0);
  pcVar4 = (code *)swi(3);
  CVar1 = (Cell)(*pcVar4)();
  return CVar1;
}


/* Cell(Cube) */

void Assembly-CSharp.dll::Cell::Cell__ctor(Cell *this,Cube *cube,MethodInfo *method)

{
  this[1].cube = cube;
  if (cube != (Cube *)0x0) {
    bVar1 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value
                      ((SubscribableVariableBase_1_System_Boolean_ *)cube,(MethodInfo *)0x0);
    this[1].lightValue = -((bVar1 & 0x3f) != 0x3f);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

