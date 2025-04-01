
/* Void AddTargetSettings(Settings) */

void Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab_AddTargetSettings
               (EditorToolbarTab *this,Settings *targetSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Settings>__Add_RTG__Settings_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Settings>__Contains_RTG__Settings_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetSettings;
  if (pLVar1 != (List_1_RTG_Settings_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)targetSettings,
                       MethodInfo__System__Collections__Generic__List<RTG::Settings>__Contains_RTG__Settings_
                      );
    if (bVar2 == 0) {
      pLVar1 = (this->fields)._targetSettings;
      if (pLVar1 == (List_1_RTG_Settings_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)targetSettings,
                 MethodInfo__System__Collections__Generic__List<RTG::Settings>__Add_RTG__Settings_);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* EditorToolbarTab(String, String) */

void Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab__ctor
               (EditorToolbarTab *this,String *text,String *tooltip,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::Settings>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::Settings>);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pEVar1 = &this->fields;
  pEVar1->_tooltip = ::StringLiteral__;
  func_?(pEVar1,::StringLiteral__);
  ppSVar2 = &(this->fields)._text;
  *ppSVar2 = ::StringLiteral__;
  func_?(ppSVar2,::StringLiteral__);
  this_00 = (List_1_RTG_Settings_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::Settings>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::Settings>__List__);
  method_00 = (MethodInfo *)&(this->fields)._targetSettings;
  *(List_1_RTG_Settings_ **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (text != (String *)0x0) {
    ppSVar2 = &(this->fields)._text;
    *ppSVar2 = text;
    func_?(ppSVar2,text);
  }
  if (tooltip != (String *)0x0) {
    pEVar1->_tooltip = tooltip;
    func_?(pEVar1,tooltip);
  }
  return;
}


/* Int32 get_NumTargetSettings() */

int32_t Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab_get_NumTargetSettings
                  (EditorToolbarTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<RTG::Settings>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._targetSettings;
  if (pLVar2 != (List_1_RTG_Settings_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_TargetToolbar(EditorToolbar) */

void Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab_set_TargetToolbar
               (EditorToolbarTab *this,EditorToolbar *value,MethodInfo *method)

{
  if (value != (EditorToolbar *)0x0) {
    ppEVar1 = &(this->fields)._targetToolbar;
    *ppEVar1 = value;
    func_?(ppEVar1,value);
  }
  return;
}


/* Void set_Tooltip(String) */

void Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab_set_Tooltip
               (EditorToolbarTab *this,String *value,MethodInfo *method)

{
  if (value != (String *)0x0) {
    (this->fields)._tooltip = value;
    func_?(&this->fields,value);
  }
  return;
}

