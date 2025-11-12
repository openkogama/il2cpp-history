
/* Cell Clone() */

Cell * Assembly-CSharp.dll::Cell::Cell_Clone
                 (Cell *__return_storage_ptr__,Cell *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = this->cube;
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = Cube::Cube_Clone_1(pCVar1,(MethodInfo *)0x0);
  *(undefined8 *)&__return_storage_ptr__->lightValue = 0;
  bVar2 = iRam_? != 0;
  __return_storage_ptr__->cube = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)__return_storage_ptr__ >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (pCVar1 == (Cube *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    pCVar8 = (Cell *)(*pcVar7)();
    return pCVar8;
  }
  __return_storage_ptr__->lightValue = ((pCVar1->fields)._.unIndentedSides & 0x3f) != 0x3f;
  return __return_storage_ptr__;
}


/* Cell(Cube) */

void Assembly-CSharp.dll::Cell::Cell__ctor(Cell *this,Cube *cube,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  this->cube = cube;
  pCVar2 = (Cube__Class *)this;
  pCVar3 = cube;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)this >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    pCVar3 = (Cube *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      pCVar5 = pCVar3->klass;
      pCVar2 = (Cube__Class *)((ulonglong)pCVar5 | 1L << (longlong)method);
      LOCK();
      bVar1 = pCVar5 == pCVar3->klass;
      if (bVar1) {
        pCVar3->klass = pCVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cube == (Cube *)0x0) {
    FUN_?(pCVar2,pCVar3,method);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->lightValue = ((cube->fields)._.unIndentedSides & 0x3f) != 0x3f;
  return;
}

