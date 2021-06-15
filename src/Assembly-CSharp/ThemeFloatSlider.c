
/* Void Initialize(FloatAttribute, Action`1[Single]) */

void Assembly-CSharp.dll::ThemeFloatSlider::ThemeFloatSlider_Initialize
               (ThemeFloatSlider *this,FloatAttribute *attrib,Action_1_Single_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).label;
  (this->fields).onChange = onChange;
  if (attrib != (FloatAttribute *)0x0) {
    JVar2 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)attrib,MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__get_Name__
                      );
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,JVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      key = (attrib->fields)._._._._Key_k__BackingField;
      this_00 = (this->fields).slider;
      value = ThemeAttributes::ThemeAttribute`1[System::Single]::
              ThemeAttribute_1_System_Single__get_Value
                        ((ThemeAttribute_1_System_Single_ *)attrib,
                         MethodInfo__ThemeAttributes__ThemeAttribute<float>__get_Value__);
      if (this_00 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (this_00,key,value,(attrib->fields).min,(attrib->fields).max,(MethodInfo *)0x0);
        (this->fields).initialized = 1;
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeFloatSlider::ThemeFloatSlider_OnSettingChanged
               (ThemeFloatSlider *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized != 0) {
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)(this->fields).onChange;
    if ((this_00 == (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) ||
       (value == (Object *)0x0)) {
      func_?(0);
      value = extraout_ECX;
      pSVar1 = extraout_EDX;
    }
    else {
      pSVar1 = TypeInfo__System__Single;
      if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar2 = (float *)func_?(value);
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
        SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                  (this_00,*pfVar2,MethodInfo__System__Action<float>__Invoke_float_);
        return;
      }
    }
    func_?(value,pSVar1);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

