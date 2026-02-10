
/* MVVehicleEnergy+VehicleEnergyConfiguration CreateDefaultVehicleEnergyConfig() */

MVVehicleEnergy_VehicleEnergyConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_CreateDefaultVehicleEnergyConfig
          (MVVehicleEnergy_VehicleEnergyConfiguration *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Vehicle_Energy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  __return_storage_ptr__->name = (String *)0x0;
  __return_storage_ptr__->spawnOption = 0;
  __return_storage_ptr__->spawnTime = 0;
  *(undefined8 *)&__return_storage_ptr__->energyAmount = 0;
  __return_storage_ptr__->name = StringLiteral_Vehicle_Energy;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)__return_storage_ptr__ >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  __return_storage_ptr__->spawnOption = 10;
  __return_storage_ptr__->spawnTime = 0xf;
  __return_storage_ptr__->energyAmount = 0x1e;
  return __return_storage_ptr__;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy_DeSelect
               (MVVehicleEnergy *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).RemoveSelectionBox.methodPtr)
            (this,(this->klass->vtable).RemoveSelectionBox.method);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_Initialize(MVVehicleEnergy *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_VehicleEnergyCubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  layerName = StringLiteral_Player;
  transfrom = (this->fields)._._._.transform;
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layerName,(MethodInfo *)0x0);
  LayerUtil::LayerUtil_SetLayerRecursively_2
            (transfrom,(LayerMask)(1 << ((byte)iVar1 & 0x1f)),layer,(MethodInfo *)0x0);
  MVVehicleEnergy_UpdateVehicleEnergyConfig(this,(MethodInfo *)0x0);
  pMVar2 = (MVCubeModelInstance *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_VehicleEnergyCubeModel,(MethodInfo *)0x0
                     );
  if (pMVar2 == (MVCubeModelInstance *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pMVar4 = pMVar2->klass;
  bVar5 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
  if ((bVar5 <= (pMVar4->_1).naturalAligment) &&
     ((MVCubeModelInstance__Class *)(pMVar4->_1).typeHierarchy[(ulonglong)bVar5 - 1] ==
      TypeInfo__MVCubeModelInstance)) {
    (*(pMVar4->vtable).set_Visible.methodPtr)
              (pMVar2,CONCAT71((int7)((ulonglong)TypeInfo__MVCubeModelInstance >> 8),1),
               (pMVar4->vtable).set_Visible.method);
    this_00 = (EditableCubeModelWrapper *)FUN_?(TypeInfo__EditableCubeModelWrapper);
    bVar6 = iRam_? != 0;
    (this_00->fields).cubeModelBase = pMVar2;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&this_00->fields >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    piVar11 = &(pMVar2->fields)._._.interactionFlags;
    *piVar11 = *piVar11 | 0x10;
    aIStackX_18[0].z = -5;
    IStackX_8.x = 2;
    IStackX_8.y = 6;
    IStackX_8.z = 3;
    aIStackX_18[0].x = -5;
    aIStackX_18[0].y = -2;
    EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
              (this_00,aIStackX_18,&IStackX_8,0x14,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).editableCubeModelWrapper = this_00;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(this->fields).editableCubeModelWrapper >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    return;
  }
  FUN_?(pMVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_OnDataUpdate(MVVehicleEnergy *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = MVVehicleEnergy_ReadWorldObjectData(&MStack_2,this,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  iVar4 = pMVar1->spawnOption;
  iVar5 = pMVar1->spawnTime;
  iVar6 = pMVar1->energyAmount;
  uVar7 = *(undefined4 *)&pMVar1->field_0x14;
  (this->fields)._VehicleEnergyConfig_k__BackingField.name = pMVar1->name;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption = iVar4;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime = iVar5;
  (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount = iVar6;
  *(undefined4 *)&(this->fields)._VehicleEnergyConfig_k__BackingField.field_0x14 = uVar7;
  if (bVar3) {
    uVar8 = (uint)((ulonglong)&(this->fields)._VehicleEnergyConfig_k__BackingField >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar10 == *puVar11;
      if (bVar3) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_OnEnterObject(MVVehicleEnergy *this,EditorStateMachine *e,MethodInfo *method)

{
  pMVar1 = (this->fields).vehicleEnergyObject;
  if (((pMVar1 != (MVVehicleEnergyObject *)0x0) &&
      (pVVar2 = (pMVar1->fields).vehicleEnergyVisuals, pVVar2 != (VehicleEnergyVisuals *)0x0)) &&
     (this_00 = (pVVar2->fields).rotateLocal, this_00 != (RotateLocal *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pEVar3 = (this->fields).editableCubeModelWrapper;
    if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar4 = (*(pEVar3->klass->vtable).OnEnterObject.methodPtr)
                        (pEVar3,e,(pEVar3->klass->vtable).OnEnterObject.method);
      return bVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_OnExitObject(MVVehicleEnergy *this,EditorStateMachine *e,MethodInfo *method)

{
  pMVar1 = (this->fields).vehicleEnergyObject;
  if (((pMVar1 != (MVVehicleEnergyObject *)0x0) &&
      (pVVar2 = (pMVar1->fields).vehicleEnergyVisuals, pVVar2 != (VehicleEnergyVisuals *)0x0)) &&
     (this_00 = (pVVar2->fields).rotateLocal, this_00 != (RotateLocal *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    pEVar3 = (this->fields).editableCubeModelWrapper;
    if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar4 = (*(pEVar3->klass->vtable).OnExitObject.methodPtr)
                        (pEVar3,e,(pEVar3->klass->vtable).OnExitObject.method);
      return bVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* MVVehicleEnergy+VehicleEnergyConfiguration ReadWorldObjectData() */

MVVehicleEnergy_VehicleEnergyConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_ReadWorldObjectData
          (MVVehicleEnergy_VehicleEnergyConfiguration *__return_storage_ptr__,MVVehicleEnergy *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
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
  pSVar1 = (String *)0x0;
  bVar2 = cRam_? == '\0';
  __return_storage_ptr__->name = (String *)0x0;
  __return_storage_ptr__->spawnOption = 0;
  __return_storage_ptr__->spawnTime = 0;
  *(undefined8 *)&__return_storage_ptr__->energyAmount = 0;
  pSStackX_8 = (String *)0x0;
  pSStackX_10 = (String *)0x0;
  pSStackX_20 = (String *)0x0;
  pSStack_3 = (String *)0x0;
  if (bVar2) {
    FUN_?(&StringLiteral_Vehicle_Energy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = StringLiteral_Vehicle_Energy;
  pSStack_5 = StringLiteral_Vehicle_Energy;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pSStack_5 >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar2 = uVar8 == *puVar9;
      if (bVar2) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  uStack_10 = 0xf0000000a;
  uStack_11 = 0x1e;
  __return_storage_ptr__->name = pSVar4;
  __return_storage_ptr__->spawnOption = 10;
  __return_storage_ptr__->spawnTime = 0xf;
  *(undefined8 *)&__return_storage_ptr__->energyAmount = 0x1e;
  pDVar12 = (this->fields)._.blueprintData;
  if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar12,(Object *)StringLiteral_VehicleEnergyName,(Object **)&pSStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar13 != 0) && (pSStackX_8 != (String *)0x0)) {
      pSVar4 = pSVar1;
      if (pSStackX_8->klass == pSRam0000000182dc2f60) {
        pSVar4 = pSStackX_8;
      }
      if ((pSVar4 != (String *)0x0) &&
         (bVar2 = iRam_? != 0, __return_storage_ptr__->name = pSVar4, bVar2)) {
        uVar6 = (uint)((ulonglong)__return_storage_ptr__ >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar2 = uVar8 == *puVar9;
          if (bVar2) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
    pDVar12 = (this->fields)._.blueprintData;
    if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar12,(Object *)StringLiteral_RespawnCount,(Object **)&pSStackX_10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if ((bVar13 != 0) && (pSStackX_10 != (String *)0x0)) {
        pSVar4 = pSVar1;
        if (pSStackX_10->klass == pSRam0000000182dc2f18) {
          pSVar4 = pSStackX_10;
        }
        if (pSVar4 != (String *)0x0) {
          if ((pSStackX_10->klass->_0).element_class != (pSRam0000000182dc2f18->_0).element_class) {
            FUN_?(pSStackX_10);
            pcVar14 = (code *)swi(3);
            pMVar15 = (MVVehicleEnergy_VehicleEnergyConfiguration *)(*pcVar14)();
            return pMVar15;
          }
          __return_storage_ptr__->spawnOption = (pSStackX_10->fields)._stringLength;
        }
      }
      pDVar12 = (this->fields)._.blueprintData;
      if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                          (pDVar12,(Object *)StringLiteral_RespawnInterval,(Object **)&pSStackX_20,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                          );
        if ((bVar13 != 0) && (pSStackX_20 != (String *)0x0)) {
          pSVar4 = pSVar1;
          if (pSStackX_20->klass == pSRam0000000182dc2f18) {
            pSVar4 = pSStackX_20;
          }
          if (pSVar4 != (String *)0x0) {
            if ((pSStackX_20->klass->_0).element_class != (pSRam0000000182dc2f18->_0).element_class)
            {
              FUN_?(pSStackX_20);
              pcVar14 = (code *)swi(3);
              pMVar15 = (MVVehicleEnergy_VehicleEnergyConfiguration *)(*pcVar14)();
              return pMVar15;
            }
            __return_storage_ptr__->spawnTime = (pSStackX_20->fields)._stringLength;
          }
        }
        pDVar12 = (this->fields)._.blueprintData;
        if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                            (pDVar12,(Object *)StringLiteral_VehicleEnergyAmount,
                             (Object **)&pSStack_3,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                            );
          if ((bVar13 != 0) && (pSStack_3 != (String *)0x0)) {
            if (pSStack_3->klass == pSRam0000000182dc2f18) {
              pSVar1 = pSStack_3;
            }
            if (pSVar1 != (String *)0x0) {
              if ((pSStack_3->klass->_0).element_class != (pSRam0000000182dc2f18->_0).element_class
                 ) {
                FUN_?(pSStack_3);
                pcVar14 = (code *)swi(3);
                pMVar15 = (MVVehicleEnergy_VehicleEnergyConfiguration *)(*pcVar14)();
                return pMVar15;
              }
              __return_storage_ptr__->energyAmount = (pSStack_3->fields)._stringLength;
            }
          }
          return __return_storage_ptr__;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pMVar15 = (MVVehicleEnergy_VehicleEnergyConfiguration *)(*pcVar14)();
  return pMVar15;
}


/* Void Spawned() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy_Spawned
               (MVVehicleEnergy *this,MethodInfo *method)

{
  MVVehicleEnergy_ToggleColliders(this,1,(MethodInfo *)0x0);
  pMVar1 = (this->fields).vehicleEnergyObject;
  if ((pMVar1 != (MVVehicleEnergyObject *)0x0) &&
     (pVVar2 = (pMVar1->fields).vehicleEnergyVisuals, pVVar2 != (VehicleEnergyVisuals *)0x0)) {
    if ((pVVar2->fields).particleSystemOn == 0) {
      return;
    }
    this_00 = (pVVar2->fields).particles;
    if ((this_00 != (ParticleSystem *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,1);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Taken() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy_Taken
               (MVVehicleEnergy *this,MethodInfo *method)

{
  MVVehicleEnergy_ToggleColliders(this,0,(MethodInfo *)0x0);
  pMVar1 = (this->fields).vehicleEnergyObject;
  if ((pMVar1 != (MVVehicleEnergyObject *)0x0) &&
     (pVVar2 = (pMVar1->fields).vehicleEnergyVisuals, pVVar2 != (VehicleEnergyVisuals *)0x0)) {
    if ((pVVar2->fields).particleSystemOn == 0) {
      return;
    }
    this_00 = (pVVar2->fields).particles;
    if ((this_00 != (ParticleSystem *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ToggleColliders(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_ToggleColliders(MVVehicleEnergy *this,bool val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,CONCAT71(in_register_00000011,val));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (((pEVar1 == (EditableCubeModelWrapper *)0x0) ||
      (pMVar2 = (pEVar1->fields).cubeModelBase, pMVar2 == (MVCubeModelInstance *)0x0)) ||
     ((pMVar2->fields)._.chunkInstances == (ChunkInstances *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar4 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
  do {
    if (plVar4 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar5 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar5 == '\0') {
      lVar6 = FUN_?(plVar4,TypeInfo__System__IDisposable);
      if (lVar6 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar6);
      }
      return;
    }
    if (plVar4 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar6 = *plVar4;
    uVar7 = 0;
    if (*(ushort *)(lVar6 + 0x12e) != 0) {
      do {
        if (*(IEnumerator__Class **)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 1) *
                    0x10 + 0x138 + lVar6);
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_?(plVar4,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    plVar9 = (longlong *)(*(code *)*puVar8)(plVar4,puVar8[1]);
    if (plVar9 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pKVar10 = 
    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
    ;
    if (*(Il2CppClass **)(*plVar9 + 0x40) !=
        (
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ->_0).element_class) {
code_?:
      FUN_?(plVar9,pKVar10);
      goto code_?;
    }
    obj = (Object *)plVar9[6];
    if (obj == (Object *)0x0) {
code_?:
      plVar9 = (longlong *)FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar11 = obj[1].klass;
    if (pOVar11 == (Object__Class *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12);
      goto code_?;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pOVar11,val);
  } while( true );
}


/* Void UpdateVehicleEnergyConfig() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_UpdateVehicleEnergyConfig(MVVehicleEnergy *this,MethodInfo *method)

{
  pMVar1 = MVVehicleEnergy_ReadWorldObjectData(&MStack_2,this,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  iVar4 = pMVar1->spawnOption;
  iVar5 = pMVar1->spawnTime;
  iVar6 = pMVar1->energyAmount;
  uVar7 = *(undefined4 *)&pMVar1->field_0x14;
  (this->fields)._VehicleEnergyConfig_k__BackingField.name = pMVar1->name;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption = iVar4;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime = iVar5;
  (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount = iVar6;
  *(undefined4 *)&(this->fields)._VehicleEnergyConfig_k__BackingField.field_0x14 = uVar7;
  if (bVar3) {
    uVar8 = (uint)((ulonglong)&(this->fields)._VehicleEnergyConfig_k__BackingField >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar10 == *puVar11;
      if (bVar3) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* MVVehicleEnergy(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
               (MVVehicleEnergy *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,(pPVar1->fields).vehicleEnergyPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._._.interactionFlags;
    *piVar2 = *piVar2 | 0x9000;
    pMVar3 = (MVVehicleEnergyObject *)(this->fields)._._._.component;
    if (pMVar3 == (MVVehicleEnergyObject *)0x0) {
      (this->fields).vehicleEnergyObject = (MVVehicleEnergyObject *)0x0;
    }
    else {
      bVar4 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject->_1).naturalAligment
      ;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->fields).vehicleEnergyObject = pMVar3;
      bVar4 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject->_1).naturalAligment
      ;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergyObject)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).vehicleEnergyObject >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pMVar3 = (this->fields).vehicleEnergyObject;
    if ((pMVar3 != (MVVehicleEnergyObject *)0x0) &&
       (this_00 = (pMVar3->fields).vehicleEnergyVisuals, this_00 != (VehicleEnergyVisuals *)0x0)) {
      pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      bVar10 = iRam_? != 0;
      (this->fields)._VehicleEnergyVisualsGameObject_k__BackingField = pGVar11;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)&(this->fields)._VehicleEnergyVisualsGameObject_k__BackingField
                       >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVCubeModelInstance get_CubeModelInstance() */

MVCubeModelInstance *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_get_CubeModelInstance(MVVehicleEnergy *this,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    return (pEVar1->fields).cubeModelBase;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVCubeModelInstance *)(*pcVar2)();
  return pMVar3;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_get_DocumentationType(MVVehicleEnergy *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_VehicleEnergy;
}


/* MVVehicleEnergy+VehicleEnergyConfiguration get_VehicleEnergyConfig() */

MVVehicleEnergy_VehicleEnergyConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
MVVehicleEnergy_get_VehicleEnergyConfig
          (MVVehicleEnergy_VehicleEnergyConfiguration *__return_storage_ptr__,MVVehicleEnergy *this,
          MethodInfo *method)

{
  iVar1 = (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption;
  iVar2 = (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime;
  iVar3 = (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount;
  uVar4 = *(undefined4 *)&(this->fields)._VehicleEnergyConfig_k__BackingField.field_0x14;
  __return_storage_ptr__->name = (this->fields)._VehicleEnergyConfig_k__BackingField.name;
  __return_storage_ptr__->spawnOption = iVar1;
  __return_storage_ptr__->spawnTime = iVar2;
  __return_storage_ptr__->energyAmount = iVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uVar4;
  return __return_storage_ptr__;
}


/* Void set_VehicleEnergyConfig(MVVehicleEnergy+VehicleEnergyConfiguration) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::
     MVVehicleEnergy_set_VehicleEnergyConfig
               (MVVehicleEnergy *this,MVVehicleEnergy_VehicleEnergyConfiguration *value,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  iVar2 = value->spawnOption;
  iVar3 = value->spawnTime;
  iVar4 = value->energyAmount;
  uVar5 = *(undefined4 *)&value->field_0x14;
  (this->fields)._VehicleEnergyConfig_k__BackingField.name = value->name;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnOption = iVar2;
  (this->fields)._VehicleEnergyConfig_k__BackingField.spawnTime = iVar3;
  (this->fields)._VehicleEnergyConfig_k__BackingField.energyAmount = iVar4;
  *(undefined4 *)&(this->fields)._VehicleEnergyConfig_k__BackingField.field_0x14 = uVar5;
  if (bVar1) {
    uVar6 = (uint)((ulonglong)&(this->fields)._VehicleEnergyConfig_k__BackingField >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}

