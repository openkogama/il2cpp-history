
/* Void Activate(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Activate
               (MVBuildModeAvatarRemote *this,int32_t idFrom,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkListener);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).set_Position.method)
            (this,position._0_8_,position.z,(this->klass->vtable).get_Rotation.methodPtr);
  (*(code *)(this->klass->vtable).set_Rotation.method)
            (this,rotation.x,rotation.y,rotation.z,rotation.w,
             (this->klass->vtable).get_Scale.methodPtr);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).transformNetworkManager, this_00 != (TransformNetworkManager *)0x0)
     ) {
    this_03 = (MVNetworkListener *)
              TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                        (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
    if (this_03 != (MVNetworkListener *)0x0) {
      bVar2 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
      if (((this_03->klass->_1).naturalAligment < bVar2) ||
         ((this_03->klass->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__MVNetworkListener)) goto code_?;
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_03,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      MVBuildModeAvatarRemote_SetLaserPointerVisibility(this,1,(MethodInfo *)0x0);
      pAVar3 = (this->fields).avatarRemoteBuildMode;
      if ((pAVar3 != (AvatarRemoteBuildMode *)0x0) &&
         (pAVar4 = (pAVar3->fields).avatarUIHandlerRemote, pAVar4 != (AvatarUIHandlerRemote *)0x0))
      {
        (*(code *)(pAVar4->klass->vtable).Activate.method)();
        this_02 = (this->fields).cullingHandler;
        if (this_02 != (DynamicCullingHandler *)0x0) {
          DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                    (this_02,(this->fields)._._._.gameObject,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  this_03 = extraout_EDX;
code_?:
  func_?(this_03);
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
    func_?(&TypeInfo__System__Action<bool,_bool>);
    func_?(&MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_);
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
    pAVar1 = TypeInfo__System__Action<bool,_bool>;
    pLVar2 = (this->fields).laserPointer;
    if (pLVar2 == (LaserPointer *)0x0) goto code_?;
    source = (pLVar2->fields).OnLaserActive;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_,(MethodInfo *)0x0)
    ;
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<bool,_bool>;
    if (unaff_ESI == (Delegate *)0x0) {
      pDStack3 = (Delegate *)&(pAVar1->_1).interfaces_count;
      (pAVar1->_1).interfaces_count = 0;
      (pAVar1->_1).interface_offsets_count = 0;
      pAStack4 = (Action_2_Boolean_Boolean___Class *)unaff_ESI;
      func_?();
      return;
    }
    pAStack4 = TypeInfo__System__Action<bool,_bool>;
    pDStack3 = unaff_ESI;
    iVar5 = func_?();
    if (iVar5 == 0) goto code_?;
    unaff_EDI = (Action_2_Boolean_Boolean___Class *)&(pAVar1->_1).interfaces_count;
    (pAVar1->_1).interfaces_count = (short)iVar5;
    this = (MVBuildModeAvatarRemote *)TypeInfo__System__Action<bool,_bool>;
    (pAVar1->_1).interface_offsets_count = (short)((uint)iVar5 >> 0x10);
    pAStack4 = TypeInfo__System__Action<bool,_bool>;
    pDStack3 = unaff_ESI;
    pAStack4 = (Action_2_Boolean_Boolean___Class *)func_?();
    if (pAStack4 != (Action_2_Boolean_Boolean___Class *)0x0) {
      pDStack3 = (Delegate *)unaff_EDI;
      func_?();
      return;
    }
  }
  pDStack3 = unaff_ESI;
  pAStack4 = (Action_2_Boolean_Boolean___Class *)this;
  func_?();
code_?:
  pDStack3 = unaff_ESI;
  pAStack4 = unaff_EDI;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  if (isLocal != 0) {
    return;
  }
  this_00 = (this->fields).cullingHandler;
  if (isActive == 0) {
    if (this_00 != (DynamicCullingHandler *)0x0) {
      DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                (this_00,(this->fields)._._._.gameObject,(MethodInfo *)0x0);
      return;
    }
  }
  else if (this_00 != (DynamicCullingHandler *)0x0) {
    DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Initialize
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool>);
    func_?(&TypeInfo__AvatarLimbManagerRemote);
    func_?(&MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_);
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
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,object,
               MethodInfo__AvatarRemoteBuildMode__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
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
      if ((pAVar1 == (AvatarRemoteBuildMode *)0x0) ||
         (pAVar6 = *ppAVar7, pAVar6 == (AvatarLimbManager *)0x0)) goto code_?;
      (*(code *)(pAVar6->klass->vtable).Initialize.method)
                (pAVar6,this,(this->fields)._.body,(pAVar1->fields).enabledChangeHandler);
      pMVar8 = (this->fields)._.body;
      if (pMVar8 == (MVBody *)0x0) goto code_?;
      MVBody::MVBody_StartAnimation(pMVar8,StringLiteral_Idle,(MethodInfo *)0x0);
      pMVar8 = (this->fields)._.body;
      if ((pMVar8 == (MVBody *)0x0) ||
         (pGVar9 = (pMVar8->fields)._._._.gameObject, pGVar9 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
      pGVar9 = (this->fields)._._._.gameObject;
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,0,(MethodInfo *)0x0);
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar10 == (MVNetworkGame *)0x0) ||
         (this_00 = (pMVar10->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
      goto code_?;
      this_02 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                          (this_00,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0);
      if (this_02 == (MVPlayer *)0x0) goto code_?;
      MVPlayer::MVPlayer_NotifyAvatarCreated(this_02,(this->fields)._._._._.id,(MethodInfo *)0x0);
      pLVar11 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                          ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
      ppLVar12 = &(this->fields).laserPointer;
      *ppLVar12 = pLVar11;
      func_?();
      pAVar13 = TypeInfo__System__Action<bool,_bool>;
      pLVar11 = *ppLVar12;
      if (pLVar11 == (LaserPointer *)0x0) goto code_?;
      a = (pLVar11->fields).OnLaserActive;
      this_03 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_03,(Object *)this,
                 MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_,
                 (MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        (pAVar13->_1).interfaces_count = 0;
        (pAVar13->_1).interface_offsets_count = 0;
        func_?();
        return;
      }
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
      (pAVar13->_1).interfaces_count = (short)iVar14;
      (pAVar13->_1).interface_offsets_count = (short)((uint)iVar14 >> 0x10);
      iVar14 = func_?();
      if (iVar14 != 0) {
        func_?();
        return;
      }
      goto code_?;
    }
    pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar4 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (this->fields)._._._.PositionChanged = pUVar4;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
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

