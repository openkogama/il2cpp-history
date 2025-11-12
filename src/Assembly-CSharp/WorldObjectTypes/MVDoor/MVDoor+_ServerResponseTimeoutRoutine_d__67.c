
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<ServerResponseTimeoutRoutine>d__67::
     MVDoor_ServerResponseTimeoutRoutine_d_67_MoveNext
               (MVDoor_ServerResponseTimeoutRoutine_d_67 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pMVar2 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (pMVar2 == (MVDoor *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      bVar5 = iRam_? != 0;
      (pMVar2->fields).serverResponseTimeoutRoutine = (IEnumerator *)0x0;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pMVar2->fields).serverResponseTimeoutRoutine >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
    return 0;
  }
  (this->fields).__1__state = -1;
  pOVar10 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
  bVar5 = iRam_? != 0;
  *(undefined4 *)&pOVar10[1].klass = 0x3f800000;
  (this->fields).__2__current = pOVar10;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<ServerResponseTimeoutRoutine>d__67::
     MVDoor_ServerResponseTimeoutRoutine_d_67_System_Collections_IEnumerator_Reset
               (MVDoor_ServerResponseTimeoutRoutine_d_67 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__WorldObjectTypes__MVDoor__MVDoor___ServerResponseTimeoutRoutine_d__67__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

