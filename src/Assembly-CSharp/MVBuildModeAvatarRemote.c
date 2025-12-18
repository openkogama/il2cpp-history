
/* Void Activate(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Activate
               (MVBuildModeAvatarRemote *this,int32_t idFrom,Vector3 *position,Quaternion *rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject,CONCAT44(in_register_00000014,idFrom));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkListener);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_1 = position->z;
  uStack_2._0_4_ = position->x;
  uStack_2._4_4_ = position->y;
  (*(this->klass->vtable).set_Position.methodPtr)
            (this,&uStack_2,(this->klass->vtable).set_Position.method);
  uStack_2._0_4_ = rotation->x;
  uStack_2._4_4_ = rotation->y;
  fStack_1 = rotation->z;
  fStack_3 = rotation->w;
  (*(this->klass->vtable).set_Rotation.methodPtr)(this,&uStack_2);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 != (MVGameControllerBase *)0x0) &&
      (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar5->fields).transformNetworkManager, this_00 != (TransformNetworkManager *)0x0)
     ) {
    this_01 = (MVNetworkListener *)
              TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                        (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
    if (this_01 != (MVNetworkListener *)0x0) {
      bVar6 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
      if (((this_01->klass->_1).naturalAligment < bVar6) ||
         ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
          (Il2CppClass *)TypeInfo__MVNetworkListener)) {
        FUN_?(this_01);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_01,(MethodInfo *)0x0);
    }
    pGVar8 = (this->fields)._._._.gameObject;
    if (pGVar8 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,1,(MethodInfo *)0x0);
      MVBuildModeAvatarRemote_SetLaserPointerVisibility(this,1,(MethodInfo *)0x0);
      pAVar9 = (this->fields).avatarRemoteBuildMode;
      if ((pAVar9 != (AvatarRemoteBuildMode *)0x0) &&
         (pAVar10 = (pAVar9->fields).avatarUIHandlerRemote, pAVar10 != (AvatarUIHandlerRemote *)0x0))
      {
        (*(pAVar10->klass->vtable).Activate.methodPtr)
                  (pAVar10,(pAVar10->klass->vtable).Activate.method);
        pDVar11 = (this->fields).cullingHandler;
        pGVar8 = (this->fields)._._._.gameObject;
        cullingGroup = (GameObject__Array *)FUN_?(TypeInfo__UnityEngine__GameObject,1);
        pMVar12 = (this->fields)._.body;
        if ((pMVar12 != (MVBody *)0x0) && (cullingGroup != (GameObject__Array *)0x0)) {
          if ((int)cullingGroup->max_length == 0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar13 = iRam_? != 0;
          cullingGroup->vector[0] = (pMVar12->fields)._._._.gameObject;
          if (bVar13) {
            uVar14 = (uint)((ulonglong)cullingGroup->vector >> 0xc);
            puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar16 = *puVar15;
              LOCK();
              uVar17 = *puVar15;
              if (uVar16 == uVar17) {
                *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (uVar16 != uVar17);
          }
          if (pDVar11 != (DynamicCullingHandler *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CullingSubscriberDynamic);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_Activating_Culling);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Activating_Culling,(MethodInfo *)0x0);
            radius = (pDVar11->fields).cullingRadius;
            this_02 = (CullingSubscriberDynamic *)FUN_?(TypeInfo__CullingSubscriberDynamic);
            CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                      (this_02,radius,3,pGVar8,cullingGroup,0,(MethodInfo *)0x0);
            bVar13 = iRam_? != 0;
            (pDVar11->fields).cullingSubscriberDynamic = this_02;
            if (bVar13) {
              uVar14 = (uint)((ulonglong)&pDVar11->fields >> 0xc);
              uVar17 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
              do {
                uVar16 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar13 = uVar16 == *puVar15;
                if (bVar13) {
                  *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
            return;
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


/* Void DeActivate(Int32) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_DeActivate
               (MVBuildModeAvatarRemote *this,int32_t idTo,MethodInfo *method)

{
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    MVBuildModeAvatarRemote_SetLaserPointerVisibility(this,0,(MethodInfo *)0x0);
    pAVar1 = (this->fields).avatarRemoteBuildMode;
    if ((pAVar1 != (AvatarRemoteBuildMode *)0x0) &&
       (pAVar2 = (pAVar1->fields).avatarUIHandlerRemote, pAVar2 != (AvatarUIHandlerRemote *)0x0)) {
      (*(pAVar2->klass->vtable).Deactivate.methodPtr)();
      pDVar3 = (this->fields).cullingHandler;
      if (pDVar3 != (DynamicCullingHandler *)0x0) {
        if ((pDVar3->fields).cullingSubscriberDynamic != (CullingSubscriberDynamic *)0x0) {
          CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
                    ((pDVar3->fields).cullingSubscriberDynamic,(MethodInfo *)0x0);
          bVar4 = iRam_? != 0;
          (pDVar3->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
          if (bVar4) {
            uVar5 = (uint)((ulonglong)&pDVar3->fields >> 0xc);
            puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar7 = *puVar6;
              LOCK();
              uVar8 = *puVar6;
              if (uVar7 == uVar8) {
                *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar7 != uVar8);
          }
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Destroy
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarRemote__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingHandler;
  if (this_00 == (DynamicCullingHandler *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlanetOwnershipsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
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
  if (pPVar2 != (PlanetOwnershipsManager *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PlanetOwnershipsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVBuildModeAvatarRemote__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                 ,(MethodInfo *)0x0);
      if (pPVar2 == (PlanetOwnershipsManager *)0x0) goto code_?;
      PlanetOwnershipsManager::PlanetOwnershipsManager_remove_OnReceivedPlanetPermissionsData
                (pPVar2,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                         *)this_01,(MethodInfo *)0x0);
    }
  }
  pLVar3 = (this->fields).laserPointer;
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
  if (pLVar3 != (LaserPointer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pLVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pLVar3 = (this->fields).laserPointer;
      if (pLVar3 == (LaserPointer *)0x0) goto code_?;
      pAVar4 = (pLVar3->fields).OnLaserActive;
      pDVar5 = (Delegate *)FUN_?(TypeInfo__System__Action<bool,_bool>);
      FUN_?(pDVar5,this);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,pDVar5,(MethodInfo *)0x0);
      pAVar6 = TypeInfo__System__Action<bool,_bool>;
      if (pDVar5 == (Delegate *)0x0) {
        (pLVar3->fields).OnLaserActive = (Action_2_Boolean_Boolean_ *)0x0;
      }
      else {
        pAVar4 = (Action_2_Boolean_Boolean_ *)
                 FUN_?(pDVar5,TypeInfo__System__Action<bool,_bool>);
        if (pAVar4 == (Action_2_Boolean_Boolean_ *)0x0) {
          FUN_?(pDVar5,pAVar6);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (pLVar3->fields).OnLaserActive = pAVar4;
        pAVar6 = TypeInfo__System__Action<bool,_bool>;
        lVar7 = FUN_?(pDVar5,TypeInfo__System__Action<bool,_bool>);
        if (lVar7 == 0) {
          FUN_?(pDVar5,pAVar6);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pLVar3->fields).OnLaserActive >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
    }
  }
  return;
}


/* Vector3 GetLookDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_GetLookDirection
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarRemote *this,
                    MethodInfo *method)

{
  this_00 = (this->fields)._._._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
    fStack_5 = fVar4;
    uStack_6 = uStack_3;
    fVar7 = (float)FUN_?(&uStack_3);
    if (_UNK_? < fVar7) {
      fVar4 = fVar4 / fVar7;
      uVar8 = CONCAT44(uStack_6._4_4_ / fVar7,(float)uStack_6 / fVar7);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar8._0_4_ = (pVVar9->zeroVector).x;
      uVar8._4_4_ = (pVVar9->zeroVector).y;
      fVar4 = (pVVar9->zeroVector).z;
    }
    __return_storage_ptr__->x = (float)(int)uVar8;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar8 >> 0x20);
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar10)();
  return pVVar1;
}


/* Void HandleLaserActive(Boolean, Boolean) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_HandleLaserActive
               (MVBuildModeAvatarRemote *this,bool isLocal,bool isActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (isLocal == 0) {
    this_00 = (this->fields).cullingHandler;
    if (isActive == 0) {
      pGVar1 = (this->fields)._._._.gameObject;
      cullingGroup = (GameObject__Array *)FUN_?(TypeInfo__UnityEngine__GameObject,1);
      if ((((this->fields)._.body != (MVBody *)0x0) && (cullingGroup != (GameObject__Array *)0x0))
         && (FUN_?(cullingGroup), this_00 != (DynamicCullingHandler *)0x0)) {
        DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                  (this_00,pGVar1,cullingGroup,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (this_00 != (DynamicCullingHandler *)0x0) {
      DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_00,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._._.gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Initialize
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,
             UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
  pAVar1 = (this->fields).avatarRemoteBuildMode;
  uVar2 = (this->fields)._._._._.ownerActorNr;
  if (pAVar1 != (AvatarRemoteBuildMode *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar3 = (pAVar1->fields).avatarUIHandlerRemote;
    if (pAVar3 != (AvatarUIHandlerRemote *)0x0) {
      (*(pAVar3->klass->vtable).Initialize.methodPtr)
                (pAVar3,0,this,(ulonglong)uVar2,(pAVar1->fields).chatBubbleAnchor,
                 (pAVar3->klass->vtable).Initialize.method);
      pUVar4 = (this->fields)._._._.PositionChanged;
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)pAVar1,
                 MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar4,(Delegate *)this_02,(MethodInfo *)0x0);
      pUVar6 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar5 == (Delegate *)0x0) {
        (this->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                  FUN_?(pDVar5,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar5,pUVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (this->fields)._._._.PositionChanged = pUVar4;
        pUVar6 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar8 = FUN_?(pDVar5,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (lVar8 == 0) {
          FUN_?(pDVar5,pUVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
        lVar8 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pAVar12 = (AvatarLimbManager *)FUN_?(TypeInfo__AvatarLimbManagerRemote);
      bVar11 = iRam_? != 0;
      (this->fields)._.limbManager = pAVar12;
      if (bVar11) {
        uVar2 = (uint)((ulonglong)&(this->fields)._.limbManager >> 0xc);
        lVar8 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pAVar1 = (this->fields).avatarRemoteBuildMode;
      if ((pAVar1 != (AvatarRemoteBuildMode *)0x0) &&
         (pAVar12 = (this->fields)._.limbManager, pAVar12 != (AvatarLimbManager *)0x0)) {
        (*(pAVar12->klass->vtable).Initialize.methodPtr)
                  (pAVar12,this,(this->fields)._.body,(pAVar1->fields).enabledChangeHandler,
                   (this->fields)._.limbRotationRuntimeData,
                   (pAVar12->klass->vtable).Initialize.method);
        newAnimation = StringLiteral_Idle;
        pMVar13 = (this->fields)._.body;
        if (pMVar13 != (MVBody *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar14 != (MVGameControllerBase *)0x0) &&
             (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) {
            timeStamp = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                  (pMVar15,(MethodInfo *)0x0);
            pMVar16 = (pMVar13->fields).bodyObject;
            if ((pMVar16 != (MVBodyObject *)0x0) &&
               (this_00 = (pMVar16->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_StartAnimation
                        (this_00,newAnimation,timeStamp,(MethodInfo *)0x0);
              pMVar13 = (this->fields)._.body;
              if ((pMVar13 != (MVBody *)0x0) &&
                 (pGVar17 = (pMVar13->fields)._._._.gameObject, pGVar17 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar17,1,(MethodInfo *)0x0);
                pGVar17 = (this->fields)._._._.gameObject;
                if (pGVar17 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar17,0,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((((pMVar14 != (MVGameControllerBase *)0x0) &&
                       (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
                      (this_01 = (pMVar15->fields).playerContainer,
                      this_01 != (MVPlayerContainer *)0x0)) &&
                     (this_03 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                          (this_01,(this->fields)._._._._.ownerActorNr,
                                           (MethodInfo *)0x0), this_03 != (MVPlayer *)0x0)) {
                    MVPlayer::MVPlayer_NotifyAvatarCreated
                              (this_03,(this->fields)._._._._.id,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__System__Action<bool,_bool>);
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__MVBuildModeAvatarRemote__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pGVar18 = TypeInfo__MVGameControllerBase->static_fields->
                              _GameSessionData_k__BackingField;
                    if (pGVar18 != (GameSessionData *)0x0) {
                      if ((pGVar18->fields).gameMode == 2) {
                        pLVar19 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                                            ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
                        bVar11 = iRam_? != 0;
                        (this->fields).laserPointer = pLVar19;
                        if (bVar11) {
                          uVar2 = (uint)((ulonglong)&(this->fields).laserPointer >> 0xc);
                          lVar8 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                            LOCK();
                            bVar11 = uVar9 == *puVar10;
                            if (bVar11) {
                              *puVar10 = uVar9 | 1L << (uVar2 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar11);
                        }
                        pLVar19 = (this->fields).laserPointer;
                        if (pLVar19 != (LaserPointer *)0x0) {
                          pAVar20 = (pLVar19->fields).OnLaserActive;
                          pDVar5 = (Delegate *)FUN_?(TypeInfo__System__Action<bool,_bool>);
                          FUN_?(pDVar5,this);
                          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pAVar20,pDVar5,(MethodInfo *)0x0);
                          pAVar21 = TypeInfo__System__Action<bool,_bool>;
                          if (pDVar5 == (Delegate *)0x0) {
                            (pLVar19->fields).OnLaserActive = (Action_2_Boolean_Boolean_ *)0x0;
                          }
                          else {
                            pAVar20 = (Action_2_Boolean_Boolean_ *)
                                      FUN_?(pDVar5,TypeInfo__System__Action<bool,_bool>);
                            if (pAVar20 == (Action_2_Boolean_Boolean_ *)0x0) {
                              FUN_?(pDVar5,pAVar21);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            (pLVar19->fields).OnLaserActive = pAVar20;
                            pAVar21 = TypeInfo__System__Action<bool,_bool>;
                            lVar8 = FUN_?(pDVar5,TypeInfo__System__Action<bool,_bool>);
                            if (lVar8 == 0) {
                              FUN_?(pDVar5,pAVar21);
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                          }
                          if (iRam_? == 0) {
                            return;
                          }
                          uVar2 = (uint)((ulonglong)&(pLVar19->fields).OnLaserActive >> 0xc);
                          lVar8 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                            LOCK();
                            bVar11 = uVar9 == *puVar10;
                            if (bVar11) {
                              *puVar10 = uVar9 | 1L << (uVar2 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar11);
                          return;
                        }
                      }
                      else {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__PlanetOwnershipsManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pPVar22 = TypeInfo__PlanetOwnershipsManager->static_fields->
                                  _Instance_k__BackingField;
                        if (pPVar22 != (PlanetOwnershipsManager *)0x0) {
                          if ((pPVar22->fields)._RecievedPlanetOwnershipData_k__BackingField == 0) {
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__PlanetOwnershipsManager);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pPVar22 = TypeInfo__PlanetOwnershipsManager->static_fields->
                                      _Instance_k__BackingField;
                            this_04 = (UnityAction_1_System_Object_ *)
                                      FUN_?(
                                                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                                                  );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Object]::UnityAction_1_System_Object___ctor
                                      (this_04,(Object *)this,
                                       MethodInfo__MVBuildModeAvatarRemote__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                                       ,(MethodInfo *)0x0);
                            if (pPVar22 != (PlanetOwnershipsManager *)0x0) {
                              PlanetOwnershipsManager::
                              PlanetOwnershipsManager_add_OnReceivedPlanetPermissionsData
                                        (pPVar22,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                                                  *)this_04,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          else {
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__PlanetOwnershipsManager);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pPVar22 = TypeInfo__PlanetOwnershipsManager->static_fields->
                                      _Instance_k__BackingField;
                            if (pPVar22 != (PlanetOwnershipsManager *)0x0) {
                              MVBuildModeAvatarRemote_ReceivedPlanetPermissionsDataCallback
                                        (this,(pPVar22->fields).
                                              _PlanetPermissionsEntries_k__BackingField,
                                         (MethodInfo *)0x0);
                              return;
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
                }
              }
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


/* Void InitializeLaserPointerAndEditCube() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::
     MVBuildModeAvatarRemote_InitializeLaserPointerAndEditCube
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVBuildModeAvatarRemote__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 2) {
      pLVar2 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                         ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).laserPointer = pLVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).laserPointer >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pLVar2 = (this->fields).laserPointer;
      if (pLVar2 != (LaserPointer *)0x0) {
        pAVar8 = (pLVar2->fields).OnLaserActive;
        pDVar9 = (Delegate *)FUN_?(TypeInfo__System__Action<bool,_bool>);
        FUN_?(pDVar9,this);
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar8,pDVar9,(MethodInfo *)0x0);
        pAVar10 = TypeInfo__System__Action<bool,_bool>;
        if (pDVar9 == (Delegate *)0x0) {
          (pLVar2->fields).OnLaserActive = (Action_2_Boolean_Boolean_ *)0x0;
        }
        else {
          pAVar8 = (Action_2_Boolean_Boolean_ *)
                   FUN_?(pDVar9,TypeInfo__System__Action<bool,_bool>);
          if (pAVar8 == (Action_2_Boolean_Boolean_ *)0x0) {
            FUN_?(pDVar9,pAVar10);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (pLVar2->fields).OnLaserActive = pAVar8;
          pAVar10 = TypeInfo__System__Action<bool,_bool>;
          lVar5 = FUN_?(pDVar9,TypeInfo__System__Action<bool,_bool>);
          if (lVar5 == 0) {
            FUN_?(pDVar9,pAVar10);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (iRam_? == 0) {
          return;
        }
        uVar4 = (uint)((ulonglong)&(pLVar2->fields).OnLaserActive >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PlanetOwnershipsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar12 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
      if (pPVar12 != (PlanetOwnershipsManager *)0x0) {
        if ((pPVar12->fields)._RecievedPlanetOwnershipData_k__BackingField == 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PlanetOwnershipsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar12 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
          this_00 = (UnityAction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_00,(Object *)this,
                     MethodInfo__MVBuildModeAvatarRemote__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                     ,(MethodInfo *)0x0);
          if (pPVar12 != (PlanetOwnershipsManager *)0x0) {
            PlanetOwnershipsManager::PlanetOwnershipsManager_add_OnReceivedPlanetPermissionsData
                      (pPVar12,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                               *)this_00,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PlanetOwnershipsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar12 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
          if (pPVar12 != (PlanetOwnershipsManager *)0x0) {
            MVBuildModeAvatarRemote_ReceivedPlanetPermissionsDataCallback
                      (this,(pPVar12->fields)._PlanetPermissionsEntries_k__BackingField,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ReceivedPlanetPermissionsDataCallback(Dictionary`2[System.Int32,List`1[System.Int32]]) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::
     MVBuildModeAvatarRemote_ReceivedPlanetPermissionsDataCallback
               (MVBuildModeAvatarRemote *this,
               Dictionary_2_System_Int32_List_1_System_Int32_ *planetPermissionsEntries,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_included_in_planet_permi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Remote_Avatar_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                           (this_00,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
      pMVar3 != (MVPlayer *)0x0 &&
      (planetPermissionsEntries != (Dictionary_2_System_Int32_List_1_System_Int32_ *)0x0)))) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)planetPermissionsEntries,
                       (pMVar3->fields)._ProfileID_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar4 < 0) {
      pUVar5 = (pMVar3->fields)._UserProfileData_k__BackingField;
      if (pUVar5 != (UserProfileData *)0x0) {
        message = mscorlib.dll::System::String::String_Concat_5
                            (StringLiteral_Remote_Avatar_,(pUVar5->fields).UserName,
                             StringLiteral__is_not_included_in_planet_permi,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)planetPermissionsEntries,
                           (pMVar3->fields)._ProfileID_k__BackingField,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>__get_Item_int_
                          );
      if (pOVar6 != (Object *)0x0) {
        if ((*(int *)&pOVar6[1].monitor != 0) && (iVar7 = FUN_?(pOVar6), iVar7 != -1)) {
          pLVar8 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                              ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
          bVar9 = iRam_? != 0;
          (this->fields).laserPointer = pLVar8;
          if (bVar9) {
            uVar10 = (uint)((ulonglong)&(this->fields).laserPointer >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar9 = uVar12 == *puVar13;
              if (bVar9) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          pLVar8 = (this->fields).laserPointer;
          if (pLVar8 == (LaserPointer *)0x0) goto code_?;
          pAVar14 = (pLVar8->fields).OnLaserActive;
          pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<bool,_bool>);
          FUN_?(pDVar15,this);
          pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar14,pDVar15,(MethodInfo *)0x0);
          pAVar16 = TypeInfo__System__Action<bool,_bool>;
          if (pDVar15 == (Delegate *)0x0) {
            (pLVar8->fields).OnLaserActive = (Action_2_Boolean_Boolean_ *)0x0;
          }
          else {
            pAVar14 = (Action_2_Boolean_Boolean_ *)
                      FUN_?(pDVar15,TypeInfo__System__Action<bool,_bool>);
            if (pAVar14 == (Action_2_Boolean_Boolean_ *)0x0) {
              FUN_?(pDVar15,pAVar16);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            (pLVar8->fields).OnLaserActive = pAVar14;
            pAVar16 = TypeInfo__System__Action<bool,_bool>;
            lVar11 = FUN_?(pDVar15,TypeInfo__System__Action<bool,_bool>);
            if (lVar11 == 0) {
              FUN_?(pDVar15,pAVar16);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)&(pLVar8->fields).OnLaserActive >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar9 = uVar12 == *puVar13;
              if (bVar9) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SetLaserPointerVisibility(Boolean) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_SetLaserPointerVisibility
               (MVBuildModeAvatarRemote *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).laserPointer;
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
  if (pLVar1 != (LaserPointer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pLVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pLVar1 = (this->fields).laserPointer;
      if ((pLVar1 != (LaserPointer *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pLVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* MVBuildModeAvatarRemote(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
               (MVBuildModeAvatarRemote *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DynamicCullingHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarRemoteBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarRemoteBuildMode>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DynamicCullingHandler *)FUN_?(TypeInfo__DynamicCullingHandler);
  bVar2 = iRam_? != 0;
  (pDVar1->fields).cullingRadius = 3.5;
  (this->fields).cullingHandler = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).cullingHandler >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar7 != (PrefabPool *)0x0) {
    MVBuildModeAvatar::MVBuildModeAvatar__ctor
              ((MVBuildModeAvatar *)this,data,(pPVar7->fields).mvRemoteAvatarBuildModePrefab,
               worldObjects,(MethodInfo *)0x0);
    this_00 = (this->fields)._._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      pAVar8 = (AvatarRemoteBuildMode *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          AvatarRemoteBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarRemoteBuildMode>__
                         );
      bVar2 = iRam_? != 0;
      (this->fields).avatarRemoteBuildMode = pAVar8;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).avatarRemoteBuildMode >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&TypeRef__MVCubeModelFineGrainedTerrain);
        LOCK();
        UNLOCK();
        FUN_?(&TypeRef__MVCubeModelPrototypeTerrain);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MVNetworkReporter);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Problem__network_reporter_is_add);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar9 = FUN_?(&(this->klass->_0).byval_arg);
      pIVar10 = TypeRef__MVCubeModelFineGrainedTerrain;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar11 = 0;
      if (pIVar10 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar11 = FUN_?(pIVar10,1);
        lVar11 = FUN_?(lVar11 + 0x20);
      }
      if (lVar9 != lVar11) {
        FUN_?(&(this->klass->_0).byval_arg);
        pIVar10 = TypeRef__MVCubeModelPrototypeTerrain;
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (pIVar10 != (Il2CppType *)0x0) {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          FUN_?(pIVar10,1);
          FUN_?();
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

