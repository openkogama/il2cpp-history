
/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::BoolAttribute::BoolAttribute_GetSettingsUIObject
          (BoolAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&
                    ThemeAttributes__BoolAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::BoolAttribute::Setter>_ThemeAttributes__BoolAttribute__Setter_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  original = (this->fields).togglePrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ThemeAttributes__BoolAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::BoolAttribute::Setter>_ThemeAttributes__BoolAttribute__Setter_
                      );
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_01,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
  if (this_00 != (Component *)0x0) {
    (*this_00->klass[1]._0.gc_desc)(this_00,this);
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pRVar4 = (RectTransform *)(*pcVar3)();
  return pRVar4;
}


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Boolean]) */

void Assembly-CSharp.dll::ThemeAttributes::BoolAttribute::BoolAttribute_Initialize
               (BoolAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Boolean_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ThemeAttributes__NamedThemeAttribute<bool>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<bool>_
                   );
    func_?(&
                    bool_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<bool>_ThemeAttributes__ThemeAttribute_
                   );
    cRam_? = '\x01';
  }
  NamedThemeAttribute`1[System::Boolean]::NamedThemeAttribute_1_System_Boolean__Initialize
            ((NamedThemeAttribute_1_System_Boolean_ *)this,settings,key,groups,onChange,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<bool>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<bool>_
            );
  if (settings != (SettingsWrapper *)0x0) {
    bVar1 = ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute
                      (settings,(ThemeAttribute *)this,
                       bool_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<bool>_ThemeAttributes__ThemeAttribute_
                      );
    (this->fields)._._.value = bVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSettingsChanged(Boolean) */

void Assembly-CSharp.dll::ThemeAttributes::BoolAttribute::BoolAttribute_OnSettingsChanged
               (BoolAttribute *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  bStack1 = value;
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value = value;
  value_00 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  pSVar2 = (this->fields)._._._.themeSettings;
  if (pSVar2 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pSVar2->fields).settingsData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pAVar3 = (this->fields)._._.themeCallback;
      if (pAVar3 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(this->fields)._._.value,
                   (pAVar3->fields)._._.method);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* BoolAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::BoolAttribute::BoolAttribute__ctor
               (BoolAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<bool>__NamedThemeAttribute__);
    cRam_? = '\x01';
  }
  NamedThemeAttribute`1[System::Single]::NamedThemeAttribute_1_System_Single___ctor
            ((NamedThemeAttribute_1_System_Single_ *)this,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<bool>__NamedThemeAttribute__);
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::BoolAttribute::BoolAttribute_get_Data
                   (BoolAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  this = (BoolAttribute *)CONCAT13((this->fields)._._.value,this._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  return pOVar1;
}

