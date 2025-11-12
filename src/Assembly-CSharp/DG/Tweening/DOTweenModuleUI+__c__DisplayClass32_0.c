
/* Single <DOVerticalNormalizedPos>b__0() */

float Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass32_0::
      DOTweenModuleUI_c_DisplayClass32_0__DOVerticalNormalizedPos_b__0
                (DOTweenModuleUI_c_DisplayClass32_0 *this,MethodInfo *method)

{
  this_00 = (this->fields).target;
  if (this_00 == (ScrollRect *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_UpdateBounds
            (this_00,(MethodInfo *)0x0);
  fVar2 = (this_00->fields).m_ContentBounds.m_Extents.y;
  fVar3 = (this_00->fields).m_ViewBounds.m_Extents.y;
  if (fVar3 + fVar3 < fVar2 + fVar2) {
    fVar2 = (this_00->fields).m_ViewBounds.m_Extents.y;
    fVar3 = (this_00->fields).m_ContentBounds.m_Extents.y;
    cVar4 = FUN_?(fVar3 + fVar3,fVar2 + fVar2);
    if (cVar4 == '\0') {
      uVar5 = (this_00->fields).m_ViewBounds.m_Extents.y;
      uVar6 = (this_00->fields).m_ViewBounds.m_Center.y;
      uVar7 = (this_00->fields).m_ContentBounds.m_Extents.y;
      return (((float)uVar6 - (float)uVar5) -
             ((this_00->fields).m_ContentBounds.m_Center.y - (float)uVar7)) /
             (((float)uVar7 + (float)uVar7) - ((float)uVar5 + (float)uVar5));
    }
  }
  return (float)((this_00->fields).m_ContentBounds.m_Center.y -
                 (this_00->fields).m_ContentBounds.m_Extents.y <
                (this_00->fields).m_ViewBounds.m_Center.y -
                (this_00->fields).m_ViewBounds.m_Extents.y);
}


/* Void <DOVerticalNormalizedPos>b__1(Single) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass32_0::
     DOTweenModuleUI_c_DisplayClass32_0__DOVerticalNormalizedPos_b__1
               (DOTweenModuleUI_c_DisplayClass32_0 *this,float x,MethodInfo *method)

{
  pSVar1 = (this->fields).target;
  if (pSVar1 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar1->klass->vtable).SetNormalizedPosition.methodPtr)
              (pSVar1,x,1,(pSVar1->klass->vtable).SetNormalizedPosition.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

