
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::pTween+<To>d__0::pTween_To_d_0_MoveNext
               (pTween_To_d_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  ppVar1 = this;
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    this = (pTween_To_d_0 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = (ppVar1->fields).duration;
    (ppVar1->fields)._end_5__2 = fVar3 + (float)this;
    fVar4 = _UNK_? / fVar3;
    (ppVar1->fields)._startMulDurationInv_5__4 = (float)this / fVar3;
    (ppVar1->fields)._durationInv_5__3 = fVar4;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  this = (pTween_To_d_0 *)
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pAVar5 = (ppVar1->fields).callback;
  if ((ppVar1->fields)._end_5__2 <= (float)this) {
    if (pAVar5 != (Action_1_Single_ *)0x0) {
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,(ppVar1->fields).endValue,
                 (pAVar5->fields)._._.method);
      return 0;
    }
  }
  else {
    fVar3 = (ppVar1->fields).startValue;
    fVar4 = (ppVar1->fields)._durationInv_5__3 * (float)this -
            (ppVar1->fields)._startMulDurationInv_5__4;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (pAVar5 != (Action_1_Single_ *)0x0) {
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,
                 ((ppVar1->fields).endValue - fVar3) * fVar4 + fVar3,(pAVar5->fields)._._.method);
      this = (pTween_To_d_0 *)0x0;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
      ppOVar7 = &(ppVar1->fields).__2__current;
      *ppOVar7 = pOVar6;
      func_?(ppOVar7,pOVar6);
      (ppVar1->fields).__1__state = 1;
      return 1;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::pTween+<To>d__0::pTween_To_d_0_System_Collections_IEnumerator_Reset
               (pTween_To_d_0 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__pTween___To_d__0__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

