
/* Void <ValueChanged>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsDropdown+<>c__DisplayClass4_0::
     SettingsDropdown_c_DisplayClass4_0__ValueChanged_b__0
               (SettingsDropdown_c_DisplayClass4_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).__4__this;
  if (pSVar1 != (SettingsDropdown *)0x0) {
    pSVar2 = (pSVar1->fields).key;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pSVar1->fields).possibleWOData;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      this = (SettingsDropdown_c_DisplayClass4_0 *)
             mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_00,(this->fields).value,
                        MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      uVar3 = func_?(TypeInfo__System__Int32,&this);
      if (handler != (IHandleSettingChanged *)0x0) {
        func_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,pSVar2,
                        uVar3);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

