
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::BoostMenuController+<FixContentPivot>d__9::
     BoostMenuController_FixContentPivot_d_9_MoveNext
               (BoostMenuController_FixContentPivot_d_9 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pBVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__2__current = (Object *)0x0;
    (this->fields).__1__state = -1;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((pBVar2 != (BoostMenuController *)0x0) &&
     (pRVar3 = (pBVar2->fields).boostItemsScrollRect, pRVar3 != (RectTransform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              (&RStack_4,pRVar3,(MethodInfo *)0x0);
    RStack_4.m_Height =
         SubscribableVariableBase`1[System::Single]::
         SubscribableVariableBase_1_System_Single__get_Value
                   ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffdc,(MethodInfo *)0x0)
    ;
    pRVar3 = (pBVar2->fields).boostItemsContent;
    if (pRVar3 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffcc,pRVar3,(MethodInfo *)0x0);
      fVar5 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffdc,
                         (MethodInfo *)0x0);
      if (RStack_4.m_Height < fVar5) {
        pRVar3 = (pBVar2->fields).boostItemsContent;
        RStack_4.m_Width = 0.0;
        RStack_4.m_Height = 0.5;
        if (pRVar3 == (RectTransform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                  (pRVar3,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::BoostMenuController+<FixContentPivot>d__9::
     BoostMenuController_FixContentPivot_d_9_System_Collections_IEnumerator_Reset
               (BoostMenuController_FixContentPivot_d_9 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__BoostMenuController___FixContentPivot_d__9__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

