
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TabMenuButtonAccessory+<LerpToSize>d__15::
     TabMenuButtonAccessory_LerpToSize_d_15_MoveNext
               (TabMenuButtonAccessory_LerpToSize_d_15 *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  pTVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pTVar3 == (TabMenuButtonAccessory *)0x0) goto code_?;
    pLVar5 = (pTVar3->fields).layoutElement;
    (pTVar3->fields).startTime = fVar4;
    if (pLVar5 == (LayoutElement *)0x0) goto code_?;
    fVar6 = (float10)(*(code *)(pLVar5->klass->vtable).get_minHeight_1.method)
                               (pLVar5,(pLVar5->klass->vtable).set_minHeight.methodPtr);
    (this->fields)._height_5__2 = (float)fVar6;
    this = (TabMenuButtonAccessory_LerpToSize_d_15 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    this = (TabMenuButtonAccessory_LerpToSize_d_15 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pTVar3 == (TabMenuButtonAccessory *)0x0) goto code_?;
  }
  fStack_7 = (pTVar1->fields)._height_5__2;
  fStack_8 = (pTVar1->fields).size;
  pLVar5 = (pTVar3->fields).layoutElement;
  if ((pTVar3->fields).lerpTime < (float)this - (pTVar3->fields).startTime) {
    if (pLVar5 != (LayoutElement *)0x0) {
      (*(code *)(pLVar5->klass->vtable).set_minHeight.method)
                (pLVar5,(fStack_8 - fStack_7) + fStack_7,
                 (pLVar5->klass->vtable).get_preferredWidth_1.methodPtr);
      return 0;
    }
  }
  else {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar4 = (fVar4 - (pTVar3->fields).startTime) / (pTVar3->fields).lerpTime;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (pLVar5 != (LayoutElement *)0x0) {
      (*(code *)(pLVar5->klass->vtable).set_minHeight.method)
                (pLVar5,(fStack_8 - fStack_7) * fVar4 + fStack_7,
                 (pLVar5->klass->vtable).get_preferredWidth_1.methodPtr);
      uStack_9 = 0;
      pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&uStack_9);
      (pTVar1->fields).__2__current = pOVar10;
      func_?(&(pTVar1->fields).__2__current,pOVar10);
      (pTVar1->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TabMenuButtonAccessory+<LerpToSize>d__15::
     TabMenuButtonAccessory_LerpToSize_d_15_System_Collections_IEnumerator_Reset
               (TabMenuButtonAccessory_LerpToSize_d_15 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__TabMenuButtonAccessory___LerpToSize_d__15__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

