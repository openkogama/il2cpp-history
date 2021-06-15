
/* MVHoverCraft+LocalObjectsHoverCraft(MVSimpleOneSeatVehicle, SmoothCharacterController,
   SimpleVehicleMotorBase) */

void Assembly-CSharp.dll::MVHoverCraft+LocalObjectsHoverCraft::
     MVHoverCraft_LocalObjectsHoverCraft__ctor
               (MVHoverCraft_LocalObjectsHoverCraft *this,MVSimpleOneSeatVehicle *vehicleBase,
               SmoothCharacterController *smoothController,SimpleVehicleMotorBase *hoverCraftMotor,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  if (vehicleBase != (MVSimpleOneSeatVehicle *)0x0) {
    pMVar1 = (vehicleBase->fields).Health;
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      a = (pMVar1->fields)._._.OnChange;
      b = (Delegate *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      pMVar2 = MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_;
      (b->fields).method_ptr =
           MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_->
           methodPointer;
      (b->fields).method = pMVar2;
      (b->fields).m_target = (Object *)this;
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
      pAVar4 = (Action *)0x0;
      if (pAVar3 != (Action *)0x0) {
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pAVar3->klass ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pAVar4 = pAVar3;
        }
        pAVar5 = (Action__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
        if (pAVar4 == (Action *)0x0) goto code_?;
      }
      (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pAVar4;
      this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)vehicleBase,(MethodInfo *)0x0);
      if (this_00 != (CelestialParam *)0x0) {
        interactableLocal =
             (MVInteractableBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       ((GameObject *)this_00,
                        VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                       );
        if (interactableLocal != (MVInteractableBase *)0x0) {
          (*interactableLocal->klass[1]._0.gc_desc)
                    (interactableLocal,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,
                     0,(vehicleBase->fields).shield,0,interactableLocal->klass[1]._0.name);
          if (hoverCraftMotor != (SimpleVehicleMotorBase *)0x0) {
            (*(code *)(hoverCraftMotor->klass->vtable).Init.method)
                      (hoverCraftMotor,smoothController,interactableLocal,
                       (hoverCraftMotor->klass->vtable).OnLocalVehicleLeave.methodPtr);
            pAVar4 = (this->fields)._._.onLeave;
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)hoverCraftMotor,
                       (hoverCraftMotor->klass->vtable).__unknown_5.methodPtr,(MethodInfo *)0x0);
            pAVar3 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar4,(Delegate *)pUVar6,(MethodInfo *)0x0);
            pAVar4 = (Action *)0x0;
            if (pAVar3 != (Action *)0x0) {
              if (pAVar3->klass == TypeInfo__System__Action) {
                pAVar4 = pAVar3;
              }
              pAVar5 = TypeInfo__System__Action;
              if (pAVar4 == (Action *)0x0) goto code_?;
            }
            (this->fields)._._.onLeave = pAVar4;
            this_01 = (VehicleEquipable *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_AddComponent_85
                                ((GameObject *)this_00,
                                 VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                                );
            if (this_01 != (VehicleEquipable *)0x0) {
              VehicleEquipable::VehicleEquipable_Init
                        (this_01,interactableLocal,(vehicleBase->fields).CurrentItem,
                         (MethodInfo *)0x0);
              this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                  ((DayNightCycle *)vehicleBase,(MethodInfo *)0x0);
              if (this_02 != (CelestialParam *)0x0) {
                pVVar7 = (VehiclePickupOwner *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_47
                                   ((GameObject *)this_02,
                                    VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                                   );
                (this->fields)._.pickupOwner = pVVar7;
                if (pVVar7 != (VehiclePickupOwner *)0x0) {
                  (pVVar7->fields)._._IsLocal_k__BackingField = 1;
                  pAVar4 = (this->fields)._._.onDestroy;
                  pVVar7 = (this->fields)._.pickupOwner;
                  pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__System__Action);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar6,(Object *)pVVar7,
                             MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,
                             (MethodInfo *)0x0);
                  pAVar3 = (Action *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar4,(Delegate *)pUVar6,(MethodInfo *)0x0);
                  pAVar4 = (Action *)0x0;
                  if (pAVar3 != (Action *)0x0) {
                    if (pAVar3->klass == TypeInfo__System__Action) {
                      pAVar4 = pAVar3;
                    }
                    pAVar5 = TypeInfo__System__Action;
                    if (pAVar4 == (Action *)0x0) goto code_?;
                  }
                  (this->fields)._._.onDestroy = pAVar4;
                  pPVar8 = (PickupGUI *)
                           UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_AddComponent_85
                                     ((GameObject *)this_00,
                                      PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                     );
                  (this->fields)._.pickupGUI = pPVar8;
                  worldObjectId =
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)vehicleBase,(MethodInfo *)0x0);
                  if (pPVar8 != (PickupGUI *)0x0) {
                    PickupGUI::PickupGUI_Initialize
                              (pPVar8,(int32_t)worldObjectId,
                               (MVPickupOwner *)(this->fields)._.pickupOwner,(MethodInfo *)0x0);
                    pAVar4 = (this->fields)._._.onEnter;
                    pPVar8 = (this->fields)._.pickupGUI;
                    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__Action);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar6,(Object *)pPVar8,MethodInfo__PickupGUI__Enter__,
                               (MethodInfo *)0x0);
                    pAVar3 = (Action *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)pAVar4,(Delegate *)pUVar6,(MethodInfo *)0x0);
                    pAVar4 = (Action *)0x0;
                    if (pAVar3 != (Action *)0x0) {
                      if (pAVar3->klass == TypeInfo__System__Action) {
                        pAVar4 = pAVar3;
                      }
                      pAVar5 = TypeInfo__System__Action;
                      if (pAVar4 == (Action *)0x0) goto code_?;
                    }
                    pAVar3 = (this->fields)._._.onLeave;
                    (this->fields)._._.onEnter = pAVar4;
                    pPVar8 = (this->fields)._.pickupGUI;
                    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__Action);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar6,(Object *)pPVar8,MethodInfo__PickupGUI__Leave__,
                               (MethodInfo *)0x0);
                    pAVar3 = (Action *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)pAVar3,(Delegate *)pUVar6,(MethodInfo *)0x0);
                    pAVar4 = (Action *)0x0;
                    if (pAVar3 != (Action *)0x0) {
                      if (pAVar3->klass == TypeInfo__System__Action) {
                        pAVar4 = pAVar3;
                      }
                      pAVar5 = TypeInfo__System__Action;
                      if (pAVar4 == (Action *)0x0) goto code_?;
                    }
                    (this->fields)._._.onLeave = pAVar4;
                    pMVar9 = (MVTriggerHandler *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_85
                                        ((GameObject *)this_00,
                                         MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                        );
                    (this->fields)._.triggerHandler = pMVar9;
                    pLVar10 = (this->fields)._._.localComponents;
                    if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                      List_1_UIPushOption__Add
                                ((List_1_UIPushOption_ *)pLVar10,
                                 (UIPushOption__Enum)interactableLocal,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                );
                      pLVar10 = (this->fields)._._.localComponents;
                      if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                        List_1_UIPushOption__Add
                                  ((List_1_UIPushOption_ *)pLVar10,
                                   (UIPushOption__Enum)smoothController,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                  );
                        pLVar10 = (this->fields)._._.localComponents;
                        if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                          List_1_UIPushOption__Add
                                    ((List_1_UIPushOption_ *)pLVar10,
                                     (UIPushOption__Enum)hoverCraftMotor,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                    );
                          pLVar10 = (this->fields)._._.localComponents;
                          if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                            List_1_UIPushOption__Add
                                      ((List_1_UIPushOption_ *)pLVar10,(UIPushOption__Enum)this_01,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                      );
                            pLVar10 = (this->fields)._._.localComponents;
                            if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                              List_1_UIPushOption__Add
                                        ((List_1_UIPushOption_ *)pLVar10,
                                         (UIPushOption__Enum)(this->fields)._.triggerHandler,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                        );
                              (this->fields)._.vehicleMotor = hoverCraftMotor;
                              (this->fields)._.owner = vehicleBase;
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
  func_?(0);
  pAVar3 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar5);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

