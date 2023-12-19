
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
      if (((this_03->klass->_1).naturalAligment < (TypeInfo__MVNetworkListener->_1).naturalAligment)
         || ((this_03->klass->_1).typeHierarchy
             [(TypeInfo__MVNetworkListener->_1).naturalAligment - 1] !=
             (Il2CppClass *)TypeInfo__MVNetworkListener)) goto code_?;
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_03,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      MVBuildModeAvatarRemote_SetLaserPointerVisibility(this,1,(MethodInfo *)0x0);
      pAVar2 = (this->fields).avatarRemoteBuildMode;
      if ((pAVar2 != (AvatarRemoteBuildMode *)0x0) &&
         (pAVar3 = (pAVar2->fields).avatarUIHandlerRemote, pAVar3 != (AvatarUIHandlerRemote *)0x0))
      {
        (*(code *)(pAVar3->klass->vtable).Activate.method)();
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_ESI = TypeInfo__System__Action<bool,_bool>;
    if (unaff_EDI == (Delegate *)0x0) {
      (pAVar1->_1).interfaces_count = 0;
      (pAVar1->_1).interface_offsets_count = 0;
      pAStack3 = (Action_2_Boolean_Boolean___Class *)0x0;
code_?:
      pDStack4 = (Delegate *)&(pAVar1->_1).interfaces_count;
      func_?();
      return;
    }
    pAStack3 = TypeInfo__System__Action<bool,_bool>;
    pDStack4 = unaff_EDI;
    iVar5 = func_?();
    if (iVar5 == 0) goto code_?;
    (pAVar1->_1).interfaces_count = (short)iVar5;
    this = (MVBuildModeAvatarRemote *)TypeInfo__System__Action<bool,_bool>;
    (pAVar1->_1).interface_offsets_count = (short)((uint)iVar5 >> 0x10);
    pAStack3 = TypeInfo__System__Action<bool,_bool>;
    pDStack4 = unaff_EDI;
    pAStack3 = (Action_2_Boolean_Boolean___Class *)func_?();
    unaff_ESI = pAVar1;
    if (pAStack3 != (Action_2_Boolean_Boolean___Class *)0x0) goto code_?;
  }
  pDStack4 = unaff_EDI;
  pAStack3 = (Action_2_Boolean_Boolean___Class *)this;
  func_?();
code_?:
  pDStack4 = unaff_EDI;
  pAStack3 = unaff_ESI;
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
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pAVar7,(MethodInfo *)0x0);
    (this->fields)._.limbManager = pAVar7;
    func_?();
    pAVar1 = (this->fields).avatarRemoteBuildMode;
    if ((pAVar1 == (AvatarRemoteBuildMode *)0x0) ||
       (pAVar7 = (this->fields)._.limbManager, pAVar7 == (AvatarLimbManager *)0x0))
    goto code_?;
    (*(code *)(pAVar7->klass->vtable).Initialize.method)
              (pAVar7,this,(this->fields)._.body,(pAVar1->fields).enabledChangeHandler);
    newAnimation = StringLiteral_Idle;
    pMVar8 = (this->fields)._.body;
    if (pMVar8 == (MVBody *)0x0) goto code_?;
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar9 == (MVNetworkGame *)0x0) goto code_?;
    iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar9,(MethodInfo *)0x0);
    pMVar10 = (pMVar8->fields).bodyObject;
    if ((pMVar10 == (MVBodyObject *)0x0) ||
       (this_00 = (pMVar10->fields).boneAnimation, this_00 == (BoneAnimation *)0x0))
    goto code_?;
    BoneAnimation::BoneAnimation_StartAnimation(this_00,newAnimation,iVar2,(MethodInfo *)0x0);
    pMVar8 = (this->fields)._.body;
    if ((pMVar8 == (MVBody *)0x0) ||
       (pGVar11 = (pMVar8->fields)._._._.gameObject, pGVar11 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,1,(MethodInfo *)0x0);
    pGVar11 = (this->fields)._._._.gameObject;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar9 == (MVNetworkGame *)0x0) ||
       (this_01 = (pMVar9->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0))
    goto code_?;
    this_03 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                        (this_01,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0);
    if (this_03 == (MVPlayer *)0x0) goto code_?;
    MVPlayer::MVPlayer_NotifyAvatarCreated(this_03,(this->fields)._._._._.id,(MethodInfo *)0x0);
    pLVar12 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                        ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
    (this->fields).laserPointer = pLVar12;
    func_?();
    pAVar13 = TypeInfo__System__Action<bool,_bool>;
    pLVar12 = (this->fields).laserPointer;
    if (pLVar12 == (LaserPointer *)0x0) goto code_?;
    a = (pLVar12->fields).OnLaserActive;
    this_04 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_04,(Object *)this,
               MethodInfo__MVBuildModeAvatarRemote__HandleLaserActive_bool__bool_,(MethodInfo *)0x0)
    ;
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pAVar13->_1).interfaces_count = 0;
      (pAVar13->_1).interface_offsets_count = 0;
code_?:
      func_?();
      return;
    }
    iVar6 = func_?();
    if (iVar6 == 0) goto code_?;
    (pAVar13->_1).interfaces_count = (short)iVar6;
    (pAVar13->_1).interface_offsets_count = (short)((uint)iVar6 >> 0x10);
    iVar6 = func_?();
    if (iVar6 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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

