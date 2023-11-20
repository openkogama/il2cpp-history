
/* Void FixLayout() */

void Assembly-CSharp.dll::TeamMenuLayoutFitter::TeamMenuLayoutFitter_FixLayout
               (TeamMenuLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                   );
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                     );
  pVVar2 = (this->fields).layoutGroup;
  if (pVVar2 != (VerticalLayoutGroup *)0x0) {
    (*(code *)(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.method)
              (pVVar2,(pVVar2->klass->vtable).get_minWidth_1.methodPtr);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pTVar4 = (Transform *)0x0;
      if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar4 = pTVar3;
      }
      pRVar5 = TypeInfo__UnityEngine__RectTransform;
      if (pTVar4 != (Transform *)0x0) {
        pTVar4 = (Transform *)0x0;
        if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar4 = pTVar3;
        }
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           (&RStack_7,(RectTransform *)pTVar4,(MethodInfo *)0x0);
        RStack_7.m_YMin = pRVar6->m_Height;
        pVVar2 = (this->fields).layoutGroup;
        RStack_7.m_XMin = RStack_7.m_YMin * _UNK_?;
        RStack_7.m_Width = RStack_7.m_YMin;
        RStack_7.m_Height = RStack_7.m_YMin;
        if (pVVar2 == (VerticalLayoutGroup *)0x0) goto code_?;
        fStack_8 = *(float *)&(pVVar2->fields)._.m_ChildForceExpandWidth;
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
        HorizontalOrVerticalLayoutGroup_set_spacing
                  ((HorizontalOrVerticalLayoutGroup *)pVVar2,
                   (fStack_8 / _UNK_?) * (float)iVar9,(MethodInfo *)0x0);
        uVar10 = 0;
        if (pOVar1 == (Object__Array *)0x0) goto code_?;
        pRVar5 = (RectTransform__Class *)pOVar1->vector;
        while( true ) {
          if ((int)pOVar1->max_length <= (int)uVar10) {
            return;
          }
          if (pOVar1->max_length <= uVar10) break;
          pIVar11 = (pRVar5->_0).image;
          if (pIVar11 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)(pIVar11->name + 0x1d0))
                    (pIVar11,RStack_7.m_XMin,*(undefined4 *)(pIVar11->name + 0x1d4));
          if (pOVar1->max_length <= uVar10) break;
          pIVar11 = (pRVar5->_0).image;
          if (pIVar11 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)(pIVar11->name + 0x1f0))
                    (pIVar11,RStack_7.m_XMin,*(undefined4 *)(pIVar11->name + 500));
          pVVar2 = (this->fields).layoutGroup;
          if (pVVar2 == (VerticalLayoutGroup *)0x0) goto code_?;
          (*(code *)(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.method)
                    (pVVar2,(pVVar2->klass->vtable).get_minWidth_1.methodPtr);
          uVar10 = uVar10 + 1;
          pRVar5 = (RectTransform__Class *)&(pRVar5->_0).gc_desc;
        }
        func_?();
        pTVar3 = extraout_EDX;
      }
      func_?(pTVar3,pRVar5);
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenuLayoutFitter::TeamMenuLayoutFitter_Start
               (TeamMenuLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                   );
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                     );
  pVVar2 = (this->fields).layoutGroup;
  if (pVVar2 != (VerticalLayoutGroup *)0x0) {
    (*(code *)(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.method)
              (pVVar2,(pVVar2->klass->vtable).get_minWidth_1.methodPtr);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pTVar4 = (Transform *)0x0;
      if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar4 = pTVar3;
      }
      pRVar5 = TypeInfo__UnityEngine__RectTransform;
      if (pTVar4 != (Transform *)0x0) {
        pTVar4 = (Transform *)0x0;
        if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar4 = pTVar3;
        }
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           (&RStack_7,(RectTransform *)pTVar4,(MethodInfo *)0x0);
        RStack_7.m_YMin = pRVar6->m_Height;
        pVVar2 = (this->fields).layoutGroup;
        RStack_7.m_XMin = RStack_7.m_YMin * _UNK_?;
        RStack_7.m_Width = RStack_7.m_YMin;
        RStack_7.m_Height = RStack_7.m_YMin;
        if (pVVar2 == (VerticalLayoutGroup *)0x0) goto code_?;
        fStack_8 = *(float *)&(pVVar2->fields)._.m_ChildForceExpandWidth;
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
        HorizontalOrVerticalLayoutGroup_set_spacing
                  ((HorizontalOrVerticalLayoutGroup *)pVVar2,
                   (fStack_8 / _UNK_?) * (float)iVar9,(MethodInfo *)0x0);
        uVar10 = 0;
        if (pOVar1 == (Object__Array *)0x0) goto code_?;
        pRVar5 = (RectTransform__Class *)pOVar1->vector;
        while( true ) {
          if ((int)pOVar1->max_length <= (int)uVar10) {
            return;
          }
          if (pOVar1->max_length <= uVar10) break;
          pIVar11 = (pRVar5->_0).image;
          if (pIVar11 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)(pIVar11->name + 0x1d0))
                    (pIVar11,RStack_7.m_XMin,*(undefined4 *)(pIVar11->name + 0x1d4));
          if (pOVar1->max_length <= uVar10) break;
          pIVar11 = (pRVar5->_0).image;
          if (pIVar11 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)(pIVar11->name + 0x1f0))
                    (pIVar11,RStack_7.m_XMin,*(undefined4 *)(pIVar11->name + 500));
          pVVar2 = (this->fields).layoutGroup;
          if (pVVar2 == (VerticalLayoutGroup *)0x0) goto code_?;
          (*(code *)(pVVar2->klass->vtable).CalculateLayoutInputVertical_1.method)
                    (pVVar2,(pVVar2->klass->vtable).get_minWidth_1.methodPtr);
          uVar10 = uVar10 + 1;
          pRVar5 = (RectTransform__Class *)&(pRVar5->_0).gc_desc;
        }
        func_?();
        pTVar3 = extraout_EDX;
      }
      func_?(pTVar3,pRVar5);
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

