
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemEditable+<DisableAnimatorCoroutine>d__42::
     PickupItemEditable_DisableAnimatorCoroutine_d_42_MoveNext
               (PickupItemEditable_DisableAnimatorCoroutine_d_42 *this,MethodInfo *method)

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
      ppOVar4 = &(this->fields).__2__current;
      *ppOVar4 = (Object *)this_01;
      func_?(ppOVar4,this_01);
      (this->fields).__1__state = 1;
      return 1;
    }
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 == (PickupItemEditable *)0x0) goto code_?;
    ppIVar7 = &(this_00->fields).animatorRoutine;
    *ppIVar7 = (IEnumerator *)0x0;
    func_?(ppIVar7,0);
    PickupItemEditable::PickupItemEditable_DisableAnimation(this_00,(MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemEditable+<DisableAnimatorCoroutine>d__42::
     PickupItemEditable_DisableAnimatorCoroutine_d_42_System_Collections_IEnumerator_Reset
               (PickupItemEditable_DisableAnimatorCoroutine_d_42 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PickupItemEditable___DisableAnimatorCoroutine_d__42__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

