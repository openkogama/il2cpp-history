
/* Void BlueprintDataRetrieved() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings
     ::JetpackSettings_BlueprintDataRetrieved(JetpackSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._.bluePrintData;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)StringLiteral_vehicleEnergyUse,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    uVar3 = uStackX_8;
    lVar4 = lRam_?;
    if (iVar2 < 0) {
      pDVar5 = (this->fields)._.bluePrintData;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar6 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar6 + 1,&uStackX_8,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
        }
        else {
          pOVar6 = (Object *)0x0;
        }
      }
      else {
        pOVar6 = (Object *)(CONCAT44(uStackX_c,uVar3) & 0xffffffffffffff00);
      }
      if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar5,(Object *)StringLiteral_vehicleEnergyUse,pOVar6,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields)._.bluePrintData;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)StringLiteral_vehicleEnergyStorage,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        pDVar5 = (this->fields)._.bluePrintData;
        uStackX_8 = 0x14;
        pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_8);
        if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar5,(Object *)StringLiteral_vehicleEnergyStorage,pOVar6,in_R9D,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._.bluePrintData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar1,(Object *)StringLiteral_vehicleEnergyConsumption,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (iVar2 < 0) {
          pDVar5 = (this->fields)._.bluePrintData;
          uStackX_8 = 3;
          pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_8);
          if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar5,(Object *)StringLiteral_vehicleEnergyConsumption,pOVar6,
                     CONCAT31((int3)(in_R9D >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Dictionary`2[System.Object,System.Object] FillDefaultBlueprintData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings::
JetpackSettings_FillDefaultBlueprintData(JetpackSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uVar1 = uStackX_18;
  lVar2 = lRam_?;
  uStackX_18 = uStackX_18 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar3 + 1,&uStackX_18,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        in_R9 = 0xADDR;
        uVar1 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        uVar4 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    else {
      pOVar3 = (Object *)0x0;
    }
  }
  else {
    pOVar3 = (Object *)(CONCAT44(uStackX_1c,uVar1) & 0xffffffffffffff00);
  }
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    pDVar9 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
    return pDVar9;
  }
  uVar10 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_vehicleEnergyUse,pOVar3,(InsertionBehavior__Enum)uVar10,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 0x14;
  pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_18);
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_vehicleEnergyStorage,pOVar3,(InsertionBehavior__Enum)uVar10,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_18 = 3;
  pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_18);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_vehicleEnergyConsumption,pOVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_System_Object_System_Object_ *)this_00;
}


/* VehicleEnergyForVehicleSettingsConfig GetVehicleEnergySettingsConfig() */

VehicleEnergyForVehicleSettingsConfig *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings::
JetpackSettings_GetVehicleEnergySettingsConfig
          (VehicleEnergyForVehicleSettingsConfig *__return_storage_ptr__,JetpackSettings *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
               ->_1).field_0x1c == 0) {
    FUN_?(
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
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((key != (String *)0x0) && ((key->fields)._stringLength != 0)) {
    if (*(int *)&(
                 TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                 ->_1).field_0x1c == 0) {
      FUN_?();
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
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_02,(this->fields)._.vehicleWoID,key,value,(MethodInfo *)0x0);
  }
  return;
}


/* JetpackSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings
     ::JetpackSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  pJVar2 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings->
           static_fields;
  uVar3 = _UNK_?;
  (pJVar2->VehicleEnergyForVehicleSettingsConfig).storageMinValue = _UNK_?;
  uVar4 = _UNK_?;
  (pJVar2->VehicleEnergyForVehicleSettingsConfig).storageMaxValue = uVar3;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar3 = _UNK_?;
  (pJVar2->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue = _UNK_?;
  _UNK_? = uVar4;
  (pJVar2->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue = uVar3;
  return;
}


/* Vector2 get_DefaultCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
        JetpackSettings::JetpackSettings_get_DefaultCanvasSize
                  (JetpackSettings *this,MethodInfo *method)

{
  VVar1.y = _UNK_?;
  VVar1.x = _UNK_?;
  return VVar1;
}

