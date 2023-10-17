
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_Constrain
                  (IntAttribute *this,int32_t value,MethodInfo *method)

{
  iVar1 = (this->fields).min;
  if ((value < iVar1) || (iVar1 = (this->fields).max, iVar1 < value)) {
    value = iVar1;
  }
  return value;
}


/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_GetSettingsUIObject
          (IntAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&
                    ThemeAttributes__IntAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::IntAttribute::Setter>_ThemeAttributes__IntAttribute__Setter_
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
                       ThemeAttributes__IntAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::IntAttribute::Setter>_ThemeAttributes__IntAttribute__Setter_
                      );
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
  if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
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


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_Initialize
               (IntAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Int32_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<int>_
                   );
    func_?(&
                    int_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<int>_ThemeAttributes__ThemeAttribute_
                   );
    cRam_? = '\x01';
  }
  NamedThemeAttribute`1[System::Int32]::NamedThemeAttribute_1_System_Int32__Initialize
            ((NamedThemeAttribute_1_System_Int32_ *)this,settings,key,groups,onChange,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<int>_
            );
  if (settings != (SettingsWrapper *)0x0) {
    iVar1 = ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_1
                      (settings,(ThemeAttribute *)this,
                       int_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<int>_ThemeAttributes__ThemeAttribute_
                      );
    iVar2 = (this->fields).min;
    if ((iVar1 < iVar2) || (iVar2 = (this->fields).max, iVar2 < iVar1)) {
      iVar1 = iVar2;
    }
    (this->fields)._._.value = iVar1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingsChanged(Int32) */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_OnSettingsChanged
               (IntAttribute *this,int32_t value,MethodInfo *method)

{
  iVar1 = (this->fields).min;
  if ((value < iVar1) || (iVar1 = (this->fields).max, iVar1 < value)) {
    value = iVar1;
  }
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value = value;
  value_00 = (Object *)
             (*(this->klass->vtable).get_Data.methodPtr)(this,(this->klass->vtable).get_Data.method)
  ;
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
      if (pAVar3 != (Action_1_Int32_ *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IntAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute__ctor
               (IntAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__NamedThemeAttribute__);
    cRam_? = '\x01';
  }
  (this->fields).min = -0x80000000;
  (this->fields).max = 0x7fffffff;
  StreamedAssetToCallback`2[System::Object,System::Object]::
  StreamedAssetToCallback_2_System_Object_System_Object___ctor
            ((StreamedAssetToCallback_2_System_Object_System_Object_ *)this,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__NamedThemeAttribute__);
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_get_Data
                   (IntAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this = (IntAttribute *)(this->fields)._._.value;
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&this);
  return pOVar1;
}

