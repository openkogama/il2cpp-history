
/* Void <>m__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsDropdown+<ValueChanged>c__AnonStorey0::
     SettingsDropdown_ValueChanged_c_AnonStorey0___m__0
               (SettingsDropdown_ValueChanged_c_AnonStorey0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._this;
  if (pSVar1 != (SettingsDropdown *)0x0) {
    pSVar2 = (pSVar1->fields).key;
    this_00 = (pSVar1->fields).possibleWOData;
    if (this_00 != (List_1_System_Int32_ *)0x0) {
      this = (SettingsDropdown_ValueChanged_c_AnonStorey0 *)
             mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
             List_1_System_Int32__get_Item
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

