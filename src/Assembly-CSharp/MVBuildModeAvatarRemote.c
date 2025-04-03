
/* Void Activate(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Activate
               (MVBuildModeAvatarRemote *this,int32_t idFrom,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MVNetworkListener);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).set_Position.method)
            (this,position._0_8_,position.z,(this->klass->vtable).get_Rotation.methodPtr);
  (*(code *)(this->klass->vtable).set_Rotation.method)
            (this,rotation.x,rotation.y,rotation.z,rotation.w,
             (this->klass->vtable).get_Scale.methodPtr);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).transformNetworkManager, this_00 == (TransformNetworkManager *)0x0)
     ) {
code_?:
    func_?();
  }
  else {
    this_03 = (MVNetworkListener *)
              TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                        (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__MVNetworkListener;
    if (this_03 != (MVNetworkListener *)0x0) {
      bVar2 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
      if (((this_03->klass->_1).naturalAligment < bVar2) ||
         ((this_03->klass->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__MVNetworkListener)) goto code_?;
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_03,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    MVBuildModeAvatarRemote_SetLaserPointerVisibility(this,1,(MethodInfo *)0x0);
    pAVar3 = (this->fields).avatarRemoteBuildMode;
    if ((pAVar3 == (AvatarRemoteBuildMode *)0x0) ||
       (pAVar4 = (pAVar3->fields).avatarUIHandlerRemote, pAVar4 == (AvatarUIHandlerRemote *)0x0))
    goto code_?;
    (*(code *)(pAVar4->klass->vtable).Activate.method)();
    this_02 = (this->fields).cullingHandler;
    unaff_EDI = (MVNetworkListener__Class *)func_?();
    pMVar5 = (this->fields)._.body;
    if ((pMVar5 == (MVBody *)0x0) || (unaff_EDI == (MVNetworkListener__Class *)0x0))
    goto code_?;
    if ((unaff_EDI->_0).namespaze != (char *)0x0) {
      (unaff_EDI->_0).byval_arg.data = (_union_86)(pMVar5->fields)._._._.gameObject;
      func_?();
      if (this_02 != (DynamicCullingHandler *)0x0) {
        DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                  (this_02,(GameObject *)0x0,(GameObject__Array *)unaff_EDI,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  this_03 = extraout_EDX;
code_?:
  func_?(this_03,unaff_EDI);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      (*(code *)(pAVar2->klass->vtable).Deactivate.method)();
      this_01 = (this->fields).cullingHandler;
      if (this_01 != (DynamicCullingHandler *)0x0) {
        DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Destroy
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                   );
    func_?(&TypeInfo__System__Action<bool,_bool>);
    func_?(&MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_);
    func_?(&
                    MethodInfo__MVBuildModeAvatarRemote__RecievedPlanetOwnershipDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingHandler;
  if (this_00 == (DynamicCullingHandler *)0x0) {
code_?:
    func_?();
  }
  else {
    DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
      unaff_EDI = (Action_2_Boolean_Boolean___Class *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)unaff_EDI,(Object *)this,
                 MethodInfo__MVBuildModeAvatarRemote__RecievedPlanetOwnershipDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                 ,(MethodInfo *)0x0);
      unaff_ESI = (LaserPointer *)0x0;
      if (pPVar1 == (PlanetOwnershipsManager *)0x0) goto code_?;
      PlanetOwnershipsManager::PlanetOwnershipsManager_remove_OnReceivedPlanetOwnershipData
                (pPVar1,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                         *)unaff_EDI,(MethodInfo *)0x0);
    }
    unaff_ESI = (this->fields).laserPointer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pLVar3 = (this->fields).laserPointer;
    if (pLVar3 == (LaserPointer *)0x0) goto code_?;
    pAVar4 = (pLVar3->fields).OnLaserActive;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_,(MethodInfo *)0x0)
    ;
    unaff_ESI = (LaserPointer *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<bool,_bool>;
    if (unaff_ESI == (LaserPointer *)0x0) {
      pLStack5 = (LaserPointer *)&(pLVar3->fields).OnLaserActive;
      *(Action_2_Boolean_Boolean_ **)pLStack5 = (Action_2_Boolean_Boolean_ *)0x0;
      pAStack6 = (Action_2_Boolean_Boolean___Class *)unaff_ESI;
      func_?();
      return;
    }
    pAStack6 = TypeInfo__System__Action<bool,_bool>;
    pLStack5 = unaff_ESI;
    pAVar4 = (Action_2_Boolean_Boolean_ *)func_?();
    if (pAVar4 == (Action_2_Boolean_Boolean_ *)0x0) goto code_?;
    unaff_EDI = (Action_2_Boolean_Boolean___Class *)&(pLVar3->fields).OnLaserActive;
    *(Action_2_Boolean_Boolean_ **)unaff_EDI = pAVar4;
    this = (MVBuildModeAvatarRemote *)TypeInfo__System__Action<bool,_bool>;
    pAStack6 = TypeInfo__System__Action<bool,_bool>;
    pLStack5 = unaff_ESI;
    pAStack6 = (Action_2_Boolean_Boolean___Class *)func_?();
    if (pAStack6 != (Action_2_Boolean_Boolean___Class *)0x0) {
      pLStack5 = (LaserPointer *)unaff_EDI;
      func_?();
      return;
    }
  }
  pLStack5 = unaff_ESI;
  pAStack6 = (Action_2_Boolean_Boolean___Class *)this;
  func_?();
code_?:
  pLStack5 = unaff_ESI;
  pAStack6 = unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    fStack_4 = pVVar1->z;
    puVar5 = (undefined8 *)func_?(&VStack_2,&uStack_3,0);
    uVar6 = *puVar5;
    fVar7 = *(float *)(puVar5 + 1);
    __return_storage_ptr__->x = (float)(int)uVar6;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar8)();
  return pVVar1;
}


/* Void HandleLaserActive(Boolean, Boolean) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_HandleLaserActive
               (MVBuildModeAvatarRemote *this,bool isLocal,bool isActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    cRam_? = '\x01';
  }
  if (isLocal != 0) {
    return;
  }
  this_00 = (this->fields).cullingHandler;
  if (isActive == 0) {
    pGVar1 = (this->fields)._._._.gameObject;
    cullingGroup = (GameObject__Array *)func_?(TypeInfo__UnityEngine__GameObject,1);
    pMVar2 = (this->fields)._.body;
    if ((pMVar2 != (MVBody *)0x0) &&
       (pGVar3 = (pMVar2->fields)._._._.gameObject, cullingGroup != (GameObject__Array *)0x0)) {
      if (cullingGroup->max_length == 0) goto code_?;
      cullingGroup->vector[0] = pGVar3;
      func_?(cullingGroup->vector,pGVar3);
      if (this_00 != (DynamicCullingHandler *)0x0) {
        DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                  (this_00,pGVar1,cullingGroup,0,(MethodInfo *)0x0);
        return;
      }
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
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Initialize
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerRemote);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,
             UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
  pAVar1 = (this->fields).avatarRemoteBuildMode;
  iVar2 = (this->fields)._._._._.ownerActorNr;
  if (pAVar1 == (AvatarRemoteBuildMode *)0x0) {
code_?:
    func_?();
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pAVar3 = (pAVar1->fields).avatarUIHandlerRemote;
    if (pAVar3 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    object = (Object *)(pAVar3->klass->vtable).Activate.methodPtr;
    (*(code *)(pAVar3->klass->vtable).Initialize.method)(pAVar3,0,this,iVar2);
    pUVar4 = (this->fields)._._._.PositionChanged;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,object,
               MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
      func_?();
      pAVar6 = (AvatarLimbManager *)func_?();
      ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pAVar6,
                 (MethodInfo *)0x0);
      ppAVar7 = &(this->fields)._.limbManager;
      *ppAVar7 = pAVar6;
      func_?();
      pAVar1 = (this->fields).avatarRemoteBuildMode;
      if ((pAVar1 != (AvatarRemoteBuildMode *)0x0) &&
         (pAVar6 = *ppAVar7, pAVar6 != (AvatarLimbManager *)0x0)) {
        (*(code *)(pAVar6->klass->vtable).Initialize.method)
                  (pAVar6,this,(this->fields)._.body,(pAVar1->fields).enabledChangeHandler);
        newAnimation = StringLiteral_Idle;
        pMVar8 = (this->fields)._.body;
        if (pMVar8 != (MVBody *)0x0) {
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar9 != (MVNetworkGame *)0x0) {
            iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar9,(MethodInfo *)0x0);
            pMVar10 = (pMVar8->fields).bodyObject;
            if ((pMVar10 != (MVBodyObject *)0x0) &&
               (this_00 = (pMVar10->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_StartAnimation
                        (this_00,newAnimation,iVar2,(MethodInfo *)0x0);
              pMVar8 = (this->fields)._.body;
              if ((pMVar8 != (MVBody *)0x0) &&
                 (pGVar11 = (pMVar8->fields)._._._.gameObject, pGVar11 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar11,1,(MethodInfo *)0x0);
                pGVar11 = (this->fields)._._._.gameObject;
                if (pGVar11 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,0,(MethodInfo *)0x0);
                  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar9 != (MVNetworkGame *)0x0) &&
                     (this_01 = (pMVar9->fields).playerContainer,
                     this_01 != (MVPlayerContainer *)0x0)) {
                    this_03 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                        (this_01,(this->fields)._._._._.ownerActorNr,
                                         (MethodInfo *)0x0);
                    if (this_03 != (MVPlayer *)0x0) {
                      MVPlayer::MVPlayer_NotifyAvatarCreated
                                (this_03,(this->fields)._._._._.id,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      pPVar12 = TypeInfo__PlanetOwnershipsManager->static_fields->
                               _Instance_k__BackingField;
                      if (pPVar12 != (PlanetOwnershipsManager *)0x0) {
                        if ((pPVar12->fields)._RecievedPlanetOwnershipData_k__BackingField == 0) {
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pPVar12 = TypeInfo__PlanetOwnershipsManager->static_fields->
                                   _Instance_k__BackingField;
                          this_04 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                     *)func_?();
                          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity
                          ::IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata
                          ::__Il2CppFullySharedGenericType]::
                          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                    (this_04,(Object *)this,
                                     MethodInfo__MVBuildModeAvatarRemote__RecievedPlanetOwnershipDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                                     ,(MethodInfo *)0x0);
                          if (pPVar12 != (PlanetOwnershipsManager *)0x0) {
                            PlanetOwnershipsManager::
                            PlanetOwnershipsManager_add_OnReceivedPlanetOwnershipData
                                      (pPVar12,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                                               *)this_04,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        else {
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pPVar12 = TypeInfo__PlanetOwnershipsManager->static_fields->
                                   _Instance_k__BackingField;
                          if (pPVar12 != (PlanetOwnershipsManager *)0x0) {
                            MVBuildModeAvatarRemote_RecievedPlanetOwnershipDataCallback
                                      (this,(pPVar12->fields).
                                            _PlanetOwnershipsEntries_k__BackingField,
                                       (MethodInfo *)0x0);
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
      goto code_?;
    }
    pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    (this->fields)._._._.PositionChanged = pUVar4;
    iVar13 = func_?();
    if (iVar13 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeLaserPointerAndEditCube() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::
     MVBuildModeAvatarRemote_InitializeLaserPointerAndEditCube
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                   );
    func_?(&
                    MethodInfo__MVBuildModeAvatarRemote__RecievedPlanetOwnershipDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlanetOwnershipsManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
  if (pPVar1 != (PlanetOwnershipsManager *)0x0) {
    if ((pPVar1->fields)._RecievedPlanetOwnershipData_k__BackingField == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PlanetOwnershipsManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(
                                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                                  );
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVBuildModeAvatarRemote__RecievedPlanetOwnershipDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                 ,(MethodInfo *)0x0);
      if (pPVar1 != (PlanetOwnershipsManager *)0x0) {
        PlanetOwnershipsManager::PlanetOwnershipsManager_add_OnReceivedPlanetOwnershipData
                  (pPVar1,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                           *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PlanetOwnershipsManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
      if (pPVar1 != (PlanetOwnershipsManager *)0x0) {
        MVBuildModeAvatarRemote_RecievedPlanetOwnershipDataCallback
                  (this,(pPVar1->fields)._PlanetOwnershipsEntries_k__BackingField,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void 
   RecievedPlanetOwnershipDataCallback(Dictionary`2[System.Int32,MV.WorldObject.OwnershipData.PlanetOwnershipsEntry])
    */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::
     MVBuildModeAvatarRemote_RecievedPlanetOwnershipDataCallback
               (MVBuildModeAvatarRemote *this,
               Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
               *planetOwnershipsEntries,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                   );
    func_?(&MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_);
    func_?(&StringLiteral__is_not_included_as_planet_owner);
    func_?(&StringLiteral_Remote_Avatar_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((pMVar1 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar1->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
      (unaff_ESI = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (this_00,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
      unaff_EBX = (Action_2_Boolean_Boolean___Class *)this, unaff_ESI == (MVPlayer *)0x0)) ||
     (unaff_EDI = (Action_2_Boolean_Boolean___Class *)planetOwnershipsEntries,
     planetOwnershipsEntries ==
     (Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)planetOwnershipsEntries,
                       (unaff_ESI->fields)._ProfileID_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pUVar3 = (unaff_ESI->fields)._UserProfileData_k__BackingField;
      if (pUVar3 != (UserProfileData *)0x0) {
        message = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Remote_Avatar_,(pUVar3->fields).UserName,
                             StringLiteral__is_not_included_as_planet_owner,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)planetOwnershipsEntries,
                        (unaff_ESI->fields)._ProfileID_k__BackingField,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                       );
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((*(char *)&pOVar4[1].monitor != '\x02') && (*(char *)&pOVar4[1].monitor != '\x01')) {
      return;
    }
    pLVar5 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                       ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
    unaff_ESI = (MVPlayer *)&(this->fields).laserPointer;
    *(LaserPointer **)unaff_ESI = pLVar5;
    func_?();
    pLVar5 = *(LaserPointer **)unaff_ESI;
    if (pLVar5 == (LaserPointer *)0x0) goto code_?;
    pAVar6 = (pLVar5->fields).OnLaserActive;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_,(MethodInfo *)0x0)
    ;
    unaff_ESI = (MVPlayer *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<bool,_bool>;
    if (unaff_ESI == (MVPlayer *)0x0) {
      pMStack7 = (MVPlayer *)&(pLVar5->fields).OnLaserActive;
      *(Action_2_Boolean_Boolean_ **)pMStack7 = (Action_2_Boolean_Boolean_ *)0x0;
      pAStack8 = (Action_2_Boolean_Boolean___Class *)unaff_ESI;
      func_?();
      return;
    }
    pAStack8 = TypeInfo__System__Action<bool,_bool>;
    pMStack7 = unaff_ESI;
    pAVar6 = (Action_2_Boolean_Boolean_ *)func_?();
    if (pAVar6 == (Action_2_Boolean_Boolean_ *)0x0) goto code_?;
    unaff_EDI = (Action_2_Boolean_Boolean___Class *)&(pLVar5->fields).OnLaserActive;
    *(Action_2_Boolean_Boolean_ **)unaff_EDI = pAVar6;
    unaff_EBX = TypeInfo__System__Action<bool,_bool>;
    pAStack8 = TypeInfo__System__Action<bool,_bool>;
    pMStack7 = unaff_ESI;
    pAStack8 = (Action_2_Boolean_Boolean___Class *)func_?();
    if (pAStack8 != (Action_2_Boolean_Boolean___Class *)0x0) {
      pMStack7 = (MVPlayer *)unaff_EDI;
      func_?();
      return;
    }
  }
  pMStack7 = unaff_ESI;
  pAStack8 = unaff_EBX;
  func_?();
code_?:
  pMStack7 = unaff_ESI;
  pAStack8 = unaff_EDI;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetLaserPointerVisibility(Boolean) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_SetLaserPointerVisibility
               (MVBuildModeAvatarRemote *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).laserPointer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pLVar1 = (this->fields).laserPointer;
    if (pLVar1 != (LaserPointer *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pLVar1,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        (*pcRam_?)();
        return;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
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
    func_?(&TypeInfo__DynamicCullingHandler);
    func_?(&
                    AvatarRemoteBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarRemoteBuildMode>__
                   );
    cRam_? = '\x01';
  }
  this_01 = (DynamicCullingHandler *)func_?(TypeInfo__DynamicCullingHandler);
  DynamicCullingHandler::DynamicCullingHandler__ctor(this_01,3.5,(MethodInfo *)0x0);
  ppDVar1 = &(this->fields).cullingHandler;
  *ppDVar1 = this_01;
  func_?(ppDVar1,this_01);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    MVBuildModeAvatar::MVBuildModeAvatar__ctor
              ((MVBuildModeAvatar *)this,data,(pPVar2->fields).mvRemoteAvatarBuildModePrefab,
               worldObjects,(MethodInfo *)0x0);
    this_00 = (this->fields)._._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      pAVar3 = (AvatarRemoteBuildMode *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          AvatarRemoteBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarRemoteBuildMode>__
                         );
      (this->fields).avatarRemoteBuildMode = pAVar3;
      func_?();
      MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

