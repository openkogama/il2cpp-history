
/* Void ChangeColor(Color) */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_ChangeColor
               (ThemeColorPickerRGB *this,Color c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).previewImage;
  if (pRVar1 != (RawImage *)0x0) {
    (*(code *)(pRVar1->klass->vtable).set_color.method)
              (pRVar1,c.r,c.g,c.b,c.a,(pRVar1->klass->vtable).get_raycastTarget.methodPtr);
    this_00 = (Action_1_UnityEngine_Vector4_ *)(this->fields).onChange;
    if (this_00 != (Action_1_UnityEngine_Vector4_ *)0x0) {
      mscorlib.dll::System::Action`1[UnityEngine::Vector4]::Action_1_UnityEngine_Vector4__Invoke
                (this_00,(Vector4)c,
                 MethodInfo__System__Action<UnityEngine::Color>__Invoke_UnityEngine__Color_);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(ColorAttribute, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_Initialize
               (ThemeColorPickerRGB *this,ColorAttribute *attrib,
               Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).label;
  if (attrib != (ColorAttribute *)0x0) {
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)attrib,
                        MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__get_Name__
                       );
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if (TypeInfo__ThemeColorPickerRGB->static_fields->__f__am_cache0 ==
          (Action_1_UnityEngine_Color_ *)0x0) {
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action<UnityEngine::Color>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__ThemeColorPickerRGB___Initialize_m__0_UnityEngine__Color_,
                   MethodInfo__System__Action<UnityEngine::Color>__Action_System__Object__void__);
        TypeInfo__ThemeColorPickerRGB->static_fields->__f__am_cache0 =
             (Action_1_UnityEngine_Color_ *)this_00;
      }
      (this->fields).onChange = TypeInfo__ThemeColorPickerRGB->static_fields->__f__am_cache0;
      pSVar3 = (this->fields).sliderR;
      pCVar4 = ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
               ThemeAttribute_1_UnityEngine_Color__get_Value
                         (&CStack_5,(ThemeAttribute_1_UnityEngine_Color_ *)attrib,
                          MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__
                         );
      CStack_5.r = pCVar4->r;
      CStack_5.g = pCVar4->g;
      CStack_5.b = pCVar4->b;
      CStack_5.a = pCVar4->a;
      if (pSVar3 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar3,StringLiteral_Red,CStack_5.r,0.0,1.0,(MethodInfo *)0x0);
        pSVar3 = (this->fields).sliderG;
        pCVar4 = ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
                 ThemeAttribute_1_UnityEngine_Color__get_Value
                           (&CStack_5,(ThemeAttribute_1_UnityEngine_Color_ *)attrib,
                            MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__
                           );
        CStack_5.r = pCVar4->r;
        CStack_5.g = pCVar4->g;
        CStack_5.b = pCVar4->b;
        CStack_5.a = pCVar4->a;
        if (pSVar3 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar3,StringLiteral_Green,CStack_5.g,0.0,1.0,(MethodInfo *)0x0);
          pSVar3 = (this->fields).sliderB;
          pCVar4 = ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
                   ThemeAttribute_1_UnityEngine_Color__get_Value
                             (&CStack_5,(ThemeAttribute_1_UnityEngine_Color_ *)attrib,
                              MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__
                             );
          CStack_5.r = pCVar4->r;
          CStack_5.g = pCVar4->g;
          CStack_5.b = pCVar4->b;
          CStack_5.a = pCVar4->a;
          if (pSVar3 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar3,StringLiteral_Blue,CStack_5.b,0.0,1.0,(MethodInfo *)0x0);
            pRVar6 = (this->fields).previewImage;
            pCVar4 = ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
                     ThemeAttribute_1_UnityEngine_Color__get_Value
                               (&CStack_5,(ThemeAttribute_1_UnityEngine_Color_ *)attrib,
                                MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__
                               );
            if (pRVar6 != (RawImage *)0x0) {
              (*(code *)(pRVar6->klass->vtable).set_color.method)
                        (pRVar6,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a,
                         (pRVar6->klass->vtable).get_raycastTarget.methodPtr);
              (this->fields).onChange = onChange;
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_OnSettingChanged
               (ThemeColorPickerRGB *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields).sliderR;
  if (pSVar1 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).sliderG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      fVar2 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).sliderB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        fVar4 = 1.0;
        uVar5 = 0;
        func_?(&stack0xffffffe4);
        c.g = fVar2;
        c.r = (float)uVar5;
        c.b = fVar3;
        c.a = fVar4;
        ThemeColorPickerRGB_ChangeColor(this,c,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_Reset
               (ThemeColorPickerRGB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
           GameObject_GetComponentsInChildren_29
                     ((GameObject *)this,
                      SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                     );
  if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pUVar1->max_length == 0) goto code_?;
    (this->fields).sliderR = (SettingsSlider *)pUVar1->vector[0];
    if (1 < pUVar1->max_length) {
      (this->fields).sliderG = (SettingsSlider *)pUVar1->vector[1];
      if (2 < pUVar1->max_length) {
        (this->fields).sliderB = (SettingsSlider *)pUVar1->vector[2];
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

