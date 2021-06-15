
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::BoostMenuController+<FixContentPivot>c__Iterator0::
     BoostMenuController_FixContentPivot_c_Iterator0_MoveNext
               (BoostMenuController_FixContentPivot_c_Iterator0 *this,MethodInfo *method)

{
  pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    (this->fields)._current = (Object *)0x0;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  if (iVar2 != 1) {
    return 0;
  }
  pBVar3 = (this->fields)._this;
  if ((pBVar3 != (BoostMenuController *)0x0) &&
     (pRVar4 = (pBVar3->fields).boostItemsScrollRect, pRVar4 != (RectTransform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              ((Rect *)auStack_5,pRVar4,(MethodInfo *)0x0);
    VStack_6.y = SubscribableVariableBase`1[System::Single]::
                 SubscribableVariableBase_1_System_Single__get_Value
                           ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffdc,
                            (MethodInfo *)0x0);
    pBVar3 = (this->fields)._this;
    if ((pBVar3 != (BoostMenuController *)0x0) &&
       (pRVar4 = (pBVar3->fields).boostItemsContent, pRVar4 != (RectTransform *)0x0)) {
      pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&puStack_8,pRVar4,(MethodInfo *)0x0);
      pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)pRVar7->m_XMin;
      fVar9 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&pSStack_1,(MethodInfo *)0x0)
      ;
      if (fVar9 <= VStack_6.y) {
code_?:
        (this->fields)._PC = -1;
        return 0;
      }
      pBVar3 = (this->fields)._this;
      if (pBVar3 != (BoostMenuController *)0x0) {
        pRVar4 = (pBVar3->fields).boostItemsContent;
        VStack_6.x = 0.0;
        VStack_6.y = 0.0;
        pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)&VStack_6;
        func_?();
        if (pRVar4 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                    (pRVar4,VStack_6,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void Reset() */

void Assembly-CSharp.dll::BoostMenuController+<FixContentPivot>c__Iterator0::
     BoostMenuController_FixContentPivot_c_Iterator0_Reset
               (BoostMenuController_FixContentPivot_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

