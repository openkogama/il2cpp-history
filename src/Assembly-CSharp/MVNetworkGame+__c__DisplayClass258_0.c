
/* Void <OnAddItemToInventory>b__0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkGame+<>c__DisplayClass258_0::
     MVNetworkGame_c_DisplayClass258_0__OnAddItemToInventory_b__0
               (MVNetworkGame_c_DisplayClass258_0 *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).returnValues;
  if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    plVar2 = (longlong *)FUN_?(pDVar1,0x29);
    if ((wo != (MVWorldObjectClient *)0x0) && (plVar2 != (longlong *)0x0)) {
      if (*(longlong *)(*plVar2 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        (wo->fields)._.itemId = (int32_t)plVar2[2];
        return;
      }
      FUN_?(plVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

