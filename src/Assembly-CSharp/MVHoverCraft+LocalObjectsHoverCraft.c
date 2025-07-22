
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
  this_01 = (List_1_UnityEngine_Component_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
  method_00 = (MethodInfo *)&(this->fields)._._.localComponents;
  (this->fields)._._.localComponents = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (vehicleBase == (MVSimpleOneSeatVehicle *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar2 = (vehicleBase->fields).Health;
    if (pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    pMVar3 = (pMVar2->fields)._._.OnChange;
    this_02 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_02,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)this_02,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar2->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      this_00 = (GameObject *)pMVar2[3].fields._._.lastSendTime;
      if (this_00 == (GameObject *)0x0) goto code_?;
      value = (String *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this_00,
                         VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                        );
      if (value == (String *)0x0) goto code_?;
      (*(code *)(value->klass->vtable).System_IConvertible_ToUInt16.method)
                (value,*(undefined4 *)&pMVar2[6].fields._._.writeThrough,
                 pMVar2[6].fields._._.lastSendTime,0,pMVar2[6].fields.min,0,
                 (value->klass->vtable).System_IConvertible_ToInt32.methodPtr);
      if (hoverCraftMotor == (SimpleVehicleMotorBase *)0x0) goto code_?;
      uVar1._0_4_ = pMVar2[6].fields._._.value;
      uVar1._4_4_ = pMVar2[6].fields._._.sendValue;
      (*(code *)(hoverCraftMotor->klass->vtable).Init.method)
                (hoverCraftMotor,pMVar3,value,uVar1,pMVar2[6].fields._._.sendInterval,
                 (hoverCraftMotor->klass->vtable).OnLocalVehicleLeave.methodPtr);
      pAVar5 = (this->fields)._._.onEnter;
      pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar6,(Object *)hoverCraftMotor,
                 (hoverCraftMotor->klass->vtable).__unknown_3.methodPtr,(MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        (this->fields)._._.onEnter = (Action *)0x0;
code_?:
        func_?();
        pAVar5 = (this->fields)._._.onLeave;
        pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar6,(Object *)hoverCraftMotor,
                   (hoverCraftMotor->klass->vtable).OnLocalVehicleEnter.methodPtr,(MethodInfo *)0x0)
        ;
        pAVar5 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
        if (pAVar5 == (Action *)0x0) {
          (this->fields)._._.onLeave = (Action *)0x0;
code_?:
          func_?();
          this_03 = (ValidatingReaderNodeData *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (this_00,
                               VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                              );
          if (this_03 != (ValidatingReaderNodeData *)0x0) {
            System.Xml.dll::System::Xml::ValidatingReaderNodeData::
            ValidatingReaderNodeData_SetItemData_2
                      (this_03,value,(String *)this[6].fields._._.onLeave,(MethodInfo *)0x0);
            if ((GameObject *)this[3].monitor != (GameObject *)0x0) {
              pVVar7 = (VehiclePickupOwner *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 ((GameObject *)this[3].monitor,
                                  VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                                 );
              (this->fields)._.pickupOwner = pVVar7;
              func_?(&(this->fields)._.pickupOwner,pVVar7);
              pVVar7 = (this->fields)._.pickupOwner;
              if (pVVar7 != (VehiclePickupOwner *)0x0) {
                (pVVar7->fields)._._IsLocal_k__BackingField = 1;
                object_00 = _UNK_?;
                pAVar5 = (this->fields)._._.onDestroy;
                pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar6,(Object *)object_00,
                           MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,
                           (MethodInfo *)0x0);
                pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
                if (pDVar8 != (Delegate *)0x0) {
                  pDVar9 = (Delegate *)0x0;
                  if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                    pDVar9 = pDVar8;
                  }
                  if (pDVar9 != (Delegate *)0x0) {
                    pDVar10 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                      pDVar10 = pDVar8;
                    }
                    _UNK_? = pDVar9;
                    if (pDVar10 != (Delegate *)0x0) goto code_?;
                  }
                  goto code_?;
                }
                _UNK_? = (Delegate *)0x0;
code_?:
                func_?();
                pPVar11 = (PickupGUI *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (this_00,
                                     PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                    );
                _UNK_? = pPVar11;
                func_?();
                if (_UNK_? != (PickupGUI *)0x0) {
                  PickupGUI::PickupGUI_Initialize
                            (_UNK_?,(int32_t)_UNK_?,_UNK_?,(MethodInfo *)0x0);
                  object_01 = _UNK_?;
                  pDVar8 = _UNK_?;
                  item = TypeInfo__System__Action;
                  pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar6,(Object *)object_01,MethodInfo__PickupGUI__Enter__,
                             (MethodInfo *)0x0);
                  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      (pDVar8,(Delegate *)pNVar6,(MethodInfo *)0x0);
                  if (pDVar8 == (Delegate *)0x0) {
                    (pPVar11->fields).crossHair = (IGUICrossHair *)0x0;
code_?:
                    func_?();
                    pAVar12 = TypeInfo__System__Action;
                    pDVar8 = (Delegate *)(pPVar11->fields)._.m_CancellationTokenSource;
                    object = pPVar11[1].klass;
                    pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar6,(Object *)object,MethodInfo__PickupGUI__Leave__,
                               (MethodInfo *)0x0);
                    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        (pDVar8,(Delegate *)pNVar6,(MethodInfo *)0x0);
                    pDVar8 = (Delegate *)0x0;
                    if (pDVar9 == (Delegate *)0x0) {
                      (pAVar12->_0).namespaze = (char *)0x0;
code_?:
                      ppcVar13 = &(pAVar12->_0).namespaze;
                      func_?();
                      pIVar14 = (Il2CppClass *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_AddComponent_1
                                          (this_00,
                                           MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                          );
                      (pAVar12->_0).castClass = pIVar14;
                      func_?();
                      pLVar15 = (List_1_System_Object_ *)(pAVar12->_0).this_arg.data.typeHandle;
                      if (pLVar15 != (List_1_System_Object_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  (pLVar15,(Object *)value,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                  );
                        pLVar15 = (List_1_System_Object_ *)(pAVar12->_0).this_arg.data.typeHandle;
                        if (pLVar15 != (List_1_System_Object_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__Add
                                    (pLVar15,(Object *)pDVar8,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                    );
                          pLVar15 = (List_1_System_Object_ *)(pAVar12->_0).this_arg.data.typeHandle;
                          if (pLVar15 != (List_1_System_Object_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                            List_1_System_Object__Add
                                      (pLVar15,(Object *)hoverCraftMotor,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                      );
                            pLVar15 = (List_1_System_Object_ *)(pAVar12->_0).this_arg.data.typeHandle;
                            if (pLVar15 != (List_1_System_Object_ *)0x0) {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                              List_1_System_Object__Add
                                        (pLVar15,(Object *)item,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                        );
                              pLVar15 = (List_1_System_Object_ *)
                                       (pAVar12->_0).this_arg.data.typeHandle;
                              if (pLVar15 != (List_1_System_Object_ *)0x0) {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                                List_1_System_Object__Add
                                          (pLVar15,(Object *)(pAVar12->_0).castClass,
                                           MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                          );
                                (pAVar12->_0).declaringType = (Il2CppClass *)hoverCraftMotor;
                                func_?(&(pAVar12->_0).declaringType,hoverCraftMotor);
                                (pAVar12->_0).parent = (Il2CppClass *)ppcVar13;
                                func_?(&(pAVar12->_0).parent,ppcVar13);
                                return;
                              }
                            }
                          }
                        }
                      }
                      goto code_?;
                    }
                    if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
                      pDVar8 = pDVar9;
                    }
                    if (pDVar8 != (Delegate *)0x0) {
                      (pAVar12->_0).namespaze = (char *)pDVar8;
                      pDVar8 = (Delegate *)0x0;
                      if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
                        pDVar8 = pDVar9;
                      }
                      if (pDVar8 != (Delegate *)0x0) goto code_?;
                    }
                  }
                  else {
                    pDVar9 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                      pDVar9 = pDVar8;
                    }
                    if (pDVar9 != (Delegate *)0x0) {
                      (pPVar11->fields).crossHair = (IGUICrossHair *)pDVar9;
                      pDVar9 = (Delegate *)0x0;
                      if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                        pDVar9 = pDVar8;
                      }
                      if (pDVar9 != (Delegate *)0x0) goto code_?;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
          goto code_?;
        }
        pAVar16 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar16 = pAVar5;
        }
        if (pAVar16 != (Action *)0x0) {
          (this->fields)._._.onLeave = pAVar16;
          pAVar16 = (Action *)0x0;
          if (pAVar5->klass == TypeInfo__System__Action) {
            pAVar16 = pAVar5;
          }
          if (pAVar16 != (Action *)0x0) goto code_?;
        }
      }
      else {
        pAVar16 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar16 = pAVar5;
        }
        if (pAVar16 != (Action *)0x0) {
          (this->fields)._._.onEnter = pAVar16;
          pAVar16 = (Action *)0x0;
          if (pAVar5->klass == TypeInfo__System__Action) {
            pAVar16 = pAVar5;
          }
          if (pAVar16 != (Action *)0x0) goto code_?;
        }
      }
      goto code_?;
    }
    if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar3 = pMVar4;
    }
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar2->fields)._._.OnChange = pMVar3;
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar3 = pMVar4;
    }
    if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

