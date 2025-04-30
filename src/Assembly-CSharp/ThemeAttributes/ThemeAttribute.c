
/* Void Initialize(SettingsWrapper, String, Int32) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute::ThemeAttribute_Initialize
               (ThemeAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               MethodInfo *method)

{
  (this->fields)._Key_k__BackingField = key;
  func_?(&this->fields,key);
  ppSVar1 = &(this->fields).themeSettings;
  (this->fields)._Groups_k__BackingField = groups;
  *ppSVar1 = settings;
  func_?(ppSVar1,settings);
  pSVar2 = *ppSVar1;
  if (pSVar2 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pSVar2->fields).attributes;
    if (this_00 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)this,
                 MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSettings(String, Object) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute::ThemeAttribute_UpdateSettings
               (ThemeAttribute *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields).themeSettings;
  if (pSVar1 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pSVar1->fields).settingsData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

