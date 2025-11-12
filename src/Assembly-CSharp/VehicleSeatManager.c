
/* Void AttachWorldObjectToSeat(Int32, Boolean, MVAvatar, Int32) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_AttachWorldObjectToSeat
               (VehicleSeatManager *this,int32_t instigatorActorNr,bool instigatorIsLocal,
               MVAvatar *vehicleUser,int32_t vehicleSeatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkListener);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkReporter);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Expected_reporter_when_vehicle_i);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Network_reporter_already_set);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).seats;
  if (pLVar1 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= (uint)vehicleSeatID) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pVVar3 = (pLVar1->fields)._items;
  if (pVVar3 == (VehicleSeatBase__Array *)0x0) goto code_?;
  if ((uint)pVVar3->max_length <= (uint)vehicleSeatID) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar4 = (this->fields).woOwner;
  this_00 = pVVar3->vector[vehicleSeatID];
  if (pMVar4 == (MVVehicleBase *)0x0) goto code_?;
  iVar5 = (pMVar4->fields)._._._._.ownerActorNr;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar6 == (MVGameControllerBase *)0x0) ||
       (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
      (this_01 = (pMVar7->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0)) ||
     (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     pMVar8 == (MVLocalPlayer *)0x0)) goto code_?;
  if (instigatorActorNr != iVar5 && iVar5 == (pMVar8->fields)._._ActorNr_k__BackingField) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar6 == (MVGameControllerBase *)0x0) ||
        (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
       ((pMVar4 = (this->fields).woOwner, pMVar4 == (MVVehicleBase *)0x0 ||
        (pTVar9 = (pMVar7->fields).transformNetworkManager,
        pTVar9 == (TransformNetworkManager *)0x0)))) goto code_?;
    pMVar10 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                        (pTVar9,(pMVar4->fields)._._._._.id,(MethodInfo *)0x0);
    if (pMVar10 != (MVNetworkObject *)0x0) {
      bVar11 = (TypeInfo__MVNetworkReporter->_1).naturalAligment;
      if ((bVar11 <= (pMVar10->klass->_1).naturalAligment) &&
         ((pMVar10->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] ==
          (Il2CppClass *)TypeInfo__MVNetworkReporter)) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Getting_rid_of_reporter_as_vehic,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar7 == (MVNetworkGame *)0x0) ||
            (pMVar4 = (this->fields).woOwner, pMVar4 == (MVVehicleBase *)0x0)) ||
           (pTVar9 = (pMVar7->fields).transformNetworkManager,
           pTVar9 == (TransformNetworkManager *)0x0)) goto code_?;
        TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                  (pTVar9,(pMVar4->fields)._._._._.id,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar7 == (MVNetworkGame *)0x0) ||
            (pMVar4 = (this->fields).woOwner, pMVar4 == (MVVehicleBase *)0x0)) ||
           (pRVar12 = (pMVar7->fields).runtimeVariableNetworkManager,
           pRVar12 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                  (pRVar12,(pMVar4->fields)._._._._.id,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    message = StringLiteral_Expected_reporter_when_vehicle_i;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral_Expected_reporter_when_vehicle_i;
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)message,(MethodInfo *)0x0);
    return;
  }
code_?:
  if (this_00 == (VehicleSeatBase *)0x0) goto code_?;
  if ((this_00->fields).SeatType == 0) {
    if ((instigatorIsLocal != 0) && (instigatorActorNr != iVar5)) {
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar7 == (MVNetworkGame *)0x0) ||
         ((pMVar4 = (this->fields).woOwner, pMVar4 == (MVVehicleBase *)0x0 ||
          (pTVar9 = (pMVar7->fields).transformNetworkManager,
          pTVar9 == (TransformNetworkManager *)0x0)))) goto code_?;
      this_03 = (MVNetworkListener *)
                TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                          (pTVar9,(pMVar4->fields)._._._._.id,(MethodInfo *)0x0);
      if (this_03 != (MVNetworkListener *)0x0) {
        pMVar13 = this_03->klass;
        bVar11 = (TypeInfo__MVNetworkReporter->_1).naturalAligment;
        if ((bVar11 <= (pMVar13->_1).naturalAligment) &&
           ((pMVar13->_1).typeHierarchy[(ulonglong)bVar11 - 1] ==
            (Il2CppClass *)TypeInfo__MVNetworkReporter)) {
          message = StringLiteral_Network_reporter_already_set;
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
            message = StringLiteral_Network_reporter_already_set;
          }
          goto code_?;
        }
        bVar11 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
        if (((pMVar13->_1).naturalAligment < bVar11) ||
           ((pMVar13->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
            (Il2CppClass *)TypeInfo__MVNetworkListener)) {
          FUN_?(this_03,TypeInfo__MVNetworkListener);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        MVNetworkListener::MVNetworkListener_SetOwnerTransformToMostResentPackage
                  (this_03,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar7 == (MVNetworkGame *)0x0) ||
            (pMVar4 = (this->fields).woOwner, pMVar4 == (MVVehicleBase *)0x0)) ||
           (pTVar9 = (pMVar7->fields).transformNetworkManager,
           pTVar9 == (TransformNetworkManager *)0x0)) goto code_?;
        TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                  (pTVar9,(pMVar4->fields)._._._._.id,(MethodInfo *)0x0);
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
      pTVar9 = (pMVar7->fields).transformNetworkManager;
      pMVar4 = (this->fields).woOwner;
      if (pMVar4 == (MVVehicleBase *)0x0) goto code_?;
      iVar14 = (pMVar4->fields)._._._._.id;
      this_04 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
      MVNetworkReporter::MVNetworkReporter__ctor
                (this_04,(MVWorldObjectClient *)pMVar4,(MethodInfo *)0x0);
      if (pTVar9 == (TransformNetworkManager *)0x0) goto code_?;
      TransformNetworkManager::TransformNetworkManager_AddReporter
                (pTVar9,iVar14,this_04,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar7 == (MVNetworkGame *)0x0) ||
          (pMVar4 = (this->fields).woOwner, pMVar4 == (MVVehicleBase *)0x0)) ||
         (pRVar12 = (pMVar7->fields).runtimeVariableNetworkManager,
         pRVar12 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_AddRuntimeDataVariables
                (pRVar12,(pMVar4->fields)._._._._.id,(MethodInfo *)0x0);
    }
    pMVar4 = (this->fields).woOwner;
    if (pMVar4 == (MVVehicleBase *)0x0) goto code_?;
    (pMVar4->fields)._._._._.ownerActorNr = instigatorActorNr;
  }
  if ((vehicleUser != (MVAvatar *)0x0) &&
     (pMVar4 = (this->fields).woOwner, pMVar4 != (MVVehicleBase *)0x0)) {
    (*(pMVar4->klass->vtable).TransferChild.methodPtr)
              (pMVar4,(ulonglong)(uint)(vehicleUser->fields)._._._.id,
               (pMVar4->klass->vtable).TransferChild.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
      pTVar9 = (pMVar7->fields).transformNetworkManager;
      iVar14 = (vehicleUser->fields)._._._.id;
      if (pTVar9 != (TransformNetworkManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (pTVar9->fields).networkedObjects;
        if (this_02 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar14,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                    );
          MVAvatar::MVAvatar_set_SeatID(vehicleUser,vehicleSeatID,(MethodInfo *)0x0);
          VehicleSeatManager_SetToSeatTransform(this,vehicleUser,vehicleSeatID,(MethodInfo *)0x0);
          if ((instigatorIsLocal != 0) &&
             (VehicleSeatBase::VehicleSeatBase_SetCamera(this_00,(MethodInfo *)0x0),
             cRam_? == '\0')) {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((this->fields).OnSeatOccupiedChange ==
              (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
            return;
          }
          pVVar15 = (this->fields).OnSeatOccupiedChange;
          (*(pVVar15->fields)._._.invoke_impl)
                    ((pVVar15->fields)._._.method_code,(pVVar15->fields)._._.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_CheckCanUse
               (VehicleSeatManager *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                  ,CONCAT44(in_register_00000014,woId));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (avatarInteractable == (MVInteractableBase *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cVar3 = (*(avatarInteractable->klass->vtable).__unknown_7.methodPtr)
                    (avatarInteractable,9,(avatarInteractable->klass->vtable).__unknown_7.method);
  if (cVar3 == '\0') {
    pLVar4 = (this->fields).seats;
    if (pLVar4 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
    uStack_11 = 0;
    LStack_12._8_8_ = pLStack_10;
    LStack_12._current = (Object *)0x0;
    uStack_6 = 0;
    pLStack_10 = &LStack_12;
    LStack_12._list = (List_1_System_Object_ *)pLVar4;
    while (bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_12,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                             ), bVar2 != 0) {
      if (LStack_12._current == (Object *)0x0) goto code_?;
      if (*(char *)&LStack_12._current[5].klass == '\0') {
        return 1;
      }
    }
  }
  return 0;
}


/* Void DetachFromSeat(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_DetachFromSeat
               (VehicleSeatManager *this,MVAvatar *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_occupiedSeatCount_less_than_0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (vehicleUser != (MVAvatar *)0x0) {
    uVar1 = MVAvatar::MVAvatar_get_SeatID(vehicleUser,(MethodInfo *)0x0);
    pGVar2 = (vehicleUser->fields)._._.gameObject;
    if (pGVar2 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      pMVar4 = (this->fields).woOwner;
      if (((pMVar4 != (MVVehicleBase *)0x0) &&
          (pGVar2 = (pMVar4->fields)._._._.gameObject, pGVar2 != (GameObject *)0x0)) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar3,pTVar5,(MethodInfo *)0x0);
        pLVar6 = (this->fields).seats;
        if (pLVar6 != (List_1_VehicleSeatBase_ *)0x0) {
          if ((uint)(pLVar6->fields)._size <= uVar1) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pVVar8 = (pLVar6->fields)._items;
          if (pVVar8 != (VehicleSeatBase__Array *)0x0) {
            if ((uint)pVVar8->max_length <= uVar1) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pGVar2 = (vehicleUser->fields)._._.gameObject;
            this_00 = pVVar8->vector[(int)uVar1];
            if (((pGVar2 != (GameObject *)0x0) &&
                (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                this_00 != (VehicleSeatBase *)0x0)) &&
               (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_00,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar9 = (pTVar5->fields)._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcVar7 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcRam_? = pcVar7;
              (*pcRam_?)(pvVar9);
              if (pTVar3 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar9 = (pTVar3->fields)._._.m_CachedPtr;
                if (pvVar9 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar9);
                pGVar2 = (vehicleUser->fields)._._.gameObject;
                if (pGVar2 != (GameObject *)0x0) {
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                  if (pTVar5 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar9 = (pTVar5->fields)._._.m_CachedPtr;
                    if (pvVar9 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0)
                      ;
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcVar7 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                      uVar10 = func_?(&UNK_?);
                      FUN_?(uVar10,0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcRam_? = pcVar7;
                    (*pcRam_?)(pvVar9);
                    if (pTVar3 != (Transform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((pTVar3->fields)._._.m_CachedPtr == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar3,(MethodInfo *)0x0);
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pcVar7 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0))
                      {
                        uVar10 = func_?(&UNK_?);
                        FUN_?(uVar10,0);
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pcRam_? = pcVar7;
                      (*pcRam_?)();
                      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                          ((MethodInfo *)0x0);
                      if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
                         (pMVar11 = MVWorldObjectClientManager::
                                    MVWorldObjectClientManager_get_RootGroup
                                              (this_01,(MethodInfo *)0x0), pMVar11 != (MVGroup *)0x0
                         )) {
                        (*(pMVar11->klass->vtable).TransferChild.methodPtr)
                                  (pMVar11,(ulonglong)(uint)(vehicleUser->fields)._._._.id);
                        MVAvatar::MVAvatar_set_SeatID(vehicleUser,-1,(MethodInfo *)0x0);
                        lVar12 = FUN_?(&(vehicleUser->klass->_0).byval_arg);
                        pIVar13 = TypeRef__MVAvatarLocal;
                        if (*(int *)(lRam_? + 0xe4) == 0) {
                          FUN_?();
                        }
                        if (pIVar13 == (Il2CppType *)0x0) {
                          lVar14 = 0;
                        }
                        else {
                          if (*(int *)(lRam_? + 0xe4) == 0) {
                            FUN_?();
                          }
                          lVar14 = FUN_?(pIVar13,1);
                          lVar14 = FUN_?(lVar14 + 0x20);
                        }
                        if ((lVar12 == lVar14) &&
                           ((*(this_00->klass->vtable).RemoveCamera.methodPtr)
                                      (this_00,(this_00->klass->vtable).RemoveCamera.method),
                           cRam_? == '\0')) {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        (*(this_00->klass->vtable).Detach.methodPtr)(this_00);
                        piVar15 = &(this->fields).occupiedSeatCount;
                        *piVar15 = *piVar15 + -1;
                        if (*piVar15 < 0) {
                          pSVar16 = mscorlib.dll::System::Int32::Int32_ToString
                                              ((Int32 *)&(this->fields).occupiedSeatCount,
                                               (MethodInfo *)0x0);
                          pSVar16 = mscorlib.dll::System::String::String_Concat_4
                                              (StringLiteral_occupiedSeatCount_less_than_0_,pSVar16,
                                               (MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)pSVar16,(MethodInfo *)0x0);
                        }
                        VehicleSeatManager_UpdateTriggerBoxEventsCollider(this,(MethodInfo *)0x0);
                        if ((this->fields).OnSeatOccupiedChange !=
                            (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
                          pVVar17 = (this->fields).OnSeatOccupiedChange;
                          (*(pVVar17->fields)._._.invoke_impl)
                                    ((pVVar17->fields)._._.method_code,(pVVar17->fields)._._.method);
                        }
                        return;
                      }
                    }
                    FUN_?();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
              }
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Init(MVVehicleBase, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_Init
               (VehicleSeatManager *this,MVVehicleBase *wo,
               MVRuntimeDataVariable *isDeadRuntimeVariable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__VehicleSeatManager__CheckCanUse_int__MVInteractableBase_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__VehicleSeatManager__OnIsDeadChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__VehicleSeatManager__Use_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Found_avatar_child_with_seatID__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Found_avatar_child_with_seat_ID_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if ((isDeadRuntimeVariable != (MVRuntimeDataVariable *)0x0) &&
     (pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((isDeadRuntimeVariable->fields).value,(MethodInfo *)0x0),
     pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).isDead = *(bool *)&pOVar2[1].klass;
    pMVar4 = (isDeadRuntimeVariable->fields).OnChange;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,MethodInfo__VehicleSeatManager__OnIsDeadChange_System__Object_
               ,(MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (isDeadRuntimeVariable->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar6 = pMVar5;
      if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar6 = pMVar4;
      }
      if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (isDeadRuntimeVariable->fields).OnChange = pMVar6;
      pMVar6 = pMVar5;
      if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar6 = pMVar4;
      }
      if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(isDeadRuntimeVariable->fields).OnChange >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pLVar12 = (this->fields).seats;
    if (pLVar12 != (List_1_VehicleSeatBase_ *)0x0) {
      lVar13 = 0x20;
      do {
        uVar7 = (uint)pMVar5;
        if ((pLVar12->fields)._size <= (int)uVar7) {
          (this->fields).woOwner = wo;
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&(this->fields).woOwner >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          pMStack_14 = (this->fields).woOwner;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          vehicleUser = (this->fields)._._._._.m_CachedPtr;
          if (vehicleUser == (MVAvatar *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
          }
          else {
            pcRam_? = pcVar3;
            gcHandlePtr = (void *)(*pcRam_?)(vehicleUser);
            pGStackX_18 = (GameObject *)
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (gcHandlePtr,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                    );
            pTVar16 = (this->fields).triggerBoxEvents;
            if (pTVar16 == (TriggerBoxEvents *)0x0) break;
            triggerCollider =
                 TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar16,(MethodInfo *)0x0);
            useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
            FUN_?(useFunction,this,MethodInfo__VehicleSeatManager__Use_int_);
            checkCanUseFunction =
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)
                 FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
            FUN_?(checkCanUseFunction,this,
                          MethodInfo__VehicleSeatManager__CheckCanUse_int__MVInteractableBase_);
            pUVar17 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
            UseInteractor::UseInteractor__ctor
                      (pUVar17,(MVWorldObjectClient *)pMStack_14,pGStackX_18,1,triggerCollider,
                       useFunction,checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
            (this->fields).useInteractor = pUVar17;
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
              uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            pTVar16 = (this->fields).triggerBoxEvents;
            pUVar17 = (this->fields).useInteractor;
            pUVar18 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar18,(Object *)pUVar17,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar16 == (TriggerBoxEvents *)0x0) break;
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar16,(EventHandler_1_TriggerEventArgs_ *)pUVar18,(MethodInfo *)0x0);
            pTVar16 = (this->fields).triggerBoxEvents;
            pUVar17 = (this->fields).useInteractor;
            pUVar18 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar18,(Object *)pUVar17,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (((pTVar16 == (TriggerBoxEvents *)0x0) ||
                (TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                           (pTVar16,(EventHandler_1_TriggerEventArgs_ *)pUVar18,(MethodInfo *)0x0),
                wo == (MVVehicleBase *)0x0)) ||
               (pLVar19 = MVGroup::MVGroup_get_Children((MVGroup *)wo,(MethodInfo *)0x0),
               pLVar19 == (List_1_MVWorldObjectClient_ *)0x0)) break;
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&pMStack_14 >> 0xc);
              uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            pLStack_20 = (List_1_T_Enumerator_System_Object_ *)
                         ((ulonglong)(uint)(pLVar19->fields)._version << 0x20);
            uStack_21 = 0;
            LStack_1._8_8_ = pLStack_20;
            LStack_1._current = (Object *)0x0;
            pMStack_14 = (MVVehicleBase *)0x0;
            pLStack_20 = &LStack_1;
            LStack_1._list = (List_1_System_Object_ *)pLVar19;
            while( true ) {
              while( true ) {
                do {
                  do {
                    bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                            ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                      (&LStack_1,
                                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                      );
                    vehicleUser = (MVAvatar *)LStack_1._current;
                    if (bVar22 == 0) {
                      return;
                    }
                  } while ((MVAvatar *)LStack_1._current == (MVAvatar *)0x0);
                  pMVar23 = (MVAvatar__Class *)(LStack_1._current)->klass;
                  bVar24 = (TypeInfo__MVAvatar->_1).naturalAligment;
                } while ((((pMVar23->_1).naturalAligment < bVar24) ||
                         ((MVAvatar__Class *)(pMVar23->_1).typeHierarchy[(ulonglong)bVar24 - 1] !=
                          TypeInfo__MVAvatar)) ||
                        ((MVAvatar *)LStack_1._current == (MVAvatar *)0x0));
                bVar24 = (TypeInfo__MVAvatar->_1).naturalAligment;
                if (((pMVar23->_1).naturalAligment < bVar24) ||
                   ((MVAvatar__Class *)(pMVar23->_1).typeHierarchy[(ulonglong)bVar24 - 1] !=
                    TypeInfo__MVAvatar)) goto code_?;
                seatID = MVAvatar::MVAvatar_get_SeatID
                                   ((MVAvatar *)LStack_1._current,(MethodInfo *)0x0);
                pGStackX_18 = (GameObject *)CONCAT44(pGStackX_18._4_4_,seatID);
                if (seatID != -1) break;
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Found_avatar_child_with_seatID__,
                           (MethodInfo *)0x0);
              }
              pSVar25 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&pGStackX_18,(MethodInfo *)0x0);
              pSVar25 = mscorlib.dll::System::String::String_Concat_4
                                  (StringLiteral_Found_avatar_child_with_seat_ID_,pSVar25,
                                   (MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar25,(MethodInfo *)0x0);
              bVar24 = (TypeInfo__MVAvatar->_1).naturalAligment;
              if ((((((MVAvatar__Class *)((Object *)vehicleUser)->klass)->_1).naturalAligment <
                    bVar24) ||
                  ((MVAvatar__Class *)
                   (((MVAvatar__Class *)((Object *)vehicleUser)->klass)->_1).typeHierarchy
                   [(ulonglong)bVar24 - 1] != TypeInfo__MVAvatar)) ||
                 (vehicleUser == (MVAvatar *)0x0)) break;
              VehicleSeatManager_SetToSeatTransform(this,vehicleUser,seatID,(MethodInfo *)0x0);
            }
          }
          FUN_?(vehicleUser);
code_?:
          FUN_?(vehicleUser);
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pLVar12 = (this->fields).seats;
        if (pLVar12 == (List_1_VehicleSeatBase_ *)0x0) break;
        if ((uint)(pLVar12->fields)._size <= uVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pVVar26 = (pLVar12->fields)._items;
        if (pVVar26 == (VehicleSeatBase__Array *)0x0) break;
        if ((uint)pVVar26->max_length <= uVar7) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar27 = *(longlong *)((longlong)pVVar26->vector + lVar13 + -0x20);
        if (lVar27 == 0) break;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Trying_to_re_set_seatID);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)(lVar27 + 0x20) == -1) {
          *(uint *)(lVar27 + 0x20) = uVar7;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Trying_to_re_set_seatID,(MethodInfo *)0x0);
        }
        pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)(ulonglong)(uVar7 + 1);
        lVar13 = lVar13 + 8;
        pLVar12 = (this->fields).seats;
      } while (pLVar12 != (List_1_VehicleSeatBase_ *)0x0);
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_OnIsDeadChange
               (VehicleSeatManager *this,Object *isDeadRuntime,MethodInfo *method)

{
  if (isDeadRuntime == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((isDeadRuntime->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(isDeadRuntime);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields).isDead = *(bool *)&isDeadRuntime[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).isDead == 0) && ((this->fields).enterVehicleDisabled == 0)) {
    pLVar2 = (this->fields).seats;
    if (pLVar2 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
    this_00 = (this->fields).triggerBoxEvents;
    if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
    if ((this->fields).occupiedSeatCount != (pLVar2->fields)._size) {
      obj = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_00,(MethodInfo *)0x0);
      if (obj == (Collider *)0x0) goto code_?;
      uVar3 = 1;
      goto UnityEngine_PhysicsModule_dll_UnityEngine_Collider_Collider_set_enabled;
    }
  }
  else {
    this_00 = (this->fields).triggerBoxEvents;
    if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
  }
  obj = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_00,(MethodInfo *)0x0);
  if (obj != (Collider *)0x0) {
    uVar3 = 0;
UnityEngine_PhysicsModule_dll_UnityEngine_Collider_Collider_set_enabled:
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                    ,uVar3,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj == (Collider *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,uVar3);
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetToSeatTransform(MVAvatar, Int32) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_SetToSeatTransform
               (VehicleSeatManager *this,MVAvatar *vehicleUser,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).seats;
  if (pLVar1 != (List_1_VehicleSeatBase_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)seatID) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar3 = (pLVar1->fields)._items;
    if (pVVar3 == (VehicleSeatBase__Array *)0x0) goto code_?;
    if ((uint)pVVar3->max_length <= (uint)seatID) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar4 = pVVar3->vector[seatID];
    if ((((vehicleUser == (MVAvatar *)0x0) ||
         (this_00 = (vehicleUser->fields)._._.gameObject, this_00 == (GameObject *)0x0)) ||
        (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0), pVVar4 == (VehicleSeatBase *)0x0)) ||
       (this_01 == (Transform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (this_01,(pVVar4->fields).AvatarAttachPoint,(MethodInfo *)0x0);
    uVar5 = (vehicleUser->fields).characterControllerCenterOffset.x;
    uVar6 = (vehicleUser->fields).characterControllerCenterOffset.y;
    fStack_7 = (float)((uint)(vehicleUser->fields).characterControllerCenterOffset.z ^
                       _UNK_?);
    uStack_8 = CONCAT44(uVar6 ^ _UNK_?,uVar5 ^ _UNK_?);
    (*(vehicleUser->klass->vtable).set_Position.methodPtr)
              (vehicleUser,&uStack_8,(vehicleUser->klass->vtable).set_Position.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uStack_8._0_4_ = (pQVar9->identityQuaternion).x;
    uStack_8._4_4_ = (pQVar9->identityQuaternion).y;
    fStack_7 = (pQVar9->identityQuaternion).z;
    fStack_10 = (pQVar9->identityQuaternion).w;
    (*(vehicleUser->klass->vtable).set_Rotation.methodPtr)
              (vehicleUser,&uStack_8,(vehicleUser->klass->vtable).set_Rotation.method);
    (*(pVVar4->klass->vtable).Attach.methodPtr)(pVVar4);
    pLVar1 = (this->fields).seats;
    iVar11 = (this->fields).occupiedSeatCount + 1;
    (this->fields).occupiedSeatCount = iVar11;
    if (pLVar1 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
    if ((pLVar1->fields)._size < iVar11) {
      pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(this->fields).occupiedSeatCount,(MethodInfo *)0x0);
      pSVar12 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_occupiedSeatCount_more_than_numb,pSVar12,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar12,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((this->fields).isDead == 0) && ((this->fields).enterVehicleDisabled == 0)) {
      pLVar1 = (this->fields).seats;
      if (pLVar1 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
      this_02 = (this->fields).triggerBoxEvents;
      if (this_02 == (TriggerBoxEvents *)0x0) goto code_?;
      if ((this->fields).occupiedSeatCount != (pLVar1->fields)._size) {
        obj = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_02,(MethodInfo *)0x0);
        if (obj == (Collider *)0x0) goto code_?;
        uVar13 = 1;
        goto code_?;
      }
    }
    else {
      this_02 = (this->fields).triggerBoxEvents;
      if (this_02 == (TriggerBoxEvents *)0x0) goto code_?;
    }
    obj = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_02,(MethodInfo *)0x0);
    if (obj != (Collider *)0x0) {
      uVar13 = 0;
code_?:
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                      ,uVar13,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Collider *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar14 = (obj->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar14,uVar13);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateTriggerBoxEventsCollider() */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_UpdateTriggerBoxEventsCollider
               (VehicleSeatManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).isDead == 0) && ((this->fields).enterVehicleDisabled == 0)) {
    pLVar1 = (this->fields).seats;
    if (pLVar1 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
    this_00 = (this->fields).triggerBoxEvents;
    if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
    if ((this->fields).occupiedSeatCount != (pLVar1->fields)._size) {
      obj = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_00,(MethodInfo *)0x0);
      if (obj == (Collider *)0x0) goto code_?;
      uVar2 = 1;
      goto UnityEngine_PhysicsModule_dll_UnityEngine_Collider_Collider_set_enabled;
    }
  }
  else {
    this_00 = (this->fields).triggerBoxEvents;
    if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
  }
  obj = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_00,(MethodInfo *)0x0);
  if (obj != (Collider *)0x0) {
    uVar2 = 0;
UnityEngine_PhysicsModule_dll_UnityEngine_Collider_Collider_set_enabled:
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                    ,uVar2,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj == (Collider *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,uVar2);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_Use
               (VehicleSeatManager *this,int32_t userWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).woOwner;
  if (pMVar1 != (MVVehicleBase *)0x0) {
    pMVar2 = pMVar1->klass;
    method_00 = (pMVar2->vtable).get_IsDead.method;
    cVar3 = (*(pMVar2->vtable).get_IsDead.methodPtr)();
    if ((cVar3 == '\0') &&
       (bVar4 = MVNetworkGame::MVNetworkGame_get_IsPlaying((MVNetworkGame *)0x0,method_00),
       bVar4 != 0)) {
      pLVar5 = (this->fields).seats;
      if (pLVar5 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar5->fields)._version << 0x20);
      uStack_12 = 0;
      LStack_13._8_8_ = pLStack_11;
      LStack_13._current = (Object *)0x0;
      uStack_7 = 0;
      pLStack_11 = &LStack_13;
      LStack_13._list = (List_1_System_Object_ *)pLVar5;
      do {
        do {
          bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_13,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                            );
          seatBase = LStack_13._current;
          if (bVar4 == 0) goto code_?;
          if ((VehicleSeatBase *)LStack_13._current == (VehicleSeatBase *)0x0)
          goto code_?;
        } while ((((VehicleSeatBase__Fields *)((longlong)LStack_13._current + 0x10))->
                  _IsOccupied_k__BackingField != 0) ||
                (((VehicleSeatBase__Fields *)((longlong)LStack_13._current + 0x10))->SeatType != 0))
        ;
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar14 == (MVNetworkGame *)0x0) goto code_?;
        this_00 = (pMVar14->fields)._PlayerController_k__BackingField;
        pMVar1 = (this->fields).woOwner;
        if (pMVar1 == (MVVehicleBase *)0x0) goto code_?;
        if (this_00 == (MVLocalObjectController *)0x0) goto code_?;
        bVar4 = MVLocalObjectController::MVLocalObjectController_AttachWorldObjectToSeat
                          (this_00,(pMVar1->fields)._._._._.id,userWoId,(VehicleSeatBase *)seatBase,
                           (MethodInfo *)0x0);
      } while (bVar4 == 0);
      bVar4 = 1;
    }
    else {
code_?:
      bVar4 = 0;
    }
    return bVar4;
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar4 = (*pcVar15)();
  return bVar4;
}


