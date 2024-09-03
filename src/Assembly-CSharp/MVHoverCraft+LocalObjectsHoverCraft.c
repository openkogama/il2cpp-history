
/* MVHoverCraft+LocalObjectsHoverCraft(MVSimpleOneSeatVehicle, SmoothCharacterController,
   SimpleVehicleMotorBase) */

void Assembly-CSharp.dll::MVHoverCraft+LocalObjectsHoverCraft::
     MVHoverCraft_LocalObjectsHoverCraft__ctor
               (MVHoverCraft_LocalObjectsHoverCraft *this,MVSimpleOneSeatVehicle *vehicleBase,
               SmoothCharacterController *smoothController,SimpleVehicleMotorBase *hoverCraftMotor,
               MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                   );
    func_?(&PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__);
    func_?(&
                    VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                   );
    func_?(&
                    VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                   );
    func_?(&
                    VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                   );
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
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__,
                    uVar1);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
    cRam_? = '\x01';
  }
  (this->fields)._._.timeBeforeUnregisterAfterDeath = 3.0;
  pLVar2 = (List_1_UnityEngine_Component_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
  method_00 = (MethodInfo *)&(this->fields)._._.localComponents;
  (this->fields)._._.localComponents = pLVar2;
  func_?(method_00,pLVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (vehicleBase == (MVSimpleOneSeatVehicle *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar3 = (vehicleBase->fields).Health;
    if (pMVar3 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    pMVar4 = (pMVar3->fields)._._.OnChange;
    this_02 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_02,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar3->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      this_00 = pMVar4[2].fields._._.method_ptr;
      if (this_00 == (GameObject *)0x0) goto code_?;
      item = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                       );
      if (item == (Object__Class *)0x0) goto code_?;
      pOVar6 = (Object__Class *)(item->_0).image;
      (*(code *)pOVar6[1]._0.methods)
                (item,pMVar4[4].fields._._.extra_arg,pMVar4[4].fields._._.delegate_trampoline,0,
                 pMVar4[4].fields._._.interp_invoke_impl,0,pOVar6[1]._0.nestedTypes);
      if (hoverCraftMotor == (SimpleVehicleMotorBase *)0x0) goto code_?;
      uVar1._0_4_ = pMVar4[4].fields._._.invoke_impl;
      uVar1._4_4_ = pMVar4[4].fields._._.m_target;
      (*(code *)(hoverCraftMotor->klass->vtable).Init.method)
                (hoverCraftMotor,smoothController,item,uVar1,pMVar4[4].fields._._.method,
                 (hoverCraftMotor->klass->vtable).OnLocalVehicleLeave.methodPtr);
      pAVar7 = (this->fields)._._.onEnter;
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar8,(Object *)hoverCraftMotor,
                 (hoverCraftMotor->klass->vtable).__unknown_3.methodPtr,(MethodInfo *)0x0);
      pAVar7 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
      if (pAVar7 == (Action *)0x0) {
        (this->fields)._._.onEnter = (Action *)0x0;
code_?:
        func_?();
        pAVar7 = (this->fields)._._.onLeave;
        pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar8,(Object *)hoverCraftMotor,
                   (hoverCraftMotor->klass->vtable).OnLocalVehicleEnter.methodPtr,(MethodInfo *)0x0)
        ;
        pAVar9 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
        pAVar7 = (Action *)0x0;
        if (pAVar9 == (Action *)0x0) {
          (this->fields)._._.onLeave = (Action *)0x0;
code_?:
          func_?();
          pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (this_00,
                               VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                              );
          pMVar11 = pAVar7[4].fields._._.method_code;
          if (pOVar10 != (Object *)0x0) {
            pOVar10[3].klass = item;
            func_?(pOVar10 + 3,item);
            pOVar10[3].monitor = (MonitorData *)pMVar11;
            func_?(&pOVar10[3].monitor);
            this_01 = pAVar7[2].fields._._.method_ptr;
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
                object = (this->fields)._.vehicleMotor;
                pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar8,(Object *)object,
                           MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,
                           (MethodInfo *)0x0);
                pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
                pDVar14 = (Delegate *)0x0;
                if (pDVar13 != (Delegate *)0x0) {
                  if ((Action__Class *)pDVar13->klass == TypeInfo__System__Action) {
                    pDVar14 = pDVar13;
                  }
                  if (pDVar14 != (Delegate *)0x0) {
                    (this->fields)._._.timeBeforeUnregisterAfterDeath = (float)pDVar14;
                    pDVar14 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar13->klass == TypeInfo__System__Action) {
                      pDVar14 = pDVar13;
                    }
                    if (pDVar14 != (Delegate *)0x0) goto code_?;
                  }
                  goto code_?;
                }
                (this->fields)._._.timeBeforeUnregisterAfterDeath = 0.0;
code_?:
                func_?();
                pMVar15 = (MVSimpleOneSeatVehicle *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (this_00,
                                     PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                    );
                (this->fields)._.owner = pMVar15;
                func_?(&(this->fields)._.owner);
                pMVar15 = (this->fields)._.owner;
                if (pMVar15 != (MVSimpleOneSeatVehicle *)0x0) {
                  PickupGUI::PickupGUI_Initialize
                            ((PickupGUI *)pMVar15,(int32_t)(pDVar14->fields).method_ptr,
                             (MVPickupOwner *)(this->fields)._.vehicleMotor,(MethodInfo *)0x0);
                  pVVar12 = (this->fields)._.pickupOwner;
                  pMVar15 = (this->fields)._.owner;
                  item_00 = TypeInfo__System__Action;
                  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar8,(Object *)pMVar15,MethodInfo__PickupGUI__Enter__,
                             (MethodInfo *)0x0);
                  pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pVVar12,(Delegate *)pNVar8,(MethodInfo *)0x0);
                  if (pDVar14 == (Delegate *)0x0) {
                    (this->fields)._.triggerHandler = (MVTriggerHandler *)0x0;
code_?:
                    func_?();
                    pDVar14 = (Delegate *)(this->fields)._.pickupGUI;
                    pOVar10 = (Object *)this[1].monitor;
                    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar8,pOVar10,MethodInfo__PickupGUI__Leave__,(MethodInfo *)0x0);
                    pMVar16 = (MVHoverCraft_LocalObjectsHoverCraft__Class *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        (pDVar14,(Delegate *)pNVar8,(MethodInfo *)0x0);
                    pMVar17 = (MVHoverCraft_LocalObjectsHoverCraft__Class *)0x0;
                    if (pMVar16 == (MVHoverCraft_LocalObjectsHoverCraft__Class *)0x0) {
                      this[1].klass = (MVHoverCraft_LocalObjectsHoverCraft__Class *)0x0;
code_?:
                      func_?();
                      pLVar2 = (List_1_UnityEngine_Component_ *)
                               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_AddComponent_1
                                         ((GameObject *)&UNK_?,
                                          MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                         );
                      this[1].fields._._.localComponents = pLVar2;
                      func_?(&this[1].fields._._.localComponents);
                      pAVar7 = this[1].fields._._.onLeave;
                      if (pAVar7 != (Action *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  ((List_1_System_Object_ *)pAVar7,(Object *)item,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                  );
                        pAVar7 = this[1].fields._._.onLeave;
                        if (pAVar7 != (Action *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__Add
                                    ((List_1_System_Object_ *)pAVar7,(Object *)smoothController,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                    );
                          pAVar7 = this[1].fields._._.onLeave;
                          if (pAVar7 != (Action *)0x0) {
                            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                            List_1_System_Object__Add
                                      ((List_1_System_Object_ *)pAVar7,(Object *)hoverCraftMotor,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                      );
                            pAVar7 = this[1].fields._._.onLeave;
                            if (pAVar7 != (Action *)0x0) {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                              List_1_System_Object__Add
                                        ((List_1_System_Object_ *)pAVar7,(Object *)item_00,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                        );
                              pAVar7 = this[1].fields._._.onLeave;
                              if (pAVar7 != (Action *)0x0) {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                                List_1_System_Object__Add
                                          ((List_1_System_Object_ *)pAVar7,
                                           (Object *)this[1].fields._._.localComponents,
                                           MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                          );
                                this[1].fields._.pickupOwner = (VehiclePickupOwner *)hoverCraftMotor
                                ;
                                func_?(&this[1].fields._.pickupOwner,hoverCraftMotor);
                                this[1].fields._.pickupGUI = (PickupGUI *)pMVar17;
                                func_?(&this[1].fields._.pickupGUI,pMVar17);
                                return;
                              }
                            }
                          }
                        }
                      }
                      goto code_?;
                    }
                    if ((Action__Class *)(pMVar16->_0).image == TypeInfo__System__Action) {
                      pMVar17 = pMVar16;
                    }
                    if (pMVar17 != (MVHoverCraft_LocalObjectsHoverCraft__Class *)0x0) {
                      this[1].klass = pMVar17;
                      pMVar17 = (MVHoverCraft_LocalObjectsHoverCraft__Class *)0x0;
                      if ((Action__Class *)(pMVar16->_0).image == TypeInfo__System__Action) {
                        pMVar17 = pMVar16;
                      }
                      if (pMVar17 != (MVHoverCraft_LocalObjectsHoverCraft__Class *)0x0)
                      goto code_?;
                    }
                  }
                  else {
                    pDVar13 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
                      pDVar13 = pDVar14;
                    }
                    if (pDVar13 != (Delegate *)0x0) {
                      (this->fields)._.triggerHandler = (MVTriggerHandler *)pDVar13;
                      pDVar13 = (Delegate *)0x0;
                      if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
                        pDVar13 = pDVar14;
                      }
                      if (pDVar13 != (Delegate *)0x0) goto code_?;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
          goto code_?;
        }
        if (pAVar9->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar9;
        }
        if (pAVar7 != (Action *)0x0) {
          (this->fields)._._.onLeave = pAVar7;
          pAVar7 = (Action *)0x0;
          if (pAVar9->klass == TypeInfo__System__Action) {
            pAVar7 = pAVar9;
          }
          if (pAVar7 != (Action *)0x0) goto code_?;
        }
      }
      else {
        pAVar9 = (Action *)0x0;
        if (pAVar7->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar7;
        }
        if (pAVar9 != (Action *)0x0) {
          (this->fields)._._.onEnter = pAVar9;
          pAVar9 = (Action *)0x0;
          if (pAVar7->klass == TypeInfo__System__Action) {
            pAVar9 = pAVar7;
          }
          if (pAVar9 != (Action *)0x0) goto code_?;
        }
      }
      goto code_?;
    }
    if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar4 = pMVar5;
    }
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar3->fields)._._.OnChange = pMVar4;
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar4 = pMVar5;
    }
    if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

