
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<BeginOpenCoroutine>d__62::
     MVDoor_BeginOpenCoroutine_d_62_MoveNext
               (MVDoor_BeginOpenCoroutine_d_62 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pMVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    ppOVar3 = &(this->fields).__2__current;
    (this->fields).__1__state = -1;
    *ppOVar3 = (Object *)0x0;
    func_?(ppOVar3,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pMVar2 != (MVDoor *)0x0) {
    value = (pMVar2->fields).doorConfig.openValue;
    if ((pMVar2->fields).doorConfig.reverseOpenDirection != 0) {
      value = (float)((uint)value ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    }
    this_00 = (pMVar2->fields).doorObject;
    if (this_00 != (MVDoorObject *)0x0) {
      MVDoorObject::MVDoorObject_SetCurrentValue
                (this_00,value,(pMVar2->fields).doorConfig.doorType,(MethodInfo *)0x0);
      return 0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
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
  func_?(&
                  MethodInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

