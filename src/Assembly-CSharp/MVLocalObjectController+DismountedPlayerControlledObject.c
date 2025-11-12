
/* Boolean ReadyToUnRegister() */

bool Assembly-CSharp.dll::MVLocalObjectController+DismountedPlayerControlledObject::
     MVLocalObjectController_DismountedPlayerControlledObject_ReadyToUnRegister
               (MVLocalObjectController_DismountedPlayerControlledObject *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  return _UNK_? < fVar4 - (this->fields).dismountTime;
}


/* Void SetTimeBeforeUnregister(Single) */

void Assembly-CSharp.dll::MVLocalObjectController+DismountedPlayerControlledObject::
     MVLocalObjectController_DismountedPlayerControlledObject_SetTimeBeforeUnregister
               (MVLocalObjectController_DismountedPlayerControlledObject *this,
               float newTimeBeforeUnregister,MethodInfo *method)

{
  fVar1 = _UNK_? - newTimeBeforeUnregister;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  (this->fields).dismountTime = fVar4 - fVar1;
  return;
}


/* MVLocalObjectController+DismountedPlayerControlledObject(ILocalObject) */

void Assembly-CSharp.dll::MVLocalObjectController+DismountedPlayerControlledObject::
     MVLocalObjectController_DismountedPlayerControlledObject__ctor
               (MVLocalObjectController_DismountedPlayerControlledObject *this,
               ILocalObject *playerControlledObject,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).playerControlledObject = playerControlledObject;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).playerControlledObject >> 0xc);
    playerControlledObject = (ILocalObject *)(ulonglong)((uVar2 & 0x1fffff) >> 6);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    do {
      uVar3 = *(ulonglong *)((longlong)playerControlledObject * 8 + 0xADDR);
      puVar4 = (ulonglong *)((longlong)playerControlledObject * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar3 == *puVar4;
      if (bVar1) {
        *puVar4 = uVar3 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (!bVar1);
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?,playerControlledObject,method),
     pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar7 = (float)(*pcRam_?)();
  (this->fields).dismountTime = fVar7;
  return;
}

