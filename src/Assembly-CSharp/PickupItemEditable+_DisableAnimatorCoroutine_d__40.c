
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemEditable+<DisableAnimatorCoroutine>d__40::
     PickupItemEditable_DisableAnimatorCoroutine_d_40_MoveNext
               (PickupItemEditable_DisableAnimatorCoroutine_d_40 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 != (PickupItemEditable *)0x0) &&
       (pPVar2 = (this_00->fields)._Configuration_k__BackingField,
       pPVar2 != (PickupItemEditable_EditableItemConfiguration *)0x0)) {
      fVar3 = (pPVar2->fields).fireAnimationTime;
      this_01 = (SubscribableVariable_1_System_Single_ *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds);
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                (this_01,fVar3 + _UNK_?,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?(&(this->fields).__2__current,this_01);
      (this->fields).__1__state = 1;
      return 1;
    }
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 == (PickupItemEditable *)0x0) goto code_?;
    (this_00->fields).animatorRoutine = (IEnumerator *)0x0;
    func_?(&(this_00->fields).animatorRoutine,0);
    PickupItemEditable::PickupItemEditable_DisableAnimation(this_00,(MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemEditable+<DisableAnimatorCoroutine>d__40::
     PickupItemEditable_DisableAnimatorCoroutine_d_40_System_Collections_IEnumerator_Reset
               (PickupItemEditable_DisableAnimatorCoroutine_d_40 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PickupItemEditable___DisableAnimatorCoroutine_d__40__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