/* VehicleSeatManager() */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager__ctor
               (VehicleSeatManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<VehicleSeatBase>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_VehicleSeatBase_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<VehicleSeatBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).seats = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).seats >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* VehicleSeatBase get_DriverSeat() */

VehicleSeatBase *
Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_get_DriverSeat
          (VehicleSeatManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Multiple_driver_seats);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_driver_seat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).seats;
  if (pLVar1 == (List_1_VehicleSeatBase_ *)0x0) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    pVVar10 = (VehicleSeatBase *)0x0;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                        );
      pOVar12 = LStack_9._current;
      if (bVar11 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pVVar10 != (VehicleSeatBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pVVar10->fields)._._._._.m_CachedPtr != (void *)0x0) {
            return pVVar10;
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_driver_seat,(MethodInfo *)0x0);
        return pVVar10;
      }
      if ((VehicleSeatBase *)LStack_9._current == (VehicleSeatBase *)0x0) break;
      if (((VehicleSeatBase__Fields *)((longlong)LStack_9._current + 0x10))->SeatType == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pVVar10 == (VehicleSeatBase *)0x0) {
          bVar13 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar13 = (pVVar10->fields)._._._._.m_CachedPtr != (void *)0x0;
        }
        pVVar10 = (VehicleSeatBase *)pOVar12;
        if (bVar13) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Multiple_driver_seats,(MethodInfo *)0x0);
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  pVVar10 = (VehicleSeatBase *)(*pcVar14)();
  return pVVar10;
}


/* Void set_EnterVehicleDisabled(Boolean) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_set_EnterVehicleDisabled
               (VehicleSeatManager *this,bool value,MethodInfo *method)

{
  (this->fields).enterVehicleDisabled = value;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).isDead == 0) && ((this->fields).enterVehicleDisabled == 0)) {
    pLVar1 = (this->fields).seats;
    if (pLVar1 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
    this_00 = (this->fields).triggerBoxEvents;
    if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
    if ((this->fields).occupiedSeatCount != (pLVar1->fields)._size) {
      obj = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_00,(MethodInfo *)0x0);
      if (obj == (Collider *)0x0) goto code_?;
      uVar2 = 1;
      goto UnityEngine_PhysicsModule_dll_UnityEngine_Collider_Collider_set_enabled;
    }
  }
  else {
    this_00 = (this->fields).triggerBoxEvents;
    if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
  }
  obj = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_00,(MethodInfo *)0x0);
  if (obj != (Collider *)0x0) {
    uVar2 = 0;
UnityEngine_PhysicsModule_dll_UnityEngine_Collider_Collider_set_enabled:
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                    ,uVar2,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj == (Collider *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,uVar2);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

