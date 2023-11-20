
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_Initialize
               (TabMenuButton *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__TabMenuButton____c__DisplayClass2_0___Initialize_b__0__);
    func_?(&TypeInfo__TabMenuButton____c__DisplayClass2_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TabMenuButton____c__DisplayClass2_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)tabId;
    pTVar1 = (this->fields).buttonText;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,categoryName,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pBVar2 = (this->fields).button;
      if (pBVar2 != (Button *)0x0) {
        this_00 = (UnityEvent *)(pBVar2->fields).m_OnClick;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,value,MethodInfo__TabMenuButton____c__DisplayClass2_0___Initialize_b__0__
                   ,(MethodInfo *)0x0);
        if (this_00 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_SetAsDeselected
               (TabMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    fVar2 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
    fVar3 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
    fVar4 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
    fVar5 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
    fVar6 = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
    fVar7 = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
    fVar8 = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
    fVar9 = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
    fVar10 = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
    fVar11 = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
    fVar12 = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
    fVar13 = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
    uVar14 = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
    uVar15 = (pBVar1->fields)._.m_Colors.m_FadeDuration;
    pCVar16 = &(pBVar1->fields)._.m_Colors.m_DisabledColor;
    fVar17 = pCVar16->r;
    fVar18 = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
    fVar19 = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
    fVar20 = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
    CVar21 = *pCVar16;
    if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__UI__ColorBlock);
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      value.m_HighlightedColor.r = fVar2;
      value.m_NormalColor = CVar21;
      value.m_HighlightedColor.g = fVar3;
      value.m_HighlightedColor.b = fVar4;
      value.m_HighlightedColor.a = fVar5;
      value.m_PressedColor.r = fVar6;
      value.m_PressedColor.g = fVar7;
      value.m_PressedColor.b = fVar8;
      value.m_PressedColor.a = fVar9;
      value.m_SelectedColor.r = fVar10;
      value.m_SelectedColor.g = fVar11;
      value.m_SelectedColor.b = fVar12;
      value.m_SelectedColor.a = fVar13;
      value.m_DisabledColor.r = fVar17;
      value.m_DisabledColor.g = fVar18;
      value.m_DisabledColor.b = fVar19;
      value.m_DisabledColor.a = fVar20;
      value.m_ColorMultiplier = (float)uVar14;
      value.m_FadeDuration = (float)uVar15;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)pBVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_SetAsSelected
               (TabMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    fVar2 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
    fVar3 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
    fVar4 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
    fVar5 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
    fVar6 = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
    fVar7 = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
    fVar8 = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
    fVar9 = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
    fVar10 = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
    fVar11 = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
    fVar12 = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
    fVar13 = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
    uVar14 = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
    uVar15 = (pBVar1->fields)._.m_Colors.m_FadeDuration;
    pCVar16 = &(pBVar1->fields)._.m_Colors.m_PressedColor;
    fVar17 = pCVar16->r;
    fVar18 = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
    fVar19 = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
    fVar20 = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
    CVar21 = *pCVar16;
    if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__UI__ColorBlock);
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      value.m_HighlightedColor.r = fVar2;
      value.m_NormalColor = CVar21;
      value.m_HighlightedColor.g = fVar3;
      value.m_HighlightedColor.b = fVar4;
      value.m_HighlightedColor.a = fVar5;
      value.m_PressedColor.r = fVar17;
      value.m_PressedColor.g = fVar18;
      value.m_PressedColor.b = fVar19;
      value.m_PressedColor.a = fVar20;
      value.m_SelectedColor.r = fVar6;
      value.m_SelectedColor.g = fVar7;
      value.m_SelectedColor.b = fVar8;
      value.m_SelectedColor.a = fVar9;
      value.m_DisabledColor.r = fVar10;
      value.m_DisabledColor.g = fVar11;
      value.m_DisabledColor.b = fVar12;
      value.m_DisabledColor.a = fVar13;
      value.m_ColorMultiplier = (float)uVar14;
      value.m_FadeDuration = (float)uVar15;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)pBVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}

