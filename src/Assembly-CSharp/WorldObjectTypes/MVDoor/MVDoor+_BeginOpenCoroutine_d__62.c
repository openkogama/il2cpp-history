
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<BeginOpenCoroutine>d__62::
     MVDoor_BeginOpenCoroutine_d_62_MoveNext
               (MVDoor_BeginOpenCoroutine_d_62 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pMVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    bVar3 = iRam_? != 0;
    (this->fields).__1__state = -1;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (pMVar2 != (MVDoor *)0x0) {
      value = (pMVar2->fields).doorConfig.openValue;
      if ((pMVar2->fields).doorConfig.reverseOpenDirection != 0) {
        value = (float)((uint)value ^ _UNK_?);
      }
      this_00 = (pMVar2->fields).doorObject;
      if (this_00 != (MVDoorObject *)0x0) {
        MVDoorObject::MVDoorObject_SetCurrentValue
                  (this_00,value,(pMVar2->fields).doorConfig.doorType,(MethodInfo *)0x0);
        return 0;
      }
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    bVar9 = (*pcVar8)();
    return bVar9;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<BeginOpenCoroutine>d__62::
     MVDoor_BeginOpenCoroutine_d_62_System_Collections_IEnumerator_Reset
               (MVDoor_BeginOpenCoroutine_d_62 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

