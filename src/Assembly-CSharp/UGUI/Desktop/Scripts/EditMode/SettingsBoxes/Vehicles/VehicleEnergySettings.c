
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
  ppDVar2 = &(this->fields).spawnerBpData;
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  func_?(ppDVar2,0);
  if ((pVVar1->fields).vehicleEnergyWoID == -1) {
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (VehicleEnergySettings *)0xa;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                 (Object *)StringLiteral_RespawnCount,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                 (Object *)StringLiteral_RespawnInterval,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)pDVar4;
      func_?(ppDVar2,pDVar4);
      return;
    }
  }
  else {
    pMVar6 = (pVVar1->fields).vehicleEnergySpawner;
    if ((pMVar6 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) &&
       (this_00 = (pMVar6->fields)._._._._._.data,
       this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_00,(Object *)StringLiteral_BlueprintData,(Object **)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if ((bVar7 != 0) && (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((bVar8 <= (pDVar3->klass->_1).naturalAligment) &&
            ((Dictionary_2_System_Object_System_Object___Class *)
             (pDVar3->klass->_1).typeHierarchy[bVar8 - 1] ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
           (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
          *ppDVar2 = pDVar3;
          func_?();
        }
      }
      if (*ppDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)pDVar4;
        func_?(ppDVar2);
      }
      if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2,
                           (Object *)StringLiteral_RespawnCount,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar7 == 0) {
          pDVar3 = *ppDVar2;
          this = (VehicleEnergySettings *)0xa;
          pOVar5 = (Object *)func_?();
          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar3,(Object *)StringLiteral_RespawnCount,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             *ppDVar2,(Object *)StringLiteral_RespawnInterval,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar7 != 0) {
            return;
          }
          pDVar3 = *ppDVar2;
          this = (VehicleEnergySettings *)0x3a98;
          pOVar5 = (Object *)func_?();
          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar3,(Object *)StringLiteral_RespawnInterval,pOVar5,
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  ppDVar2 = &(this->fields).vehicleEnergyBpData;
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  func_?(ppDVar2,0);
  if ((pVVar1->fields).vehicleEnergyWoID == -1) {
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                 (Object *)StringLiteral_VehicleEnergyName,(Object *)StringLiteral_Vehicle_Energy,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      this = (VehicleEnergySettings *)0x1e;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                 (Object *)StringLiteral_VehicleEnergyAmount,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)pDVar4;
      func_?(ppDVar2,pDVar4);
      return;
    }
  }
  else {
    pMVar6 = (pVVar1->fields).vehicleEnergySpawnObject;
    if ((pMVar6 != (MVVehicleEnergy *)0x0) &&
       (this_00 = (pMVar6->fields)._._._._.data,
       this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_00,(Object *)StringLiteral_BlueprintData,(Object **)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if ((bVar7 != 0) && (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((bVar8 <= (pDVar3->klass->_1).naturalAligment) &&
            ((Dictionary_2_System_Object_System_Object___Class *)
             (pDVar3->klass->_1).typeHierarchy[bVar8 - 1] ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
           (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
          *ppDVar2 = pDVar3;
          func_?();
        }
      }
      if (*ppDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)pDVar4;
        func_?(ppDVar2);
      }
      if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2,
                           (Object *)StringLiteral_VehicleEnergyName,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar7 == 0) {
          if (*ppDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          method = 
          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          this = (VehicleEnergySettings *)StringLiteral_Vehicle_Energy;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (*ppDVar2,(Object *)StringLiteral_VehicleEnergyName,
                     (Object *)StringLiteral_Vehicle_Energy,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             *ppDVar2,(Object *)StringLiteral_VehicleEnergyAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar7 != 0) {
            return;
          }
          pDVar3 = *ppDVar2;
          method = (MethodInfo *)&this;
          this = (VehicleEnergySettings *)0x1e;
          pOVar5 = (Object *)func_?();
          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar3,(Object *)StringLiteral_VehicleEnergyAmount,pOVar5,
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar2 = (MVWorldObjectSpawnerVehicleEnergy *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar1,woID,(MethodInfo *)0x0);
  if (pMVar2 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
    (this->fields).vehicleEnergySpawner = (MVWorldObjectSpawnerVehicleEnergy *)0x0;
code_?:
    unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)&(this->fields).vehicleEnergySpawner;
    func_?(unaff_EDI,pMVar2);
    if (*(MVWorldObjectSpawnerVehicleEnergy **)unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy *)0x0
       ) {
code_?:
      uVar3 = func_?();
code_?:
      func_?(uVar3);
      TVar4.m_Index = extraout_ECX;
      pSVar5 = extraout_EDX;
    }
    else {
      (this->fields).vehicleEnergyWoID =
           ((*(MVWorldObjectSpawnerVehicleEnergy **)unaff_EDI)->fields)._.spawnWorldObjectID;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar2 = (MVWorldObjectSpawnerVehicleEnergy *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,(this->fields).vehicleEnergyWoID,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
        (this->fields).vehicleEnergySpawnObject = (MVVehicleEnergy *)0x0;
      }
      else {
        bVar6 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
        unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                    TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy;
        if (((pMVar2->klass->_1).naturalAligment < bVar6) ||
           ((MVVehicleEnergy__Class *)(pMVar2->klass->_1).typeHierarchy[bVar6 - 1] !=
            TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) goto code_?;
        unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                    &(this->fields).vehicleEnergySpawnObject;
        *(MVWorldObjectSpawnerVehicleEnergy **)unaff_EDI = pMVar2;
        bVar6 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
        unaff_EBX = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                    TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy;
        if (((pMVar2->klass->_1).naturalAligment < bVar6) ||
           ((MVVehicleEnergy__Class *)(pMVar2->klass->_1).typeHierarchy[bVar6 - 1] !=
            TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) goto code_?;
      }
      unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                  &(this->fields).vehicleEnergySpawnObject;
      func_?(unaff_EDI,pMVar2);
      this_00 = (this->fields).settingsBase;
      if (this_00 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_Initialize
                (this_00,(this->fields).vehicleEnergyWoID,root,
                 MVWorldObjectDocumentationType__Enum_VehicleEnergy,(MethodInfo *)0x0);
      VehicleEnergySettings_InitVehicleEnergyBpData(this,(MethodInfo *)0x0);
      VehicleEnergySettings_InitSpawnerBpData(this,(MethodInfo *)0x0);
      pSVar7 = StringLiteral_VehicleEnergyName;
      unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)(this->fields).nameInputField;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      unaff_EBX = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                  mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_BlueprintData_,pSVar7,(MethodInfo *)0x0);
      pDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).vehicleEnergyBpData;
      if ((pDVar8 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar8,(Object *)StringLiteral_VehicleEnergyName,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0))
      goto code_?;
      value.m_Index = 0;
      if (TVar4.m_Index == 0) {
code_?:
        SettingsInputField::SettingsInputField_Initialize
                  ((SettingsInputField *)unaff_EDI,(String *)unaff_EBX,(String *)value.m_Index,
                   (MethodInfo *)0x0);
        pDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).spawnerBpData;
        if (pDVar8 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar8,(Object *)StringLiteral_RespawnCount,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar3 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
        if (TVar4.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        puVar9 = (undefined4 *)func_?(TVar4.m_Index);
        pSVar7 = StringLiteral_RespawnCount;
        unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)*puVar9;
        if (unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy__Class *)0xffffffff) {
          unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)0xa;
        }
        pSVar10 = (this->fields).spawnOptionsSlider;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_BlueprintData_);
          cRam_? = '\x01';
        }
        pSVar7 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_BlueprintData_,pSVar7,(MethodInfo *)0x0);
        unaff_EBX = (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0;
        if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
        SettingsSlider::SettingsSlider_Initialize_1
                  (pSVar10,pSVar7,(int32_t)unaff_EDI,1,10,(MethodInfo *)0x0);
        pSVar7 = StringLiteral_RespawnCount;
        unaff_EBX = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                    (this->fields).spawnOptionsInputSlider;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_BlueprintData_);
          cRam_? = '\x01';
        }
        pSVar7 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_BlueprintData_,pSVar7,(MethodInfo *)0x0);
        if (unaff_EBX == (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0) goto code_?;
        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                  ((SettingsInputFieldSlider *)unaff_EBX,pSVar7,(int32_t)unaff_EDI,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&StringLiteral_u221E);
          cRam_? = '\x01';
        }
        if (unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy__Class *)0xa) {
          pSVar11 = (this->fields).spawnOptionsInputSlider;
          if (pSVar11 == (SettingsInputFieldSlider *)0x0) goto code_?;
          SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
                    (pSVar11,StringLiteral_u221E,(MethodInfo *)0x0);
        }
        pDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).spawnerBpData;
        if (pDVar8 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar8,(Object *)StringLiteral_RespawnInterval,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        fVar12 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                           ((Object *)TVar4.m_Index,(IFormatProvider *)provider,(MethodInfo *)0x0);
        unaff_EBX = (MVWorldObjectSpawnerVehicleEnergy__Class *)StringLiteral_RespawnInterval;
        fVar12 = fVar12 / _UNK_?;
        pSVar10 = (this->fields).spawnTimeSlider;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_BlueprintData_);
          cRam_? = '\x01';
        }
        pSVar7 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_BlueprintData_,(String *)unaff_EBX,(MethodInfo *)0x0);
        unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0;
        if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
        SettingsSlider::SettingsSlider_Initialize(pSVar10,pSVar7,fVar12,5.0,240.0,(MethodInfo *)0x0)
        ;
        unaff_EBX = (MVWorldObjectSpawnerVehicleEnergy__Class *)StringLiteral_RespawnInterval;
        pSVar11 = (this->fields).spawnTimeInputSlider;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_BlueprintData_);
          cRam_? = '\x01';
        }
        pSVar7 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_BlueprintData_,(String *)unaff_EBX,(MethodInfo *)0x0);
        unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0;
        if (pSVar11 == (SettingsInputFieldSlider *)0x0) goto code_?;
        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                  (pSVar11,pSVar7,fVar12,(MethodInfo *)0x0);
        pSVar7 = StringLiteral_VehicleEnergyAmount;
        unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)(this->fields).energyAmountSlider;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_BlueprintData_);
          cRam_? = '\x01';
        }
        unaff_EBX = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                    mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_BlueprintData_,pSVar7,(MethodInfo *)0x0);
        pDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).vehicleEnergyBpData;
        if (pDVar8 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar8,(Object *)StringLiteral_VehicleEnergyAmount,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar3 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
        if ((unaff_EDI == (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0) || (TVar4.m_Index == 0))
        goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar13 = (int32_t *)func_?(TVar4.m_Index);
          SettingsSlider::SettingsSlider_Initialize_1
                    ((SettingsSlider *)unaff_EDI,(String *)unaff_EBX,*piVar13,5,100,
                     (MethodInfo *)0x0);
          pSVar7 = StringLiteral_VehicleEnergyAmount;
          unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                      (this->fields).energyAmountInputSlider;
          if (cRam_? == '\0') {
            func_?(&StringLiteral_BlueprintData_);
            cRam_? = '\x01';
          }
          unaff_EBX = (MVWorldObjectSpawnerVehicleEnergy__Class *)
                      mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_BlueprintData_,pSVar7,(MethodInfo *)0x0);
          pDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this->fields).vehicleEnergyBpData;
          if (pDVar8 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar8,(Object *)StringLiteral_VehicleEnergyAmount,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            uVar3 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
            if ((unaff_EDI != (MVWorldObjectSpawnerVehicleEnergy__Class *)0x0) &&
               (TVar4.m_Index != 0)) {
              if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar13 = (int32_t *)func_?(TVar4.m_Index);
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                          ((SettingsInputFieldSlider *)unaff_EDI,(String *)unaff_EBX,*piVar13,
                           (MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
          }
          goto code_?;
        }
        goto code_?;
      }
      if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
        value = TVar4;
      }
      pSVar5 = TypeInfo__System__String;
      if ((String *)value.m_Index != (String *)0x0) goto code_?;
    }
    func_?(TVar4.m_Index,pSVar5);
    pMVar2 = extraout_EDX_00;
  }
  else {
    bVar6 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
            naturalAligment;
    unaff_EDI = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
    if (((pMVar2->klass->_1).naturalAligment < bVar6) ||
       ((MVWorldObjectSpawnerVehicleEnergy__Class *)(pMVar2->klass->_1).typeHierarchy[bVar6 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy))
    goto code_?;
    unaff_EDI = (MVWorldObjectSpawnerVehicleEnergy__Class *)&(this->fields).vehicleEnergySpawner;
    *(MVWorldObjectSpawnerVehicleEnergy **)unaff_EDI = pMVar2;
    bVar6 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
            naturalAligment;
    unaff_EBX = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
    if ((bVar6 <= (pMVar2->klass->_1).naturalAligment) &&
       ((MVWorldObjectSpawnerVehicleEnergy__Class *)(pMVar2->klass->_1).typeHierarchy[bVar6 - 1] ==
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy))
    goto code_?;
  }
code_?:
  func_?(pMVar2,unaff_EBX);
  pMVar2 = extraout_EDX_01;
code_?:
  func_?(pMVar2,unaff_EDI);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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

