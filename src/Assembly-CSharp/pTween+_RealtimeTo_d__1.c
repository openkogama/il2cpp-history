
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::pTween+<RealtimeTo>d__1::pTween_RealtimeTo_d_1_MoveNext
               (pTween_RealtimeTo_d_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  ppVar1 = this;
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    this = (pTween_RealtimeTo_d_1 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                     ((MethodInfo *)0x0);
    (ppVar1->fields)._end_5__2 = (float)this + (ppVar1->fields).duration;
    fVar3 = _UNK_? / (ppVar1->fields).duration;
    (ppVar1->fields)._startMulDurationInv_5__4 = (float)this / (ppVar1->fields).duration;
    (ppVar1->fields)._durationInv_5__3 = fVar3;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  this = (pTween_RealtimeTo_d_1 *)
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                   ((MethodInfo *)0x0);
  pAVar4 = (ppVar1->fields).callback;
  if ((ppVar1->fields)._end_5__2 <= (float)this) {
    if (pAVar4 != (Action_1_Single_ *)0x0) {
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,(ppVar1->fields).endValue,
                 (pAVar4->fields)._._.method);
      return 0;
    }
  }
  else {
    fVar3 = (ppVar1->fields).startValue;
    fVar5 = (float)this * (ppVar1->fields)._durationInv_5__3 -
            (ppVar1->fields)._startMulDurationInv_5__4;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    if (pAVar4 != (Action_1_Single_ *)0x0) {
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,
                 ((ppVar1->fields).endValue - fVar3) * fVar5 + fVar3,(pAVar4->fields)._._.method);
      this = (pTween_RealtimeTo_d_1 *)0x0;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (ppVar1->fields).__2__current = pOVar6;
      func_?(&(ppVar1->fields).__2__current,pOVar6);
      (ppVar1->fields).__1__state = 1;
      return 1;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::pTween+<RealtimeTo>d__1::
     pTween_RealtimeTo_d_1_System_Collections_IEnumerator_Reset
               (pTween_RealtimeTo_d_1 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__pTween___RealtimeTo_d__1__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

