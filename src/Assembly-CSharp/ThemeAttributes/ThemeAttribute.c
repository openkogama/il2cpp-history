
/* Void Initialize(SettingsWrapper, String, Int32) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute::ThemeAttribute_Initialize
               (ThemeAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               MethodInfo *method)

{
  (this->fields)._Key_k__BackingField = key;
  (this->fields)._Groups_k__BackingField = groups;
  (this->fields).themeSettings = settings;
  if (settings != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (settings->fields).attributes;
    if (this_00 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this,
                 MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                );
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateSettings(String, Object) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute::ThemeAttribute_UpdateSettings
               (ThemeAttribute *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields).themeSettings;
  if (pSVar1 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pSVar1->fields).settingsData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_00,key,(Theme *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

