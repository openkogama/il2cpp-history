
/* MVSkyboxPreset(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSkyboxPreset::MVSkyboxPreset__ctor
               (MVSkyboxPreset *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvSkyboxPrefab,worldObjects,
               (MethodInfo *)0x0);
    uVar2 = (uint)(this->fields)._._._.interactionFlags | 0x18000;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    *(uint *)&(this->fields)._._._.interactionFlags = uVar2;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    *(uint *)&(this->fields)._.defaultInteractionFlags = uVar2;
    *(undefined4 *)((int)&(this->fields)._.defaultInteractionFlags + 4) = uVar3;
    bVar4 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System::
            Single,System::Object]::
            SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__System_Collections_ICollection_get_IsSynchronized
                      ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0,
                       unaff_ESI);
    if (bVar4 != 0) {
      uVar3 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
      piVar5 = &(this->fields)._._._.interactionFlags;
      *(uint *)piVar5 = (uint)*piVar5 & 0xffff7fff;
      *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar3;
    }
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

