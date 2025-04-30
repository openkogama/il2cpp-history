
/* Dictionary`2[System.Object,System.Object] GetCurrentItemState() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_GetCurrentItemState
          (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).CurrentItem;
  if (this_00 == (MVRuntimeDataVariable *)0x0) {
    func_?();
    pDVar1 = extraout_EDX;
  }
  else {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((bVar2 <= (pDVar1->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return pDVar1;
    }
  }
  func_?(pDVar1,unaff_ESI);
  pcVar3 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
               (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<VehiclePickupOwner>__
                   );
    func_?(&
                    MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                   );
    func_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_modifiers);
    func_?(&StringLiteral_isFiring);
    func_?(&StringLiteral_currentItem);
    func_?(&StringLiteral_shield);
    func_?(&StringLiteral_health);
    func_?(&StringLiteral_overrideHealth);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  if (cRam_? == '\0') {
    func_?(&
                    VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                   );
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_isDead);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar2 = (this->fields)._._._._.runtimeDataVariables;
  if (pMVar2 == (MVRuntimeDataVariables *)0x0) {
code_?:
    func_?();
    pOVar3 = extraout_ECX;
    pSVar4 = extraout_EDX;
  }
  else {
    pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                        (pMVar2,StringLiteral_isDead,0.0,1,(MethodInfo *)0x0);
    ppMVar6 = &(this->fields)._.IsVehicleDead;
    *ppMVar6 = pMVar5;
    func_?(ppMVar6,pMVar5);
    pGVar7 = (this->fields)._._._._.gameObject;
    if (pGVar7 == (GameObject *)0x0) goto code_?;
    pVVar8 = (VehicleSeatManager *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar7,
                         VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                        );
    ppVVar9 = &(this->fields)._.seatManager;
    *ppVVar9 = pVVar8;
    func_?(ppVVar9,pVVar8);
    if (*ppVVar9 == (VehicleSeatManager *)0x0) goto code_?;
    VehicleSeatManager::VehicleSeatManager_Init
              (*ppVVar9,(MVVehicleBase *)this,*ppMVar6,(MethodInfo *)0x0);
    pMVar10 = (this->fields)._._._._.group;
    if (pMVar10 != (MVGroup *)0x0) {
      pMVar11 = pMVar10->klass;
      bVar12 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      if ((bVar12 <= (pMVar11->_1).naturalAligment) &&
         ((MVWorldObjectSpawnerVehicle__Class *)(pMVar11->_1).typeHierarchy[bVar12 - 1] ==
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        (this->fields)._._IsInSpawner_k__BackingField = 1;
      }
    }
    LayerUtil::LayerUtil_SetLayerRecursively_3
              ((this->fields)._._._._.transform,StringLiteral_Default,StringLiteral_Player,
               (MethodInfo *)0x0);
    piVar13 = &(this->fields)._._._._.interactionFlags;
    *(uint *)piVar13 = (uint)*piVar13 | 0x100000;
    piVar13 = &(this->fields)._._._._.interactionFlags;
    *(uint *)piVar13 = (uint)*piVar13 | 0x200000;
    uVar14 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
    piVar13 = &(this->fields)._._._._.interactionFlags;
    *(uint *)piVar13 = (uint)*piVar13 | 0xADDR;
    worldObjectType = (this->fields)._._._._._.type;
    *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar14;
    iVar15 = (this->fields)._._._._.interactionFlags;
    puVar16 = (uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
    *puVar16 = *puVar16 | 2;
    *(int *)&(this->fields)._._._._.interactionFlags = (int)iVar15;
    if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    }
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
              RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
    if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_01,(Object *)StringLiteral_health,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar18 = CONCAT44(TypeInfo__System__Single,TVar17.m_Index);
    if (TVar17.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar19 = (float *)func_?(TVar17.m_Index);
    (this->fields).maxHealth = *pfVar19;
    this_00 = (this->fields)._._.blueprintData;
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      maxValue = (this->fields).maxHealth;
      pMVar2 = (this->fields)._._._._.runtimeDataVariables;
      (this->fields).previousHealth = maxValue;
      if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
        pMVar20 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                            (pMVar2,StringLiteral_health,0.2,0,0.0,maxValue,(MethodInfo *)0x0);
        ppMVar21 = &(this->fields).Health;
        *ppMVar21 = pMVar20;
        func_?(ppMVar21,pMVar20);
        pMVar20 = *ppMVar21;
        if (pMVar20 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          (*(code *)(pMVar20->klass->vtable).set_Value.method)
                    (pMVar20,(this->fields).maxHealth,pMVar20->klass[1]._0.image);
          pMVar2 = (this->fields)._._._._.runtimeDataVariables;
          if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
            pMVar20 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                                (pMVar2,StringLiteral_shield,0.2,0,0.0,(this->fields).maxHealth,
                                 (MethodInfo *)0x0);
            ppMVar21 = &(this->fields).shield;
            *ppMVar21 = pMVar20;
            func_?(ppMVar21,pMVar20);
            pMVar2 = (this->fields)._._._._.runtimeDataVariables;
            if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
              pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                  (pMVar2,StringLiteral_currentItem,0.0,1,(MethodInfo *)0x0);
              ppMVar6 = &(this->fields).CurrentItem;
              *ppMVar6 = pMVar5;
              func_?(ppMVar6,pMVar5);
              pMVar2 = (this->fields)._._._._.runtimeDataVariables;
              if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
                pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                    (pMVar2,StringLiteral_isFiring,0.0,0,(MethodInfo *)0x0);
                ppMVar22 = &(this->fields).IsFiring;
                *ppMVar22 = pMVar5;
                func_?(ppMVar22,pMVar5);
                pMVar2 = (this->fields)._._._._.runtimeDataVariables;
                if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
                  pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                      (pMVar2,StringLiteral_modifiers,1.0,0,(MethodInfo *)0x0);
                  ppMVar22 = &(this->fields).Modifiers;
                  *ppMVar22 = pMVar5;
                  func_?(ppMVar22,pMVar5);
                  pGVar7 = (this->fields)._._._._.gameObject;
                  if (pGVar7 != (GameObject *)0x0) {
                    this_02 = (MVPickupOwner *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_1
                                        (pGVar7,
                                         VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<VehiclePickupOwner>__
                                        );
                    pGVar7 = (this->fields)._._._._.gameObject;
                    if (pGVar7 != (GameObject *)0x0) {
                      this_03 = (Component *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentInChildren_1
                                          (pGVar7,
                                           MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                                          );
                      pMVar5 = (this->fields).IsFiring;
                      currentItemRuntimeVariable = *ppMVar6;
                      if (this_03 != (Component *)0x0) {
                        pMVar23 = (MVPickupOwner__Class *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform(this_03,(MethodInfo *)0x0);
                        if (this_02 != (MVPickupOwner *)0x0) {
                          MVPickupOwner::MVPickupOwner_Init
                                    (this_02,currentItemRuntimeVariable,pMVar5,(MethodInfo *)0x0);
                          this_02[1].klass = pMVar23;
                          func_?(this_02 + 1,pMVar23);
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
      goto code_?;
    }
    bVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__TryGetValue
                       (this_00,(Object *)StringLiteral_overrideHealth,&pOStack_1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                       );
    if ((bVar24 == 0) || (pOStack_1 == (Object *)0x0)) goto code_?;
    pOVar3 = (Object *)0x0;
    if ((Single__Class *)pOStack_1->klass == TypeInfo__System__Single) {
      pOVar3 = pOStack_1;
    }
    if (pOVar3 == (Object *)0x0) goto code_?;
    pOVar3 = pOStack_1;
    pSVar4 = TypeInfo__System__Single;
    if ((((Single__Class *)pOStack_1->klass)->_0).element_class ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar19 = (float *)func_?(pOStack_1);
      (this->fields).maxHealth = *pfVar19;
      goto code_?;
    }
  }
  uVar18 = func_?(pOVar3,pSVar4);
code_?:
  func_?(uVar18);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_OnEnterObject
               (MVSimpleOneSeatVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pIStack_1 = (pEStack_2->klass->vtable).OnExitObject.methodPtr;
    pEStack_3 = e;
    bVar4 = (*(code *)(pEStack_2->klass->vtable).OnEnterObject.method)();
    return bVar4;
  }
  uVar5 = func_?(&pEStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_OnExitObject
               (MVSimpleOneSeatVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pIStack_1 = pEStack_2->klass[1]._0.image;
    pEStack_3 = e;
    bVar4 = (*(code *)(pEStack_2->klass->vtable).OnExitObject.method)();
    return bVar4;
  }
  uVar5 = func_?(&pEStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void SetCurrentItemState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_SetCurrentItemState
               (MVSimpleOneSeatVehicle *this,Dictionary_2_System_Object_System_Object_ *aNewState,
               MethodInfo *method)

{
  pMVar1 = (this->fields).CurrentItem;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                       ((Object *)aNewState,(MethodInfo *)0x0);
    pOVar3 = (pMVar1->fields).value;
    ppOVar4 = &(pMVar1->fields).value;
    *ppOVar4 = pOVar2;
    func_?(ppOVar4,pOVar2);
    if (pOVar3 != pOVar2) {
      pMVar5 = (pMVar1->fields).OnChange;
      if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                  ((pMVar1->fields).value,(MethodInfo *)0x0);
        (*(pMVar5->fields)._._.invoke_impl)((pMVar5->fields)._._.method_code);
      }
      if (((pMVar1->fields).writeThrough != 0) &&
         (pMVar6 = (pMVar1->fields).OnWriteThrough,
         pMVar6 != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
        ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                  ((pMVar1->fields).value,(MethodInfo *)0x0);
        (*(pMVar6->fields)._._.invoke_impl)((pMVar6->fields)._._.method_code);
      }
    }
    return;
  }
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(&TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,(ObjectPrefab *)_vehiclePrefab,worldObjects,
             (MethodInfo *)0x0);
  pVVar1 = (VehicleBaseObject *)(this->fields)._._._._.component;
  if (pVVar1 == (VehicleBaseObject *)0x0) {
    (this->fields)._.vehicleBaseObject = (VehicleBaseObject *)0x0;
code_?:
    func_?();
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar2 != (MVLocalPlayer *)0x0)) {
      MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                ((MVWorldObjectClient *)this,
                 (pMVar2->fields)._._ActorNr_k__BackingField ==
                 (this->fields)._._._._._.ownerActorNr,(MethodInfo *)0x0);
      puVar3 = (undefined8 *)(*(code *)(this->klass->vtable).__unknown.method)();
      uVar4 = *puVar3;
      iVar5 = *(int32_t *)(puVar3 + 1);
      (this->fields)._._VehicleEnergyContainerConfig_k__BackingField.usingEnergy = (char)uVar4;
      *(int3 *)&(this->fields)._._VehicleEnergyContainerConfig_k__BackingField.field_0x1 =
           (int3)((ulonglong)uVar4 >> 8);
      (this->fields)._._VehicleEnergyContainerConfig_k__BackingField.storage =
           (int)((ulonglong)uVar4 >> 0x20);
      (this->fields)._._VehicleEnergyContainerConfig_k__BackingField.consumption = iVar5;
      return;
    }
  }
  else {
    bVar6 = (TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
            naturalAligment;
    if ((bVar6 <= (((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy[bVar6 - 1] ==
        (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject)) {
      (this->fields)._.vehicleBaseObject = pVVar1;
      bVar6 = (TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
              naturalAligment;
      if (((((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment < bVar6) ||
         ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy[bVar6 - 1] !=
          (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject))
      goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

