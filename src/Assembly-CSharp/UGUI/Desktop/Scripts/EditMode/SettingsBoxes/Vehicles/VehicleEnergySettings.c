
/* Void InitSpawnerBpData() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_InitSpawnerBpData
               (VehicleEnergySettings *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
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
    FUN_?(&StringLiteral_RespawnInterval);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RespawnCount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  pDStackX_18 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  (this->fields).spawnerBpData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).spawnerBpData >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((this->fields).vehicleEnergyWoID == -1) {
    pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    auStackX_8[0] = 10;
    pOVar7 = (Object *)FUN_?(uRam_?,auStackX_8);
    if (pDVar6 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar8 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar6,
                 (Object *)StringLiteral_RespawnCount,pOVar7,(InsertionBehavior__Enum)uVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      auStackX_8[0] = 15000;
      pOVar7 = (Object *)FUN_?(uRam_?,auStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar6,
                 (Object *)StringLiteral_RespawnInterval,pOVar7,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      bVar1 = iRam_? == 0;
      (this->fields).spawnerBpData = (Dictionary_2_System_Object_System_Object_ *)pDVar6;
      if (bVar1) {
        return;
      }
      uVar2 = (uint)((ulonglong)&(this->fields).spawnerBpData >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
      return;
    }
  }
  else {
    pMVar9 = (this->fields).vehicleEnergySpawner;
    if ((pMVar9 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) &&
       (pDVar10 = (pMVar9->fields)._._._._._.data,
       pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      pDVar11 = (Dictionary_2_System_Object_System_Object___Class *)
                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar10,(Object *)StringLiteral_BlueprintData,(Object **)&pDStackX_18,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if ((bVar12 != 0) && (pDStackX_18 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        pDVar11 = pDStackX_18->klass;
        bVar13 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((bVar13 <= (pDVar11->_1).naturalAligment) &&
            ((Dictionary_2_System_Object_System_Object___Class *)
             (pDVar11->_1).typeHierarchy[(ulonglong)bVar13 - 1] ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
           (pDStackX_18 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
          (this->fields).spawnerBpData = pDStackX_18;
          func_?(&(this->fields).spawnerBpData);
        }
      }
      if ((this->fields).spawnerBpData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        bVar1 = iRam_? != 0;
        (this->fields).spawnerBpData = (Dictionary_2_System_Object_System_Object_ *)pDVar6;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).spawnerBpData >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
      pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields).spawnerBpData;
      if (pDVar14 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (pDVar14,(Object *)StringLiteral_RespawnCount,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        if (iVar15 < 0) {
          pDVar10 = (this->fields).spawnerBpData;
          auStackX_8[0] = 10;
          pOVar7 = (Object *)FUN_?(uRam_?,auStackX_8);
          if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          pDVar11 = (Dictionary_2_System_Object_System_Object___Class *)
                    CONCAT71((int7)((ulonglong)pDVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar10,(Object *)StringLiteral_RespawnCount,pOVar7,
                     (InsertionBehavior__Enum)pDVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)(this->fields).spawnerBpData;
        if (pDVar14 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (pDVar14,(Object *)StringLiteral_RespawnInterval,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          if (iVar15 < 0) {
            pDVar10 = (this->fields).spawnerBpData;
            auStackX_8[0] = 15000;
            pOVar7 = (Object *)FUN_?(uRam_?,auStackX_8);
            if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar10,(Object *)StringLiteral_RespawnInterval,pOVar7,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pDVar11 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitVehicleEnergyBpData() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_InitVehicleEnergyBpData
               (VehicleEnergySettings *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
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
    FUN_?(&StringLiteral_VehicleEnergyName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vehicle_Energy);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_VehicleEnergyAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  pDStackX_18 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  (this->fields).vehicleEnergyBpData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).vehicleEnergyBpData >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((this->fields).vehicleEnergyWoID == -1) {
    pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (pDVar6 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar7 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar6,
                 (Object *)StringLiteral_VehicleEnergyName,(Object *)StringLiteral_Vehicle_Energy,
                 (InsertionBehavior__Enum)uVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      auStackX_8[0] = 0x1e;
      pOVar8 = (Object *)FUN_?(uRam_?,auStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar6,
                 (Object *)StringLiteral_VehicleEnergyAmount,pOVar8,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      bVar1 = iRam_? == 0;
      (this->fields).vehicleEnergyBpData = (Dictionary_2_System_Object_System_Object_ *)pDVar6;
      if (bVar1) {
        return;
      }
      uVar2 = (uint)((ulonglong)&(this->fields).vehicleEnergyBpData >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
      return;
    }
  }
  else {
    pMVar9 = (this->fields).vehicleEnergySpawnObject;
    if ((pMVar9 != (MVVehicleEnergy *)0x0) &&
       (pDVar10 = (pMVar9->fields)._._._._.data,
       pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      pDVar11 = (Dictionary_2_System_Object_System_Object___Class *)
                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar10,(Object *)StringLiteral_BlueprintData,(Object **)&pDStackX_18,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if ((bVar12 != 0) && (pDStackX_18 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        pDVar11 = pDStackX_18->klass;
        bVar13 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((bVar13 <= (pDVar11->_1).naturalAligment) &&
            ((Dictionary_2_System_Object_System_Object___Class *)
             (pDVar11->_1).typeHierarchy[(ulonglong)bVar13 - 1] ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
           (pDStackX_18 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
          (this->fields).vehicleEnergyBpData = pDStackX_18;
          func_?(&(this->fields).vehicleEnergyBpData);
        }
      }
      if ((this->fields).vehicleEnergyBpData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        bVar1 = iRam_? != 0;
        (this->fields).vehicleEnergyBpData = (Dictionary_2_System_Object_System_Object_ *)pDVar6;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).vehicleEnergyBpData >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
      pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields).vehicleEnergyBpData;
      if (pDVar14 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (pDVar14,(Object *)StringLiteral_VehicleEnergyName,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        if (iVar15 < 0) {
          pDVar10 = (this->fields).vehicleEnergyBpData;
          if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          pDVar11 = (Dictionary_2_System_Object_System_Object___Class *)
                    CONCAT71((int7)((ulonglong)pDVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar10,(Object *)StringLiteral_VehicleEnergyName,
                     (Object *)StringLiteral_Vehicle_Energy,(InsertionBehavior__Enum)pDVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)(this->fields).vehicleEnergyBpData;
        if (pDVar14 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (pDVar14,(Object *)StringLiteral_VehicleEnergyAmount,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          if (iVar15 < 0) {
            pDVar10 = (this->fields).vehicleEnergyBpData;
            auStackX_8[0] = 0x1e;
            pOVar8 = (Object *)FUN_?(uRam_?,auStackX_8);
            if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar10,(Object *)StringLiteral_VehicleEnergyAmount,pOVar8,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pDVar11 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_Initialize
               (VehicleEnergySettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RespawnInterval);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RespawnCount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_VehicleEnergyName);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (MVWorldObjectSpawnerVehicleEnergy *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar1,woID,(MethodInfo *)0x0);
  pSVar4 = (String *)0x0;
  if (pMVar3 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
    (this->fields).vehicleEnergySpawner = (MVWorldObjectSpawnerVehicleEnergy *)0x0;
  }
  else {
    bVar5 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
            naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar5) ||
       ((MVWorldObjectSpawnerVehicleEnergy__Class *)
        (pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
      FUN_?(pMVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).vehicleEnergySpawner = pMVar3;
    bVar5 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
            naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar5) ||
       ((MVWorldObjectSpawnerVehicleEnergy__Class *)
        (pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
      FUN_?(pMVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).vehicleEnergySpawner >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pMVar3 = (this->fields).vehicleEnergySpawner;
  if (pMVar3 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) goto code_?;
  (this->fields).vehicleEnergyWoID = (pMVar3->fields)._.spawnWorldObjectID;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar11 = (MVVehicleEnergy *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar1,(this->fields).vehicleEnergyWoID,(MethodInfo *)0x0);
  if (pMVar11 == (MVVehicleEnergy *)0x0) {
    (this->fields).vehicleEnergySpawnObject = (MVVehicleEnergy *)0x0;
  }
  else {
    bVar5 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if (((pMVar11->klass->_1).naturalAligment < bVar5) ||
       ((MVVehicleEnergy__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      FUN_?(pMVar11);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).vehicleEnergySpawnObject = pMVar11;
    bVar5 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy->_1).naturalAligment;
    if (((pMVar11->klass->_1).naturalAligment < bVar5) ||
       ((MVVehicleEnergy__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy)) {
      FUN_?(pMVar11);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).vehicleEnergySpawnObject >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  this_01 = (this->fields).settingsBase;
  if (this_01 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_01,(this->fields).vehicleEnergyWoID,root,
             MVWorldObjectDocumentationType__Enum_VehicleEnergy,(MethodInfo *)0x0);
  VehicleEnergySettings_InitVehicleEnergyBpData(this,(MethodInfo *)0x0);
  VehicleEnergySettings_InitSpawnerBpData(this,(MethodInfo *)0x0);
  pSVar12 = StringLiteral_VehicleEnergyName;
  this_02 = (this->fields).nameInputField;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar12 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar12,(MethodInfo *)0x0);
  pDVar13 = (this->fields).vehicleEnergyBpData;
  if ((pDVar13 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pSVar14 = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar13,(Object *)StringLiteral_VehicleEnergyName,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), this_02 == (SettingsInputField *)0x0)) goto code_?;
  if (pSVar14 != (String *)0x0) {
    if (pSVar14->klass == pSRam0000000182dbbc60) {
      pSVar4 = pSVar14;
    }
    if (pSVar4 == (String *)0x0) {
      FUN_?(pSVar14);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SettingsInputField::SettingsInputField_Initialize(this_02,pSVar12,pSVar4,(MethodInfo *)0x0);
  pDVar13 = (this->fields).spawnerBpData;
  if ((pDVar13 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar13,(Object *)StringLiteral_RespawnCount,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pSVar4 = StringLiteral_RespawnCount, pOVar15 == (Object *)0x0))
  goto code_?;
  if ((pOVar15->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar15,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar16 = *(int *)&pOVar15[1].klass;
  if (iVar16 == -1) {
    iVar16 = 10;
  }
  pSVar17 = (this->fields).spawnOptionsSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  if (pSVar17 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1(pSVar17,pSVar4,iVar16,1,10,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_RespawnCount;
  pSVar18 = (this->fields).spawnOptionsInputSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  if (pSVar18 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
            (pSVar18,pSVar4,(float)iVar16,(MethodInfo *)0x0);
  VehicleEnergySettings_UpdateSpawnOptionText(this,iVar16,(MethodInfo *)0x0);
  pDVar13 = (this->fields).spawnerBpData;
  if (pDVar13 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar13,(Object *)StringLiteral_RespawnInterval,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  provider = TypeInfo__System__Globalization__CultureInfo->static_fields->invariant_culture_info;
  LOCK();
  UNLOCK();
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar19 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                     (pOVar15,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_RespawnInterval;
  fVar19 = fVar19 / _UNK_?;
  pSVar17 = (this->fields).spawnTimeSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  if (pSVar17 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize
            (pSVar17,pSVar4,fVar19,_UNK_?,_UNK_?,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_RespawnInterval;
  pSVar18 = (this->fields).spawnTimeInputSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  if (pSVar18 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
            (pSVar18,pSVar4,fVar19,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_VehicleEnergyAmount;
  pSVar17 = (this->fields).energyAmountSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  pDVar13 = (this->fields).vehicleEnergyBpData;
  if (((pDVar13 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
      (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar13,(Object *)StringLiteral_VehicleEnergyAmount,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pSVar17 == (SettingsSlider *)0x0)) || (pOVar15 == (Object *)0x0))
  goto code_?;
  if ((pOVar15->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar15,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar17,pSVar4,*(int32_t *)&pOVar15[1].klass,5,100,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_VehicleEnergyAmount;
  pSVar18 = (this->fields).energyAmountInputSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  pDVar13 = (this->fields).vehicleEnergyBpData;
  if (((pDVar13 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
      (pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar13,(Object *)StringLiteral_VehicleEnergyAmount,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pSVar18 == (SettingsInputFieldSlider *)0x0)) ||
     (pOVar15 == (Object *)0x0)) goto code_?;
  if ((pOVar15->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar15,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar16 = *(int *)&pOVar15[1].klass;
  bVar10 = iRam_? != 0;
  (pSVar18->fields).key = pSVar4;
  if (bVar10) {
    uVar6 = (uint)((ulonglong)&(pSVar18->fields).key >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  fVar19 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     (pSVar18,(float)iVar16,(MethodInfo *)0x0);
  pSVar4 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (fVar19,(MethodInfo *)0x0);
  this_00 = (pSVar18->fields).inputField;
  if (this_00 == (InputField *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar12 = (this_00->fields).m_Text;
  if (pSVar12 == pSVar4) {
    return;
  }
  if (pSVar12 == (String *)0x0) {
code_?:
    if (pSVar4 == (String *)0x0) {
code_?:
      pSVar4 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar4 == (String *)0x0) goto code_?;
    if ((pSVar12->fields)._stringLength == (pSVar4->fields)._stringLength) {
      bVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar12->fields)._firstChar,
                          (uint8_t *)&(pSVar4->fields)._firstChar,
                          (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar20 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar4 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar4,::StringLiteral__,*(String **)pSRam0000000182dbbc60->static_fields,
                       (MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar4 == (String *)0x0) ||
       (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar4,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar4 == (String *)0x0)) goto DAT_?;
    pSVar4 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar4,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar4 == (String *)0x0) goto DAT_?;
      iVar16 = (this_00->fields).m_CharacterLimit;
      if (iVar16 < (pSVar4->fields)._stringLength) {
        pSVar4 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar4,0,iVar16,(MethodInfo *)0x0);
      }
    }
    (this_00->fields).m_Text = pSVar4;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar10 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar10) {
      uVar6 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar21 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar21 + 0xADDR);
        puVar9 = (ulonglong *)(lVar21 + 0xADDR);
        LOCK();
        bVar10 = uVar7 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pIVar22 = (this_00->fields).m_OnValidateInput;
    if (pIVar22 == (InputField_OnValidateInput *)0x0) {
      pIVar22 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar23 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar10 = iRam_? != 0;
      (pIVar22->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar22->fields)._._.method = pMVar23;
      (pIVar22->fields)._._.m_target = (Object *)this_00;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)&(pIVar22->fields)._._.m_target >> 0xc);
        lVar21 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar21 + 0xADDR);
          puVar9 = (ulonglong *)(lVar21 + 0xADDR);
          LOCK();
          bVar10 = uVar7 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uVar24 = pMVar23->parameters_count;
      (pIVar22->fields)._._.method_code = pIVar22;
      if ((pMVar23->flags & 0x10) == 0) {
        if (uVar24 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar24 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar22->fields)._._.method_code = (pIVar22->fields)._._.m_target;
        pcVar2 = (pIVar22->fields)._._.method_ptr;
      }
      (pIVar22->fields)._._.invoke_impl = pcVar2;
      (pIVar22->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar4 == (String *)0x0) goto DAT_?;
    iVar25 = (pSVar4->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar25;
    (this_00->fields).m_CaretPosition = iVar25;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar16 = (pSVar4->fields)._stringLength;
    }
    else {
      iVar16 = (this_00->fields).m_CharacterLimit;
      iVar26 = (pSVar4->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar26 < iVar16) {
        iVar16 = iVar26;
      }
    }
    uVar6 = 0;
    if (0 < iVar16) {
      puVar27 = &(pSVar4->fields)._firstChar;
      lVar21 = 0;
      do {
        pSVar12 = (this_00->fields).m_Text;
        if (pSVar12 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar22 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar22->fields)._._.invoke_impl)
                      ((pIVar22->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar12->fields)._stringLength,*puVar27,(pIVar22->fields)._._.method);
        if (c != 0) {
          pSVar12 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          pSVar14 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar12 = mscorlib.dll::System::String::String_Concat_4(pSVar12,pSVar14,(MethodInfo *)0x0)
          ;
          (this_00->fields).m_Text = pSVar12;
          func_?(&(this_00->fields).m_Text);
        }
        uVar6 = uVar6 + 1;
        lVar21 = lVar21 + 1;
        puVar27 = puVar27 + 1;
      } while (lVar21 < iVar16);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar4 = (this_00->fields).m_Text;
  if (pSVar4 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar16 = (pSVar4->fields)._stringLength;
  if (iVar16 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar16;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar16) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar16;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)this_00,(MethodInfo *)0x0);
  if ((this_00->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_00->fields).m_OnValueChanged,
               (Object *)(this_00->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_00,(MethodInfo *)0x0)
  ;
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_OnSettingChanged
               (VehicleEnergySettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RespawnInterval);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RespawnCount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_VehicleEnergyName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_VehicleEnergyAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_VehicleEnergyName;
  if (key == (String *)0x0) {
    return;
  }
  if ((key->fields)._stringLength == 0) {
    return;
  }
  worldObjectID = (this->fields).vehicleEnergyWoID;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
  if ((key != pSVar1) &&
     (((pSVar1 == (String *)0x0 || ((key->fields)._stringLength != (pSVar1->fields)._stringLength))
      || (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(key->fields)._firstChar,
                             (uint8_t *)&(pSVar1->fields)._firstChar,
                             (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar2 == 0)))) {
    pSVar1 = StringLiteral_RespawnInterval;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_BlueprintData_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    if ((key == pSVar1) ||
       (((pSVar1 != (String *)0x0 && ((key->fields)._stringLength == (pSVar1->fields)._stringLength)
         ) && (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(key->fields)._firstChar,
                                  (uint8_t *)&(pSVar1->fields)._firstChar,
                                  (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar2 != 0)))) {
      pMVar3 = (this->fields).vehicleEnergySpawner;
      if (pMVar3 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) goto DAT_?;
      worldObjectID = (pMVar3->fields)._._._._._.id;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
      aiStackX_10[0] = aiStackX_10[0] * 1000;
code_?:
      value = (Object *)FUN_?(uRam_?,aiStackX_10);
    }
    else {
      pSVar1 = StringLiteral_RespawnCount;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_BlueprintData_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      if ((key == pSVar1) ||
         (((pSVar1 != (String *)0x0 &&
           ((key->fields)._stringLength == (pSVar1->fields)._stringLength)) &&
          (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(key->fields)._firstChar,
                              (uint8_t *)&(pSVar1->fields)._firstChar,
                              (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar2 != 0)))) {
        pMVar3 = (this->fields).vehicleEnergySpawner;
        if (pMVar3 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) goto DAT_?;
        worldObjectID = (pMVar3->fields)._._._._._.id;
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        newSpawnOption = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
        aiStackX_10[0] = newSpawnOption;
        if (newSpawnOption == 10) {
          aiStackX_10[0] = -1;
        }
        value = (Object *)FUN_?(uRam_?,aiStackX_10);
        VehicleEnergySettings_UpdateSpawnOptionText(this,newSpawnOption,(MethodInfo *)0x0);
      }
      else {
        pSVar1 = VehicleBaseSettings::VehicleBaseSettings_SettingsKey
                           (StringLiteral_VehicleEnergyAmount,(MethodInfo *)0x0);
        if ((key == pSVar1) ||
           (((pSVar1 != (String *)0x0 &&
             ((key->fields)._stringLength == (pSVar1->fields)._stringLength)) &&
            (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(key->fields)._firstChar,
                                (uint8_t *)&(pSVar1->fields)._firstChar,
                                (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar2 != 0)))) {
          if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
            FUN_?();
          }
          aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
          goto code_?;
        }
        this_00 = (this->fields).settingsBase;
        if (this_00 == (SettingsBase *)0x0) goto DAT_?;
        SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value,(MethodInfo *)0x0);
      }
    }
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_01,worldObjectID,key,value,(MethodInfo *)0x0);
    pMVar3 = (this->fields).vehicleEnergySpawner;
    if (pMVar3 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
      (*(pMVar3->klass->vtable).OnDataUpdate.methodPtr)
                (pMVar3,(pMVar3->klass->vtable).OnDataUpdate.method);
      pMVar4 = (this->fields).vehicleEnergySpawnObject;
      if (pMVar4 != (MVVehicleEnergy *)0x0) {
        (*(pMVar4->klass->vtable).OnDataUpdate.methodPtr)
                  (pMVar4,(pMVar4->klass->vtable).OnDataUpdate.method);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSpawnOptionText(Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergySettings::VehicleEnergySettings_UpdateSpawnOptionText
               (VehicleEnergySettings *this,int32_t newSpawnOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u221E);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = StringLiteral_u221E;
  if (newSpawnOption != 10) {
    return;
  }
  pSVar1 = (this->fields).spawnOptionsInputSlider;
  if ((pSVar1 != (SettingsInputFieldSlider *)0x0) &&
     (pIVar2 = (pSVar1->fields).inputField, pIVar2 != (InputField *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
              (pIVar2,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0);
    pIVar2 = (pSVar1->fields).inputField;
    if (pIVar2 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (pIVar2,value,1,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

