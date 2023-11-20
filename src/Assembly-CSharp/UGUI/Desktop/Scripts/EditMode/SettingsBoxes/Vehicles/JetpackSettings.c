
/* Void BlueprintDataRetrieved() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings
     ::JetpackSettings_BlueprintDataRetrieved(JetpackSettings *this,MethodInfo *method)

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
  pJVar1 = this;
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
      pDVar4 = (pJVar1->fields)._.bluePrintData;
      this = (JetpackSettings *)((uint)this & 0xffffff);
      pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
      if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar4,(Object *)StringLiteral_vehicleEnergyUse,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pJVar1->fields)._.bluePrintData;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar2,(Object *)StringLiteral_vehicleEnergyStorage,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 == 0) {
        pDVar4 = (pJVar1->fields)._.bluePrintData;
        method = (MethodInfo *)&this;
        this = (JetpackSettings *)0x14;
        pOVar5 = (Object *)func_?();
        if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar4,(Object *)StringLiteral_vehicleEnergyStorage,pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pJVar1->fields)._.bluePrintData;
      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar2,(Object *)StringLiteral_vehicleEnergyConsumption,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar3 == 0) {
          pDVar4 = (pJVar1->fields)._.bluePrintData;
          method = (MethodInfo *)&this;
          this = (JetpackSettings *)0x3;
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
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings::
JetpackSettings_FillDefaultBlueprintData(JetpackSettings *this,MethodInfo *method)

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
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings::
JetpackSettings_GetVehicleEnergySettingsConfig
          (VehicleEnergyForVehicleSettingsConfig *__return_storage_ptr__,JetpackSettings *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                   );
  }
  pJVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings->
           static_fields;
  iVar2 = (pJVar1->VehicleEnergyForVehicleSettingsConfig).storageMaxValue;
  iVar3 = (pJVar1->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue;
  iVar4 = (pJVar1->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue;
  __return_storage_ptr__->storageMinValue =
       (pJVar1->VehicleEnergyForVehicleSettingsConfig).storageMinValue;
  __return_storage_ptr__->storageMaxValue = iVar2;
  __return_storage_ptr__->consumptionMinValue = iVar3;
  __return_storage_ptr__->consumptionMaxValue = iVar4;
  return __return_storage_ptr__;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings
     ::JetpackSettings_OnSettingChanged
               (JetpackSettings *this,String *key,Object *value,MethodInfo *method)

{
  a = key;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                   );
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((
      TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                   );
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_vehicleEnergyUse;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BlueprintData_);
    cRam_? = '\x01';
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::String::String_op_Equality(key,pSVar2,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_vehicleEnergyStorage;
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this = (JetpackSettings *)
           mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_op_Equality(key,(String *)this,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_vehicleEnergyConsumption;
    if (bVar1 != 0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_op_Equality(key,pSVar2,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
    this_00 = (this->fields)._.settingsBase;
    if (this_00 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value,(MethodInfo *)0x0);
  }
  else {
code_?:
    if ((this->fields)._.vehicleEnergyForVehicleSettings == (VehicleEnergyForVehicleSettings *)0x0)
    goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    key = StringLiteral_vehicleEnergyUse;
    if (cRam_? == '\0') {
      key = (String *)&StringLiteral_BlueprintData_;
      func_?();
      cRam_? = '\x01';
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BlueprintData_,key,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_vehicleEnergyStorage;
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
      pSVar2 = StringLiteral_vehicleEnergyConsumption;
      if (bVar1 == 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
        bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
        if (bVar1 == 0) goto code_?;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
      }
      value = (Object *)func_?();
    }
  }
code_?:
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_01,(this->fields)._.vehicleWoID,a,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JetpackSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings
     ::JetpackSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                   );
    cRam_? = '\x01';
  }
  iVar1 = _UNK_?;
  iVar2 = _UNK_?;
  iVar3 = _UNK_?;
  pJVar4 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings->
           static_fields;
  (pJVar4->VehicleEnergyForVehicleSettingsConfig).storageMinValue = _UNK_?;
  (pJVar4->VehicleEnergyForVehicleSettingsConfig).storageMaxValue = iVar3;
  (pJVar4->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue = iVar2;
  (pJVar4->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue = iVar1;
  return;
}


/* Vector2 get_DefaultCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
        JetpackSettings::JetpackSettings_get_DefaultCanvasSize
                  (JetpackSettings *this,MethodInfo *method)

{
  VVar1.y = 600.0;
  VVar1.x = 689.5;
  return VVar1;
}

