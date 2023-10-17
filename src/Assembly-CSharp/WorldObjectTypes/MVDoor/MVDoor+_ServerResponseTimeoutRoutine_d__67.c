
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<ServerResponseTimeoutRoutine>d__67::
     MVDoor_ServerResponseTimeoutRoutine_d_67_MoveNext
               (MVDoor_ServerResponseTimeoutRoutine_d_67 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pMVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_00 = (SubscribableVariableBase_1_System_Single_ *)
              func_?(TypeInfo__UnityEngine__WaitForSeconds);
    if (this_00 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
      SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single___ctor
                (this_00,1.0,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_00;
      func_?(&(this->fields).__2__current,this_00);
      (this->fields).__1__state = 1;
      return 1;
    }
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (pMVar2 == (MVDoor *)0x0) goto code_?;
    (pMVar2->fields).serverResponseTimeoutRoutine = (IEnumerator *)0x0;
    func_?(&(pMVar2->fields).serverResponseTimeoutRoutine,0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<ServerResponseTimeoutRoutine>d__67::
     MVDoor_ServerResponseTimeoutRoutine_d_67_System_Collections_IEnumerator_Reset
               (MVDoor_ServerResponseTimeoutRoutine_d_67 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WorldObjectTypes__MVDoor__MVDoor___ServerResponseTimeoutRoutine_d__67__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

