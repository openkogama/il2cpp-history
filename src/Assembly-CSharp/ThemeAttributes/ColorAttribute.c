
/* Single Constrain(Single) */

float Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_Constrain
                (ColorAttribute *this,float value,MethodInfo *method)

{
  if (value < 0.0) {
    value = 0.0;
  }
  else if (_UNK_? < value) {
    return 1.0;
  }
  return value;
}


/* Color Constrain(Color) */

Color * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_Constrain_1
                  (Color *__return_storage_ptr__,ColorAttribute *this,Color value,MethodInfo *method
                  )

{
  fVar1 = _UNK_?;
  if (value.r < 0.0) {
    value.r = 0.0;
  }
  else if (_UNK_? < value.r) {
    value.r = _UNK_?;
  }
  if (value.g < 0.0) {
    value.g = 0.0;
  }
  else if (_UNK_? < value.g) {
    value.g = _UNK_?;
  }
  if (value.b < 0.0) {
    value.b = 0.0;
  }
  else if (_UNK_? < value.b) {
    value.b = _UNK_?;
  }
  if (value.a < 0.0) {
    value.a = 0.0;
  }
  else if (_UNK_? < value.a) {
    __return_storage_ptr__->r = value.r;
    __return_storage_ptr__->g = value.g;
    __return_storage_ptr__->b = value.b;
    __return_storage_ptr__->a = fVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->r = value.r;
  __return_storage_ptr__->g = value.g;
  __return_storage_ptr__->b = value.b;
  __return_storage_ptr__->a = value.a;
  return __return_storage_ptr__;
}


/* Color ConvertToColor(Dictionary`2[System.Object,System.Object]) */

Color * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_ConvertToColor
                  (Color *__return_storage_ptr__,Dictionary_2_System_Object_System_Object_ *value,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Alpha);
    func_?(&StringLiteral_Red);
    func_?(&StringLiteral_Blue);
    func_?(&StringLiteral_Green);
    cRam_? = '\x01';
  }
  if (value == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pSStack1 = extraout_ECX;
code_?:
    func_?();
    pSStack1 = extraout_ECX_00;
code_?:
    func_?();
    pSStack1 = extraout_ECX_01;
  }
  else {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (value,(Object *)StringLiteral_Red,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (value,(Object *)StringLiteral_Green,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (value,(Object *)StringLiteral_Blue,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pSStack1 =
         (Single__Class *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
         Dictionary_2_System_Object_System_Object__get_Item
                   (value,(Object *)StringLiteral_Alpha,
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    __return_storage_ptr__->r = 0.0;
    __return_storage_ptr__->g = 0.0;
    __return_storage_ptr__->b = 0.0;
    __return_storage_ptr__->a = 0.0;
    if (pSStack1 == (Single__Class *)0x0) goto code_?;
    pSVar5 = TypeInfo__System__Single;
    if ((((Object *)pSStack1)->klass->_0).element_class !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar6 = (float *)func_?();
    fVar7 = *pfVar6;
    if (pOVar4 == (Object *)0x0) goto code_?;
    pSStack1 = TypeInfo__System__Single;
    if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pSStack1 = (Single__Class *)pOVar4;
      pfVar6 = (float *)func_?();
      fVar8 = *pfVar6;
      if (pOVar3 == (Object *)0x0) goto code_?;
      pSStack1 = TypeInfo__System__Single;
      if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pSStack1 = (Single__Class *)pOVar3;
        pfVar6 = (float *)func_?();
        fVar9 = *pfVar6;
        if (pOVar2 == (Object *)0x0) goto code_?;
        pSStack1 = TypeInfo__System__Single;
        if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pSStack1 = (Single__Class *)pOVar2;
          pfVar6 = (float *)func_?();
          fVar10 = *pfVar6;
          __return_storage_ptr__->g = fVar9;
          __return_storage_ptr__->b = fVar8;
          __return_storage_ptr__->r = fVar10;
          __return_storage_ptr__->a = fVar7;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  pSVar5 = extraout_ECX_02;
code_?:
  pSStack1 = pSVar5;
  func_?();
  pcVar11 = (code *)swi(3);
  pCVar12 = (Color *)(*pcVar11)();
  return pCVar12;
}


/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_GetSettingsUIObject
          (ColorAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Color>);
    func_?(&
                    ThemeAttributes__ColorAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::ColorAttribute::Setter>_ThemeAttributes__ColorAttribute__Setter_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  original = (this->fields).prefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ThemeAttributes__ColorAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::ColorAttribute::Setter>_ThemeAttributes__ColorAttribute__Setter_
                      );
  this_01 = (UnityAction_1_UnityEngine_Color_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Color>);
  if (this_01 != (UnityAction_1_UnityEngine_Color_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
    UnityAction_1_UnityEngine_Color___ctor
              (this_01,(Object *)this,(this->klass->vtable).OnSettingsChanged.method,
               (MethodInfo *)0x0);
    if (this_00 != (Component *)0x0) {
      (*(code *)this_00->klass[1]._0.image)(this_00,this);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_00,(MethodInfo *)0x0);
      pTVar2 = (Transform *)0x0;
      if (pTVar1 != (Transform *)0x0) {
        if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar2 = pTVar1;
        }
        if (pTVar2 == (Transform *)0x0) {
          func_?();
          goto code_?;
        }
      }
      return (RectTransform *)pTVar2;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pRVar4 = (RectTransform *)(*pcVar3)();
  return pRVar4;
}


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_Initialize
               (ColorAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<UnityEngine::Color>_
                   );
    func_?(&
                    System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_ThemeAttributes__ThemeAttribute_
                   );
    cRam_? = '\x01';
  }
  NamedThemeAttribute`1[UnityEngine::Color]::NamedThemeAttribute_1_UnityEngine_Color__Initialize
            ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,settings,key,groups,onChange,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<UnityEngine::Color>_
            );
  if (settings != (SettingsWrapper *)0x0) {
    value = (Dictionary_2_System_Object_System_Object_ *)
            ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_2
                      (settings,(ThemeAttribute *)this,
                       System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_ThemeAttributes__ThemeAttribute_
                      );
    pCVar1 = ColorAttribute_ConvertToColor((Color *)&puStack_2,value,(MethodInfo *)0x0);
    fVar3 = pCVar1->r;
    fVar4 = pCVar1->g;
    fVar5 = pCVar1->b;
    fVar6 = pCVar1->a;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (_UNK_? < fVar6) {
      fVar6 = _UNK_?;
    }
    (this->fields)._._.value.r = fVar3;
    (this->fields)._._.value.g = fVar4;
    (this->fields)._._.value.b = fVar5;
    (this->fields)._._.value.a = fVar6;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingsChanged(Color) */

void Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_OnSettingsChanged
               (ColorAttribute *this,Color value,MethodInfo *method)

{
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value.r = value.r;
  (this->fields)._._.value.g = value.g;
  (this->fields)._._.value.b = value.b;
  (this->fields)._._.value.a = value.a;
  value_00 = (MethodInfo **)ColorAttribute_ToSerializable(this,value,(MethodInfo *)0x0);
  pSVar1 = (this->fields)._._._.themeSettings;
  if (pSVar1 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      value_00 = &
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
      ;
      cRam_? = '\x01';
    }
    this_00 = (pSVar1->fields).settingsData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key,(Object *)value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pAVar2 = (this->fields)._._.themeCallback;
      if (pAVar2 != (Action_1_UnityEngine_Color_ *)0x0) {
        (*(pAVar2->fields)._._.invoke_impl)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Dictionary`2[System.Object,System.Object] ToSerializable(Color) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_ToSerializable
          (ColorAttribute *this,Color c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Alpha);
    func_?(&StringLiteral_Red);
    func_?(&StringLiteral_Blue);
    func_?(&StringLiteral_Green);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Red,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_3 = (undefined *)c.g;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&puStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Green,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    fStack_4 = c.b;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Blue,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Alpha,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return pDVar1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar1;
}


/* ColorAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute__ctor
               (ColorAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__NamedThemeAttribute__
                   );
    cRam_? = '\x01';
  }
  StreamedAssetToCallback`2[System::Object,System::Object]::
  StreamedAssetToCallback_2_System_Object_System_Object___ctor
            ((StreamedAssetToCallback_2_System_Object_System_Object_ *)this,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__NamedThemeAttribute__
            );
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_get_Data
                   (ColorAttribute *this,MethodInfo *method)

{
  pDVar1 = ColorAttribute_ToSerializable(this,(this->fields)._._.value,(MethodInfo *)0x0);
  return (Object *)pDVar1;
}

