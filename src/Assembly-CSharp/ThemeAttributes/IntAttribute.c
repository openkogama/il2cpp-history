
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_Constrain
                  (IntAttribute *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).min;
  max = (this->fields).max;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                    (value,iVar1,max,(MethodInfo *)0x0);
  return iVar1;
}


/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_GetSettingsUIObject
          (IntAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).prefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      ThemeAttributes__IntAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::IntAttribute::Setter>_ThemeAttributes__IntAttribute__Setter_
                     );
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<int>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,this->klass[1]._0.image,
             MethodInfo__System__Action<int>__Action_System__Object__void__);
  if (pXVar1 == (XpBoostParticlePreviewer *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    pRVar3 = (RectTransform *)(*pcVar2)();
    return pRVar3;
  }
  (*pXVar1->klass[1]._0.gc_desc)(pXVar1,this);
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)pXVar1,(MethodInfo *)0x0);
  pTVar5 = (Transform *)0x0;
  if (pTVar4 != (Transform *)0x0) {
    if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar5 = pTVar4;
    }
    if (pTVar5 == (Transform *)0x0) {
      func_?();
      goto code_?;
    }
  }
  return (RectTransform *)pTVar5;
}


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_Initialize
               (IntAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Int32_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NamedThemeAttribute`1[System::Int32]::NamedThemeAttribute_1_System_Int32__Initialize
            ((NamedThemeAttribute_1_System_Int32_ *)this,settings,key,groups,onChange,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<int>_
            );
  if (settings != (SettingsWrapper *)0x0) {
    iVar1 = ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_4
                      (settings,(ThemeAttribute *)this,
                       int_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<int>_ThemeAttributes__ThemeAttribute_
                      );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    min = (this->fields).min;
    max = (this->fields).max;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                      (iVar1,min,max,(MethodInfo *)0x0);
    (this->fields)._._.value = iVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSettingsChanged(Int32) */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_OnSettingsChanged
               (IntAttribute *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).min;
  max = (this->fields).max;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                    (value,iVar1,max,(MethodInfo *)0x0);
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value = iVar1;
  value_00 = (Theme *)(*(code *)(this->klass->vtable).get_Data.method)
                                (this,(this->klass->vtable).GetSettingsUIObject.methodPtr);
  pSVar2 = (this->fields)._._._.themeSettings;
  if (pSVar2 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pSVar2->fields).settingsData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_00,key,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      this_01 = (Action_1_UIPushOption_ *)(this->fields)._._.themeCallback;
      if (this_01 != (Action_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_01,(this->fields)._._.value,MethodInfo__System__Action<int>__Invoke_int_);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IntAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute__ctor
               (IntAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).min = -0x80000000;
  (this->fields).max = 0x7fffffff;
  System.Core.dll::System::Linq::OrderedEnumerable`1[System::Collections::Generic::
  KeyValuePair`2[System::Int32,System::Int32]]::
  OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_IEnumerable_GetEnumerator
            ((OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
              *)this,MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__NamedThemeAttribute__);
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_get_Data
                   (IntAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (IntAttribute *)(this->fields)._._.value;
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&this);
  return pOVar1;
}

