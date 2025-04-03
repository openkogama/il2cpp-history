
/* Void <OnAddItemToInventory>b__0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkGame+<>c__DisplayClass258_0::
     MVNetworkGame_c_DisplayClass258_0__OnAddItemToInventory_b__0
               (MVNetworkGame_c_DisplayClass258_0 *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).returnValues;
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (this_00,0x28,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if ((wo != (MVWorldObjectClient *)0x0) &&
       (unaff_ESI = TypeInfo__System__Int32, pOVar1 != (Object *)0x0)) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?(pOVar1);
        (wo->fields)._.itemId = *piVar2;
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pOVar1 = extraout_EDX;
code_?:
  func_?(pOVar1,unaff_ESI);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

