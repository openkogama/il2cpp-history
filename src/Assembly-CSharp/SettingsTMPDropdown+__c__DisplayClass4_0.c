
/* Void <ValueChanged>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsTMPDropdown+<>c__DisplayClass4_0::
     SettingsTMPDropdown_c_DisplayClass4_0__ValueChanged_b__0
               (SettingsTMPDropdown_c_DisplayClass4_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).__4__this;
  if (pSVar1 != (SettingsTMPDropdown *)0x0) {
    pLVar2 = (pSVar1->fields).possibleWOData;
    pSVar3 = (pSVar1->fields).key;
    if (pLVar2 != (List_1_System_Int32_ *)0x0) {
      uVar4 = (this->fields).value;
      if ((uint)(pLVar2->fields)._size <= uVar4) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar6 = (pLVar2->fields)._items;
      if (pIVar6 != (Int32__Array *)0x0) {
        if ((uint)pIVar6->max_length <= uVar4) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        aiStackX_8[0] = pIVar6->vector[(int)uVar4];
        uVar7 = FUN_?(uRam_?,aiStackX_8);
        if (handler != (IHandleSettingChanged *)0x0) {
          FUN_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,pSVar3,
                        uVar7);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

