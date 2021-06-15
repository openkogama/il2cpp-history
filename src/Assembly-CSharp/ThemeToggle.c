
/* Void Initialize(BoolAttribute, Action`1[Boolean]) */

void Assembly-CSharp.dll::ThemeToggle::ThemeToggle_Initialize
               (ThemeToggle *this,BoolAttribute *attrib,Action_1_Boolean_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).label;
  (this->fields).onChange = onChange;
  if (attrib != (BoolAttribute *)0x0) {
    JVar2 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)attrib,MethodInfo__ThemeAttributes__NamedThemeAttribute<bool>__get_Name__)
    ;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,JVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields).toggle;
      key = (attrib->fields)._._._._Key_k__BackingField;
      value = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
              ThemeAttribute_1_System_Boolean__get_Value
                        ((ThemeAttribute_1_System_Boolean_ *)attrib,
                         MethodInfo__ThemeAttributes__ThemeAttribute<bool>__get_Value__);
      if (this_00 != (SettingsToggle *)0x0) {
        SettingsToggle::SettingsToggle_Initialize(this_00,key,value,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::ThemeToggle::ThemeToggle_OnSettingChanged
               (ThemeToggle *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).onChange;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    if (value != (Object *)0x0) {
      pBVar1 = TypeInfo__System__Boolean;
      if ((value->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (byte *)func_?(value);
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_00,(uint)*pbVar2,MethodInfo__System__Action<bool>__Invoke_bool_);
        return;
      }
      goto code_?;
    }
  }
  func_?(0);
  value = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(value,pBVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

