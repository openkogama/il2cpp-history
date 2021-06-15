
/* Single Constrain(Single) */

float Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_Constrain
                (FloatAttribute *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).min;
  max = (this->fields).max;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (value,fVar1,max,(MethodInfo *)0x0);
  return fVar1;
}


/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_GetSettingsUIObject
          (FloatAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).sliderPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      ThemeAttributes__FloatAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::FloatAttribute::Setter>_ThemeAttributes__FloatAttribute__Setter_
                     );
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<float>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,this->klass[1]._0.image,
             MethodInfo__System__Action<float>__Action_System__Object__void__);
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


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Single]) */

void Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_Initialize
               (FloatAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Single_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NamedThemeAttribute`1[System::Single]::NamedThemeAttribute_1_System_Single__Initialize
            ((NamedThemeAttribute_1_System_Single_ *)this,settings,key,groups,onChange,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<float>_
            );
  if (settings != (SettingsWrapper *)0x0) {
    ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_3
              (settings,(ThemeAttribute *)this,
               float_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<float>_ThemeAttributes__ThemeAttribute_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__UnityEngine__Mathf;
    value = (Mathf__Class *)(this->fields).min;
    max = (undefined *)(this->fields).max;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
      max = &UNK_?;
      value = pMVar1;
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                      ((float)value,(float)value,(float)max,(MethodInfo *)0x0);
    (this->fields)._._.value = fVar2;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).min;
  max = (this->fields).max;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (value,fVar1,max,(MethodInfo *)0x0);
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value = fVar1;
  value_00 = (Theme *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
  pSVar2 = (this->fields)._._._.themeSettings;
  if (pSVar2 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pSVar2->fields).settingsData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_00,key,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)(this->fields)._._.themeCallback
      ;
      if (this_01 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
        SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                  (this_01,(this->fields)._._.value,MethodInfo__System__Action<float>__Invoke_float_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* FloatAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute__ctor
               (FloatAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  System.Core.dll::System::Linq::OrderedEnumerable`1[System::Collections::Generic::
  KeyValuePair`2[System::Int32,System::Int32]]::
  OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_IEnumerable_GetEnumerator
            ((OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
              *)this,MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__NamedThemeAttribute__)
  ;
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_get_Data
                   (FloatAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (FloatAttribute *)(this->fields)._._.value;
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&this);
  return pOVar1;
}


/* Single get_Max() */

float Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_get_Max
                (FloatAttribute *this,MethodInfo *method)

{
  return (this->fields).max;
}


/* Single get_Min() */

float Assembly-CSharp.dll::ThemeAttributes::FloatAttribute::FloatAttribute_get_Min
                (FloatAttribute *this,MethodInfo *method)

{
  return (this->fields).min;
}

