
/* Void ChangeColor(Color) */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_ChangeColor
               (ThemeColorPickerRGB *this,Color c,MethodInfo *method)

{
  pRVar1 = (this->fields).previewImage;
  if (pRVar1 != (RawImage *)0x0) {
    (*(code *)(pRVar1->klass->vtable).set_color.method)
              (pRVar1,c.r,c.g,c.b,c.a,(pRVar1->klass->vtable).get_raycastTarget.methodPtr);
    pAVar2 = (this->fields).onChange;
    if (pAVar2 != (Action_1_UnityEngine_Color_ *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,c.r,c.g,c.b,c.a,(pAVar2->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(ColorAttribute, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_Initialize
               (ThemeColorPickerRGB *this,ColorAttribute *attrib,
               Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Color>);
    func_?(&
                    MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__get_Name__
                   );
    func_?(&MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__);
    func_?(&MethodInfo__ThemeColorPickerRGB____c___Initialize_b__7_0_UnityEngine__Color_);
    func_?(&TypeInfo__ThemeColorPickerRGB____c);
    func_?(&StringLiteral_Red);
    func_?(&StringLiteral_Blue);
    func_?(&StringLiteral_Green);
    cRam_? = '\x01';
  }
  if (attrib != (ColorAttribute *)0x0) {
    pTVar1 = (this->fields).label;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,(attrib->fields)._.name,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if ((TypeInfo__ThemeColorPickerRGB____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ThemeColorPickerRGB____c);
      }
      this_00 = TypeInfo__ThemeColorPickerRGB____c->static_fields->__9__7_0;
      if (this_00 == (Action_1_UnityEngine_Color_ *)0x0) {
        if ((TypeInfo__ThemeColorPickerRGB____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__ThemeColorPickerRGB____c);
        }
        object = TypeInfo__ThemeColorPickerRGB____c->static_fields->__9;
        this_00 = (Action_1_UnityEngine_Color_ *)
                  func_?(TypeInfo__System__Action<UnityEngine::Color>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
        UnityAction_1_UnityEngine_Color___ctor
                  ((UnityAction_1_UnityEngine_Color_ *)this_00,(Object *)object,
                   MethodInfo__ThemeColorPickerRGB____c___Initialize_b__7_0_UnityEngine__Color_,
                   (MethodInfo *)0x0);
        TypeInfo__ThemeColorPickerRGB____c->static_fields->__9__7_0 = this_00;
        func_?(&TypeInfo__ThemeColorPickerRGB____c->static_fields->__9__7_0,this_00);
      }
      (this->fields).onChange = this_00;
      func_?(&(this->fields).onChange,this_00);
      pSVar2 = (this->fields).sliderR;
      if (pSVar2 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar2,StringLiteral_Red,(attrib->fields)._._.value.r,0.0,1.0,(MethodInfo *)0x0);
        pSVar2 = (this->fields).sliderG;
        if (pSVar2 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar2,StringLiteral_Green,(attrib->fields)._._.value.g,0.0,1.0,
                     (MethodInfo *)0x0);
          pSVar2 = (this->fields).sliderB;
          if (pSVar2 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar2,StringLiteral_Blue,(attrib->fields)._._.value.b,0.0,1.0,
                       (MethodInfo *)0x0);
            pRVar3 = (this->fields).previewImage;
            if (pRVar3 != (RawImage *)0x0) {
              (*(code *)(pRVar3->klass->vtable).set_color.method)
                        (pRVar3,(attrib->fields)._._.value.r,(attrib->fields)._._.value.g,
                         (attrib->fields)._._.value.b,(attrib->fields)._._.value.a,
                         (pRVar3->klass->vtable).get_raycastTarget.methodPtr);
              (this->fields).onChange = onChange;
              func_?(&(this->fields).onChange,onChange);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      pSVar1 = (SettingsSlider *)SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      if ((this->fields).sliderB != (SettingsSlider *)0x0) {
        puVar2 = &UNK_?;
        fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        pRVar4 = (this->fields).previewImage;
        if (pRVar4 != (RawImage *)0x0) {
          uVar5 = 0x3f800000;
          (*(code *)(pRVar4->klass->vtable).set_color.method)
                    (pRVar4,puVar2,pSVar1,fVar3,0x3f800000,
                     (pRVar4->klass->vtable).get_raycastTarget.methodPtr);
          pAVar6 = (this->fields).onChange;
          if (pAVar6 != (Action_1_UnityEngine_Color_ *)0x0) {
            (*(pAVar6->fields)._._.invoke_impl)
                      ((pAVar6->fields)._._.method_code,puVar2,pSVar1,fVar3,uVar5,
                       (pAVar6->fields)._._.method);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_Reset
               (ThemeColorPickerRGB *this,MethodInfo *method)

{
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
  if (pOVar1 == (Object__Array *)0x0) {
    func_?();
  }
  else if (pOVar1->max_length != 0) {
    pSVar2 = (SettingsSlider *)pOVar1->vector[0];
    (this->fields).sliderR = pSVar2;
    func_?(&(this->fields).sliderR,pSVar2);
    if (1 < pOVar1->max_length) {
      pSVar2 = (SettingsSlider *)pOVar1->vector[1];
      (this->fields).sliderG = pSVar2;
      func_?(&(this->fields).sliderG,pSVar2);
      if (2 < pOVar1->max_length) {
        pSVar2 = (SettingsSlider *)pOVar1->vector[2];
        (this->fields).sliderB = pSVar2;
        func_?(&(this->fields).sliderB,pSVar2);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

