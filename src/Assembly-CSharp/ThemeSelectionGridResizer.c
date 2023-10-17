
/* Void Update() */

void Assembly-CSharp.dll::ThemeSelectionGridResizer::ThemeSelectionGridResizer_Update
               (ThemeSelectionGridResizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    this_00 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      this_00 = pTVar1;
    }
    if (this_00 == (Transform *)0x0) goto code_?;
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffe8,(RectTransform *)this_00,(MethodInfo *)0x0);
    fVar3 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd8,
                       (MethodInfo *)pRVar2->m_XMin);
    if (fVar3 == (this->fields).prevSize) {
      return;
    }
    pGVar4 = (this->fields).grid;
    if (pGVar4 != (GridLayoutGroup *)0x0) {
      fVar5 = (pGVar4->fields).m_Spacing.y;
      pRVar6 = (pGVar4->fields)._.m_Padding;
      if (pRVar6 != (RectOffset *)0x0) {
        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_left
                          (pRVar6,(MethodInfo *)0x0);
        pGVar4 = (this->fields).grid;
        if ((pGVar4 != (GridLayoutGroup *)0x0) &&
           (pRVar6 = (pGVar4->fields)._.m_Padding, pRVar6 != (RectOffset *)0x0)) {
          method_00 = (MethodInfo *)((fVar3 - fVar5) - (float)iVar7);
          iVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_right
                            (pRVar6,method_00);
          pGVar4 = (this->fields).grid;
          fVar3 = ((float)method_00 - (float)iVar7) * _UNK_?;
          if (pGVar4 != (GridLayoutGroup *)0x0) {
            value.y = fVar3;
            value.x = fVar3;
            UnityEngine.UI.dll::UnityEngine::UI::GridLayoutGroup::GridLayoutGroup_set_cellSize
                      (pGVar4,value,(MethodInfo *)0x0);
            (this->fields).prevSize = fVar3;
            return;
          }
        }
      }
    }
  }
  pTVar1 = (Transform *)func_?();
code_?:
  func_?(pTVar1);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::ThemeSelectionGridResizer::ThemeSelectionGridResizer_get_RectTransform
          (ThemeSelectionGridResizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pTVar2 = (Transform *)0x0;
  if (pTVar1 != (Transform *)0x0) {
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar2 = pTVar1;
    }
    if (pTVar2 == (Transform *)0x0) {
      func_?(pTVar1);
      pcVar3 = (code *)swi(3);
      pRVar4 = (RectTransform *)(*pcVar3)();
      return pRVar4;
    }
  }
  return (RectTransform *)pTVar2;
}

