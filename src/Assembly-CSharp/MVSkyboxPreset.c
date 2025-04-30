
/* MVSkyboxPreset(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSkyboxPreset::MVSkyboxPreset__ctor
               (MVSkyboxPreset *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvSkyboxPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar3;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    *(int *)&(this->fields)._.defaultInteractionFlags = (int)(this->fields)._._._.interactionFlags;
    *(undefined4 *)((int)&(this->fields)._.defaultInteractionFlags + 4) = uVar3;
    if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
            IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                      ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                        *)0x0,(MethodInfo *)worldObjects);
    if (bVar4 != 0) {
      uVar3 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
      piVar2 = &(this->fields)._._._.interactionFlags;
      *(uint *)piVar2 = (uint)*piVar2 & 0xffff7fff;
      *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar3;
    }
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

