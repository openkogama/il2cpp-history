
/* Single Constrain(Single) */

float Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_Constrain
                (FloatAttribute *this,float value,MethodInfo *method)

{
  pFVar1 = this;
  this = (FloatAttribute *)value;
  pFVar2 = (FloatAttribute *)(pFVar1->fields).min;
  if ((value < (float)pFVar2) ||
     (pFVar2 = (FloatAttribute *)(pFVar1->fields).max, (float)pFVar2 < value)) {
    this = pFVar2;
  }
  return (float)this;
}


/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_GetSettingsUIObject
          (FloatAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float>);
    func_?(&
                    ThemeAttributes__FloatAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::FloatAttribute::Setter>_ThemeAttributes__FloatAttribute__Setter_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  original = (this->fields).sliderPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ThemeAttributes__FloatAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::FloatAttribute::Setter>_ThemeAttributes__FloatAttribute__Setter_
                      );
  this_01 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
  if (this_01 != (UnityAction_1_System_Single_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
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


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Single]) */

void Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_Initialize
               (FloatAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Single_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<float>_
                   );
    func_?(&
                    float_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<float>_ThemeAttributes__ThemeAttribute_
                   );
    cRam_? = '\x01';
  }
  NamedThemeAttribute`1[System::Single]::NamedThemeAttribute_1_System_Single__Initialize
            ((NamedThemeAttribute_1_System_Single_ *)this,settings,key,groups,onChange,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<float>_
            );
  if (settings != (SettingsWrapper *)0x0) {
    fVar1 = ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_3
                      (settings,(ThemeAttribute *)this,
                       float_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<float>_ThemeAttributes__ThemeAttribute_
                      );
    fVar2 = (this->fields).min;
    if ((fVar1 < fVar2) || (fVar2 = (this->fields).max, fVar2 < fVar1)) {
      fVar1 = fVar2;
    }
    (this->fields)._._.value = fVar1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingsChanged(Single) */

void Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_OnSettingsChanged
               (FloatAttribute *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pFVar1 = this;
  fVar2 = (this->fields).min;
  if ((value < fVar2) || (fVar2 = (this->fields).max, fVar3 = value, fVar2 < value)) {
    fVar3 = fVar2;
  }
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value = fVar3;
  this = (FloatAttribute *)value;
  value = (float)func_?(TypeInfo__System__Single,&this);
  pSVar4 = (pFVar1->fields)._._._.themeSettings;
  if (pSVar4 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pSVar4->fields).settingsData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pAVar5 = (pFVar1->fields)._._.themeCallback;
      if (pAVar5 != (Action_1_Single_ *)0x0) {
        this = (pAVar5->fields)._._.method;
        (*(pAVar5->fields)._._.invoke_impl)((pAVar5->fields)._._.method_code);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* FloatAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute__ctor
               (FloatAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__NamedThemeAttribute__)
    ;
    cRam_? = '\x01';
  }
  StreamedAssetToCallback`2[System::Object,System::Object]::
  StreamedAssetToCallback_2_System_Object_System_Object___ctor
            ((StreamedAssetToCallback_2_System_Object_System_Object_ *)this,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__NamedThemeAttribute__);
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_get_Data
                   (FloatAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this = (FloatAttribute *)(this->fields)._._.value;
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&this);
  return pOVar1;
}

