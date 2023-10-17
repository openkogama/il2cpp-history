
/* MVHoverCraft+LocalObjectsHoverCraft(MVSimpleOneSeatVehicle, SmoothCharacterController,
   SimpleVehicleMotorBase) */

void Assembly-CSharp.dll::MVHoverCraft+LocalObjectsHoverCraft::
     MVHoverCraft_LocalObjectsHoverCraft__ctor
               (MVHoverCraft_LocalObjectsHoverCraft *this,MVSimpleOneSeatVehicle *vehicleBase,
               SmoothCharacterController *smoothController,SimpleVehicleMotorBase *hoverCraftMotor,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                   );
    func_?();
    func_?(&
                    VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                   );
    func_?(&
                    VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                   );
    in_stack_1 =
         &VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                   );
    func_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&MethodInfo__PickupGUI__Enter__);
    func_?(&MethodInfo__PickupGUI__Leave__);
    func_?(&MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
    cRam_? = '\x01';
  }
  (this->fields)._._.timeBeforeUnregisterAfterDeath = 3.0;
  pLVar2 = (List_1_UnityEngine_Component_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
    (this->fields)._._.localComponents = pLVar2;
    func_?(&(this->fields)._._.localComponents,pLVar2);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
    if ((vehicleBase != (MVSimpleOneSeatVehicle *)0x0) &&
       (pMVar3 = (vehicleBase->fields).Health, pMVar3 != (MVRuntimeDataVariableClampedFloat *)0x0))
    {
      pMVar4 = (pMVar3->fields)._._.OnChange;
      this_02 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      if (this_02 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
                   (MethodInfo *)0x0);
        pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar4,(Delegate *)this_02,(MethodInfo *)0x0);
        uVar6 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar5);
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar3->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        }
        else {
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar4 = pMVar5;
          }
          if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          (pMVar3->fields)._._.OnChange = pMVar4;
          uVar6 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar5);
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar4 = pMVar5;
          }
          if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        }
        func_?(&(pMVar3->fields)._._.OnChange,pMVar4);
        this_00 = (vehicleBase->fields)._._._._.gameObject;
        if (this_00 != (GameObject *)0x0) {
          item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (this_00,
                            VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                           );
          if (item != (Object *)0x0) {
            (*(code *)item->klass[1]._0.properties)
                      (item,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,0,
                       (vehicleBase->fields).shield,0,item->klass[1]._0.methods);
            if (hoverCraftMotor != (SimpleVehicleMotorBase *)0x0) {
              uVar6._0_1_ = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.
                             usingEnergy;
              uVar6._1_3_ = *(undefined3 *)
                              &(vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField
                               .field_0x1;
              uVar6._4_4_ = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.
                             storage;
              (*(hoverCraftMotor->klass->vtable).Init.methodPtr)
                        (hoverCraftMotor,smoothController,item,uVar6,
                         (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.
                         consumption,(hoverCraftMotor->klass->vtable).Init.method);
              pAVar7 = (this->fields)._._.onEnter;
              pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar8,(Object *)hoverCraftMotor,
                           (hoverCraftMotor->klass->vtable).OnLocalVehicleEnter.method,
                           (MethodInfo *)0x0);
                pAVar9 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
                uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                pAVar7 = (Action *)0x0;
                if (pAVar9 == (Action *)0x0) {
                  (this->fields)._._.onEnter = (Action *)0x0;
                }
                else {
                  if (pAVar9->klass == TypeInfo__System__Action) {
                    pAVar7 = pAVar9;
                  }
                  if (pAVar7 == (Action *)0x0) goto code_?;
                  (this->fields)._._.onEnter = pAVar7;
                  uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                  pAVar7 = (Action *)0x0;
                  if (pAVar9->klass == TypeInfo__System__Action) {
                    pAVar7 = pAVar9;
                  }
                  if (pAVar7 == (Action *)0x0) goto code_?;
                }
                func_?(&(this->fields)._._.onEnter,pAVar7);
                pAVar7 = (this->fields)._._.onLeave;
                pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar8,(Object *)hoverCraftMotor,
                             (hoverCraftMotor->klass->vtable).OnLocalVehicleLeave.method,
                             (MethodInfo *)0x0);
                  pAVar9 = (Action *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
                  uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                  pAVar7 = (Action *)0x0;
                  if (pAVar9 == (Action *)0x0) {
                    (this->fields)._._.onLeave = (Action *)0x0;
                  }
                  else {
                    if (pAVar9->klass == TypeInfo__System__Action) {
                      pAVar7 = pAVar9;
                    }
                    if (pAVar7 == (Action *)0x0) goto code_?;
                    (this->fields)._._.onLeave = pAVar7;
                    uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                    pAVar7 = (Action *)0x0;
                    if (pAVar9->klass == TypeInfo__System__Action) {
                      pAVar7 = pAVar9;
                    }
                    if (pAVar7 == (Action *)0x0) goto code_?;
                  }
                  func_?(&(this->fields)._._.onLeave,pAVar7);
                  pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_AddComponent_1
                                     (this_00,
                                      VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                                     );
                  pOVar11 = (Object__Class *)(vehicleBase->fields).CurrentItem;
                  if (pOVar10 != (Object *)0x0) {
                    pOVar10[2].monitor = (MonitorData *)item;
                    func_?(&pOVar10[2].monitor,item);
                    pOVar10[3].klass = pOVar11;
                    func_?(pOVar10 + 3);
                    this_01 = (vehicleBase->fields)._._._._.gameObject;
                    if (this_01 != (GameObject *)0x0) {
                      pVVar12 = (VehiclePickupOwner *)
                               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_GetComponent_1
                                         (this_01,
                                          VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                                         );
                      (this->fields)._.pickupOwner = pVVar12;
                      func_?(&(this->fields)._.pickupOwner,pVVar12);
                      pVVar12 = (this->fields)._.pickupOwner;
                      if (pVVar12 != (VehiclePickupOwner *)0x0) {
                        (pVVar12->fields)._._IsLocal_k__BackingField = 1;
                        pAVar7 = (this->fields)._._.onDestroy;
                        pVVar12 = (this->fields)._.pickupOwner;
                        pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                                 func_?(TypeInfo__System__Action);
                        if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                          NavMesh_OnNavMeshPreUpdate__ctor
                                    (pNVar8,(Object *)pVVar12,
                                     MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,
                                     (MethodInfo *)0x0);
                          pAVar9 = (Action *)
                                   mscorlib.dll::System::Delegate::Delegate_Combine
                                             ((Delegate *)pAVar7,(Delegate *)pNVar8,
                                              (MethodInfo *)0x0);
                          uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                          pAVar7 = (Action *)0x0;
                          if (pAVar9 == (Action *)0x0) {
                            (this->fields)._._.onDestroy = (Action *)0x0;
                          }
                          else {
                            if (pAVar9->klass == TypeInfo__System__Action) {
                              pAVar7 = pAVar9;
                            }
                            if (pAVar7 == (Action *)0x0) goto code_?;
                            (this->fields)._._.onDestroy = pAVar7;
                            uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                            pAVar7 = (Action *)0x0;
                            if (pAVar9->klass == TypeInfo__System__Action) {
                              pAVar7 = pAVar9;
                            }
                            if (pAVar7 == (Action *)0x0) goto code_?;
                          }
                          func_?(&this->fields,pAVar7);
                          pPVar13 = (PickupGUI *)
                                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_AddComponent_1
                                             (this_00,
                                              PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                             );
                          (this->fields)._.pickupGUI = pPVar13;
                          func_?(&(this->fields)._.pickupGUI,pPVar13);
                          pPVar13 = (this->fields)._.pickupGUI;
                          if (pPVar13 != (PickupGUI *)0x0) {
                            PickupGUI::PickupGUI_Initialize
                                      (pPVar13,(vehicleBase->fields)._._._._._.id,
                                       (MVPickupOwner *)(this->fields)._.pickupOwner,
                                       (MethodInfo *)0x0);
                            pAVar7 = (this->fields)._._.onEnter;
                            pPVar13 = (this->fields)._.pickupGUI;
                            pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                                     func_?(TypeInfo__System__Action);
                            if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate
                              ::NavMesh_OnNavMeshPreUpdate__ctor
                                        (pNVar8,(Object *)pPVar13,MethodInfo__PickupGUI__Enter__,
                                         (MethodInfo *)0x0);
                              pAVar9 = (Action *)
                                       mscorlib.dll::System::Delegate::Delegate_Combine
                                                 ((Delegate *)pAVar7,(Delegate *)pNVar8,
                                                  (MethodInfo *)0x0);
                              uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                              pAVar7 = (Action *)0x0;
                              if (pAVar9 == (Action *)0x0) {
                                (this->fields)._._.onEnter = (Action *)0x0;
                              }
                              else {
                                if (pAVar9->klass == TypeInfo__System__Action) {
                                  pAVar7 = pAVar9;
                                }
                                if (pAVar7 == (Action *)0x0) goto code_?;
                                (this->fields)._._.onEnter = pAVar7;
                                uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                                pAVar7 = (Action *)0x0;
                                if (pAVar9->klass == TypeInfo__System__Action) {
                                  pAVar7 = pAVar9;
                                }
                                if (pAVar7 == (Action *)0x0) goto code_?;
                              }
                              func_?(&(this->fields)._._.onEnter,pAVar7);
                              pAVar7 = (this->fields)._._.onLeave;
                              pOVar10 = (Object *)&UNK_?;
                              pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                                       func_?(TypeInfo__System__Action);
                              if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                          (pNVar8,pOVar10,MethodInfo__PickupGUI__Leave__,
                                           (MethodInfo *)0x0);
                                pAVar9 = (Action *)
                                         mscorlib.dll::System::Delegate::Delegate_Combine
                                                   ((Delegate *)pAVar7,(Delegate *)pNVar8,
                                                    (MethodInfo *)0x0);
                                uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                                pAVar7 = (Action *)0x0;
                                if (pAVar9 == (Action *)0x0) {
                                  (this->fields)._._.onLeave = (Action *)0x0;
                                }
                                else {
                                  if (pAVar9->klass == TypeInfo__System__Action) {
                                    pAVar7 = pAVar9;
                                  }
                                  if (pAVar7 == (Action *)0x0) goto code_?;
                                  (this->fields)._._.onLeave = pAVar7;
                                  uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                                  pAVar7 = (Action *)0x0;
                                  if (pAVar9->klass == TypeInfo__System__Action) {
                                    pAVar7 = pAVar9;
                                  }
                                  if (pAVar7 == (Action *)0x0) goto code_?;
                                }
                                func_?(&(this->fields)._._.onLeave);
                                pMVar14 = (MVTriggerHandler *)
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_AddComponent_1
                                                    (this_00,
                                                  MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                                  );
                                (this->fields)._.triggerHandler = pMVar14;
                                func_?(&(this->fields)._.triggerHandler,pMVar14);
                                pLVar2 = (this->fields)._._.localComponents;
                                if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]
                                  ::List_1_System_Object__Add
                                            ((List_1_System_Object_ *)pLVar2,item,
                                             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                            );
                                  pLVar2 = (this->fields)._._.localComponents;
                                  if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                    mscorlib.dll::System::Collections::Generic::List`1[System::
                                    Object]::List_1_System_Object__Add
                                              ((List_1_System_Object_ *)pLVar2,
                                               (Object *)smoothController,
                                               MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                              );
                                    pLVar2 = (this->fields)._._.localComponents;
                                    if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                      mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Object]::List_1_System_Object__Add
                                                ((List_1_System_Object_ *)pLVar2,
                                                 (Object *)hoverCraftMotor,
                                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                );
                                      pLVar2 = (this->fields)._._.localComponents;
                                      if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                        mscorlib.dll::System::Collections::Generic::List`1[System::
                                        Object]::List_1_System_Object__Add
                                                  ((List_1_System_Object_ *)pLVar2,(Object *)pAVar7
                                                   ,
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                  );
                                        pLVar2 = (this->fields)._._.localComponents;
                                        if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                          mscorlib.dll::System::Collections::Generic::List`1[System
                                          ::Object]::List_1_System_Object__Add
                                                    ((List_1_System_Object_ *)pLVar2,
                                                     (Object *)(this->fields)._.triggerHandler,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                  );
                                          (this->fields)._.vehicleMotor = hoverCraftMotor;
                                          func_?(&(this->fields)._.vehicleMotor,
                                                          hoverCraftMotor);
                                          (this->fields)._.owner = vehicleBase;
                                          func_?(&(this->fields)._.owner,vehicleBase);
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
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

