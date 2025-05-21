
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
      if (((this_03->klass->_1).naturalAligment < (TypeInfo__MVNetworkListener->_1).naturalAligment)
         || ((this_03->klass->_1).typeHierarchy
             [(TypeInfo__MVNetworkListener->_1).naturalAligment - 1] !=
             (Il2CppClass *)TypeInfo__MVNetworkListener)) goto code_?;
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_03,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    MVBuildModeAvatarRemote_SetLaserPointerVisibility(this,1,(MethodInfo *)0x0);
    pAVar2 = (this->fields).avatarRemoteBuildMode;
    if ((pAVar2 == (AvatarRemoteBuildMode *)0x0) ||
       (pAVar3 = (pAVar2->fields).avatarUIHandlerRemote, pAVar3 == (AvatarUIHandlerRemote *)0x0))
    goto code_?;
    (*(code *)(pAVar3->klass->vtable).Activate.method)();
    this_02 = (this->fields).cullingHandler;
    unaff_EDI = (MVNetworkListener__Class *)func_?();
    pMVar4 = (this->fields)._.body;
    if ((pMVar4 == (MVBody *)0x0) || (unaff_EDI == (MVNetworkListener__Class *)0x0))
    goto code_?;
    if ((unaff_EDI->_0).namespaze != (char *)0x0) {
      (unaff_EDI->_0).byval_arg.data = (_union_86)(pMVar4->fields)._._._.gameObject;
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    pAVar1 = unaff_ESI;
    func_?();
  }
  else {
    DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pPVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
      unaff_EDI = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (unaff_EDI,(Object *)this,
                 MethodInfo__MVBuildModeAvatarRemote__RecievedPlanetOwnershipDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                 ,(MethodInfo *)0x0);
      unaff_ESI = (Action_2_Boolean_Boolean___Class *)0x0;
      if (pPVar2 == (PlanetOwnershipsManager *)0x0) goto code_?;
      PlanetOwnershipsManager::PlanetOwnershipsManager_remove_OnReceivedPlanetOwnershipData
                (pPVar2,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                         *)unaff_EDI,(MethodInfo *)0x0);
    }
    unaff_ESI = (Action_2_Boolean_Boolean___Class *)(this->fields).laserPointer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pAVar1 = (Action_2_Boolean_Boolean___Class *)(this->fields).laserPointer;
    if (pAVar1 == (Action_2_Boolean_Boolean___Class *)0x0) goto code_?;
    source = *(Delegate **)&(pAVar1->_1).method_count;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_,(MethodInfo *)0x0)
    ;
    unaff_EDI = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)mscorlib.dll::System::Delegate::Delegate_Remove
                             (source,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar4 = TypeInfo__System__Action<bool,_bool>;
    if (unaff_EDI ==
        (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
         *)0x0) {
      (pAVar1->_1).method_count = 0;
      (pAVar1->_1).property_count = 0;
      pAStack5 = (Action_2_Boolean_Boolean___Class *)0x0;
code_?:
      pDStack6 =
           (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)&(pAVar1->_1).method_count;
      func_?();
      return;
    }
    pAStack5 = TypeInfo__System__Action<bool,_bool>;
    pDStack6 = unaff_EDI;
    iVar7 = func_?();
    pAStack5 = pAVar4;
    if (iVar7 == 0) goto code_?;
    (pAVar1->_1).method_count = (short)iVar7;
    this = (MVBuildModeAvatarRemote *)TypeInfo__System__Action<bool,_bool>;
    (pAVar1->_1).property_count = (short)((uint)iVar7 >> 0x10);
    pAStack5 = TypeInfo__System__Action<bool,_bool>;
    pDStack6 = unaff_EDI;
    pAStack5 = (Action_2_Boolean_Boolean___Class *)func_?();
    if (pAStack5 != (Action_2_Boolean_Boolean___Class *)0x0) goto code_?;
  }
  pDStack6 = unaff_EDI;
  pAStack5 = (Action_2_Boolean_Boolean___Class *)this;
  func_?();
  pAStack5 = pAVar1;
