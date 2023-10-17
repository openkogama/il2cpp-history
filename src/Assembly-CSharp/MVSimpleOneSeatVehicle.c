
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
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (pDVar1->klass->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return pDVar1;
    }
  }
  func_?(pDVar1,unaff_ESI);
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
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
    (this->fields)._.IsVehicleDead = pMVar5;
    func_?(&(this->fields)._.IsVehicleDead,pMVar5);
    pGVar6 = (this->fields)._._._._.gameObject;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    pVVar7 = (VehicleSeatManager *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar6,
                         VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                        );
    (this->fields)._.seatManager = pVVar7;
    func_?(&(this->fields)._.seatManager,pVVar7);
    pVVar7 = (this->fields)._.seatManager;
    if (pVVar7 == (VehicleSeatManager *)0x0) goto code_?;
    VehicleSeatManager::VehicleSeatManager_Init
              (pVVar7,(MVVehicleBase *)this,(this->fields)._.IsVehicleDead,(MethodInfo *)0x0);
    pMVar8 = (this->fields)._._._._.group;
    if (pMVar8 != (MVGroup *)0x0) {
      pMVar9 = pMVar8->klass;
      if (((TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth <=
           (pMVar9->_1).typeHierarchyDepth) &&
         ((MVWorldObjectSpawnerVehicle__Class *)
          (pMVar9->_1).typeHierarchy
          [(TypeInfo__MVWorldObjectSpawnerVehicle->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        (this->fields)._._IsInSpawner_k__BackingField = 1;
      }
    }
    LayerUtil::LayerUtil_SetLayerRecursively_3
              ((this->fields)._._._._.transform,StringLiteral_Default,StringLiteral_Player,
               (MethodInfo *)0x0);
    iVar10 = (this->fields)._._._._.interactionFlags;
    worldObjectType = (this->fields)._._._._._.type;
    *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
    puVar11 = (uint *)((int)&(this->fields)._._._._.interactionFlags + 4);
    *puVar11 = *puVar11 | 2;
    *(uint *)&(this->fields)._._._._.interactionFlags = (uint)iVar10 | 0xADDR;
    if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    }
    pDVar12 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
              RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
    if (pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar12,(Object *)StringLiteral_health,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar13 = CONCAT44(TypeInfo__System__Single,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar14 = (float *)func_?(pOVar3);
    pDVar12 = (this->fields)._._.blueprintData;
    (this->fields).maxHealth = *pfVar14;
    if (pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      (this->fields).previousHealth = (this->fields).maxHealth;
      pMVar2 = (this->fields)._._._._.runtimeDataVariables;
      if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
        pMVar15 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                            (pMVar2,StringLiteral_health,0.2,0,0.0,(this->fields).maxHealth,
                             (MethodInfo *)0x0);
        (this->fields).Health = pMVar15;
        func_?(&(this->fields).Health,pMVar15);
        pMVar15 = (this->fields).Health;
        if (pMVar15 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          (*(pMVar15->klass->vtable).set_Value.methodPtr)
                    (pMVar15,(this->fields).maxHealth,(pMVar15->klass->vtable).set_Value.method);
          pMVar2 = (this->fields)._._._._.runtimeDataVariables;
          if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
            pMVar15 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                                (pMVar2,StringLiteral_shield,0.2,0,0.0,(this->fields).maxHealth,
                                 (MethodInfo *)0x0);
            (this->fields).shield = pMVar15;
            func_?(&(this->fields).shield,pMVar15);
            pMVar2 = (this->fields)._._._._.runtimeDataVariables;
            if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
              pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                 (pMVar2,StringLiteral_currentItem,0.0,1,(MethodInfo *)0x0);
              (this->fields).CurrentItem = pMVar5;
              func_?(&(this->fields).CurrentItem,pMVar5);
              pMVar2 = (this->fields)._._._._.runtimeDataVariables;
              if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
                pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                   (pMVar2,StringLiteral_isFiring,0.0,0,(MethodInfo *)0x0);
                (this->fields).IsFiring = pMVar5;
                func_?(&(this->fields).IsFiring,pMVar5);
                pMVar2 = (this->fields)._._._._.runtimeDataVariables;
                if (pMVar2 != (MVRuntimeDataVariables *)0x0) {
                  pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                     (pMVar2,StringLiteral_modifiers,1.0,0,(MethodInfo *)0x0);
                  (this->fields).Modifiers = pMVar5;
                  func_?(&(this->fields).Modifiers,pMVar5);
                  pGVar6 = (this->fields)._._._._.gameObject;
                  if (pGVar6 != (GameObject *)0x0) {
                    this_00 = (MVPickupOwner *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_1
                                        (pGVar6,
                                         VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<VehiclePickupOwner>__
                                        );
                    pGVar6 = (this->fields)._._._._.gameObject;
                    if (pGVar6 != (GameObject *)0x0) {
                      this_01 = (Component *)
                                Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                          ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar6,
                                           MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                                          );
                      pMVar5 = (this->fields).IsFiring;
                      currentItemRuntimeVariable = (this->fields).CurrentItem;
                      if (this_01 != (Component *)0x0) {
                        pMVar16 = (MVPickupOwner__Class *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform(this_01,(MethodInfo *)0x0);
                        if (this_00 != (MVPickupOwner *)0x0) {
                          MVPickupOwner::MVPickupOwner_Init
                                    (this_00,currentItemRuntimeVariable,pMVar5,(MethodInfo *)0x0);
                          this_00[1].klass = pMVar16;
                          func_?(this_00 + 1,pMVar16);
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
    bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((this->fields)._._.blueprintData,(Object *)StringLiteral_overrideHealth,
                       &pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar17 == 0) || (pOStack_1 == (Object *)0x0)) goto code_?;
    pOVar3 = (Object *)0x0;
    if ((Single__Class *)pOStack_1->klass == TypeInfo__System__Single) {
      pOVar3 = pOStack_1;
    }
    if (pOVar3 == (Object *)0x0) goto code_?;
    pOVar3 = pOStack_1;
    pSVar4 = TypeInfo__System__Single;
    if ((pOStack_1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar14 = (float *)func_?(pOStack_1);
      (this->fields).maxHealth = *pfVar14;
      goto code_?;
    }
  }
  uVar13 = func_?(pOVar3,pSVar4);
code_?:
  func_?(uVar13);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_OnEnterObject
               (MVSimpleOneSeatVehicle *this,EditorStateMachine *e,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pMStack_1 = (pEStack_2->klass->vtable).OnEnterObject.method;
    pEStack_3 = e;
    bVar4 = (*(pEStack_2->klass->vtable).OnEnterObject.methodPtr)();
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pMStack_1 = (pEStack_2->klass->vtable).OnExitObject.method;
    pEStack_3 = e;
    bVar4 = (*(pEStack_2->klass->vtable).OnExitObject.methodPtr)();
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
    (pMVar1->fields).value = pOVar2;
    func_?(&(pMVar1->fields).value,pOVar2);
    if (pOVar3 != pOVar2) {
      if ((pMVar1->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        pMVar4 = (pMVar1->fields).OnChange;
        ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                  ((pMVar1->fields).value,(MethodInfo *)0x0);
        (*(pMVar4->fields)._._.invoke_impl)((pMVar4->fields)._._.method_code);
      }
      if (((pMVar1->fields).writeThrough != 0) &&
         ((pMVar1->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
        pMVar5 = (pMVar1->fields).OnWriteThrough;
        ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                  ((pMVar1->fields).value,(MethodInfo *)0x0);
        (*(pMVar5->fields)._._.invoke_impl)((pMVar5->fields)._._.method_code);
      }
    }
    return;
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    if (this_00 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                  ((MVWorldObjectClient *)this,
                   (pMVar2->fields)._._ActorNr_k__BackingField ==
                   (this->fields)._._._._._.ownerActorNr,(MethodInfo *)0x0);
        puVar3 = (undefined8 *)(*(this->klass->vtable).__unknown.methodPtr)();
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
  }
  else {
    if (((TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
         typeHierarchyDepth <= (((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchyDepth) &&
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy
        [(TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
         typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject)) {
      (this->fields)._.vehicleBaseObject = pVVar1;
      if (((TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
           typeHierarchyDepth <= (((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchyDepth) &&
         ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
           typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject))
      goto code_?;
    }
    func_?();
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVRuntimeDataVariableClampedFloat get_Shield() */

MVRuntimeDataVariableClampedFloat *
Assembly-CSharp.dll::MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_get_Shield
          (MVSimpleOneSeatVehicle *this,MethodInfo *method)

{
  return (this->fields).shield;
}

