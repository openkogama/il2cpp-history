
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
    this_00 = (SubscribableVariable_1_System_Single_ *)
              func_?(TypeInfo__UnityEngine__WaitForSeconds);
    SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
              (this_00,1.0,(MethodInfo *)0x0);
    ppOVar3 = &(this->fields).__2__current;
    *ppOVar3 = (Object *)this_00;
    func_?(ppOVar3,this_00);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (pMVar2 == (MVDoor *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    ppIVar6 = &(pMVar2->fields).serverResponseTimeoutRoutine;
    *ppIVar6 = (IEnumerator *)0x0;
    func_?(ppIVar6,0);
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