code_?:
  pDStack6 = unaff_EDI;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  if (pAVar1 != (AvatarRemoteBuildMode *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pAVar3 = (pAVar1->fields).avatarUIHandlerRemote;
    if (pAVar3 != (AvatarUIHandlerRemote *)0x0) {
      object = (Object *)(pAVar3->klass->vtable).Activate.methodPtr;
      (*(code *)(pAVar3->klass->vtable).Initialize.method)(pAVar3,0,this,iVar2);
      pUVar4 = (this->fields)._._._.PositionChanged;
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,object,
                 MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar4,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        (this->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
        (this->fields)._._._.PositionChanged = pUVar4;
        iVar6 = func_?();
        if (iVar6 == 0) goto code_?;
      }
      func_?();
      pAVar7 = (AvatarLimbManager *)func_?();
      ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pAVar7,
                 (MethodInfo *)0x0);
      (this->fields)._.limbManager = pAVar7;
      func_?();
      pAVar1 = (this->fields).avatarRemoteBuildMode;
      if ((pAVar1 != (AvatarRemoteBuildMode *)0x0) &&
         (pAVar7 = (this->fields)._.limbManager, pAVar7 != (AvatarLimbManager *)0x0)) {
        (*(code *)(pAVar7->klass->vtable).Initialize.method)
                  (pAVar7,this,(this->fields)._.body,(pAVar1->fields).enabledChangeHandler);
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
                      MVBuildModeAvatarRemote_InitializeLaserPointerAndEditCube
                                (this,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    func_?(&TypeInfo__System__Action<bool,_bool>);
    func_?(&MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_);
    func_?(&
                    MethodInfo__MVBuildModeAvatarRemote__RecievedPlanetOwnershipDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                   );
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_CharacterEditor) {
    pLVar2 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                       ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
    (this->fields).laserPointer = pLVar2;
    func_?(&(this->fields).laserPointer,pLVar2);
    pLVar2 = (this->fields).laserPointer;
    if (pLVar2 != (LaserPointer *)0x0) {
      pAVar3 = (pLVar2->fields).OnLaserActive;
      this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
                func_?(TypeInfo__System__Action<bool,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Action<bool,_bool>;
      if (unaff_ESI == (Delegate *)0x0) {
        (pLVar2->fields).OnLaserActive = (Action_2_Boolean_Boolean_ *)0x0;
        pAStack4 = (Action_2_Boolean_Boolean___Class *)0x0;
code_?:
        pDStack5 = (Delegate *)&(pLVar2->fields).OnLaserActive;
        func_?();
        return;
      }
      pAStack4 = TypeInfo__System__Action<bool,_bool>;
      pDStack5 = unaff_ESI;
      pAVar3 = (Action_2_Boolean_Boolean_ *)func_?();
      if (pAVar3 != (Action_2_Boolean_Boolean_ *)0x0) {
        (pLVar2->fields).OnLaserActive = pAVar3;
        unaff_EDI = TypeInfo__System__Action<bool,_bool>;
        pAStack4 = TypeInfo__System__Action<bool,_bool>;
        pDStack5 = unaff_ESI;
        pAStack4 = (Action_2_Boolean_Boolean___Class *)func_?();
        if (pAStack4 != (Action_2_Boolean_Boolean___Class *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PlanetOwnershipsManager);
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
    if (pPVar6 != (PlanetOwnershipsManager *)0x0) {
      if ((pPVar6->fields)._RecievedPlanetOwnershipData_k__BackingField == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PlanetOwnershipsManager);
          cRam_? = '\x01';
        }
        pPVar6 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
        unaff_EDI = (Action_2_Boolean_Boolean___Class *)
                    func_?(
                                   TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                                   );
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)unaff_EDI,(Object *)this,
                   MethodInfo__MVBuildModeAvatarRemote__RecievedPlanetOwnershipDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                   ,(MethodInfo *)0x0);
        unaff_ESI = (Delegate *)0x0;
        if (pPVar6 != (PlanetOwnershipsManager *)0x0) {
          PlanetOwnershipsManager::PlanetOwnershipsManager_add_OnReceivedPlanetOwnershipData
                    (pPVar6,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                             *)unaff_EDI,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PlanetOwnershipsManager);
          cRam_? = '\x01';
        }
        pPVar6 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
        if (pPVar6 != (PlanetOwnershipsManager *)0x0) {
          MVBuildModeAvatarRemote_RecievedPlanetOwnershipDataCallback
                    (this,(pPVar6->fields)._PlanetOwnershipsEntries_k__BackingField,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  pDStack5 = unaff_ESI;
  pAStack4 = unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      (unaff_ESI = (Action_2_Boolean_Boolean___Class *)
                   MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (this_00,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
      unaff_EBX = (Action_2_Boolean_Boolean___Class *)this,
      unaff_ESI == (Action_2_Boolean_Boolean___Class *)0x0)) ||
     (unaff_EDI = (Delegate *)planetOwnershipsEntries,
     planetOwnershipsEntries ==
     (Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)planetOwnershipsEntries,
                       (int32_t)(unaff_ESI->_0).parent,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pIVar3 = (unaff_ESI->_0).klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        message = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Remote_Avatar_,(String *)pIVar3->namespaze,
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
                        (int32_t)(unaff_ESI->_0).parent,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                       );
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((*(char *)&pOVar4[1].monitor != '\x02') && (*(char *)&pOVar4[1].monitor != '\x01')) {
      return;
    }
    pLVar5 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                       ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
    (this->fields).laserPointer = pLVar5;
    func_?();
    pAVar6 = (Action_2_Boolean_Boolean___Class *)(this->fields).laserPointer;
    if (pAVar6 == (Action_2_Boolean_Boolean___Class *)0x0) goto code_?;
    a = *(Delegate **)&(pAVar6->_1).method_count;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_,(MethodInfo *)0x0)
    ;
    unaff_ESI = pAVar6;
    unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar6 = TypeInfo__System__Action<bool,_bool>;
    if (unaff_EDI == (Delegate *)0x0) {
      (unaff_ESI->_1).method_count = 0;
      (unaff_ESI->_1).property_count = 0;
      pAStack7 = (Action_2_Boolean_Boolean___Class *)0x0;
code_?:
      pDStack8 = (Delegate *)&(unaff_ESI->_1).method_count;
      func_?();
      return;
    }
    pAStack7 = TypeInfo__System__Action<bool,_bool>;
    pDStack8 = unaff_EDI;
    iVar9 = func_?();
    pAStack7 = pAVar6;
    if (iVar9 == 0) goto code_?;
    (unaff_ESI->_1).method_count = (short)iVar9;
    unaff_EBX = TypeInfo__System__Action<bool,_bool>;
    (unaff_ESI->_1).property_count = (short)((uint)iVar9 >> 0x10);
    pAStack7 = TypeInfo__System__Action<bool,_bool>;
    pDStack8 = unaff_EDI;
    pAStack7 = (Action_2_Boolean_Boolean___Class *)func_?();
    if (pAStack7 != (Action_2_Boolean_Boolean___Class *)0x0) goto code_?;
  }
  pDStack8 = unaff_EDI;
  pAStack7 = unaff_EBX;
  func_?();
  pAStack7 = unaff_ESI;
code_?:
  pDStack8 = unaff_EDI;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  (this->fields).cullingHandler = this_01;
  func_?(&(this->fields).cullingHandler,this_01);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVBuildModeAvatar::MVBuildModeAvatar__ctor
              ((MVBuildModeAvatar *)this,data,(pPVar1->fields).mvRemoteAvatarBuildModePrefab,
               worldObjects,(MethodInfo *)0x0);
    this_00 = (this->fields)._._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      pAVar2 = (AvatarRemoteBuildMode *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          AvatarRemoteBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarRemoteBuildMode>__
                         );
      (this->fields).avatarRemoteBuildMode = pAVar2;
      func_?();
      MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

