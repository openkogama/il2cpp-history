
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_Initialize
               (TabMenuButton *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TabMenuButton___Initialize_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)tabId;
    (this_01->fields).state = (int32_t)this;
    pTVar1 = (this->fields).buttonText;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,categoryName,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (HoverCraftMotor *)(this->fields).button;
      if (this_00 != (HoverCraftMotor *)0x0) {
        this_02 = (UnityEvent *)
                  HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_01,
                   MethodInfo__TabMenuButton___Initialize_c__AnonStorey0____m__0__,(MethodInfo *)0x0
                  );
        if (this_02 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_SetAsDeselected
               (TabMenuButton *this,MethodInfo *method)

{
  func_?(&pLStack_1,0,0x48);
  pBVar2 = (this->fields).button;
  if (pBVar2 != (Button *)0x0) {
    pCVar3 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                       (&CStack_4,(Selectable *)pBVar2,(MethodInfo *)0x0);
    pLStack_1 = (LimbController__Class *)(pCVar3->m_NormalColor).r;
    pMStack_5 = (MonitorData *)(pCVar3->m_NormalColor).g;
    pMStack_6 = (MVWorldObjectClient *)(pCVar3->m_NormalColor).b;
    pTStack_7 = (Transform *)(pCVar3->m_NormalColor).a;
    fStack_8 = (pCVar3->m_HighlightedColor).r;
    fStack_9 = (pCVar3->m_HighlightedColor).g;
    fStack_10 = (pCVar3->m_HighlightedColor).b;
    fStack_11 = (pCVar3->m_HighlightedColor).a;
    fStack_12 = (pCVar3->m_PressedColor).r;
    fStack_13 = (pCVar3->m_PressedColor).g;
    fStack_14 = (pCVar3->m_PressedColor).b;
    fStack_15 = (pCVar3->m_PressedColor).a;
    fStack_16 = (pCVar3->m_DisabledColor).r;
    fStack_17 = (pCVar3->m_DisabledColor).g;
    fStack_18 = (pCVar3->m_DisabledColor).b;
    fStack_19 = (pCVar3->m_DisabledColor).a;
    uStack_20._0_4_ = pCVar3->m_ColorMultiplier;
    uStack_20._4_4_ = pCVar3->m_FadeDuration;
    pQVar21 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                       (&QStack_22,(LimbController *)&pLStack_1,(MethodInfo *)0x0);
    CStack_4.m_NormalColor.r = pQVar21->x;
    CStack_4.m_NormalColor.g = pQVar21->y;
    CStack_4.m_NormalColor.b = pQVar21->z;
    CStack_4.m_NormalColor.a = pQVar21->w;
    CStack_4.m_HighlightedColor.r = 0.0;
    func_?(&pLStack_1);
    pBVar2 = (this->fields).button;
    if (pBVar2 != (Button *)0x0) {
      value.m_NormalColor.g = (float)pMStack_5;
      value.m_NormalColor.r = (float)pLStack_1;
      value.m_NormalColor.b = (float)pMStack_6;
      value.m_NormalColor.a = (float)pTStack_7;
      value.m_HighlightedColor.r = fStack_8;
      value.m_HighlightedColor.g = fStack_9;
      value.m_HighlightedColor.b = fStack_10;
      value.m_HighlightedColor.a = fStack_11;
      value.m_PressedColor.r = fStack_12;
      value.m_PressedColor.g = fStack_13;
      value.m_PressedColor.b = fStack_14;
      value.m_PressedColor.a = fStack_15;
      value.m_DisabledColor.r = fStack_16;
      value.m_DisabledColor.g = fStack_17;
      value.m_DisabledColor.b = fStack_18;
      value.m_DisabledColor.a = fStack_19;
      value.m_ColorMultiplier = (float)uStack_20;
      value.m_FadeDuration = SUB84(uStack_20,4);
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)pBVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::TabMenuButton::TabMenuButton_SetAsSelected
               (TabMenuButton *this,MethodInfo *method)

{
  func_?(&pJStack_1,0,0x48);
  pBVar2 = (this->fields).button;
  if (pBVar2 != (Button *)0x0) {
    pCVar3 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_colors
                       (&CStack_4,(Selectable *)pBVar2,(MethodInfo *)0x0);
    pJStack_1 = (JsonSchemaModel__Class *)(pCVar3->m_NormalColor).r;
    pMStack_5 = (MonitorData *)(pCVar3->m_NormalColor).g;
    fStack_6 = (pCVar3->m_NormalColor).b;
    fStack_7 = (pCVar3->m_NormalColor).a;
    fStack_8 = (pCVar3->m_HighlightedColor).r;
    fStack_9 = (pCVar3->m_HighlightedColor).g;
    fStack_10 = (pCVar3->m_HighlightedColor).b;
    fStack_11 = (pCVar3->m_HighlightedColor).a;
    fStack_12 = (pCVar3->m_PressedColor).r;
    fStack_13 = (pCVar3->m_PressedColor).g;
    fStack_14 = (pCVar3->m_PressedColor).b;
    fStack_15 = (pCVar3->m_PressedColor).a;
    fStack_16 = (pCVar3->m_DisabledColor).r;
    fStack_17 = (pCVar3->m_DisabledColor).g;
    fStack_18 = (pCVar3->m_DisabledColor).b;
    fStack_19 = (pCVar3->m_DisabledColor).a;
    dStack_20 = *(double *)&pCVar3->m_ColorMultiplier;
    pNVar21 = Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel_get_DivisibleBy
                       (&NStack_22,(JsonSchemaModel *)&pJStack_1,(MethodInfo *)0x0);
    CStack_4.m_NormalColor.r = *(float *)&pNVar21->value;
    CStack_4.m_NormalColor.g = *(float *)((int)&pNVar21->value + 4);
    CStack_4.m_NormalColor.b = *(float *)&pNVar21->has_value;
    CStack_4.m_NormalColor.a = *(float *)&pNVar21->field_0xc;
    CStack_4.m_HighlightedColor.r = 0.0;
    func_?(&pJStack_1);
    pBVar2 = (this->fields).button;
    if (pBVar2 != (Button *)0x0) {
      value.m_NormalColor.g = (float)pMStack_5;
      value.m_NormalColor.r = (float)pJStack_1;
      value.m_NormalColor.b = fStack_6;
      value.m_NormalColor.a = fStack_7;
      value.m_HighlightedColor.r = fStack_8;
      value.m_HighlightedColor.g = fStack_9;
      value.m_HighlightedColor.b = fStack_10;
      value.m_HighlightedColor.a = fStack_11;
      value.m_PressedColor.r = fStack_12;
      value.m_PressedColor.g = fStack_13;
      value.m_PressedColor.b = fStack_14;
      value.m_PressedColor.a = fStack_15;
      value.m_DisabledColor.r = fStack_16;
      value.m_DisabledColor.g = fStack_17;
      value.m_DisabledColor.b = fStack_18;
      value.m_DisabledColor.a = fStack_19;
      value.m_ColorMultiplier = (float)SUB84(dStack_20,0);
      value.m_FadeDuration = (float)((ulonglong)dStack_20 >> 0x20);
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                ((Selectable *)pBVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}

