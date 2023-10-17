
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
  value = (Object *)func_?(TypeInfo__TabMenuButton____c__DisplayClass2_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)tabId;
    pTVar1 = (this->fields).buttonText;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,categoryName,(pTVar1->klass->vtable).set_text.method);
      pBVar2 = (this->fields).button;
      if (pBVar2 != (Button *)0x0) {
        this_00 = (UnityEvent *)(pBVar2->fields).m_OnClick;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
        if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,value,
                     MethodInfo__TabMenuButton____c__DisplayClass2_0___Initialize_b__0__,
                     (MethodInfo *)0x0);
          if (this_00 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
            return;
          }
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
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    uVar1 = (this_00->fields)._.m_Colors.m_ColorMultiplier;
    uVar2 = (this_00->fields)._.m_Colors.m_FadeDuration;
    value.m_FadeDuration = (float)uVar2;
    value.m_ColorMultiplier = (float)uVar1;
    pCVar3 = &(this_00->fields)._.m_Colors.m_DisabledColor;
    if (this_00 != (Button *)0x0) {
      value.m_HighlightedColor.r = (this_00->fields)._.m_Colors.m_HighlightedColor.r;
      value.m_NormalColor = *pCVar3;
      value.m_HighlightedColor.g = (this_00->fields)._.m_Colors.m_HighlightedColor.g;
      value.m_HighlightedColor.b = (this_00->fields)._.m_Colors.m_HighlightedColor.b;
      value.m_HighlightedColor.a = (this_00->fields)._.m_Colors.m_HighlightedColor.a;
      value.m_PressedColor.r = (this_00->fields)._.m_Colors.m_PressedColor.r;
      value.m_PressedColor.g = (this_00->fields)._.m_Colors.m_PressedColor.g;
      value.m_PressedColor.b = (this_00->fields)._.m_Colors.m_PressedColor.b;
      value.m_PressedColor.a = (this_00->fields)._.m_Colors.m_PressedColor.a;
      value.m_SelectedColor.r = (this_00->fields)._.m_Colors.m_SelectedColor.r;
      value.m_SelectedColor.g = (this_00->fields)._.m_Colors.m_SelectedColor.g;
      value.m_SelectedColor.b = (this_00->fields)._.m_Colors.m_SelectedColor.b;
      value.m_SelectedColor.a = (this_00->fields)._.m_Colors.m_SelectedColor.a;
      value.m_DisabledColor.r = pCVar3->r;
      value.m_DisabledColor.g = (this_00->fields)._.m_Colors.m_DisabledColor.g;
      value.m_DisabledColor.b = (this_00->fields)._.m_Colors.m_DisabledColor.b;
      value.m_DisabledColor.a = (this_00->fields)._.m_Colors.m_DisabledColor.a;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_SetAsSelected
               (TabMenuButton *this,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    uVar1 = (this_00->fields)._.m_Colors.m_ColorMultiplier;
    uVar2 = (this_00->fields)._.m_Colors.m_FadeDuration;
    value.m_FadeDuration = (float)uVar2;
    value.m_ColorMultiplier = (float)uVar1;
    pCVar3 = &(this_00->fields)._.m_Colors.m_PressedColor;
    if (this_00 != (Button *)0x0) {
      value.m_HighlightedColor.r = (this_00->fields)._.m_Colors.m_HighlightedColor.r;
      value.m_NormalColor = *pCVar3;
      value.m_HighlightedColor.g = (this_00->fields)._.m_Colors.m_HighlightedColor.g;
      value.m_HighlightedColor.b = (this_00->fields)._.m_Colors.m_HighlightedColor.b;
      value.m_HighlightedColor.a = (this_00->fields)._.m_Colors.m_HighlightedColor.a;
      value.m_PressedColor.r = pCVar3->r;
      value.m_PressedColor.g = (this_00->fields)._.m_Colors.m_PressedColor.g;
      value.m_PressedColor.b = (this_00->fields)._.m_Colors.m_PressedColor.b;
      value.m_PressedColor.a = (this_00->fields)._.m_Colors.m_PressedColor.a;
      value.m_SelectedColor.r = (this_00->fields)._.m_Colors.m_SelectedColor.r;
      value.m_SelectedColor.g = (this_00->fields)._.m_Colors.m_SelectedColor.g;
      value.m_SelectedColor.b = (this_00->fields)._.m_Colors.m_SelectedColor.b;
      value.m_SelectedColor.a = (this_00->fields)._.m_Colors.m_SelectedColor.a;
      value.m_DisabledColor.r = (this_00->fields)._.m_Colors.m_DisabledColor.r;
      value.m_DisabledColor.g = (this_00->fields)._.m_Colors.m_DisabledColor.g;
      value.m_DisabledColor.b = (this_00->fields)._.m_Colors.m_DisabledColor.b;
      value.m_DisabledColor.a = (this_00->fields)._.m_Colors.m_DisabledColor.a;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

