
/* Void Initialize(ColorAttribute, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_Initialize
               (ThemeColorPickerRGBA *this,ColorAttribute *attrib,
               Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ThemeColorPickerRGB::ThemeColorPickerRGB_Initialize
            ((ThemeColorPickerRGB *)this,attrib,onChange,(MethodInfo *)0x0);
  if (TypeInfo__ThemeColorPickerRGBA->static_fields->__f__am_cache0 ==
      (Action_1_UnityEngine_Color_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__ThemeColorPickerRGBA___Initialize_m__0_UnityEngine__Color_,
               MethodInfo__System__Action<UnityEngine::Color>__Action_System__Object__void__);
    TypeInfo__ThemeColorPickerRGBA->static_fields->__f__am_cache0 =
         (Action_1_UnityEngine_Color_ *)this_01;
  }
  if (this != (ThemeColorPickerRGBA *)0x0) {
    (this->fields)._.onChange = TypeInfo__ThemeColorPickerRGBA->static_fields->__f__am_cache0;
    this_00 = (this->fields).sliderA;
    if (attrib != (ColorAttribute *)0x0) {
      pCVar1 = ThemeAttributes::ThemeAttribute`1[UnityEngine::Color]::
               ThemeAttribute_1_UnityEngine_Color__get_Value
                         ((Color *)&stack0xffffffec,(ThemeAttribute_1_UnityEngine_Color_ *)attrib,
                          MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__
                         );
      if (this_00 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (this_00,StringLiteral_Alpha,pCVar1->a,0.0,1.0,(MethodInfo *)0x0);
        (this->fields)._.onChange = onChange;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_OnSettingChanged
               (ThemeColorPickerRGBA *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields)._.sliderR;
  if (pSVar1 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._.sliderG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields)._.sliderB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        pSVar1 = (this->fields).sliderA;
        if (pSVar1 != (SettingsSlider *)0x0) {
          fVar2 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
          puVar3 = &stack0xffffffe0;
          uVar4 = 0;
          puVar5 = &UNK_?;
          func_?();
          c.g = (float)puVar3;
          c.r = (float)puVar5;
          c.b = (float)uVar4;
          c.a = fVar2;
          ThemeColorPickerRGB::ThemeColorPickerRGB_ChangeColor
                    ((ThemeColorPickerRGB *)this,c,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_Reset
               (ThemeColorPickerRGBA *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
code_?:
    func_?();
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pUVar1->max_length == 0) goto code_?;
    (this->fields)._.sliderR = (SettingsSlider *)pUVar1->vector[0];
    if (pUVar1->max_length < 2) goto code_?;
    (this->fields)._.sliderG = (SettingsSlider *)pUVar1->vector[1];
    if (2 < pUVar1->max_length) {
      (this->fields)._.sliderB = (SettingsSlider *)pUVar1->vector[2];
      pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         ((GameObject *)this,
                          SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                         );
      if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
        if (3 < pUVar1->max_length) {
          (this->fields).sliderA = (SettingsSlider *)pUVar1->vector[3];
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?();
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

