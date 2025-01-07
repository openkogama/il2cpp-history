
/* Void AttachWorldObjectToSeat(Int32, Boolean, MVAvatar, Int32) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_AttachWorldObjectToSeat
               (VehicleSeatManager *this,int32_t instigatorActorNr,bool instigatorIsLocal,
               MVAvatar *vehicleUser,int32_t vehicleSeatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_)
    ;
    func_?(&TypeInfo__MVNetworkListener);
    func_?(&TypeInfo__MVNetworkReporter);
    func_?(&StringLiteral_Expected_reporter_when_vehicle_i);
    func_?(&StringLiteral_Network_reporter_already_set);
    func_?(&StringLiteral_Getting_rid_of_reporter_as_vehic);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).seats;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,vehicleSeatID,
                         MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                        );
    pMVar1 = (this->fields).woOwner;
    if (pMVar1 != (MVVehicleBase *)0x0) {
      pMVar2 = (MVAvatar *)(pMVar1->fields)._._._._.ownerActorNr;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_ESI = pMVar2;
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
         pMVar4 != (MVLocalPlayer *)0x0)) {
        if ((MVAvatar *)instigatorActorNr == pMVar2 ||
            pMVar2 != (MVAvatar *)(pMVar4->fields)._._ActorNr_k__BackingField) {
code_?:
          if (this_01 != (RegexCharClass_SingleRange)0x0) {
            if (*(char *)((int)this_01 + 0x29) == '\0') {
              if ((instigatorIsLocal == 0) || ((MVAvatar *)instigatorActorNr == pMVar2)) {
code_?:
                pMVar1 = (this->fields).woOwner;
                if (pMVar1 != (MVVehicleBase *)0x0) {
                  (pMVar1->fields)._._._._.ownerActorNr = instigatorActorNr;
                  goto code_?;
                }
              }
              else {
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar3 != (MVNetworkGame *)0x0) &&
                   ((pMVar1 = (this->fields).woOwner, pMVar1 != (MVVehicleBase *)0x0 &&
                    (pTVar5 = (pMVar3->fields).transformNetworkManager,
                    pTVar5 != (TransformNetworkManager *)0x0)))) {
                  unaff_ESI = (MVAvatar *)
                              TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                        (pTVar5,(pMVar1->fields)._._._._.id,(MethodInfo *)0x0);
                  if (unaff_ESI != (MVAvatar *)0x0) {
                    iVar6 = func_?(unaff_ESI);
                    if (iVar6 != 0) {
                      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Debug);
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                ((Object *)StringLiteral_Network_reporter_already_set,
                                 (MethodInfo *)0x0);
                      return;
                    }
                    pMVar7 = (MVWorldObjectClient__Class *)
                             ((Il2CppClass_0 *)&unaff_ESI->klass)->image;
                    pMVar8 = TypeInfo__MVNetworkListener;
                    if (((pMVar7->_1).naturalAligment <
                         (TypeInfo__MVNetworkListener->_1).naturalAligment) ||
                       ((pMVar7->_1).typeHierarchy
                        [(TypeInfo__MVNetworkListener->_1).naturalAligment - 1] !=
                        (Il2CppClass *)TypeInfo__MVNetworkListener)) goto code_?;
                    MVNetworkListener::MVNetworkListener_SetOwnerTransformToMostResentPackage
                              ((MVNetworkListener *)unaff_ESI,(MethodInfo *)0x0);
                    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if ((pMVar3 == (MVNetworkGame *)0x0) ||
                       ((pMVar1 = (this->fields).woOwner, pMVar1 == (MVVehicleBase *)0x0 ||
                        (pTVar5 = (pMVar3->fields).transformNetworkManager,
                        pTVar5 == (TransformNetworkManager *)0x0)))) goto code_?;
                    TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                              (pTVar5,(pMVar1->fields)._._._._.id,(MethodInfo *)0x0);
                  }
                  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar3 != (MVNetworkGame *)0x0) {
                    pTVar5 = (pMVar3->fields).transformNetworkManager;
                    pMVar1 = (this->fields).woOwner;
                    if (pMVar1 != (MVVehicleBase *)0x0) {
                      woID = (pMVar1->fields)._._._._.id;
                      unaff_ESI = (MVAvatar *)(this->fields).woOwner;
                      this_02 = (MVNetworkReporter *)func_?(TypeInfo__MVNetworkReporter);
                      MVNetworkReporter::MVNetworkReporter__ctor
                                (this_02,(MVWorldObjectClient *)unaff_ESI,(MethodInfo *)0x0);
                      if (pTVar5 != (TransformNetworkManager *)0x0) {
                        TransformNetworkManager::TransformNetworkManager_AddReporter
                                  (pTVar5,woID,this_02,(MethodInfo *)0x0);
                        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game
                                           ((MethodInfo *)0x0);
                        if (((pMVar3 != (MVNetworkGame *)0x0) &&
                            (pMVar1 = (this->fields).woOwner, pMVar1 != (MVVehicleBase *)0x0)) &&
                           (pRVar9 = (pMVar3->fields).runtimeVariableNetworkManager,
                           pRVar9 != (RuntimeVariableNetworkManager *)0x0)) {
                          RuntimeVariableNetworkManager::
                          RuntimeVariableNetworkManager_AddRuntimeDataVariables
                                    (pRVar9,(pMVar1->fields)._._._._.id,(MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
code_?:
              unaff_ESI = vehicleUser;
              if ((vehicleUser != (MVAvatar *)0x0) &&
                 (pMVar1 = (this->fields).woOwner, pMVar1 != (MVVehicleBase *)0x0)) {
                (*(code *)(pMVar1->klass->vtable).TransferChild.method)
                          (pMVar1,(vehicleUser->fields)._._._.id,
                           (pMVar1->klass->vtable).AddChild.methodPtr);
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar3 != (MVNetworkGame *)0x0) &&
                   (pTVar5 = (pMVar3->fields).transformNetworkManager,
                   pTVar5 != (TransformNetworkManager *)0x0)) {
                  TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                            (pTVar5,(vehicleUser->fields)._._._.id,(MethodInfo *)0x0);
                  MVAvatar::MVAvatar_set_SeatID(vehicleUser,vehicleSeatID,(MethodInfo *)0x0);
                  VehicleSeatManager_SetToSeatTransform
                            (this,vehicleUser,vehicleSeatID,(MethodInfo *)0x0);
                  if ((instigatorIsLocal != 0) &&
                     (VehicleSeatBase::VehicleSeatBase_SetCamera
                                ((VehicleSeatBase *)this_01,(MethodInfo *)0x0), cRam_? == '\0'
                     )) {
                    ppMStack10 = &TypeInfo__MVGameControllerBase;
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((this->fields).OnSeatOccupiedChange ==
                      (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
                    return;
                  }
                  pVVar11 = (this->fields).OnSeatOccupiedChange;
                  ppMStack10 = (pVVar11->fields)._._.method;
                  puStack12 = (pVVar11->fields)._._.method_code;
                  (*(pVVar11->fields)._._.invoke_impl)();
                  return;
                }
              }
            }
          }
        }
        else {
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar3 != (MVNetworkGame *)0x0) &&
              (pMVar1 = (this->fields).woOwner, pMVar1 != (MVVehicleBase *)0x0)) &&
             (pTVar5 = (pMVar3->fields).transformNetworkManager,
             pTVar5 != (TransformNetworkManager *)0x0)) {
            pMVar13 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                (pTVar5,(pMVar1->fields)._._._._.id,(MethodInfo *)0x0);
            if (((pMVar13 == (MVNetworkObject *)0x0) ||
                (unaff_ESI = (MVAvatar *)pMVar13->klass,
                (byte)(((MVBlueprintBase__Fields *)&(unaff_ESI->fields)._)->_)._.interactionFlags <
                (TypeInfo__MVNetworkReporter->_1).naturalAligment)) ||
               (*(MVNetworkReporter__Class **)
                 ((int)(((MVBlueprintBase__Fields *)&(unaff_ESI->fields)._)->_)._._.
                       OnInputLinkChanged +
                 (uint)(TypeInfo__MVNetworkReporter->_1).naturalAligment * 4 + -4) !=
                TypeInfo__MVNetworkReporter)) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Expected_reporter_when_vehicle_i,(MethodInfo *)0x0)
              ;
              return;
            }
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              instigatorIsLocal = (bool)TypeInfo__UnityEngine__Debug;
              instigatorActorNr = (int32_t)&UNK_?;
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Getting_rid_of_reporter_as_vehic,(MethodInfo *)0x0);
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar3 != (MVNetworkGame *)0x0) &&
                (pMVar1 = (this->fields).woOwner, pMVar1 != (MVVehicleBase *)0x0)) &&
               (pTVar5 = (pMVar3->fields).transformNetworkManager,
               pTVar5 != (TransformNetworkManager *)0x0)) {
              TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                        (pTVar5,(pMVar1->fields)._._._._.id,(MethodInfo *)0x0);
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar3 != (MVNetworkGame *)0x0) &&
                  (pMVar1 = (this->fields).woOwner, pMVar1 != (MVVehicleBase *)0x0)) &&
                 (pRVar9 = (pMVar3->fields).runtimeVariableNetworkManager,
                 pRVar9 != (RuntimeVariableNetworkManager *)0x0)) {
                RuntimeVariableNetworkManager::
                RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                          (pRVar9,(pMVar1->fields)._._._._.id,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pMVar8 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pMVar8);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_CheckCanUse
               (VehicleSeatManager *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar7 = (*(code *)(avatarInteractable->klass->vtable).__unknown_7.method)
                      (avatarInteractable,9,
                       (avatarInteractable->klass->vtable).__unknown_8.methodPtr);
    if (cVar7 == '\0') {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).seats;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,this_00,
                          MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                         );
      LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
      LStack_6._index = pLVar8->_index;
      LStack_6._version = pLVar8->_version;
      LStack_6._current = *(Object **)&pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 1;
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                          );
        if (bVar10 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (*(char *)((int)LStack_6._current + 0x28) == '\0') {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                 ,unaff_EDI);
    }
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Void DetachFromSeat(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_DetachFromSeat
               (VehicleSeatManager *this,MVAvatar *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_)
    ;
    func_?(&TypeRef__MVAvatarLocal);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_occupiedSeatCount_less_than_0_);
    cRam_? = '\x01';
  }
  if (vehicleUser != (MVAvatar *)0x0) {
    index = MVAvatar::MVAvatar_get_SeatID(vehicleUser,(MethodInfo *)0x0);
    pGVar1 = (vehicleUser->fields)._._.gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar1,(MethodInfo *)0x0);
      pMVar3 = (this->fields).woOwner;
      if ((pMVar3 != (MVVehicleBase *)0x0) &&
         (pGVar1 = (pMVar3->fields)._._._.gameObject, pGVar1 != (GameObject *)0x0)) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar2,pTVar4,(MethodInfo *)0x0);
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).seats;
          if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_00,index,
                                 MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                );
            pGVar1 = (vehicleUser->fields)._._.gameObject;
            if (pGVar1 != (GameObject *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
              if (this_01 != (RegexCharClass_SingleRange)0x0) {
                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                if (pTVar4 != (Transform *)0x0) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_localPosition
                                      ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                  uVar6 = pVVar5->x;
                  uVar7 = pVVar5->y;
                  uVar8 = (vehicleUser->fields).characterControllerCenterOffset.x;
                  uVar9 = (vehicleUser->fields).characterControllerCenterOffset.y;
                  if (pTVar2 != (Transform *)0x0) {
                    value.y = (float)uVar7 - (float)uVar9;
                    value.x = (float)uVar6 - (float)uVar8;
                    value.z = pVVar5->z - (vehicleUser->fields).characterControllerCenterOffset.z;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar2,value,(MethodInfo *)0x0);
                    pGVar1 = (vehicleUser->fields)._._.gameObject;
                    if (pGVar1 != (GameObject *)0x0) {
                      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                      if (this_02 != (Transform *)0x0) {
                        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_localRotation
                                            ((Quaternion *)&stack0xffffffdc,this_02,
                                             (MethodInfo *)0x0);
                        if (pTVar4 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localRotation(pTVar4,*pQVar10,(MethodInfo *)0x0);
                          this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                              ((MethodInfo *)0x0);
                          if (this_03 != (MVWorldObjectClientManager *)0x0) {
                            pMVar11 = MVWorldObjectClientManager::
                                      MVWorldObjectClientManager_get_RootGroup
                                                (this_03,(MethodInfo *)0x0);
                            if (pMVar11 != (MVGroup *)0x0) {
                              pIStack12 = (pMVar11->klass->vtable).AddChild.methodPtr;
                              iStack13 = (vehicleUser->fields)._._._.id;
                              (*(code *)(pMVar11->klass->vtable).TransferChild.method)();
                              MVAvatar::MVAvatar_set_SeatID(vehicleUser,-1,(MethodInfo *)0x0);
                              lhs = mscorlib.dll::System::Object::Object_GetType
                                              ((Object *)vehicleUser,(MethodInfo *)0x0);
                              handle = TypeRef__MVAvatarLocal;
                              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              rhs = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                              ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
                              bVar14 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::
                                       Unsafe::UnsafeUtility::UnsafeUtility_EnumEquals
                                                 ((Int32Enum__Enum)lhs,(Int32Enum__Enum)rhs,
                                                  (MethodInfo *)0x0);
                              if (bVar14 != 0) {
                                (*(code *)(pTVar2->klass->vtable).GetEnumerator.method)();
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                              }
                              (*(code *)pTVar2->klass[1]._0.namespaze)();
                              piVar15 = &(this->fields).occupiedSeatCount;
                              *piVar15 = *piVar15 + -1;
                              if (*piVar15 < 0) {
                                pSVar16 = mscorlib.dll::System::Int32::Int32_ToString
                                                    ((Int32 *)&(this->fields).occupiedSeatCount,
                                                     (MethodInfo *)0x0);
                                pSVar16 = mscorlib.dll::System::String::String_Concat_3
                                                    (StringLiteral_occupiedSeatCount_less_than_0_,
                                                     pSVar16,(MethodInfo *)0x0);
                                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor ==
                                    0) {
                                  func_?();
                                }
                                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                          ((Object *)pSVar16,(MethodInfo *)0x0);
                              }
                              VehicleSeatManager_UpdateTriggerBoxEventsCollider
                                        (this,(MethodInfo *)0x0);
                              if ((this->fields).OnSeatOccupiedChange !=
                                  (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
                                pVVar17 = (this->fields).OnSeatOccupiedChange;
                                pvStack18 = (pVVar17->fields)._._.method;
                                pvStack19 = (pVVar17->fields)._._.method_code;
                                (*(pVVar17->fields)._._.invoke_impl)();
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
        }
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void Init(MVVehicleBase, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_Init
               (VehicleSeatManager *this,MVVehicleBase *wo,
               MVRuntimeDataVariable *isDeadRuntimeVariable,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_)
    ;
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&MethodInfo__VehicleSeatManager__CheckCanUse_int__MVInteractableBase_);
    func_?(&MethodInfo__VehicleSeatManager__OnIsDeadChange_System__Object_);
    func_?(&MethodInfo__VehicleSeatManager__Use_int_);
    func_?(&StringLiteral_Found_avatar_child_with_seatID__);
    func_?(&StringLiteral_Found_avatar_child_with_seat_ID_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  IStack_6.m_value = 0;
  if ((isDeadRuntimeVariable == (MVRuntimeDataVariable *)0x0) ||
     (pOVar7 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                         (isDeadRuntimeVariable,(MethodInfo *)0x0), pOVar7 == (Object *)0x0)) {
code_?:
    func_?();
code_?:
    uVar8 = func_?(unaff_EDI,TypeInfo__MVAvatar);
    func_?(uVar8);
  }
  else {
    if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class) {
      func_?();
      goto code_?;
    }
    pbVar9 = (bool *)func_?();
    (this->fields).isDead = *pbVar9;
    pMVar10 = (isDeadRuntimeVariable->fields).OnChange;
    this_00 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_00,(Object *)this,MethodInfo__VehicleSeatManager__OnIsDeadChange_System__Object_
               ,(MethodInfo *)0x0);
    pMVar10 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar10,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (isDeadRuntimeVariable->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      iVar11 = 0;
      pLVar12 = (this->fields).seats;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (pLVar12 != (List_1_VehicleSeatBase_ *)0x0) {
        while (iVar11 < (pLVar12->fields)._size) {
          pLVar13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).seats;
          if ((pLVar13 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar13,iVar11,
                                    MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                   ), RVar14 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (*(int *)((int)RVar14 + 0x10) == -1) {
            *(int *)((int)RVar14 + 0x10) = iVar11;
          }
          else {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Trying_to_re_set_seatID,(MethodInfo *)0x0);
          }
          pLVar12 = (this->fields).seats;
          iVar11 = iVar11 + 1;
          if (pLVar12 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
        }
        (this->fields).woOwner = wo;
        func_?(&(this->fields).woOwner,wo);
        wo_00 = (this->fields).woOwner;
        owner = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
        pTVar15 = (this->fields).triggerBoxEvents;
        if (pTVar15 != (TriggerBoxEvents *)0x0) {
          triggerCollider =
               TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar15,(MethodInfo *)0x0);
          this_01 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
          mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                    (this_01,(Object *)this,MethodInfo__VehicleSeatManager__Use_int_,
                     (MethodInfo *)0x0);
          this_02 = (Func_3_Int32_Object_Boolean_ *)
                    func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
          mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                    (this_02,(Object *)this,
                     MethodInfo__VehicleSeatManager__CheckCanUse_int__MVInteractableBase_,
                     (MethodInfo *)0x0);
          pUVar16 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
          UseInteractor::UseInteractor__ctor
                    (pUVar16,(MVWorldObjectClient *)wo_00,owner,1,triggerCollider,
                     (Func_2_Int32_Boolean_ *)this_01,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)this_02,2.5,0,(MethodInfo *)0x0);
          (this->fields).useInteractor = pUVar16;
          func_?();
          pTVar15 = (this->fields).triggerBoxEvents;
          pUVar16 = (this->fields).useInteractor;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_03,(Object *)pUVar16,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar15 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar15,(EventHandler_1_TriggerEventArgs_ *)this_03,(MethodInfo *)0x0);
            pTVar15 = (this->fields).triggerBoxEvents;
            pUVar16 = (this->fields).useInteractor;
            unaff_EDI = (RegexCharClass_SingleRange)
                        func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)unaff_EDI,(Object *)pUVar16,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (((pTVar15 != (TriggerBoxEvents *)0x0) &&
                (TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                           (pTVar15,(EventHandler_1_TriggerEventArgs_ *)unaff_EDI,(MethodInfo *)0x0),
                wo != (MVVehicleBase *)0x0)) &&
               (pLVar13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          MVGroup::MVGroup_get_Children((MVGroup *)wo,(MethodInfo *)0x0),
               pLVar13 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
            {
              pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                  ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)&stack0xffffffd0,pLVar13,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                                  );
              method_00 = (MethodInfo *)pLVar17->_version;
              uStack_1 = 1;
              unaff_EDI = pLVar17->_current;
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar10->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar18 = pMVar10;
    }
    if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (isDeadRuntimeVariable->fields).OnChange = pMVar18;
    pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar10->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar18 = pMVar10;
    }
    if (pMVar18 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
code_?:
  do {
    bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                      );
    if (bVar20 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffbc,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 ,method_00);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  } while (((unaff_EDI == (RegexCharClass_SingleRange)0x0) ||
           (*(byte *)(*(int *)unaff_EDI + 0xb8) < (TypeInfo__MVAvatar->_1).naturalAligment)) ||
          ((*(MVAvatar__Class **)
             (*(int *)(*(int *)unaff_EDI + 100) + -4 +
             (uint)(TypeInfo__MVAvatar->_1).naturalAligment * 4) != TypeInfo__MVAvatar ||
           (unaff_EDI == (RegexCharClass_SingleRange)0x0))));
  RVar14 = unaff_EDI;
  iVar11 = func_?();
  if ((iVar11 == 0) ||
     (pMVar21 = (MVAvatar *)func_?(unaff_EDI,TypeInfo__MVAvatar),
     pMVar21 == (MVAvatar *)0x0)) goto code_?;
  IStack_6.m_value = MVAvatar::MVAvatar_get_SeatID(pMVar21,(MethodInfo *)0x0);
  if (IStack_6.m_value == -1) {
    unaff_EDI = RVar14;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      unaff_EDI = RVar14;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Found_avatar_child_with_seatID__,(MethodInfo *)0x0);
  }
  else {
    pSVar22 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
    pSVar22 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_Found_avatar_child_with_seat_ID_,pSVar22,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar22,(MethodInfo *)0x0)
    ;
    method_00 = (MethodInfo *)&UNK_?;
    RVar14 = unaff_EDI;
    pMVar21 = (MVAvatar *)func_?();
    if (pMVar21 == (MVAvatar *)0x0) goto code_?;
    VehicleSeatManager_SetToSeatTransform(this,pMVar21,IStack_6.m_value,(MethodInfo *)0x0);
    unaff_EDI = RVar14;
  }
  goto code_?;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_OnIsDeadChange
               (VehicleSeatManager *this,Object *isDeadRuntime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (isDeadRuntime != (Object *)0x0) {
    if ((isDeadRuntime->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar1 = (bool *)func_?();
      (this->fields).isDead = *pbVar1;
      VehicleSeatManager_UpdateTriggerBoxEventsCollider(this,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToSeatTransform(MVAvatar, Int32) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_SetToSeatTransform
               (VehicleSeatManager *this,MVAvatar *vehicleUser,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_)
    ;
    func_?(&StringLiteral_occupiedSeatCount_more_than_numb);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).seats;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,seatID,
                       MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                      );
    if ((vehicleUser != (MVAvatar *)0x0) &&
       (this_01 = (vehicleUser->fields)._._.gameObject, this_01 != (GameObject *)0x0)) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      if ((RVar1 != (RegexCharClass_SingleRange)0x0) && (this_02 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_02,*(Transform **)((int)RVar1 + 0x24),(MethodInfo *)0x0);
        (*(code *)(vehicleUser->klass->vtable).set_Position.method)();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pIVar2 = (vehicleUser->klass->vtable).get_Scale.methodPtr;
        pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
        (*(code *)(vehicleUser->klass->vtable).set_Rotation.method)
                  (vehicleUser,(pQVar3->identityQuaternion).x,(pQVar3->identityQuaternion).y,
                   (pQVar3->identityQuaternion).z);
        iVar4 = *(int *)pIVar2;
        (**(code **)(iVar4 + 0xe8))(pIVar2,vehicleUser,*(undefined4 *)(iVar4 + 0xec));
        pLVar5 = (this->fields).seats;
        iVar4 = (this->fields).occupiedSeatCount + 1;
        (this->fields).occupiedSeatCount = iVar4;
        if (pLVar5 != (List_1_VehicleSeatBase_ *)0x0) {
          if ((pLVar5->fields)._size < iVar4) {
            pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&(this->fields).occupiedSeatCount,(MethodInfo *)0x0);
            pSVar6 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_occupiedSeatCount_more_than_numb,pSVar6,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar6,(MethodInfo *)0x0);
          }
          VehicleSeatManager_UpdateTriggerBoxEventsCollider(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTriggerBoxEventsCollider() */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_UpdateTriggerBoxEventsCollider
               (VehicleSeatManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (((this->fields).isDead == 0) && ((this->fields).enterVehicleDisabled == 0)) {
    pLVar1 = (this->fields).seats;
    if (pLVar1 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
    this_00 = (this->fields).triggerBoxEvents;
    if ((this->fields).occupiedSeatCount != (pLVar1->fields)._size) {
      if (this_00 != (TriggerBoxEvents *)0x0) {
        pCVar2 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_00,(MethodInfo *)0x0);
        if (pCVar2 != (Collider *)0x0) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar2,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    this_00 = (this->fields).triggerBoxEvents;
  }
  if (this_00 != (TriggerBoxEvents *)0x0) {
    pCVar2 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_00,(MethodInfo *)0x0);
    if (pCVar2 != (Collider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_Use
               (VehicleSeatManager *this,int32_t userWoId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMVar6 = (this->fields).woOwner;
  if (pMVar6 != (MVVehicleBase *)0x0) {
    method_00 = (MethodInfo *)(pMVar6->klass->vtable).get_IsInSpawner.methodPtr;
    cVar7 = (*(code *)(pMVar6->klass->vtable).get_IsDead.method)(pMVar6);
    if (cVar7 == '\0') {
      bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
      if (bVar8 != 0) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).seats;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_10,this_00,
                            MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                           );
        method_01 = (MethodInfo *)pLVar9->_version;
        seatBase = pLVar9->_current;
        LStack_10._version = 0;
        uStack_1 = 1;
        LStack_10._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
        while( true ) {
          bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                            );
          if (bVar8 == 0) break;
          if (seatBase == (RegexCharClass_SingleRange)0x0) goto code_?;
          if ((*(bool *)((int)seatBase + 0x28) == 0) && (*(uint8_t *)((int)seatBase + 0x29) == 0)) {
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
            this_01 = (pMVar11->fields)._PlayerController_k__BackingField;
            pMVar6 = (this->fields).woOwner;
            if ((pMVar6 == (MVVehicleBase *)0x0) || (this_01 == (MVLocalObjectController *)0x0))
            goto code_?;
            method_00 = (MethodInfo *)0x0;
            bVar8 = MVLocalObjectController::MVLocalObjectController_AttachWorldObjectToSeat
                              (this_01,(pMVar6->fields)._._._._.id,userWoId,
                               (VehicleSeatBase *)seatBase,(MethodInfo *)0x0);
            if (bVar8 != 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffffc8,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                         ,method_01);
              *unaff_FS_OFFSET = uStack_3;
              return 1;
            }
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                   ,method_00);
      }
    }
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar8 = (*pcVar12)();
  return bVar8;
}


/* VehicleSeatManager() */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager__ctor
               (VehicleSeatManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<VehicleSeatBase>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VehicleSeatBase_ *)
            func_?(TypeInfo__System__Collections__Generic__List<VehicleSeatBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__List__);
  (this->fields).seats = this_00;
  func_?(&(this->fields).seats,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* VehicleSeatBase get_DriverSeat() */

VehicleSeatBase *
Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_get_DriverSeat
          (VehicleSeatManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Multiple_driver_seats);
    func_?(&StringLiteral_No_driver_seat);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  x.First = 0;
  x.Last = 0;
  RStack_6.First = 0;
  RStack_6.Last = 0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).seats;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                       );
    RVar9 = pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc4;
    RVar10 = RStack_6;
    while( true ) {
      RStack_6 = RVar10;
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                   ,unaff_EDI);
        uStack_1 = 0xffffffff;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_No_driver_seat,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return (VehicleSeatBase *)x;
      }
      if (RVar9 == (RegexCharClass_SingleRange)0x0) break;
      RVar10 = RStack_6;
      if (*(char *)((int)RVar9 + 0x29) == '\0') {
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        x = RVar9;
        RVar10 = RVar9;
        if (bVar11 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          unaff_EDI = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Multiple_driver_seats,(MethodInfo *)0x0);
        }
      }
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  pVVar14 = (VehicleSeatBase *)(*pcVar13)();
  return pVVar14;
}


/* Void set_EnterVehicleDisabled(Boolean) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_set_EnterVehicleDisabled
               (VehicleSeatManager *this,bool value,MethodInfo *method)

{
  (this->fields).enterVehicleDisabled = value;
  VehicleSeatManager_UpdateTriggerBoxEventsCollider(this,(MethodInfo *)0x0);
  return;
}

