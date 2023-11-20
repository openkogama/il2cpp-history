
/* Void BlueprintDataRetrieved() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HamsterWheelSettings::HamsterWheelSettings_BlueprintDataRetrieved
               (HamsterWheelSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  pHVar1 = this;
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._.bluePrintData;
  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar2,(Object *)StringLiteral_vehicleEnergyUse,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      pDVar4 = (pHVar1->fields)._.bluePrintData;
      this = (HamsterWheelSettings *)((uint)this & 0xffffff);
      pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
      if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar4,(Object *)StringLiteral_vehicleEnergyUse,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pHVar1->fields)._.bluePrintData;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar2,(Object *)StringLiteral_vehicleEnergyStorage,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 == 0) {
        pDVar4 = (pHVar1->fields)._.bluePrintData;
        method = (MethodInfo *)&this;
        this = (HamsterWheelSettings *)0x23;
        pOVar5 = (Object *)func_?();
        if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar4,(Object *)StringLiteral_vehicleEnergyStorage,pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pHVar1->fields)._.bluePrintData;
      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar2,(Object *)StringLiteral_vehicleEnergyConsumption,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar3 == 0) {
          pDVar4 = (pHVar1->fields)._.bluePrintData;
          method = (MethodInfo *)&this;
          this = (HamsterWheelSettings *)0x4;
          pOVar5 = (Object *)func_?();
          if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar4,(Object *)StringLiteral_vehicleEnergyConsumption,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Dictionary`2[System.Object,System.Object] FillDefaultBlueprintData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings
::HamsterWheelSettings_FillDefaultBlueprintData(HamsterWheelSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_1);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_vehicleEnergyUse,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_vehicleEnergyStorage,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_vehicleEnergyConsumption,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return (Dictionary_2_System_Object_System_Object_ *)this_00;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar4;
}


/* VehicleEnergyForVehicleSettingsConfig GetVehicleEnergySettingsConfig() */

VehicleEnergyForVehicleSettingsConfig *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings
::HamsterWheelSettings_GetVehicleEnergySettingsConfig
          (VehicleEnergyForVehicleSettingsConfig *__return_storage_ptr__,HamsterWheelSettings *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings->_1
      ).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                   );
  }
  pHVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
           ->static_fields;
  iVar2 = (pHVar1->VehicleEnergyForVehicleSettingsConfig).storageMaxValue;
  iVar3 = (pHVar1->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue;
  iVar4 = (pHVar1->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue;
  __return_storage_ptr__->storageMinValue =
       (pHVar1->VehicleEnergyForVehicleSettingsConfig).storageMinValue;
  __return_storage_ptr__->storageMaxValue = iVar2;
  __return_storage_ptr__->consumptionMinValue = iVar3;
  __return_storage_ptr__->consumptionMaxValue = iVar4;
  return __return_storage_ptr__;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HamsterWheelSettings::HamsterWheelSettings_OnSettingChanged
               (HamsterWheelSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                   );
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((
        TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
        ->_1).cctor_finished_or_no_cctor == 0) {
      func_?(
                     TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                     );
    }
    bVar1 = VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_IsKey
                      (key,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = (this->fields)._.settingsBase;
      if (this_00 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value,(MethodInfo *)0x0);
    }
    else {
      this_01 = (this->fields)._.vehicleEnergyForVehicleSettings;
      if (this_01 == (VehicleEnergyForVehicleSettings *)0x0) goto code_?;
      value = VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_ValueToSend
                        (this_01,key,value,(MethodInfo *)0x0);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_02 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_02,(this->fields)._.vehicleWoID,key,value,(MethodInfo *)0x0);
  }
  return;
}


/* HamsterWheelSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     HamsterWheelSettings::HamsterWheelSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                   );
    cRam_? = '\x01';
  }
  iVar1 = _UNK_?;
  iVar2 = _UNK_?;
  iVar3 = _UNK_?;
  pHVar4 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
           ->static_fields;
  (pHVar4->VehicleEnergyForVehicleSettingsConfig).storageMinValue = _UNK_?;
  (pHVar4->VehicleEnergyForVehicleSettingsConfig).storageMaxValue = iVar3;
  (pHVar4->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue = iVar2;
  (pHVar4->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue = iVar1;
  return;
}

