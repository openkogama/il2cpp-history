
/* Void AttachWorldObjectToSeat(Int32, Boolean, MVAvatar, Int32) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_AttachWorldObjectToSeat
               (VehicleSeatManager *this,int32_t instigatorActorNr,bool instigatorIsLocal,
               MVAvatar *vehicleUser,int32_t vehicleSeatID,MethodInfo *method)

{
  iVar1 = instigatorActorNr;
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
    pMVar2 = (this->fields).woOwner;
    if (pMVar2 != (MVVehicleBase *)0x0) {
      pMVar3 = (MVAvatar *)(pMVar2->fields)._._._._.ownerActorNr;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = pMVar3;
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 != (MVLocalPlayer *)0x0)) {
        unaff_EDI = (MVAvatar *)iVar1;
        if ((MVAvatar *)instigatorActorNr == pMVar3 ||
            pMVar3 != (MVAvatar *)(pMVar5->fields)._._ActorNr_k__BackingField) {
code_?:
          if (this_01 != (RegexCharClass_SingleRange)0x0) {
            if (*(char *)((int)this_01 + 0x29) == '\0') {
              if ((instigatorIsLocal == 0) || ((MVAvatar *)iVar1 == pMVar3)) {
code_?:
                pMVar2 = (this->fields).woOwner;
                if (pMVar2 != (MVVehicleBase *)0x0) {
                  (pMVar2->fields)._._._._.ownerActorNr = (int32_t)unaff_EDI;
                  goto code_?;
                }
              }
              else {
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar4 != (MVNetworkGame *)0x0) &&
                   ((pMVar2 = (this->fields).woOwner, pMVar2 != (MVVehicleBase *)0x0 &&
                    (pTVar6 = (pMVar4->fields).transformNetworkManager,
                    pTVar6 != (TransformNetworkManager *)0x0)))) {
                  unaff_EDI = (MVAvatar *)
                              TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                        (pTVar6,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
                  if (unaff_EDI != (MVAvatar *)0x0) {
                    iVar7 = func_?(unaff_EDI);
                    if (iVar7 != 0) {
                      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Debug);
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                ((Object *)StringLiteral_Network_reporter_already_set,
                                 (MethodInfo *)0x0);
                      return;
                    }
                    bVar8 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
                    pMVar9 = TypeInfo__MVNetworkListener;
                    if (((unaff_EDI->klass->_1).naturalAligment < bVar8) ||
                       ((unaff_EDI->klass->_1).typeHierarchy[bVar8 - 1] !=
                        (Il2CppClass *)TypeInfo__MVNetworkListener)) goto code_?;
                    MVNetworkListener::MVNetworkListener_SetOwnerTransformToMostResentPackage
                              ((MVNetworkListener *)unaff_EDI,(MethodInfo *)0x0);
                    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if ((pMVar4 == (MVNetworkGame *)0x0) ||
                       ((pMVar2 = (this->fields).woOwner, pMVar2 == (MVVehicleBase *)0x0 ||
                        (pTVar6 = (pMVar4->fields).transformNetworkManager,
                        pTVar6 == (TransformNetworkManager *)0x0)))) goto code_?;
                    TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                              (pTVar6,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
                  }
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar4 != (MVNetworkGame *)0x0) {
                    unaff_EDI = (MVAvatar *)(this->fields).woOwner;
                    pTVar6 = (pMVar4->fields).transformNetworkManager;
                    if (unaff_EDI != (MVAvatar *)0x0) {
                      iVar1 = (((MVBlueprintBase__Fields *)&(unaff_EDI->fields)._)->_)._._.id;
                      this_02 = (MVNetworkReporter *)func_?(TypeInfo__MVNetworkReporter);
                      MVNetworkReporter::MVNetworkReporter__ctor
                                (this_02,(MVWorldObjectClient *)unaff_EDI,(MethodInfo *)0x0);
                      if (pTVar6 != (TransformNetworkManager *)0x0) {
                        TransformNetworkManager::TransformNetworkManager_AddReporter
                                  (pTVar6,iVar1,this_02,(MethodInfo *)0x0);
                        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game
                                           ((MethodInfo *)0x0);
                        if (((pMVar4 != (MVNetworkGame *)0x0) &&
                            (pMVar2 = (this->fields).woOwner, pMVar2 != (MVVehicleBase *)0x0)) &&
                           (pRVar10 = (pMVar4->fields).runtimeVariableNetworkManager,
                           pRVar10 != (RuntimeVariableNetworkManager *)0x0)) {
                          RuntimeVariableNetworkManager::
                          RuntimeVariableNetworkManager_AddRuntimeDataVariables
                                    (pRVar10,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
                          unaff_EDI = (MVAvatar *)instigatorActorNr;
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
              unaff_EDI = vehicleUser;
              if ((vehicleUser != (MVAvatar *)0x0) &&
                 (pMVar2 = (this->fields).woOwner, pMVar2 != (MVVehicleBase *)0x0)) {
                (*(code *)(pMVar2->klass->vtable).TransferChild.method)
                          (pMVar2,(vehicleUser->fields)._._._.id,
                           (pMVar2->klass->vtable).AddChild.methodPtr);
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar4 != (MVNetworkGame *)0x0) &&
                   (pTVar6 = (pMVar4->fields).transformNetworkManager,
                   pTVar6 != (TransformNetworkManager *)0x0)) {
                  TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                            (pTVar6,(vehicleUser->fields)._._._.id,(MethodInfo *)0x0);
                  MVAvatar::MVAvatar_set_SeatID(vehicleUser,vehicleSeatID,(MethodInfo *)0x0);
                  VehicleSeatManager_SetToSeatTransform
                            (this,vehicleUser,vehicleSeatID,(MethodInfo *)0x0);
                  if ((instigatorIsLocal != 0) &&
                     (VehicleSeatBase::VehicleSeatBase_SetCamera
                                ((VehicleSeatBase *)this_01,(MethodInfo *)0x0), cRam_? == '\0'
                     )) {
                    ppMStack11 = &TypeInfo__MVGameControllerBase;
                    func_?();
                    cRam_? = '\x01';
                  }
                  pVVar12 = (this->fields).OnSeatOccupiedChange;
                  if (pVVar12 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
                    return;
                  }
                  ppMStack11 = (pVVar12->fields)._._.method;
                  puStack13 = (pVVar12->fields)._._.method_code;
                  (*(pVVar12->fields)._._.invoke_impl)();
                  return;
                }
              }
            }
          }
        }
        else {
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar4 != (MVNetworkGame *)0x0) &&
              (pMVar2 = (this->fields).woOwner, pMVar2 != (MVVehicleBase *)0x0)) &&
             (pTVar6 = (pMVar4->fields).transformNetworkManager,
             pTVar6 != (TransformNetworkManager *)0x0)) {
            pMVar14 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                (pTVar6,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
            if (pMVar14 == (MVNetworkObject *)0x0) {
code_?:
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Expected_reporter_when_vehicle_i,(MethodInfo *)0x0)
              ;
              return;
            }
            bVar8 = (TypeInfo__MVNetworkReporter->_1).naturalAligment;
            if (((pMVar14->klass->_1).naturalAligment < bVar8) ||
               ((pMVar14->klass->_1).typeHierarchy[bVar8 - 1] !=
                (Il2CppClass *)TypeInfo__MVNetworkReporter)) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              instigatorIsLocal = (bool)TypeInfo__UnityEngine__Debug;
              instigatorActorNr = (int32_t)&UNK_?;
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Getting_rid_of_reporter_as_vehic,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar4 != (MVNetworkGame *)0x0) &&
                (pMVar2 = (this->fields).woOwner, pMVar2 != (MVVehicleBase *)0x0)) &&
               (pTVar6 = (pMVar4->fields).transformNetworkManager,
               pTVar6 != (TransformNetworkManager *)0x0)) {
              TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                        (pTVar6,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar4 != (MVNetworkGame *)0x0) &&
                  (pMVar2 = (this->fields).woOwner, pMVar2 != (MVVehicleBase *)0x0)) &&
                 (pRVar10 = (pMVar4->fields).runtimeVariableNetworkManager,
                 pRVar10 != (RuntimeVariableNetworkManager *)0x0)) {
                RuntimeVariableNetworkManager::
                RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                          (pRVar10,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
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
  pMVar9 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pMVar9);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar6 = (*(code *)(avatarInteractable->klass->vtable).__unknown_5.method)
                      (avatarInteractable,9,
                       (avatarInteractable->klass->vtable).__unknown_6.methodPtr);
    if (cVar6 == '\0') {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).seats;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_8,this_00,
                          MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                         );
      LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
      LStack_9._index = pLVar7->_index;
      LStack_9._version = pLVar7->_version;
      LStack_9._current = *(Object **)&pLVar7->_current;
      LStack_8._version = 0;
      uStack_1 = 1;
      LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                          );
        if (bVar10 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (*(char *)((int)LStack_9._current + 0x28) == '\0') {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_9,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&LStack_9,
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
                                      ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
                  uVar6 = pVVar5->x;
                  uVar7 = pVVar5->y;
                  uVar8 = (vehicleUser->fields).characterControllerCenterOffset.x;
                  uVar9 = (vehicleUser->fields).characterControllerCenterOffset.y;
                  this_03 = (VehicleSeatManager *)((float)uVar6 - (float)uVar8);
                  if (pTVar2 != (Transform *)0x0) {
                    value.y = (float)uVar7 - (float)uVar9;
                    value.x = (float)this_03;
                    value.z = pVVar5->z - (vehicleUser->fields).characterControllerCenterOffset.z;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar2,value,(MethodInfo *)0x0);
                    pGVar1 = (vehicleUser->fields)._._.gameObject;
                    if (pGVar1 != (GameObject *)0x0) {
                      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                      if (pTVar4 != (Transform *)0x0) {
                        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_localRotation
                                            ((Quaternion *)&stack0xffffffd4,pTVar4,
                                             (MethodInfo *)0x0);
                        if (pTVar2 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localRotation(pTVar2,*pQVar10,(MethodInfo *)0x0);
                          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                              ((MethodInfo *)0x0);
                          if (this_02 != (MVWorldObjectClientManager *)0x0) {
                            pMVar11 = MVWorldObjectClientManager::
                                      MVWorldObjectClientManager_get_RootGroup
                                                (this_02,(MethodInfo *)0x0);
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
                                (**(code **)(*(int *)this_01 + 0xe0))();
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                              }
                              (**(code **)(*(int *)this_01 + 0xf0))();
                              piVar15 = &(this_03->fields).occupiedSeatCount;
                              *piVar15 = *piVar15 + -1;
                              if (*piVar15 < 0) {
                                pSVar16 = mscorlib.dll::System::Int32::Int32_ToString
                                                    ((Int32 *)&(this_03->fields).occupiedSeatCount,
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
                                        (this_03,(MethodInfo *)0x0);
                              pVVar17 = (this_03->fields).OnSeatOccupiedChange;
                              if (pVVar17 != (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0)
                              {
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
  if ((isDeadRuntimeVariable != (MVRuntimeDataVariable *)0x0) &&
     (pOVar7 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                         (isDeadRuntimeVariable,(MethodInfo *)0x0), pOVar7 != (Object *)0x0)) {
    if ((pOVar7->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar8 = (bool *)func_?();
      (this->fields).isDead = *pbVar8;
      pMVar9 = (isDeadRuntimeVariable->fields).OnChange;
      this_00 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_00,(Object *)this,
                 MethodInfo__VehicleSeatManager__OnIsDeadChange_System__Object_,(MethodInfo *)0x0);
      pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pMVar9,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (isDeadRuntimeVariable->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar10 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar10 = pMVar9;
        }
        if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        (isDeadRuntimeVariable->fields).OnChange = pMVar10;
        pMVar10 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar10 = pMVar9;
        }
        if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      }
      func_?();
      index = 0;
      pLVar11 = (this->fields).seats;
      if (pLVar11 != (List_1_VehicleSeatBase_ *)0x0) {
        while (index < (pLVar11->fields)._size) {
          pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).seats;
          if ((pLVar12 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar12,index,
                                     MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                    ), RVar13 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (*(int *)((int)RVar13 + 0x10) == -1) {
            *(int *)((int)RVar13 + 0x10) = index;
          }
          else {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Trying_to_re_set_seatID,(MethodInfo *)0x0);
          }
          index = index + 1;
          pLVar11 = (this->fields).seats;
          if (pLVar11 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
        }
        ppMVar14 = &(this->fields).woOwner;
        *ppMVar14 = wo;
        func_?(ppMVar14,wo);
        RVar13 = (RegexCharClass_SingleRange)*ppMVar14;
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
                    (pUVar16,(MVWorldObjectClient *)RVar13,owner,1,triggerCollider,
                     (Func_2_Int32_Boolean_ *)this_01,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)this_02,2.5,0,(MethodInfo *)0x0);
          ppUVar17 = &(this->fields).useInteractor;
          *ppUVar17 = pUVar16;
          func_?();
          pTVar15 = (this->fields).triggerBoxEvents;
          pUVar16 = (this->fields).useInteractor;
          RVar13 = (RegexCharClass_SingleRange)func_?();
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    ((EventHandler_1_Object_ *)RVar13,(Object *)pUVar16,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar15 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar15,(EventHandler_1_TriggerEventArgs_ *)RVar13,(MethodInfo *)0x0);
            pTVar15 = (this->fields).triggerBoxEvents;
            pUVar16 = *ppUVar17;
            this_03 = (EventHandler_1_Object_ *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (this_03,(Object *)pUVar16,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (((pTVar15 != (TriggerBoxEvents *)0x0) &&
                (TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                           (pTVar15,(EventHandler_1_TriggerEventArgs_ *)this_03,(MethodInfo *)0x0),
                wo != (MVVehicleBase *)0x0)) &&
               (pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          MVGroup::MVGroup_get_Children((MVGroup *)wo,(MethodInfo *)0x0),
               pLVar12 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
            {
              pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                  ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)&stack0xffffffd0,pLVar12,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                                  );
              method_00 = (MethodInfo *)pLVar18->_version;
              uStack_1 = 1;
              RVar13 = pLVar18->_current;
              goto code_?;
            }
          }
        }
      }
    }
    else {
code_?:
      func_?();
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
code_?:
  do {
    do {
      bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar20 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    } while (RVar13 == (RegexCharClass_SingleRange)0x0);
    bVar21 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if ((*(byte *)(*(int *)RVar13 + 0xb8) < bVar21) ||
       (*(MVAvatar__Class **)(*(int *)(*(int *)RVar13 + 100) + -4 + (uint)bVar21 * 4) !=
        TypeInfo__MVAvatar)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    RVar23.First = 0;
    RVar23.Last = 0;
    if (bVar22) {
      RVar23 = RVar13;
    }
  } while (RVar23 == (RegexCharClass_SingleRange)0x0);
  bVar21 = (TypeInfo__MVAvatar->_1).naturalAligment;
  if (((*(byte *)(*(int *)RVar13 + 0xb8) < bVar21) ||
      (*(MVAvatar__Class **)(*(int *)(*(int *)RVar13 + 100) + -4 + (uint)bVar21 * 4) !=
       TypeInfo__MVAvatar)) || (RVar13 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  IStack_6.m_value = MVAvatar::MVAvatar_get_SeatID((MVAvatar *)RVar13,(MethodInfo *)0x0);
  if (IStack_6.m_value == -1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    RVar13.First = 0;
    RVar13.Last = 0;
    method_00 = (MethodInfo *)StringLiteral_Found_avatar_child_with_seatID__;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Found_avatar_child_with_seatID__,(MethodInfo *)0x0);
  }
  else {
    pSVar24 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&UNK_?;
    RVar23 = (RegexCharClass_SingleRange)StringLiteral_Found_avatar_child_with_seat_ID_;
    pSVar24 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_Found_avatar_child_with_seat_ID_,pSVar24,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar24,(MethodInfo *)0x0)
    ;
    bVar21 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if (((*(byte *)(*(int *)RVar13 + 0xb8) < bVar21) ||
        (*(MVAvatar__Class **)(*(int *)(*(int *)RVar13 + 100) + -4 + (uint)bVar21 * 4) !=
         TypeInfo__MVAvatar)) || (RVar13 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    VehicleSeatManager_SetToSeatTransform
              (this,(MVAvatar *)RVar13,IStack_6.m_value,(MethodInfo *)0x0);
    RVar13 = RVar23;
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
        piVar5 = &(this->fields).occupiedSeatCount;
        *piVar5 = *piVar5 + 1;
        piVar5 = &(this->fields).occupiedSeatCount;
        pLVar6 = (this->fields).seats;
        if (pLVar6 != (List_1_VehicleSeatBase_ *)0x0) {
          if ((pLVar6->fields)._size < *piVar5) {
            pSVar7 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)piVar5,(MethodInfo *)0x0);
            pSVar7 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_occupiedSeatCount_more_than_numb,pSVar7,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar7,(MethodInfo *)0x0);
          }
          VehicleSeatManager_UpdateTriggerBoxEventsCollider(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  ppLVar1 = &(this->fields).seats;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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

