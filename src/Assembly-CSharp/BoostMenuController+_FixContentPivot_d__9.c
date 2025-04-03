
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::BoostMenuController+<FixContentPivot>d__9::
     BoostMenuController_FixContentPivot_d_9_MoveNext
               (BoostMenuController_FixContentPivot_d_9 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pBVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    ppOVar3 = &(this->fields).__2__current;
    (this->fields).__1__state = -1;
    *ppOVar3 = (Object *)0x0;
    func_?(ppOVar3,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((pBVar2 != (BoostMenuController *)0x0) &&
     (pRVar4 = (pBVar2->fields).boostItemsScrollRect, pRVar4 != (RectTransform *)0x0)) {
    pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       (&RStack_6,pRVar4,(MethodInfo *)0x0);
    RStack_6.m_XMin = pRVar5->m_Width;
    pRVar4 = (pBVar2->fields).boostItemsContent;
    RStack_6.m_YMin = RStack_6.m_XMin;
    RStack_6.m_Width = RStack_6.m_XMin;
    RStack_6.m_Height = RStack_6.m_XMin;
    if (pRVar4 != (RectTransform *)0x0) {
      pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffdc,pRVar4,(MethodInfo *)0x0);
      if (RStack_6.m_XMin < pRVar5->m_Width) {
        pRVar4 = (pBVar2->fields).boostItemsContent;
        RStack_6.m_Width = 0.0;
        RStack_6.m_Height = 0.5;
        if (pRVar4 == (RectTransform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                  (pRVar4,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::BoostMenuController+<FixContentPivot>d__9::
     BoostMenuController_FixContentPivot_d_9_System_Collections_IEnumerator_Reset
               (BoostMenuController_FixContentPivot_d_9 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
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

