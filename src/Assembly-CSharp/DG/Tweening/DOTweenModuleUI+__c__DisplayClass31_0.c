
/* Single <DOHorizontalNormalizedPos>b__0() */

float Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass31_0::
      DOTweenModuleUI_c_DisplayClass31_0__DOHorizontalNormalizedPos_b__0
                (DOTweenModuleUI_c_DisplayClass31_0 *this,MethodInfo *method)

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
  fVar2 = TypeRef__System__Activator__T._0_4_;
  uVar3 = (this_00->fields).m_ContentBounds.m_Extents.x;
  uVar4 = (this_00->fields).m_ViewBounds.m_Extents.x;
  if ((float)uVar4 * TypeRef__System__Activator__T._0_4_ <
      (float)uVar3 * TypeRef__System__Activator__T._0_4_) {
    uVar5 = (this_00->fields).m_ContentBounds.m_Extents.x;
    uVar6 = (this_00->fields).m_ContentBounds.m_Extents.y;
    uVar7 = (this_00->fields).m_ViewBounds.m_Extents.x;
    uVar8 = (this_00->fields).m_ViewBounds.m_Extents.y;
    uVar9 = CONCAT44(uVar8,(float)uVar7 * TypeRef__System__Activator__T._0_4_);
    uVar10 = CONCAT44(uVar6,(float)uVar5 * TypeRef__System__Activator__T._0_4_);
    cVar11 = FUN_?(uVar10,uVar9);
    if (cVar11 == '\0') {
      uVar12 = (this_00->fields).m_ViewBounds.m_Extents.x;
      uVar13 = (this_00->fields).m_ViewBounds.m_Center.x;
      uVar14 = (this_00->fields).m_ContentBounds.m_Extents.x;
      uVar15 = (this_00->fields).m_ContentBounds.m_Center.x;
      return (((float)uVar13 - (float)uVar12) - ((float)uVar15 - (float)uVar14)) /
             ((float)uVar14 * fVar2 - (float)uVar12 * fVar2);
    }
  }
  uVar16 = (this_00->fields).m_ViewBounds.m_Extents.x;
  uVar17 = (this_00->fields).m_ViewBounds.m_Center.x;
  uVar18 = (this_00->fields).m_ContentBounds.m_Extents.x;
  uVar19 = (this_00->fields).m_ContentBounds.m_Center.x;
  return (float)((float)uVar19 - (float)uVar18 < (float)uVar17 - (float)uVar16);
}


/* Void <DOHorizontalNormalizedPos>b__1(Single) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass31_0::
     DOTweenModuleUI_c_DisplayClass31_0__DOHorizontalNormalizedPos_b__1
               (DOTweenModuleUI_c_DisplayClass31_0 *this,float x,MethodInfo *method)

{
  pSVar1 = (this->fields).target;
  if (pSVar1 != (ScrollRect *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar1->klass->vtable).SetNormalizedPosition.methodPtr)
              (pSVar1,x,0,(pSVar1->klass->vtable).SetNormalizedPosition.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

