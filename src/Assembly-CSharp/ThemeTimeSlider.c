
/* Void Initialize(FloatAttribute, Action`1[Single]) */

void Assembly-CSharp.dll::ThemeTimeSlider::ThemeTimeSlider_Initialize
               (ThemeTimeSlider *this,FloatAttribute *attrib,Action_1_Single_ *onChange,
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

void Assembly-CSharp.dll::ThemeTimeSlider::ThemeTimeSlider_OnSettingChanged
               (ThemeTimeSlider *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
code_?:
    pTVar1 = (this->fields).timeText;
    if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__TimeSpan);
    }
    if (value != (Object *)0x0) {
      pSVar2 = TypeInfo__System__Single;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(value);
      mscorlib.dll::System::TimeSpan::TimeSpan_FromSeconds((double)(int)*pfVar3,(MethodInfo *)0x0);
      uVar4 = func_?();
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,uVar4,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        return;
      }
    }
  }
  else {
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)(this->fields).onChange;
    if ((this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) &&
       (value != (Object *)0x0)) {
      pSVar2 = TypeInfo__System__Single;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(value);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
      SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                (this_00,*pfVar3,MethodInfo__System__Action<float>__Invoke_float_);
      goto code_?;
    }
  }
  func_?(0);
  pSVar2 = extraout_ECX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)(pSVar2);
  return;
}

