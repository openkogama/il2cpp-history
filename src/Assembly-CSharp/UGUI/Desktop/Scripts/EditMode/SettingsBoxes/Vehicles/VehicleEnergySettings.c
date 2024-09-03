
/* Void InitSpawnerBpData() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_InitSpawnerBpData
               (VehicleEnergySettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_RespawnInterval);
    func_?(&StringLiteral_RespawnCount);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  pVVar1 = this;
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  (this->fields).spawnerBpData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  func_?(&(this->fields).spawnerBpData,0);
  if ((pVVar1->fields).vehicleEnergyWoID == -1) {
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (VehicleEnergySettings *)0xa;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                 (Object *)StringLiteral_RespawnCount,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar4 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                 (Object *)StringLiteral_RespawnInterval,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      (pVVar1->fields).spawnerBpData = (Dictionary_2_System_Object_System_Object_ *)pDVar3;
      func_?(&(pVVar1->fields).spawnerBpData,pDVar3);
      return;
    }
  }
  else {
    pMVar5 = (pVVar1->fields).vehicleEnergySpawner;
    if ((pMVar5 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) &&
       (this_00 = (pMVar5->fields)._._._._._.data,
       this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_00,(Object *)StringLiteral_BlueprintData,(Object **)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (((bVar6 != 0) &&
          (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0 &&
            ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment <= (pDVar2->klass->_1).naturalAligment)) &&
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
         && (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        (pVVar1->fields).spawnerBpData = pDVar2;
        func_?(&(pVVar1->fields).spawnerBpData);
      }
      if ((pVVar1->fields).spawnerBpData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        (pVVar1->fields).spawnerBpData = (Dictionary_2_System_Object_System_Object_ *)pDVar3;
        func_?(&(pVVar1->fields).spawnerBpData);
      }
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pVVar1->fields).spawnerBpData;
      if (pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar7,(Object *)StringLiteral_RespawnCount,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar6 == 0) {
          pDVar2 = (pVVar1->fields).spawnerBpData;
          this = (VehicleEnergySettings *)0xa;
          pOVar4 = (Object *)func_?();
          if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar2,(Object *)StringLiteral_RespawnCount,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (pVVar1->fields).spawnerBpData;
        if (pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (pDVar7,(Object *)StringLiteral_RespawnInterval,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar6 != 0) {
            return;
          }
          pDVar2 = (pVVar1->fields).spawnerBpData;
          this = (VehicleEnergySettings *)0x3a98;
          pOVar4 = (Object *)func_?();
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar2,(Object *)StringLiteral_RespawnInterval,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitVehicleEnergyBpData() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_InitVehicleEnergyBpData
               (VehicleEnergySettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_VehicleEnergyName);
    func_?(&StringLiteral_Vehicle_Energy);
    func_?(&StringLiteral_VehicleEnergyAmount);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  pVVar1 = this;
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  (this->fields).vehicleEnergyBpData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  func_?(&(this->fields).vehicleEnergyBpData,0);
  if ((pVVar1->fields).vehicleEnergyWoID == -1) {
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                 (Object *)StringLiteral_VehicleEnergyName,(Object *)StringLiteral_Vehicle_Energy,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      this = (VehicleEnergySettings *)0x1e;
      pOVar4 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                 (Object *)StringLiteral_VehicleEnergyAmount,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      (pVVar1->fields).vehicleEnergyBpData = (Dictionary_2_System_Object_System_Object_ *)pDVar3;
      func_?(&(pVVar1->fields).vehicleEnergyBpData,pDVar3);
      return;
    }
  }
  else {
    pMVar5 = (pVVar1->fields).vehicleEnergySpawnObject;
    if ((pMVar5 != (MVVehicleEnergy *)0x0) &&
       (this_00 = (pMVar5->fields)._._._._.data,
       this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_00,(Object *)StringLiteral_BlueprintData,(Object **)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (((bVar6 != 0) &&
          (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0 &&
            ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment <= (pDVar2->klass->_1).naturalAligment)) &&
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
         && (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        (pVVar1->fields).vehicleEnergyBpData = pDVar2;
        func_?(&(pVVar1->fields).vehicleEnergyBpData);
      }
      if ((pVVar1->fields).vehicleEnergyBpData == (Dictionary_2_System_Object_System_Object_ *)0x0)
      {
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        (pVVar1->fields).vehicleEnergyBpData = (Dictionary_2_System_Object_System_Object_ *)pDVar3;
        func_?(&(pVVar1->fields).vehicleEnergyBpData);
      }
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pVVar1->fields).vehicleEnergyBpData;
      if (pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar7,(Object *)StringLiteral_VehicleEnergyName,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar6 == 0) {
          pDVar2 = (pVVar1->fields).vehicleEnergyBpData;
          if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          method = 
          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          this = (VehicleEnergySettings *)StringLiteral_Vehicle_Energy;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar2,(Object *)StringLiteral_VehicleEnergyName,
                     (Object *)StringLiteral_Vehicle_Energy,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (pVVar1->fields).vehicleEnergyBpData;
        if (pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (pDVar7,(Object *)StringLiteral_VehicleEnergyAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar6 != 0) {
            return;
          }
          pDVar2 = (pVVar1->fields).vehicleEnergyBpData;
          method = (MethodInfo *)&this;
          this = (VehicleEnergySettings *)0x1e;
          pOVar4 = (Object *)func_?();
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar2,(Object *)StringLiteral_VehicleEnergyAmount,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_Initialize
               (VehicleEnergySettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_RespawnInterval);
    func_?(&StringLiteral_RespawnCount);
    func_?(&StringLiteral_VehicleEnergyName);
    func_?(&StringLiteral_VehicleEnergyAmount);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    uVar2 = func_?();
code_?:
    func_?(uVar2);
    TVar3.m_Index = extraout_ECX;
    pSVar4 = extraout_EDX;
  }
  else {
    pMVar5 = (MVWorldObjectSpawnerVehicleEnergy *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,woID,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
    if (pMVar5 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
      (this->fields).vehicleEnergySpawner = (MVWorldObjectSpawnerVehicleEnergy *)0x0;
    }
    else {
      if (((pMVar5->klass->_1).naturalAligment <
           (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
           naturalAligment) ||
         ((MVWorldObjectSpawnerVehicleEnergy__Class *)
          (pMVar5->klass->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
           naturalAligment - 1] !=
          TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy))
      goto code_?;
      (this->fields).vehicleEnergySpawner = pMVar5;
      unaff_EDI = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
      if (((pMVar5->klass->_1).naturalAligment <
           (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
           naturalAligment) ||
         ((MVWorldObjectSpawnerVehicleEnergy__Class *)
          (pMVar5->klass->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
           naturalAligment - 1] !=
          TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy))
      goto code_?;
    }
    func_?(&(this->fields).vehicleEnergySpawner,pMVar5);
    pMVar5 = (this->fields).vehicleEnergySpawner;
    if (pMVar5 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) goto code_?;
    (this->fields).vehicleEnergyWoID = (pMVar5->fields)._.spawnWorldObjectID;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar5 = (MVWorldObjectSpawnerVehicleEnergy *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,(this->fields).vehicleEnergyWoID,(MethodInfo *)0x0);
    unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy;
    if (pMVar5 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
      (this->fields).vehicleEnergySpawnObject = (MVVehicleEnergy *)0x0;
    }
    else {
      if (((pMVar5->klass->_1).naturalAligment <
           (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment) ||
         ((MVVehicleEnergy__Class *)
          (pMVar5->klass->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment - 1] !=
          TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) goto code_?;
      (this->fields).vehicleEnergySpawnObject = (MVVehicleEnergy *)pMVar5;
      unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                  TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy;
      if (((pMVar5->klass->_1).naturalAligment <
           (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment) ||
         ((MVVehicleEnergy__Class *)
          (pMVar5->klass->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment - 1] !=
          TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) goto code_?;
    }
    func_?(&(this->fields).vehicleEnergySpawnObject,pMVar5);
    this_00 = (this->fields).settingsBase;
    if (this_00 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_Initialize
              (this_00,(this->fields).vehicleEnergyWoID,root,
               MVWorldObjectDocumentationType__Enum_VehicleEnergy,(MethodInfo *)0x0);
    VehicleEnergySettings_InitVehicleEnergyBpData(this,(MethodInfo *)0x0);
    VehicleEnergySettings_InitSpawnerBpData(this,(MethodInfo *)0x0);
    pSVar6 = StringLiteral_VehicleEnergyName;
    unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)(this->fields).nameInputField;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_BlueprintData_);
      cRam_? = '\x01';
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
    pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields).vehicleEnergyBpData;
    if (pDVar7 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar7,(Object *)StringLiteral_VehicleEnergyName,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0) goto code_?;
    value.m_Index = 0;
    if (TVar3.m_Index == 0) {
code_?:
      SettingsInputField::SettingsInputField_Initialize
                ((SettingsInputField *)unaff_EDI,pSVar6,(String *)value.m_Index,(MethodInfo *)0x0);
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).spawnerBpData;
      if (pDVar7 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar7,(Object *)StringLiteral_RespawnCount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar2 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
      if (TVar3.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      puVar8 = (undefined4 *)func_?(TVar3.m_Index);
      pSVar6 = StringLiteral_RespawnCount;
      unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)*puVar8;
      if (unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy__Class *)0xffffffff) {
        unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)0xa;
      }
      pSVar9 = (this->fields).spawnOptionsSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
      if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
      SettingsSlider::SettingsSlider_Initialize_1
                (pSVar9,pSVar6,(int32_t)unaff_EDI,1,10,(MethodInfo *)0x0);
      pSVar6 = StringLiteral_RespawnCount;
      pSVar10 = (this->fields).spawnOptionsInputSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
      if (pSVar10 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                (pSVar10,pSVar6,(int32_t)unaff_EDI,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&StringLiteral_u221E);
        cRam_? = '\x01';
      }
      if (unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy__Class *)0xa) {
        pSVar10 = (this->fields).spawnOptionsInputSlider;
        if (pSVar10 == (SettingsInputFieldSlider *)0x0) goto code_?;
        SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
                  (pSVar10,StringLiteral_u221E,(MethodInfo *)0x0);
      }
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).spawnerBpData;
      if (pDVar7 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar7,(Object *)StringLiteral_RespawnInterval,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      fVar11 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                         ((Object *)TVar3.m_Index,(IFormatProvider *)provider,(MethodInfo *)0x0);
      pSVar6 = StringLiteral_RespawnInterval;
      fVar11 = fVar11 / _UNK_?;
      pSVar9 = (this->fields).spawnTimeSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
      unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0;
      if (pSVar9 == (SettingsSlider *)0x0) goto code_?;
      SettingsSlider::SettingsSlider_Initialize(pSVar9,pSVar6,fVar11,5.0,240.0,(MethodInfo *)0x0);
      pSVar6 = StringLiteral_RespawnInterval;
      pSVar10 = (this->fields).spawnTimeInputSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
      unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0;
      if (pSVar10 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                (pSVar10,pSVar6,fVar11,(MethodInfo *)0x0);
      pSVar6 = StringLiteral_VehicleEnergyAmount;
      unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)(this->fields).energyAmountSlider;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).vehicleEnergyBpData;
      if (pDVar7 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar7,(Object *)StringLiteral_VehicleEnergyAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar2 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
      if ((unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0) || (TVar3.m_Index == 0))
      goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar12 = (int32_t *)func_?(TVar3.m_Index);
        SettingsSlider::SettingsSlider_Initialize_1
                  ((SettingsSlider *)unaff_EDI,pSVar6,*piVar12,5,100,(MethodInfo *)0x0);
        pSVar6 = StringLiteral_VehicleEnergyAmount;
        unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                    (this->fields).energyAmountInputSlider;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_BlueprintData_);
          cRam_? = '\x01';
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).vehicleEnergyBpData;
        if (pDVar7 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar7,(Object *)StringLiteral_VehicleEnergyAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          uVar2 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
          if ((unaff_EDI != (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0) && (TVar3.m_Index != 0)
             ) {
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar12 = (int32_t *)func_?(TVar3.m_Index);
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                        ((SettingsInputFieldSlider *)unaff_EDI,pSVar6,*piVar12,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
      value = TVar3;
    }
    pSVar4 = TypeInfo__System__String;
    if ((String *)value.m_Index != (String *)0x0) goto code_?;
  }
  func_?(TVar3.m_Index,pSVar4);
  pMVar5 = extraout_EDX_00;
code_?:
  func_?(pMVar5,unaff_EDI);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_OnSettingChanged
               (VehicleEnergySettings *this,String *key,Object *value,MethodInfo *method)

{
  a = key;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_RespawnInterval);
    func_?(&StringLiteral_RespawnCount);
    func_?(&StringLiteral_VehicleEnergyName);
    func_?(&StringLiteral_VehicleEnergyAmount);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pSVar2 = (String *)(this->fields).vehicleEnergyWoID;
  pSVar3 = StringLiteral_VehicleEnergyName;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_BlueprintData_);
    cRam_? = '\x01';
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_BlueprintData_,pSVar3,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::String::String_op_Equality(key,pSVar3,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pSVar2 = StringLiteral_RespawnInterval;
    if (cRam_? == '\0') {
      pSVar2 = (String *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_op_Equality(key,pSVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pSVar2 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                         (StringLiteral_RespawnCount,(MethodInfo *)0x0);
      key = (String *)&UNK_?;
      bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pSVar2 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                           (StringLiteral_VehicleEnergyAmount,(MethodInfo *)0x0);
        bVar1 = mscorlib.dll::System::String::String_op_Equality(a,pSVar2,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
          goto code_?;
        }
        this_00 = (this->fields).settingsBase;
        if (this_00 == (SettingsBase *)0x0) goto code_?;
        SettingsBase::SettingsBase_OnSettingChanged(this_00,a,value,(MethodInfo *)0x0);
        pSVar2 = key;
      }
      else {
        pMVar4 = (this->fields).vehicleEnergySpawner;
        if (pMVar4 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) goto code_?;
        pSVar2 = (String *)(pMVar4->fields)._._._._._.id;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        newSpawnOption = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
        value = (Object *)func_?();
        VehicleEnergySettings_UpdateSpawnOptionText(this,newSpawnOption,(MethodInfo *)0x0);
      }
    }
    else {
      pMVar4 = (this->fields).vehicleEnergySpawner;
      if (pMVar4 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) goto code_?;
      key = (String *)(pMVar4->fields)._._._._._.id;
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
code_?:
      value = (Object *)func_?();
      pSVar2 = key;
    }
  }
  key = pSVar2;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_01,(int32_t)key,a,value,(MethodInfo *)0x0);
    pMVar4 = (this->fields).vehicleEnergySpawner;
    if (pMVar4 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
      (*(code *)(pMVar4->klass->vtable).OnDataUpdate.method)();
      pMVar5 = (this->fields).vehicleEnergySpawnObject;
      if (pMVar5 != (MVVehicleEnergy *)0x0) {
        (*(code *)(pMVar5->klass->vtable).OnDataUpdate.method)();
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


/* Void UpdateSpawnOptionText(Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_UpdateSpawnOptionText
               (VehicleEnergySettings *this,int32_t newSpawnOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (newSpawnOption == 10) {
    this_00 = (this->fields).spawnOptionsInputSlider;
    if (this_00 == (SettingsInputFieldSlider *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
              (this_00,StringLiteral_u221E,(MethodInfo *)0x0);
  }
  return;
}

