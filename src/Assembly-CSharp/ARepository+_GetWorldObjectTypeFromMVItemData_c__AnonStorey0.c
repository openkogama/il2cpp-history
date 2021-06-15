
/* Void <>m__0(Dictionary`2[System.Object,System.Object], KogamaDataType) */

void Assembly-CSharp.dll::ARepository+<GetWorldObjectTypeFromMVItemData>c__AnonStorey0::
     ARepository_GetWorldObjectTypeFromMVItemData_c_AnonStorey0___m__0
               (ARepository_GetWorldObjectTypeFromMVItemData_c_AnonStorey0 *this,
               Dictionary_2_System_Object_System_Object_ *returnData,KogamaDataType__Enum dataType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((undefined1)dataType != KogamaDataType__Enum_WorldObjects) {
    return;
  }
  dataType = CONCAT13(3,(undefined3)dataType);
  key = (String *)
        func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                        (byte *)((int)&dataType + 3));
  if (returnData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)returnData,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    dataType = CONCAT13(3,(undefined3)dataType);
    pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)returnData,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
    if (pPVar3 != (Pool *)0x0) {
      if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar5 = (undefined4 *)func_?(pPVar3);
        this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
                  (this->fields).onWorldObjectExtracted;
        if (this_00 == (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
          return;
        }
        uVar6 = *puVar5;
        dataType = CONCAT13(7,(undefined3)dataType);
        pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                         (byte *)((int)&dataType + 3));
        pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)returnData,pTVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        method_00 = (MethodInfo *)0x0;
        arg1 = (Object *)
               func_?(pPVar3,
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::
        Object]::UnityAction_2_System_Boolean_System_Object__Invoke
                  (this_00,(bool)uVar6,arg1,method_00);
        return;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

