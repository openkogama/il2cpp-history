
/* Void FixLayout() */

void Assembly-CSharp.dll::TeamMenuLayoutFitter::TeamMenuLayoutFitter_FixLayout
               (TeamMenuLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_1._4_4_ = (MonitorData *)0x0;
  auStack_1._8_4_ = (String *)0x0;
  auStack_1._12_4_ = 0.0;
  pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
           GameObject_GetComponentsInChildren_29
                     ((GameObject *)this,
                      UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                     );
  pVVar3 = (this->fields).layoutGroup;
  if (pVVar3 != (VerticalLayoutGroup *)0x0) {
    (*(code *)(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.method)
              (pVVar3,(pVVar3->klass->vtable).get_minWidth_1.methodPtr);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    uVar5 = CONCAT44(TypeInfo__UnityEngine__RectTransform,pTVar4);
    if (pTVar4 != (Transform *)0x0) {
      this_01 = (Transform *)0x0;
      if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        this_01 = pTVar4;
      }
      if (this_01 != (Transform *)0x0) {
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           (&RStack_7,(RectTransform *)this_01,(MethodInfo *)0x0);
        auStack_1._0_4_ = pRVar6->m_XMin;
        auStack_1._4_4_ = pRVar6->m_YMin;
        auStack_1._8_4_ = pRVar6->m_Width;
        auStack_1._12_4_ = pRVar6->m_Height;
        fStack_8 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
                   CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                             ((CrossPlatformInputManager_VirtualAxis *)auStack_1,(MethodInfo *)0x0)
        ;
        fStack_8 = fStack_8 * _UNK_?;
        this_00 = (ThemeSkybox *)(this->fields).layoutGroup;
        if (this_00 == (ThemeSkybox *)0x0) goto code_?;
        auStack_1._16_4_ = ThemeSkybox::ThemeSkybox_get_FogDensity(this_00,(MethodInfo *)0x0);
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
        HorizontalOrVerticalLayoutGroup_set_spacing
                  ((HorizontalOrVerticalLayoutGroup *)this_00,
                   ((float)auStack_1._16_4_ / _UNK_?) * (float)iVar9,(MethodInfo *)0x0);
        uVar10 = 0;
        if (pUVar2 == (UseInteratorVisualization__Array *)0x0) goto code_?;
        ppUVar11 = pUVar2->vector;
        while( true ) {
          if ((int)pUVar2->max_length <= (int)uVar10) {
            return;
          }
          if (pUVar2->max_length <= uVar10) break;
          pUVar12 = *ppUVar11;
          if (pUVar12 == (UseInteratorVisualization *)0x0) goto code_?;
          pUVar13 = pUVar12->klass;
          uVar14._0_2_ = pUVar13[2]._0.this_arg.attrs;
          uVar14._2_1_ = pUVar13[2]._0.this_arg.type;
          uVar14._3_1_ = pUVar13[2]._0.this_arg.field_0x7;
          (*(code *)pUVar13[2]._0.this_arg.data)(pUVar12,fStack_8,uVar14);
          if (pUVar2->max_length <= uVar10) break;
          pUVar12 = *ppUVar11;
          if (pUVar12 == (UseInteratorVisualization *)0x0) goto code_?;
          (*(code *)pUVar12->klass[2]._0.interopData)(pUVar12,fStack_8,pUVar12->klass[2]._0.klass);
          pVVar3 = (this->fields).layoutGroup;
          if (pVVar3 == (VerticalLayoutGroup *)0x0) goto code_?;
          (*(code *)(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.method)
                    (pVVar3,(pVVar3->klass->vtable).get_minWidth_1.methodPtr);
          uVar10 = uVar10 + 1;
          ppUVar11 = ppUVar11 + 1;
        }
        uVar14 = func_?(0,0);
        uVar5 = func_?(uVar14);
      }
      func_?(uVar5);
    }
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenuLayoutFitter::TeamMenuLayoutFitter_Start
               (TeamMenuLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_1._4_4_ = (MonitorData *)0x0;
  auStack_1._8_4_ = (String *)0x0;
  auStack_1._12_4_ = 0.0;
  pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
           GameObject_GetComponentsInChildren_29
                     ((GameObject *)this,
                      UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                     );
  pVVar3 = (this->fields).layoutGroup;
  if (pVVar3 != (VerticalLayoutGroup *)0x0) {
    (*(code *)(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.method)
              (pVVar3,(pVVar3->klass->vtable).get_minWidth_1.methodPtr);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    uVar5 = CONCAT44(TypeInfo__UnityEngine__RectTransform,pTVar4);
    if (pTVar4 != (Transform *)0x0) {
      this_01 = (Transform *)0x0;
      if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        this_01 = pTVar4;
      }
      if (this_01 != (Transform *)0x0) {
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           (&RStack_7,(RectTransform *)this_01,(MethodInfo *)0x0);
        auStack_1._0_4_ = pRVar6->m_XMin;
        auStack_1._4_4_ = pRVar6->m_YMin;
        auStack_1._8_4_ = pRVar6->m_Width;
        auStack_1._12_4_ = pRVar6->m_Height;
        fStack_8 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
                   CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                             ((CrossPlatformInputManager_VirtualAxis *)auStack_1,(MethodInfo *)0x0)
        ;
        fStack_8 = fStack_8 * _UNK_?;
        this_00 = (ThemeSkybox *)(this->fields).layoutGroup;
        if (this_00 == (ThemeSkybox *)0x0) goto code_?;
        auStack_1._16_4_ = ThemeSkybox::ThemeSkybox_get_FogDensity(this_00,(MethodInfo *)0x0);
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
        HorizontalOrVerticalLayoutGroup_set_spacing
                  ((HorizontalOrVerticalLayoutGroup *)this_00,
                   ((float)auStack_1._16_4_ / _UNK_?) * (float)iVar9,(MethodInfo *)0x0);
        uVar10 = 0;
        if (pUVar2 == (UseInteratorVisualization__Array *)0x0) goto code_?;
        ppUVar11 = pUVar2->vector;
        while( true ) {
          if ((int)pUVar2->max_length <= (int)uVar10) {
            return;
          }
          if (pUVar2->max_length <= uVar10) break;
          pUVar12 = *ppUVar11;
          if (pUVar12 == (UseInteratorVisualization *)0x0) goto code_?;
          pUVar13 = pUVar12->klass;
          uVar14._0_2_ = pUVar13[2]._0.this_arg.attrs;
          uVar14._2_1_ = pUVar13[2]._0.this_arg.type;
          uVar14._3_1_ = pUVar13[2]._0.this_arg.field_0x7;
          (*(code *)pUVar13[2]._0.this_arg.data)(pUVar12,fStack_8,uVar14);
          if (pUVar2->max_length <= uVar10) break;
          pUVar12 = *ppUVar11;
          if (pUVar12 == (UseInteratorVisualization *)0x0) goto code_?;
          (*(code *)pUVar12->klass[2]._0.interopData)(pUVar12,fStack_8,pUVar12->klass[2]._0.klass);
          pVVar3 = (this->fields).layoutGroup;
          if (pVVar3 == (VerticalLayoutGroup *)0x0) goto code_?;
          (*(code *)(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.method)
                    (pVVar3,(pVVar3->klass->vtable).get_minWidth_1.methodPtr);
          uVar10 = uVar10 + 1;
          ppUVar11 = ppUVar11 + 1;
        }
        uVar14 = func_?(0,0);
        uVar5 = func_?(uVar14);
      }
      func_?(uVar5);
    }
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

