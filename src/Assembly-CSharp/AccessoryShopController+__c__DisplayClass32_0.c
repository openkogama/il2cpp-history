
/* Void <SetAccessoriesToSelectable>b__0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c__DisplayClass32_0::
     AccessoryShopController_c_DisplayClass32_0__SetAccessoriesToSelectable_b__0
               (AccessoryShopController_c_DisplayClass32_0 *this,IGetCurrentBody *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVBody>);
    func_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    func_?(&
                    MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__1_MVBody_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)(this->fields).__9__1;
  ppAVar1 = &(this->fields).__9__1;
  if (this_00 ==
      (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<MVBody>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__1_MVBody_
               ,(MethodInfo *)0x0);
    *ppAVar1 = (Action_1_MVBody_ *)this_00;
    func_?(ppAVar1,this_00);
  }
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,x,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

