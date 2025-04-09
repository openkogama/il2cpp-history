
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::FirstTimeActivatableElementBase+<ShowDelay>d__26::
     FirstTimeActivatableElementBase_ShowDelay_d_26_MoveNext
               (FirstTimeActivatableElementBase_ShowDelay_d_26 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 != (FirstTimeActivatableElementBase *)0x0) {
      value = (this_00->fields).delayBeforeShown;
      (this_00->fields).waitingForDelay = 1;
      this_01 = (SubscribableVariable_1_System_Single_ *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds);
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                (this_01,value,(MethodInfo *)0x0);
      ppOVar2 = &(this->fields).__2__current;
      *ppOVar2 = (Object *)this_01;
      func_?(ppOVar2,this_01);
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
    if (this_00 == (FirstTimeActivatableElementBase *)0x0) goto code_?;
    (this_00->fields).waitingForDelay = 0;
    FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_DoShow
              (this_00,(MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase+<ShowDelay>d__26::
     FirstTimeActivatableElementBase_ShowDelay_d_26_System_Collections_IEnumerator_Reset
               (FirstTimeActivatableElementBase_ShowDelay_d_26 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__FirstTimeActivatableElementBase___ShowDelay_d__26__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

