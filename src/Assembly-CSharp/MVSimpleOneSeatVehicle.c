
/* Dictionary`2[System.Object,System.Object] GetCurrentItemState() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_GetCurrentItemState
          (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).CurrentItem;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar3;
  }
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
           ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                     ((pMVar1->fields).value,(MethodInfo *)0x0);
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar3->klass->_1).naturalAligment < bVar4) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar3,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar2 = (code *)swi(3);
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
      return pDVar3;
    }
  }
  return pDVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
               (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<VehiclePickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isFiring);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_overrideHealth);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_8 = (Object *)0x0;
  MVVehicleBase::MVVehicleBase_Initialize((MVVehicleBase *)this,(MethodInfo *)0x0);
  worldObjectType = (this->fields)._._._._._.type;
  if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
            RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
  if ((this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_health,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != (pORam0000000182db2508->_0).element_class) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).maxHealth = *(float *)&pOVar1[1].klass;
    if ((((this->fields)._._.blueprintData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
        (bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                           ((this->fields)._._.blueprintData,(Object *)StringLiteral_overrideHealth,
                            &pOStackX_8,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                           ), bVar3 != 0)) && (pOStackX_8 != (Object *)0x0)) {
      pOVar1 = (Object *)0x0;
      if (pOStackX_8->klass == pORam0000000182db2508) {
        pOVar1 = pOStackX_8;
      }
      if (pOVar1 != (Object *)0x0) {
        if ((pOStackX_8->klass->_0).element_class != (pORam0000000182db2508->_0).element_class) {
          FUN_?(pOStackX_8);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->fields).maxHealth = *(float *)&pOStackX_8[1].klass;
      }
    }
    pMVar4 = (this->fields)._._._._.runtimeDataVariables;
    (this->fields).previousHealth = (this->fields).maxHealth;
    if (pMVar4 != (MVRuntimeDataVariables *)0x0) {
      pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                         (pMVar4,StringLiteral_health,_UNK_?,0,0.0,(this->fields).maxHealth,
                          (MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (this->fields).Health = pMVar5;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).Health >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pMVar5 = (this->fields).Health;
      if (pMVar5 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        (*(pMVar5->klass->vtable).set_Value.methodPtr)
                  (pMVar5,(this->fields).maxHealth,(pMVar5->klass->vtable).set_Value.method);
        pMVar4 = (this->fields)._._._._.runtimeDataVariables;
        if (pMVar4 != (MVRuntimeDataVariables *)0x0) {
          pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                             (pMVar4,StringLiteral_shield,_UNK_?,0,0.0,
                              (this->fields).maxHealth,(MethodInfo *)0x0);
          bVar6 = iRam_? != 0;
          (this->fields).shield = pMVar5;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(this->fields).shield >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar6 = uVar9 == *puVar10;
              if (bVar6) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          pMVar4 = (this->fields)._._._._.runtimeDataVariables;
          if (pMVar4 != (MVRuntimeDataVariables *)0x0) {
            pMVar11 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                (pMVar4,StringLiteral_currentItem,0.0,1,(MethodInfo *)0x0);
            bVar6 = iRam_? != 0;
            (this->fields).CurrentItem = pMVar11;
            if (bVar6) {
              uVar7 = (uint)((ulonglong)&(this->fields).CurrentItem >> 0xc);
              uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                LOCK();
                bVar6 = uVar9 == *puVar10;
                if (bVar6) {
                  *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            pMVar4 = (this->fields)._._._._.runtimeDataVariables;
            if (pMVar4 != (MVRuntimeDataVariables *)0x0) {
              pMVar11 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                  (pMVar4,StringLiteral_isFiring,0.0,0,(MethodInfo *)0x0);
              bVar6 = iRam_? != 0;
              (this->fields).IsFiring = pMVar11;
              if (bVar6) {
                uVar7 = (uint)((ulonglong)&(this->fields).IsFiring >> 0xc);
                uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                do {
                  uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                  puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                  LOCK();
                  bVar6 = uVar9 == *puVar10;
                  if (bVar6) {
                    *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar6);
              }
              pMVar4 = (this->fields)._._._._.runtimeDataVariables;
              if (pMVar4 != (MVRuntimeDataVariables *)0x0) {
                pMVar11 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                    (pMVar4,StringLiteral_modifiers,_UNK_?,0,
                                     (MethodInfo *)0x0);
                bVar6 = iRam_? != 0;
                (this->fields).Modifiers = pMVar11;
                if (bVar6) {
                  uVar7 = (uint)((ulonglong)&(this->fields).Modifiers >> 0xc);
                  uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                  do {
                    uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                    puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                    LOCK();
                    bVar6 = uVar9 == *puVar10;
                    if (bVar6) {
                      *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar6);
                }
                pGVar12 = (this->fields)._._._._.gameObject;
                if (pGVar12 != (GameObject *)0x0) {
                  this_01 = (MVPickupOwner *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (pGVar12,
                                       VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<VehiclePickupOwner>__
                                      );
                  pMVar13 = 
                  MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                  ;
                  pGVar12 = (this->fields)._._._._.gameObject;
                  if (pGVar12 != (GameObject *)0x0) {
                    if ((
                        MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                      FUN_?(
                                   MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                                   );
                    }
                    this_02 = (Component *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentInChildren_3
                                        (pGVar12,0,((pMVar13->field7_0x38).rgctx_data)->method);
                    pMVar11 = (this->fields).CurrentItem;
                    isFiringRuntimeVariable = (this->fields).IsFiring;
                    if ((this_02 != (Component *)0x0) &&
                       (pMVar14 = (MVPickupOwner__Class *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform(this_02,(MethodInfo *)0x0),
                       this_01 != (MVPickupOwner *)0x0)) {
                      MVPickupOwner::MVPickupOwner_Init
                                (this_01,pMVar11,isFiringRuntimeVariable,(MethodInfo *)0x0);
                      bVar6 = iRam_? != 0;
                      this_01[1].klass = pMVar14;
                      if (bVar6) {
                        uVar7 = (uint)((ulonglong)(this_01 + 1) >> 0xc);
                        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                        do {
                          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_OnEnterObject
               (MVSimpleOneSeatVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pEVar1->klass->vtable).OnEnterObject.methodPtr)
                      (pEVar1,e,(pEVar1->klass->vtable).OnEnterObject.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_OnExitObject
               (MVSimpleOneSeatVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pEVar1->klass->vtable).OnExitObject.methodPtr)
                      (pEVar1,e,(pEVar1->klass->vtable).OnExitObject.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void SetCurrentItemState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_SetCurrentItemState
               (MVSimpleOneSeatVehicle *this,Dictionary_2_System_Object_System_Object_ *aNewState,
               MethodInfo *method)

{
  pMVar1 = (this->fields).CurrentItem;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     ((Object *)aNewState,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  pOVar5 = (pMVar1->fields).value;
  (pMVar1->fields).value = pOVar3;
  if (bVar4) {
    uVar6 = (uint)((ulonglong)&(pMVar1->fields).value >> 0xc);
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
  if (pOVar5 != pOVar3) {
    if ((pMVar1->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar10 = (pMVar1->fields).OnChange;
      pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0);
      (*(pMVar10->fields)._._.invoke_impl)
                ((pMVar10->fields)._._.method_code,pOVar5,(pMVar10->fields)._._.method);
    }
    if (((pMVar1->fields).writeThrough != 0) &&
       ((pMVar1->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
      pMVar11 = (pMVar1->fields).OnWriteThrough;
      pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0);
      (*(pMVar11->fields)._._.invoke_impl)
                ((pMVar11->fields)._._.method_code,pOVar5,(pMVar11->fields)._._.method);
    }
  }
  return;
}


/* MVSimpleOneSeatVehicle(Dictionary`2[System.Object,System.Object], VehicleBaseObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle__ctor
               (MVSimpleOneSeatVehicle *this,Dictionary_2_System_Object_System_Object_ *data,
               VehicleBaseObject *_vehiclePrefab,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,(ObjectPrefab *)_vehiclePrefab,worldObjects,
             (MethodInfo *)0x0);
  pVVar1 = (VehicleBaseObject *)(this->fields)._._._._.component;
  if (pVVar1 == (VehicleBaseObject *)0x0) {
    (this->fields)._.vehicleBaseObject = (VehicleBaseObject *)0x0;
  }
  else {
    bVar2 = (TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
            naturalAligment;
    if (((((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject)) {
      FUN_?(pVVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields)._.vehicleBaseObject = pVVar1;
    bVar2 = (TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
            naturalAligment;
    if (((((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject)) {
      FUN_?(pVVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.vehicleBaseObject >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
       (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar9->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar10 != (MVLocalPlayer *)0x0)) {
    MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
              ((MVWorldObjectClient *)this,
               (pMVar10->fields)._._ActorNr_k__BackingField == (this->fields)._._._._._.ownerActorNr
               ,(MethodInfo *)0x0);
    puVar11 = (undefined8 *)
              (*(this->klass->vtable).__unknown.methodPtr)
                        (auStack_12,this,(this->klass->vtable).__unknown.method);
    uVar13 = *puVar11;
    iVar14 = *(int32_t *)(puVar11 + 1);
    (this->fields)._._VehicleEnergyContainerConfig_k__BackingField.usingEnergy = (char)uVar13;
    *(int3 *)&(this->fields)._._VehicleEnergyContainerConfig_k__BackingField.field_0x1 =
         (int3)((ulonglong)uVar13 >> 8);
    (this->fields)._._VehicleEnergyContainerConfig_k__BackingField.storage =
         (int)((ulonglong)uVar13 >> 0x20);
    (this->fields)._._VehicleEnergyContainerConfig_k__BackingField.consumption = iVar14;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

