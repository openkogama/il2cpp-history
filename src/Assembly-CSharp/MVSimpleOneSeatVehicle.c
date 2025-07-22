
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
  }
  else {
    unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)
                MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= (unaff_ESI->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_ESI->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return unaff_ESI;
    }
  }
  func_?(unaff_ESI,unaff_EDI);
  pcVar1 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar1)();
  return pDVar2;
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
  MVVehicleBase::MVVehicleBase_Initialize((MVVehicleBase *)this,(MethodInfo *)0x0);
  worldObjectType = (this->fields)._._._._._.type;
  if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
            RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar1 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_health,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar3 = (float *)func_?();
    pDVar4 = (this->fields)._._.blueprintData;
    (this->fields).maxHealth = *pfVar3;
    if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      (this->fields).previousHealth = (this->fields).maxHealth;
      pMVar5 = (this->fields)._._._._.runtimeDataVariables;
      if (pMVar5 != (MVRuntimeDataVariables *)0x0) {
        pMVar6 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                           (pMVar5,StringLiteral_health,0.2,0,0.0,(this->fields).maxHealth,
                            (MethodInfo *)0x0);
        (this->fields).Health = pMVar6;
        func_?();
        pMVar6 = (this->fields).Health;
        if (pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          (*(code *)(pMVar6->klass->vtable).set_Value.method)();
          pMVar5 = (this->fields)._._._._.runtimeDataVariables;
          if (pMVar5 != (MVRuntimeDataVariables *)0x0) {
            pMVar6 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                               (pMVar5,StringLiteral_shield,0.2,0,0.0,(this->fields).maxHealth,
                                (MethodInfo *)0x0);
            (this->fields).shield = pMVar6;
            func_?();
            pMVar5 = (this->fields)._._._._.runtimeDataVariables;
            if (pMVar5 != (MVRuntimeDataVariables *)0x0) {
              pMVar7 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                  (pMVar5,StringLiteral_currentItem,0.0,1,(MethodInfo *)0x0);
              (this->fields).CurrentItem = pMVar7;
              func_?();
              pMVar5 = (this->fields)._._._._.runtimeDataVariables;
              if (pMVar5 != (MVRuntimeDataVariables *)0x0) {
                pMVar7 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                    (pMVar5,StringLiteral_isFiring,0.0,0,(MethodInfo *)0x0);
                (this->fields).IsFiring = pMVar7;
                func_?();
                pMVar5 = (this->fields)._._._._.runtimeDataVariables;
                if (pMVar5 != (MVRuntimeDataVariables *)0x0) {
                  pMVar7 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                      (pMVar5,StringLiteral_modifiers,1.0,0,(MethodInfo *)0x0);
                  (this->fields).Modifiers = pMVar7;
                  func_?();
                  pGVar8 = (this->fields)._._._._.gameObject;
                  if (pGVar8 != (GameObject *)0x0) {
                    this_01 = (MVPickupOwner *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_1
                                        (pGVar8,
                                         VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<VehiclePickupOwner>__
                                        );
                    pGVar8 = (this->fields)._._._._.gameObject;
                    if (pGVar8 != (GameObject *)0x0) {
                      this_02 = (Component *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentInChildren_1
                                          (pGVar8,
                                           MVPickupMountPoint_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupMountPoint>__
                                          );
                      pMVar7 = (this->fields).CurrentItem;
                      if (this_02 != (Component *)0x0) {
                        pMVar9 = (MVPickupOwner__Class *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform(this_02,(MethodInfo *)0x0);
                        if (this_01 != (MVPickupOwner *)0x0) {
                          MVPickupOwner::MVPickupOwner_Init
                                    (this_01,pMVar7,(MVRuntimeDataVariable *)0x0,(MethodInfo *)0x0)
                          ;
                          this_01[1].klass = pMVar9;
                          func_?();
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
    bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((this->fields)._._.blueprintData,(Object *)StringLiteral_overrideHealth,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar10 == 0) || (pMVar1 == (MethodInfo *)0x0)) goto code_?;
    pMVar11 = (MethodInfo *)0x0;
    if ((Single__Class *)pMVar1->methodPointer == TypeInfo__System__Single) {
      pMVar11 = pMVar1;
    }
    if (pMVar11 == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(pMVar1->methodPointer + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar3 = (float *)func_?();
      (this->fields).maxHealth = *pfVar3;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  }
  else {
    if (((TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).naturalAligment
         <= (((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy
        [(TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).naturalAligment -
         1] == (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject))
    {
      (this->fields)._.vehicleBaseObject = pVVar1;
      if (((TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).naturalAligment
           <= (((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).naturalAligment
           - 1] == (Il2CppClass *)
                   TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject))
      goto code_?;
    }
    func_?();
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

