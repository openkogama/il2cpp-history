
/* Void Initialize(ColorAttribute, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_Initialize
               (ThemeColorPickerRGBA *this,ColorAttribute *attrib,
               Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Color>);
    func_?(&MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__);
    func_?(&MethodInfo__ThemeColorPickerRGBA____c___Initialize_b__2_0_UnityEngine__Color_);
    func_?(&TypeInfo__ThemeColorPickerRGBA____c);
    func_?(&StringLiteral_Alpha);
    cRam_? = '\x01';
  }
  ThemeColorPickerRGB::ThemeColorPickerRGB_Initialize
            ((ThemeColorPickerRGB *)this,attrib,onChange,(MethodInfo *)0x0);
  if ((TypeInfo__ThemeColorPickerRGBA____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ThemeColorPickerRGBA____c);
  }
  this_01 = TypeInfo__ThemeColorPickerRGBA____c->static_fields->__9__2_0;
  if (this_01 == (Action_1_UnityEngine_Color_ *)0x0) {
    if ((TypeInfo__ThemeColorPickerRGBA____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ThemeColorPickerRGBA____c);
    }
    object = TypeInfo__ThemeColorPickerRGBA____c->static_fields->__9;
    this_01 = (Action_1_UnityEngine_Color_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Color>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
    UnityAction_1_UnityEngine_Color___ctor
              ((UnityAction_1_UnityEngine_Color_ *)this_01,(Object *)object,
               MethodInfo__ThemeColorPickerRGBA____c___Initialize_b__2_0_UnityEngine__Color_,
               (MethodInfo *)0x0);
    TypeInfo__ThemeColorPickerRGBA____c->static_fields->__9__2_0 = this_01;
    func_?(&TypeInfo__ThemeColorPickerRGBA____c->static_fields->__9__2_0,this_01);
  }
  if (this != (ThemeColorPickerRGBA *)0x0) {
    (this->fields)._.onChange = this_01;
    func_?(&(this->fields)._.onChange,this_01);
    this_00 = (this->fields).sliderA;
    if (attrib != (ColorAttribute *)0x0) {
      fVar1 = (attrib->fields)._._.value.g;
      fVar2 = (attrib->fields)._._.value.b;
      if (this_00 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (this_00,StringLiteral_Alpha,(attrib->fields)._._.value.a,0.0,1.0,
                   (MethodInfo *)0x0);
        (this->fields)._.onChange = onChange;
        func_?(&(this->fields)._.onChange,onChange,fVar1,fVar2);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_OnSettingChanged
               (ThemeColorPickerRGBA *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields)._.sliderR;
  if (pSVar1 != (SettingsSlider *)0x0) {
    fVar2 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._.sliderG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields)._.sliderB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        pSVar1 = (this->fields).sliderA;
        if (pSVar1 != (SettingsSlider *)0x0) {
          puVar4 = &UNK_?;
          fVar5 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
          pRVar6 = (this->fields)._.previewImage;
          if (pRVar6 != (RawImage *)0x0) {
            puVar7 = &UNK_?;
            (*(code *)(pRVar6->klass->vtable).set_color.method)
                      (pRVar6,fVar2,fVar3,puVar4,fVar5,
                       (pRVar6->klass->vtable).get_raycastTarget.methodPtr);
            pAVar8 = (this->fields)._.onChange;
            if (pAVar8 != (Action_1_UnityEngine_Color_ *)0x0) {
              (*(pAVar8->fields)._._.invoke_impl)
                        ((pAVar8->fields)._._.method_code,puVar7,pRVar6,fVar2,fVar3,
                         (pAVar8->fields)._._.method);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_Reset
               (ThemeColorPickerRGBA *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                   );
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                     );
  if (pOVar1 != (Object__Array *)0x0) {
    if (pOVar1->max_length == 0) goto code_?;
    pSVar2 = (SettingsSlider *)pOVar1->vector[0];
    (this->fields)._.sliderR = pSVar2;
    func_?(&(this->fields)._.sliderR,pSVar2);
    if (pOVar1->max_length < 2) goto code_?;
    pSVar2 = (SettingsSlider *)pOVar1->vector[1];
    (this->fields)._.sliderG = pSVar2;
    func_?(&(this->fields)._.sliderG,pSVar2);
    if (pOVar1->max_length < 3) goto code_?;
    pSVar2 = (SettingsSlider *)pOVar1->vector[2];
    (this->fields)._.sliderB = pSVar2;
    func_?(&(this->fields)._.sliderB,pSVar2);
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                       );
    if (pOVar1 != (Object__Array *)0x0) {
      if (3 < pOVar1->max_length) {
        pSVar2 = (SettingsSlider *)pOVar1->vector[3];
        (this->fields).sliderA = pSVar2;
        func_?(&(this->fields).sliderA,pSVar2);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

