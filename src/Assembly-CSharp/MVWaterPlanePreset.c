
/* Void Initialize() */

void Assembly-CSharp.dll::MVWaterPlanePreset::MVWaterPlanePreset_Initialize
               (MVWaterPlanePreset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&StringLiteral_Inserted_Preset_Waterplane_witho);
    func_?(&StringLiteral_waterColor);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_waterColor,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Inserted_Preset_Waterplane_witho,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Boolean);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
      func_?(&TypeInfo__System__Single);
      func_?(&::_1925626019DF8597605C21A63C8ED15E1FFE58D1E27D69E1E77ADD2D4C43AAFE_Field);
      func_?(&StringLiteral_lethal);
      func_?(&StringLiteral_waterColor);
      cRam_? = '\x01';
    }
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    this_00 = (this->fields)._.waterManager;
    if (this_00 != (WaterPlaneManager *)0x0) {
      WaterPlaneManager::WaterPlaneManager_AddWaterPlaneLogicCube
                (this_00,(MVWaterPlane *)this,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._._.data;
      (this->fields)._.addedToWPManager = 1;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar1,(Object *)StringLiteral_waterColor,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar2 == 0) {
          pDVar3 = (this->fields)._._._._.data;
          array = (Array *)func_?();
          mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
          RuntimeHelpers_InitializeArray_1
                    (array,__1925626019DF8597605C21A63C8ED15E1FFE58D1E27D69E1E77ADD2D4C43AAFE_Field,
                     (MethodInfo *)0x0);
          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar3,(Object *)StringLiteral_waterColor,(Object *)array,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._._._._.data;
        if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (pDVar1,(Object *)StringLiteral_lethal,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar2 == 0) {
            pDVar3 = (this->fields)._._._._.data;
            value = (Object *)func_?();
            if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDVar3,(Object *)StringLiteral_lethal,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          pIStack4 = (this->klass->vtable).OnRunTimeDataUpdate.methodPtr;
          (*(code *)(this->klass->vtable).OnDataUpdate.method)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWaterPlanePreset(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWaterPlanePreset::MVWaterPlanePreset__ctor
               (MVWaterPlanePreset *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  MVWaterPlane::MVWaterPlane__ctor((MVWaterPlane *)this,data,worldObjects,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
          IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                    ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)0x0,(MethodInfo *)data);
  if (bVar1 != 0) {
    uVar2 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 & 0xffff5fff;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar2;
  }
  return;
}

