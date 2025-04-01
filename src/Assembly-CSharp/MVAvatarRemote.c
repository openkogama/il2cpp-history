
/* Void Activate(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Activate
               (MVAvatarRemote *this,int32_t idFrom,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?();
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
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
     ) goto code_?;
  this_02 = (MVNetworkListener *)
            TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                      (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
  unaff_EDI = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
              TypeInfo__MVNetworkListener;
  if (this_02 == (MVNetworkListener *)0x0) {
code_?:
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 == (GameObject *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      this_02 = extraout_EDX;
      goto code_?;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._.avatar;
    if ((pAVar2 == (Avatar *)0x0) ||
       (pAVar3 = (pAVar2->fields).avatarUIHandler, pAVar3 == (AvatarUIHandler *)0x0))
    goto code_?;
    (*(code *)(pAVar3->klass->vtable).Activate.method)();
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                (this->fields).cullingHandler;
    unaff_EDI = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)func_?()
    ;
    pMVar4 = (this->fields)._.body;
    if ((pMVar4 == (MVBody *)0x0) ||
       (unaff_EDI == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0))
    goto code_?;
    if ((unaff_EDI->_0).namespaze == (char *)0x0) goto code_?;
    (unaff_EDI->_0).byval_arg.data = (_union_86)(pMVar4->fields)._._._.gameObject;
    func_?();
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0)
    goto code_?;
    DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
              ((DynamicCullingHandler *)unaff_EBX,(GameObject *)0x0,(GameObject__Array *)unaff_EDI,1
               ,(MethodInfo *)0x0);
    pUVar5 = (this->fields)._._._.ScaleChanged;
    unaff_EDI = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                &(this->fields)._._._.ScaleChanged;
    object = (this->fields).cullingHandler;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)object,
               MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
               ,(MethodInfo *)0x0);
    this = (MVAvatarRemote *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar5,(Delegate *)this_03,(MethodInfo *)0x0);
    pUVar6 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    if (this == (MVAvatarRemote *)0x0) {
      *(UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ **)unaff_EDI =
           (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
      pMStack7 = (MVAvatarRemote *)unaff_EDI;
      pMStack8 = this;
      func_?();
      return;
    }
    pMStack8 =
         (MVAvatarRemote *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack7 = this;
    pUVar5 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
    pMStack8 = (MVAvatarRemote *)pUVar6;
    if (pUVar5 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
    goto code_?;
    *(UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ **)unaff_EDI = pUVar5;
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack8 =
         (MVAvatarRemote *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack7 = this;
    pMStack8 = (MVAvatarRemote *)func_?();
    if (pMStack8 != (MVAvatarRemote *)0x0) {
      pMStack7 = (MVAvatarRemote *)unaff_EDI;
      func_?();
      return;
    }
  }
  else {
    bVar9 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
    if ((bVar9 <= (this_02->klass->_1).naturalAligment) &&
       ((this_02->klass->_1).typeHierarchy[bVar9 - 1] == (Il2CppClass *)TypeInfo__MVNetworkListener)
       ) {
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_02,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    func_?(this_02,unaff_EDI);
  }
  pMStack7 = this;
  pMStack8 = (MVAvatarRemote *)unaff_EBX;
  func_?();
  pMStack8 = (MVAvatarRemote *)unaff_EDI;
code_?:
  pMStack7 = this;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AttachBody(MVBody) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_AttachBody
               (MVAvatarRemote *this,MVBody *newBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_newBody____null);
    func_?(&StringLiteral_Created_avatar_fader);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.body;
  ppMVar1 = &(this->fields)._.body;
  if (this_00 != (MVBody *)0x0) {
    MVBody::MVBody_Detach(this_00,(MethodInfo *)0x0);
  }
  if (newBody != (MVBody *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Created_avatar_fader,(MethodInfo *)0x0);
    (*(code *)(newBody->klass->vtable).set_Position.method)
              (newBody,(ulonglong)_UNK_? << 0x20,0,
               (newBody->klass->vtable).get_Rotation.methodPtr);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
    (*(code *)(newBody->klass->vtable).set_Rotation.method)
              (newBody,(pQVar2->identityQuaternion).x,(pQVar2->identityQuaternion).y,
               (pQVar2->identityQuaternion).z,(pQVar2->identityQuaternion).w,
               (newBody->klass->vtable).get_Scale.methodPtr);
    MVBody::MVBody_Attach(newBody,(MVAvatar *)this,(this->fields)._.isLocal,(MethodInfo *)0x0);
    *ppMVar1 = newBody;
    func_?(ppMVar1,newBody);
    MVBody::MVBody_set_Visible(newBody,1,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_newBody____null,(MethodInfo *)0x0);
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_AvatarStateChangedHandler
               (MVAvatarRemote *this,Object *a,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields)._.healParticleSpawnTime = fVar4;
  MVAvatar::MVAvatar_AvatarStateChangedHandler((MVAvatar *)this,a,(MethodInfo *)0x0);
  if (a != (Object *)0x0) {
    if ((a->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      pbVar5 = (byte *)func_?();
      if ((*pbVar5 & 4) != 0) {
        MVAvatarRemote_HideBody(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uStack_1 = 0;
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar6->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar7 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                           (this_00,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0);
        if ((pMVar7 != (MVPlayer *)0x0) && ((pMVar7->fields).playerState != 3)) {
          MVAvatarRemote_ShowBody(this,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    else {
      func_?();
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CapsuleCollider CreateTriggerCollider() */

CapsuleCollider *
Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_CreateTriggerCollider
          (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__CapsuleCollider);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::CapsuleCollider>__
                   );
    func_?(&
                    TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__AddComponent<TriggerBoxEvents>__
                   );
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__MVAvatarRemote__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&StringLiteral_triggerCollider);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  this_01 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_01,StringLiteral_triggerCollider,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_01,(MethodInfo *)0x0);
    this_00 = (this->fields)._._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar1,value,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar1,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                     (MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar1,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                 (StringLiteral_Player,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      (this_01,value_00,(MethodInfo *)0x0);
            pCVar2 = (CapsuleCollider *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                               (this_01,
                                UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::CapsuleCollider>__
                               );
            if (pCVar2 != (CapsuleCollider *)0x0) {
              UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
              CapsuleCollider_set_center
                        (pCVar2,(Vector3)ZEXT812(0x3f80000000000000),(MethodInfo *)0x0);
              UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                        ((Collider *)pCVar2,1,(MethodInfo *)0x0);
              if (_UNK_? != (GameObject *)0x0) {
                this_02 = (CapsuleCollider *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (_UNK_?,
                                     UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                    );
                if (this_02 != (CapsuleCollider *)0x0) {
                  bVar3 = (TypeInfo__UnityEngine__CapsuleCollider->_1).naturalAligment;
                  if (((this_02->klass->_1).naturalAligment < bVar3) ||
                     ((this_02->klass->_1).typeHierarchy[bVar3 - 1] !=
                      (Il2CppClass *)TypeInfo__UnityEngine__CapsuleCollider)) goto code_?;
                  fVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                          CapsuleCollider_get_height(this_02,(MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_height(pCVar2,fVar4,(MethodInfo *)0x0);
                  fVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                          CapsuleCollider_get_radius(this_02,(MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_radius(pCVar2,fVar4,(MethodInfo *)0x0);
                  this_03 = (TriggerBoxEvents *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (this_01,
                                       TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__AddComponent<TriggerBoxEvents>__
                                      );
                  this_04 = (EventHandler_1_Object_ *)func_?();
                  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                            (this_04,(Object *)&UNK_?,
                             MethodInfo__MVAvatarRemote__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                             ,(MethodInfo *)0x0);
                  if (this_03 != (TriggerBoxEvents *)0x0) {
                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                              (this_03,(EventHandler_1_TriggerEventArgs_ *)this_04,(MethodInfo *)0x0
                              );
                    return pCVar2;
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
  pcVar5 = (code *)swi(3);
  pCVar2 = (CapsuleCollider *)(*pcVar5)();
  return pCVar2;
}


/* Void DeActivate(Int32) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_DeActivate
               (MVAvatarRemote *this,int32_t idTo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 == (GameObject *)0x0) {
code_?:
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.avatar;
    if ((pAVar1 == (Avatar *)0x0) ||
       (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 == (AvatarUIHandler *)0x0))
    goto code_?;
    (*(code *)(pAVar2->klass->vtable).Deactivate.method)
              (pAVar2,(pAVar2->klass->vtable).OnPositionChanged.methodPtr);
    pDVar3 = (this->fields).cullingHandler;
    if (pDVar3 == (DynamicCullingHandler *)0x0) goto code_?;
    DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(pDVar3,(MethodInfo *)0x0);
    pUVar4 = (this->fields)._._._.ScaleChanged;
    unaff_EDI = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                &(this->fields)._._._.ScaleChanged;
    pDVar3 = (this->fields).cullingHandler;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)pDVar3,
               MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
               ,(MethodInfo *)0x0);
    this = (MVAvatarRemote *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    if (this == (MVAvatarRemote *)0x0) {
      *(UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ **)unaff_EDI =
           (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
      pMStack6 = (MVAvatarRemote *)unaff_EDI;
      pMStack7 = this;
      func_?();
      return;
    }
    pMStack7 =
         (MVAvatarRemote *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack6 = this;
    pUVar4 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
    pMStack7 = (MVAvatarRemote *)pUVar5;
    if (pUVar4 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
    goto code_?;
    *(UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ **)unaff_EDI = pUVar4;
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack7 =
         (MVAvatarRemote *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack6 = this;
    pMStack7 = (MVAvatarRemote *)func_?();
    if (pMStack7 != (MVAvatarRemote *)0x0) {
      pMStack6 = (MVAvatarRemote *)unaff_EDI;
      func_?();
      return;
    }
  }
  pMStack6 = this;
  pMStack7 = (MVAvatarRemote *)unaff_EBX;
  func_?();
  pMStack7 = (MVAvatarRemote *)unaff_EDI;
code_?:
  pMStack6 = this;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Destroy
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                   );
    func_?(&MethodInfo__MVAvatarRemote__InitAvatarState__);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 == (Avatar *)0x0) ||
     (this_00 = (pAVar1->fields).avatarUIHandler, this_00 == (AvatarUIHandler *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    System.Xml.dll::System::Xml::XmlNodeList::XmlNodeList_System_IDisposable_Dispose
              ((XmlNodeList *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_RemoveLateUpdateObject
              ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = (pMVar2->fields).playerContainer;
    if (pMVar3 == (MVPlayerContainer *)0x0) goto code_?;
    source = (pMVar3->fields).OnLocalPlayerReady;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (source->fields)._._.extra_arg = (void *)0x0;
code_?:
      func_?();
      this_01 = (this->fields).cullingHandler;
      if (this_01 == (DynamicCullingHandler *)0x0) goto code_?;
      DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_01,(MethodInfo *)0x0);
      object = pORam00000150;
      source_00 = (this->fields)._._._.ScaleChanged;
      this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_03,object,
                 MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source_00,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        source_00->klass = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0;
        func_?();
        return;
      }
      pUVar5 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)func_?();
      if (pUVar5 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0) {
        source_00->klass = pUVar5;
        iVar6 = func_?();
        if (iVar6 != 0) {
          func_?();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    pDVar7 = (Delegate *)0x0;
    if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
      pDVar7 = pDVar4;
    }
    if (pDVar7 == (Delegate *)0x0) goto code_?;
    (source->fields)._._.extra_arg = pDVar7;
    pDVar7 = (Delegate *)0x0;
    if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
      pDVar7 = pDVar4;
    }
    if (pDVar7 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HideBody() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_HideBody
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.body;
  if (this_00 != (MVBody *)0x0) {
    MVBody::MVBody_set_Visible(this_00,0,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.avatar;
    if ((pAVar1 != (Avatar *)0x0) &&
       (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 != (AvatarUIHandler *)0x0)) {
      pAVar3 = (AvatarUIHandlerRemote__Class *)0x0;
      (*(code *)(pAVar2->klass->vtable).SetShouldShowUI.method)
                (pAVar2,0,(pAVar2->klass->vtable).OnDestroy.methodPtr);
      pAVar1 = (this->fields)._.avatar;
      if (pAVar1 != (Avatar *)0x0) {
        this_02 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler;
        unaff_EDI = TypeInfo__AvatarUIHandlerRemote;
        if (this_02 != (AvatarUIHandlerRemote *)0x0) {
          bVar4 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
          if (((this_02->klass->_1).naturalAligment < bVar4) ||
             ((this_02->klass->_1).typeHierarchy[bVar4 - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
          unaff_EDI = pAVar3;
          AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                    (this_02,0,(MethodInfo *)0x0);
          this_01 = (this->fields).triggerCollider;
          if (this_01 != (CapsuleCollider *)0x0) {
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                      ((Collider *)this_01,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  this_02 = extraout_EDX;
code_?:
  func_?(this_02,unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitAvatarState() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitAvatarState
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVAvatarRemote__InitAvatarState__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.SpawnRoleModeTypes;
  if (this_00 == (MVRuntimeDataVariable *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).AvatarStateChangedHandler.method)
              (this,pOVar1,(this->klass->vtable).AttachBody.methodPtr);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0))
    goto code_?;
    pAVar4 = (pMVar3->fields).OnLocalPlayerReady;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
code_?:
      func_?();
      return;
    }
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 == (Action *)0x0) goto code_?;
    (pMVar3->fields).OnLocalPlayerReady = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Initialize
               (MVAvatarRemote *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__AvatarLimbManagerRemote);
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    AvatarRemoteMovementCalculator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarRemoteMovementCalculator>__
                   );
    func_?(&MethodInfo__MVAvatarRemote__InitAvatarState__);
    func_?(&MethodInfo__MVAvatarRemote__OnObserve__);
    func_?(&MethodInfo__MVAvatarRemote__OnResume__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_OwnerActorNr_____1);
    cRam_? = '\x01';
  }
  MVAvatar::MVAvatar_Initialize((MVAvatar *)this,(MethodInfo *)0x0);
  if ((this->fields)._._._._.ownerActorNr == -1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OwnerActorNr_____1,(MethodInfo *)0x0);
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 == (MVNetworkGame *)0x0) ||
      (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) ||
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                          (pMVar2,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
     pMVar3 == (MVPlayer *)0x0)) goto code_?;
  a = (pMVar3->fields).OnObserve;
  pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar4,(Object *)this,MethodInfo__MVAvatarRemote__OnObserve__,(MethodInfo *)0x0);
  pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)a,(Delegate *)pNVar4,(MethodInfo *)0x0);
  if (pDVar5 == (Delegate *)0x0) {
    (pNVar4->fields)._._.interp_invoke_impl = (void *)0x0;
code_?:
    pNVar6 = pNVar4;
    func_?();
    pDVar5 = (pNVar4->fields)._._.interp_method;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__MVAvatarRemote__OnResume__,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar5,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pNVar6->fields)._._.interp_method = (void *)0x0;
    }
    else {
      pDVar7 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar7 = pDVar5;
      }
      if (pDVar7 == (Delegate *)0x0) goto code_?;
      (pNVar6->fields)._._.interp_method = pDVar7;
      pDVar7 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar7 = pDVar5;
      }
      if (pDVar7 == (Delegate *)0x0) goto code_?;
    }
    func_?();
    pAVar8 = (this->fields)._.avatar;
    if ((pAVar8 == (Avatar *)0x0) ||
       (pAVar9 = (AvatarUIHandlerRemote *)(pAVar8->fields).avatarUIHandler,
       pAVar9 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
    bVar10 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if ((bVar10 <= (pAVar9->klass->_1).naturalAligment) &&
       ((pAVar9->klass->_1).typeHierarchy[bVar10 - 1] ==
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag(pAVar9,(MethodInfo *)0x0);
      bVar11 = (pNVar6->fields)._._.method_is_virtual;
      this = (MVAvatarRemote *)CONCAT31((int3)((uint)unaff_EDI >> 8),bVar11);
      if ((bVar11 == 3) || (bVar11 == 4)) {
        pAVar8 = (this_02->fields)._.avatar;
        if ((pAVar8 == (Avatar *)0x0) ||
           (pAVar9 = (AvatarUIHandlerRemote *)(pAVar8->fields).avatarUIHandler,
           pAVar9 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
        bVar10 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
        if (((pAVar9->klass->_1).naturalAligment < bVar10) ||
           ((pAVar9->klass->_1).typeHierarchy[bVar10 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
        AvatarUIHandlerRemote::AvatarUIHandlerRemote_ShowMobileIcon
                  (pAVar9,(BuildTarget__Enum)this,(MethodInfo *)0x0);
      }
      pAVar8 = (this_02->fields)._.avatar;
      if ((pAVar8 == (Avatar *)0x0) ||
         (pAVar12 = (pAVar8->fields).avatarUIHandler, pAVar12 == (AvatarUIHandler *)0x0))
      goto code_?;
      bVar10 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
      if (((pAVar12->klass->_1).naturalAligment < bVar10) ||
         ((pAVar12->klass->_1).typeHierarchy[bVar10 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
      this_00 = pAVar12[2].fields._._._._.m_CachedPtr;
      if (this_00 == (HealthBar *)0x0) goto code_?;
      HealthBar::HealthBar_set_Oxygen(this_00,0.0,(MethodInfo *)0x0);
      MVAvatarRemote_InitializeHealth(this_02,(MethodInfo *)0x0);
      MVAvatarRemote_InitializeShield(this_02,(MethodInfo *)0x0);
      pCVar13 = MVAvatarRemote_CreateTriggerCollider(this_02,(MethodInfo *)0x0);
      (this_02->fields).triggerCollider = pCVar13;
      func_?();
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) ||
         (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         this_03 == (MVLocalPlayer *)0x0)) goto code_?;
      bVar11 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_03,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (this_02->fields)._.SpawnRoleModeTypes;
        if (this_01 == (MVRuntimeDataVariable *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_01,(MethodInfo *)0x0);
        (*(code *)(this_02->klass->vtable).AvatarStateChangedHandler.method)();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
        goto code_?;
        pAVar14 = (pMVar2->fields).OnLocalPlayerReady;
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this_02,MethodInfo__MVAvatarRemote__InitAvatarState__,
                   (MethodInfo *)0x0);
        pAVar14 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar14,(Delegate *)pNVar4,(MethodInfo *)0x0);
        if (pAVar14 != (Action *)0x0) {
          pAVar15 = (Action *)0x0;
          if (pAVar14->klass == TypeInfo__System__Action) {
            pAVar15 = pAVar14;
          }
          if (pAVar15 != (Action *)0x0) {
            _UNK_? = pAVar15;
            pAVar15 = (Action *)0x0;
            if (pAVar14->klass == TypeInfo__System__Action) {
              pAVar15 = pAVar14;
            }
            goto joined_?;
          }
          goto code_?;
        }
        _UNK_? = (Action *)0x0;
        goto code_?;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
      goto code_?;
      pAVar14 = (pMVar2->fields).OnLocalPlayerReady;
      pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar4,(Object *)this_02,MethodInfo__MVAvatarRemote__InitAvatarState__,
                 (MethodInfo *)0x0);
      pAVar14 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar14,(Delegate *)pNVar4,(MethodInfo *)0x0);
      if (pAVar14 == (Action *)0x0) {
        (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
      }
      else {
        pAVar15 = (Action *)0x0;
        if (pAVar14->klass == TypeInfo__System__Action) {
          pAVar15 = pAVar14;
        }
        if (pAVar15 == (Action *)0x0) goto code_?;
        (pMVar2->fields).OnLocalPlayerReady = pAVar15;
        pAVar15 = (Action *)0x0;
        if (pAVar14->klass == TypeInfo__System__Action) {
          pAVar15 = pAVar14;
        }
joined_?:
        if (pAVar15 == (Action *)0x0) goto code_?;
      }
code_?:
      func_?();
      pGVar16 = (this_02->fields)._._._.gameObject;
      if (pGVar16 != (GameObject *)0x0) {
        pAVar17 = (AvatarRemoteMovementCalculator *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar16,
                             AvatarRemoteMovementCalculator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarRemoteMovementCalculator>__
                            );
        (this_02->fields).avatarRemoteMovementCalculator = pAVar17;
        func_?();
        pAVar18 = (AvatarLimbManager *)func_?();
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor
                  ((UxmlObjectListAttributeDescription_1_System_Object_ *)pAVar18,(MethodInfo *)0x0)
        ;
        ppAVar19 = &(this_02->fields)._.limbManager;
        *ppAVar19 = pAVar18;
        func_?(ppAVar19,pAVar18);
        if (((this_02->fields)._.avatar != (Avatar *)0x0) &&
           (pAVar18 = *ppAVar19, pAVar18 != (AvatarLimbManager *)0x0)) {
          this_04 = this_02;
          (*(code *)(pAVar18->klass->vtable).Initialize.method)
                    (pAVar18,this_02,(this_02->fields)._.body);
          pGVar16 = (this_02->fields)._._._.gameObject;
          if (pGVar16 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar16,0,(MethodInfo *)0x0);
            if (*(char *)&(this_04->fields)._._._._.rotation.w == '\x03') {
              MVAvatarRemote_HideBody(this_02,(MethodInfo *)0x0);
            }
            MVPlayer::MVPlayer_NotifyAvatarCreated
                      ((MVPlayer *)this_04,(this_02->fields)._._._._.id,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pDVar7 = (Delegate *)0x0;
    if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pDVar7 = pDVar5;
    }
    if (pDVar7 != (Delegate *)0x0) {
      (pNVar4->fields)._._.interp_invoke_impl = pDVar7;
      pDVar7 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar7 = pDVar5;
      }
      if (pDVar7 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void InitializeHealth() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitializeHealth
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&
                    MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__0_System__Object_
                   );
    func_?(&
                    MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__1_System__Object_
                   );
    func_?(&TypeInfo__MVAvatarRemote____c__DisplayClass23_0);
    cRam_? = '\x01';
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__MVAvatarRemote____c__DisplayClass23_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  if (this_01 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)this;
    func_?(&this_01->fields,this);
    pAVar1 = TypeInfo__AvatarUIHandlerRemote;
    pAVar2 = (this->fields)._.avatar;
    if (pAVar2 == (Avatar *)0x0) goto code_?;
    pAVar3 = (pAVar2->fields).avatarUIHandler;
    unaff_EDI = pAVar1;
    if (pAVar3 == (AvatarUIHandler *)0x0) goto code_?;
    bVar4 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if (((pAVar3->klass->_1).naturalAligment < bVar4) ||
       ((pAVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    pUVar5 = pAVar3[2].fields._._._._.m_CachedPtr;
    pUVar6 = this_01 + 1;
    pUVar6->klass = pUVar5;
    func_?(pUVar6,pUVar5);
    pMVar7 = (this->fields)._.Health;
    pUVar5 = pUVar6->klass;
    if (pMVar7 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    fVar8 = (float10)(*(code *)(pMVar7->klass->vtable).get_Value.method)
                                (pMVar7,(pMVar7->klass->vtable).set_Value.methodPtr);
    if (pUVar5 == (UxmlObjectListAttributeDescription_1_System_Object___Class *)0x0)
    goto code_?;
    HealthBar::HealthBar_SetScaleFromHealth((HealthBar *)pUVar5,(float)fVar8,(MethodInfo *)0x0);
    pMVar7 = (this->fields)._.Health;
    this_00 = (this->fields)._.body;
    if (pMVar7 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    fVar8 = (float10)(*(code *)(pMVar7->klass->vtable).get_Value.method)
                                (pMVar7,(pMVar7->klass->vtable).set_Value.methodPtr);
    if (this_00 == (MVBody *)0x0) goto code_?;
    MVBody::MVBody_InitializeHealth(this_00,(float)fVar8,(MethodInfo *)0x0);
    pMVar7 = (this->fields)._.Health;
    if (pMVar7 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    unaff_EDI = (AvatarUIHandlerRemote__Class *)(pMVar7->fields)._.OnChange;
    pVVar9 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
             func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (pVVar9,(Object *)this_01,
               MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__0_System__Object_
               ,(MethodInfo *)0x0);
    pAVar1 = (AvatarUIHandlerRemote__Class *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)unaff_EDI,(Delegate *)pVVar9,(MethodInfo *)0x0);
    if (pAVar1 == (AvatarUIHandlerRemote__Class *)0x0) {
      pAVar10 = (AvatarUIHandlerRemote__Class *)0x0;
      (pMVar7->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      pMVar11 = (this->fields)._.MaxHealth;
      pUVar5 = pUVar6->klass;
      if (pMVar11 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
        iVar12 = (*(code *)(pMVar11->klass->vtable).get_Value.method)
                          (pMVar11,(pMVar11->klass->vtable).set_Value.methodPtr);
        if (pUVar5 != (UxmlObjectListAttributeDescription_1_System_Object___Class *)0x0) {
          (pUVar5->_0).this_arg.data = (_union_86)(float)iVar12;
          pMVar11 = (this->fields)._.MaxHealth;
          if (pMVar11 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
            pMVar13 = (pMVar11->fields)._.OnChange;
            ppMVar14 = &(pMVar11->fields)._.OnChange;
            pVVar9 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                     func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
            VideoCapture+OnVideoCaptureResourceCreatedCallback::
            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                      (pVVar9,(Object *)this_01,
                       MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__1_System__Object_
                       ,(MethodInfo *)0x0);
            pMVar13 = (MVRuntimeDataVariable_OnChangeDelegate *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pMVar13,(Delegate *)pVVar9,(MethodInfo *)0x0);
            if (pMVar13 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              *ppMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              func_?();
              return;
            }
            pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar13->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar15 = pMVar13;
            }
            unaff_EDI = pAVar10;
            if (pMVar15 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              *ppMVar14 = pMVar15;
              pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar13->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar15 = pMVar13;
              }
              if (pMVar15 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    pAVar10 = (AvatarUIHandlerRemote__Class *)0x0;
    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)(pAVar1->_0).image ==
        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pAVar10 = pAVar1;
    }
    if (pAVar10 == (AvatarUIHandlerRemote__Class *)0x0) goto code_?;
    (pMVar7->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pAVar10;
    pAVar10 = (AvatarUIHandlerRemote__Class *)0x0;
    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)(pAVar1->_0).image ==
        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pAVar10 = pAVar1;
    }
    if (pAVar10 != (AvatarUIHandlerRemote__Class *)0x0) goto code_?;
  }
  func_?();
  pAVar3 = extraout_EDX;
code_?:
  func_?(pAVar3,unaff_EDI);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitializeShield() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitializeShield
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    func_?(&MethodInfo__MVAvatarRemote___InitializeShield_b__24_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
  pMVar2 = (pMVar1->fields)._._.OnChange;
  unaff_ESI = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
  VideoCapture+OnVideoCaptureResourceCreatedCallback::
  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)unaff_ESI,(Object *)this,
             MethodInfo__MVAvatarRemote___InitializeShield_b__24_0_System__Object_,(MethodInfo *)0x0
            );
  pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar2,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
  if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
    (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
    func_?();
    pAVar3 = (this->fields)._.avatar;
    if (pAVar3 == (Avatar *)0x0) {
code_?:
      func_?();
      pAVar4 = extraout_EDX;
    }
    else {
      pAVar4 = (pAVar3->fields).avatarUIHandler;
      unaff_ESI = (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__AvatarUIHandlerRemote;
      if (pAVar4 == (AvatarUIHandler *)0x0) goto code_?;
      bVar5 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
      if ((bVar5 <= (pAVar4->klass->_1).naturalAligment) &&
         ((pAVar4->klass->_1).typeHierarchy[bVar5 - 1] ==
          (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
        unaff_ESI = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
                    pAVar4[2].fields._.m_CancellationTokenSource;
        pMVar1 = (this->fields)._.shield;
        if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          fVar6 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                     (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
          if (unaff_ESI != (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) {
            ShieldBar::ShieldBar_set_Shield((ShieldBar *)unaff_ESI,(float)fVar6,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._.shield;
            unaff_ESI = (MVRuntimeDataVariable_OnChangeDelegate__Class *)(this->fields)._.body;
            if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
              fVar6 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                         (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
              if (unaff_ESI != (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) {
                MVBody::MVBody_InitializeShield((MVBody *)unaff_ESI,(float)fVar6,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    func_?(pAVar4,unaff_ESI);
  }
  else {
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar7 = pMVar2;
    }
    if (pMVar7 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar1->fields)._._.OnChange = pMVar7;
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar7 = pMVar2;
    }
    unaff_ESI = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnAnimationChange(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnAnimationChange
               (MVAvatarRemote *this,Object *newAnimationData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_state);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.body;
  if (pMVar1 == (MVBody *)0x0) {
code_?:
    func_?();
    TVar2.m_Index = extraout_ECX;
    pSVar3 = extraout_EDX;
code_?:
    func_?(TVar2.m_Index,pSVar3);
    pDVar4 = extraout_EDX_00;
  }
  else {
    MVBody::MVBody_OnAnimationUpdate(pMVar1,newAnimationData,(MethodInfo *)0x0);
    this_00 = (this->fields)._.SpawnRoleModeTypes;
    if ((this_00 == (MVRuntimeDataVariable *)0x0) ||
       (pOVar5 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0),
       pOVar5 == (Object *)0x0)) goto code_?;
    if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pbVar6 = (byte *)func_?();
    if ((*pbVar6 & 1) == 0) {
      return;
    }
    if (newAnimationData == (Object *)0x0) {
code_?:
      pMVar1 = (this->fields)._.body;
      if ((pMVar1 == (MVBody *)0x0) ||
         ((this_01 = MVBody::MVBody_get_Animation(pMVar1,(MethodInfo *)0x0),
          newAnimationData == (Object *)0x0 ||
          (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                              newAnimationData,(Object *)StringLiteral_state,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), this_01 == (BoneAnimation *)0x0)))) goto code_?;
      animationName.m_Index = 0;
      if (TVar2.m_Index == 0) {
code_?:
        BoneAnimation::BoneAnimation_Play(this_01,(String *)animationName.m_Index,(MethodInfo *)0x0)
        ;
        return;
      }
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        animationName = TVar2;
      }
      pSVar3 = TypeInfo__System__String;
      if ((String *)animationName.m_Index != (String *)0x0) goto code_?;
      goto code_?;
    }
    bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((bVar7 <= (newAnimationData->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (newAnimationData->klass->_1).typeHierarchy[bVar7 - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  func_?(newAnimationData,pDVar4);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnEnterVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  this_00 = (this->fields)._.avatar;
  if (this_00 != (Avatar *)0x0) {
    Avatar::Avatar_OnEnterVehicle(this_00,(MethodInfo *)0x0);
    (this->fields)._IsInVehicle_k__BackingField = 1;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnLeaveVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  this_00 = (this->fields)._.avatar;
  if (this_00 != (Avatar *)0x0) {
    Avatar::Avatar_OnExitVehicle(this_00,(MethodInfo *)0x0);
    (this->fields)._IsInVehicle_k__BackingField = 0;
    MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnObserve() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnObserve
               (MVAvatarRemote *this,MethodInfo *method)

{
  MVAvatarRemote_HideBody(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     ((pMVar1->fields).playerContainer != (MVPlayerContainer *)0x0)) {
    if (*(int *)(in_stack_2 + 0x14) != 0) {
      (**(code **)(*(int *)(in_stack_2 + 0x14) + 0xc))();
    }
    return;
  }
  uVar3 = func_?(&stack0xfffffffc);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnResume() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnResume
               (MVAvatarRemote *this,MethodInfo *method)

{
  MVAvatarRemote_ShowBody(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     ((pMVar1->fields).playerContainer != (MVPlayerContainer *)0x0)) {
    if (*(int *)(in_stack_2 + 0x14) != 0) {
      (**(code **)(*(int *)(in_stack_2 + 0x14) + 0xc))();
    }
    return;
  }
  uVar3 = func_?(&stack0xfffffffc);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowBody() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_ShowBody
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.body;
  if (this_00 == (MVBody *)0x0) {
code_?:
    func_?();
  }
  else {
    MVBody::MVBody_set_Visible(this_00,1,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.avatar;
    if (pAVar1 == (Avatar *)0x0) goto code_?;
    pAVar2 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_02 == (MVNetworkGame *)0x0) goto code_?;
    this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (this_03 == (MVLocalPlayer *)0x0) goto code_?;
    isFriendly = MVPlayer::MVPlayer_IsOnSameTeam_1
                           ((MVPlayer *)this_03,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if (pAVar2 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    bVar3 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
       ((pAVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
              (pAVar2,isFriendly,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.avatar;
    if (pAVar1 == (Avatar *)0x0) goto code_?;
    pAVar2 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler;
    if (pAVar2 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    bVar3 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if ((bVar3 <= (pAVar2->klass->_1).naturalAligment) &&
       ((pAVar2->klass->_1).typeHierarchy[bVar3 - 1] ==
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                (pAVar2,1,(MethodInfo *)0x0);
      pAVar1 = (this->fields)._.avatar;
      if ((pAVar1 != (Avatar *)0x0) &&
         (pAVar4 = (pAVar1->fields).avatarUIHandler, pAVar4 != (AvatarUIHandler *)0x0)) {
        (*(code *)(pAVar4->klass->vtable).SetShouldShowUI.method)();
        this_01 = (this->fields).triggerCollider;
        if (this_01 != (CapsuleCollider *)0x0) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    ((Collider *)this_01,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_VisualizeBulletImpact
               (MVAvatarRemote *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  this_03 = (MVPlayer *)0x0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    bVar2 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this_00,(int32_t)lineOfFire.m_Direction.z,(MVPlayer **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (this_03 != (MVPlayer *)0x0) {
      bVar2 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        (this_03,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (this->fields)._.SpawnRoleModeTypes;
      if ((this_01 != (MVRuntimeDataVariable *)0x0) &&
         (pOVar3 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_01,(MethodInfo *)0x0)
         , pOVar3 != (Object *)0x0)) {
        if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pbVar4 = (byte *)func_?();
        if ((*pbVar4 & 2) != 0) {
          return;
        }
        pAVar5 = (this->fields)._.avatar;
        if (pAVar5 != (Avatar *)0x0) {
          bVar2 = Avatar::Avatar_HasModifierEffect
                            (pAVar5,AvatarModifierEffect__Enum_Invulnerable,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return;
          }
          pAVar5 = (this->fields)._.avatar;
          if (pAVar5 != (Avatar *)0x0) {
            voxelHit_00.point.z = (float)pOVar3;
            voxelHit_00.point.x = 0.0;
            voxelHit_00.point.y = 3.4281192e-29;
            voxelHit_00.normal.x = voxelHit.normal.x;
            voxelHit_00.normal.y = voxelHit.normal.y;
            voxelHit_00.normal.z = voxelHit.normal.z;
            voxelHit_00.cubePos.x = voxelHit.cubePos.x;
            voxelHit_00.cubePos.y = voxelHit.cubePos.y;
            voxelHit_00.cubePos.z = voxelHit.cubePos.z;
            voxelHit_00._30_2_ = voxelHit._30_2_;
            voxelHit_00.face = voxelHit.face;
            voxelHit_00.isCubeHit = voxelHit.isCubeHit;
            voxelHit_00._37_3_ = voxelHit._37_3_;
            voxelHit_00.woId = voxelHit.woId;
            voxelHit_00.cube = voxelHit.cube;
            voxelHit_00.distance = voxelHit.distance;
            voxelHit_00.collider = voxelHit.collider;
            voxelHit_00.transform = voxelHit.transform;
            voxelHit_00._60_8_ = voxelHit._60_8_;
            voxelHit_00.interactionFlags._4_4_ = voxelHit.interactionFlags._4_4_;
            Avatar::Avatar_VisualizeBulletImpact
                      (pAVar5,voxelHit_00,lineOfFire,shooterActorNumber,0.0,in_stack_6);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
               pMVar7 != (MVLocalPlayer *)0x0)) {
              if (lineOfFire.m_Direction.z != (float)(pMVar7->fields)._._ActorNr_k__BackingField) {
                return;
              }
              this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_02 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_PlayPlingSound(this_02,(MethodInfo *)0x0);
                iVar8 = func_?();
                if ((iVar8 != 0) && (iVar8 = func_?(), iVar8 != 0)) {
                  func_?();
                  return;
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <InitializeShield>b__24_0(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote__InitializeShield_b__24_0
               (MVAvatarRemote *this,Object *shield,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarUIHandlerRemote;
  pAVar2 = (this->fields)._.avatar;
  if (pAVar2 == (Avatar *)0x0) {
code_?:
    func_?();
    shield = extraout_ECX;
    pSVar3 = extraout_EDX;
code_?:
    func_?(shield,pSVar3);
    pAVar4 = extraout_EDX_00;
  }
  else {
    pAVar4 = (pAVar2->fields).avatarUIHandler;
    unaff_EDI = pAVar1;
    if (pAVar4 == (AvatarUIHandler *)0x0) goto code_?;
    bVar5 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if (((pAVar4->klass->_1).naturalAligment < bVar5) ||
       ((pAVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    this_00 = pAVar4[2].fields._.m_CancellationTokenSource;
    if (this_00 == (CancellationTokenSource *)0x0) goto code_?;
    fStack_6 = ShieldBar::ShieldBar_get_Shield((ShieldBar *)this_00,(MethodInfo *)0x0);
    pMVar7 = (this->fields)._.shield;
    if (pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    fVar8 = (float10)(*(code *)(pMVar7->klass->vtable).get_Value.method)
                                (pMVar7,(pMVar7->klass->vtable).set_Value.methodPtr);
    if (cRam_? == '\0') {
      func_?(&
                      UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((fStack_6 < (float)fVar8) &&
       (_UNK_? < fStack_9 - (this->fields)._.healParticleSpawnTime)) {
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields)._.healParticleSpawnTime = fVar10;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar11 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar11 != (PrefabPool *)0x0) {
        original = (pPVar11->fields).healingParticles;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        unaff_EDI = (AvatarUIHandlerRemote__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                              );
        this_01 = (this->fields)._._._.gameObject;
        if (this_01 != (GameObject *)0x0) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_01,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_14,pTVar12,(MethodInfo *)0x0);
            uVar15 = pVVar13->x;
            uVar16 = pVVar13->y;
            fVar10 = pVVar13->z;
            uStack_17 = CONCAT44((float)uVar16 + _UNK_?,uVar15);
            if (unaff_EDI != (AvatarUIHandlerRemote__Class *)0x0) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)unaff_EDI,(MethodInfo *)0x0);
              if (pTVar12 != (Transform *)0x0) {
                value.z = fVar10;
                value.x = (float)(undefined4)uStack_17;
                value.y = (float)uStack_17._4_4_;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar12,value,(MethodInfo *)0x0);
                pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)unaff_EDI,(MethodInfo *)0x0);
                if (pTVar12 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                            (pTVar12,(this->fields)._._._.transform,(MethodInfo *)0x0);
                  pAVar2 = (this->fields)._.avatar;
                  if (pAVar2 != (Avatar *)0x0) {
                    Avatar::Avatar_StartBlinking
                              (pAVar2,BlinkType__Enum_Healing,1.5,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
code_?:
    pAVar2 = (this->fields)._.avatar;
    if (pAVar2 == (Avatar *)0x0) goto code_?;
    pAVar4 = (pAVar2->fields).avatarUIHandler;
    this = (MVAvatarRemote *)TypeInfo__AvatarUIHandlerRemote;
    if (pAVar4 == (AvatarUIHandler *)0x0) goto code_?;
    bVar5 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    if ((bVar5 <= (pAVar4->klass->_1).naturalAligment) &&
       ((pAVar4->klass->_1).typeHierarchy[bVar5 - 1] ==
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      this = (MVAvatarRemote *)pAVar4[2].fields._.m_CancellationTokenSource;
      if (this == (MVAvatarRemote *)0x0) goto code_?;
      if (shield == (Object *)0x0) goto code_?;
      pSVar3 = TypeInfo__System__Single;
      if ((shield->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar18 = (float *)func_?(shield);
        ShieldBar::ShieldBar_set_Shield((ShieldBar *)this,*pfVar18,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(pAVar4,this);
  pAVar4 = extraout_EDX_01;
code_?:
  func_?(pAVar4,unaff_EDI);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* MVAvatarRemote(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote__ctor
               (MVAvatarRemote *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DynamicCullingHandler);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  this_00 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
            func_?(TypeInfo__DynamicCullingHandler);
  DynamicCullingHandler::DynamicCullingHandler__ctor
            ((DynamicCullingHandler *)this_00,3.5,(MethodInfo *)0x0);
  ppDVar1 = &(this->fields).cullingHandler;
  *ppDVar1 = (DynamicCullingHandler *)this_00;
  func_?(ppDVar1,this_00);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).prevHitTime = fVar2 - _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar3 == (PrefabPool *)0x0) {
code_?:
    pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  }
  else {
    MVAvatar::MVAvatar__ctor
              ((MVAvatar *)this,data,(pPVar3->fields).mvRemoteAvatarPrefab,worldObjects,
               (MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
              ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
    pMVar5 = (this->fields)._.Animation;
    (this->fields)._IsInVehicle_k__BackingField = 0;
    if (pMVar5 == (MVRuntimeDataVariable *)0x0) goto code_?;
    pMVar6 = (pMVar5->fields).OnChange;
    this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_01,(Object *)this,(this->klass->vtable).OnHealthChange.methodPtr,
               (MethodInfo *)0x0);
    pMStack4 =
         (MVRuntimeDataVariable_OnChangeDelegate *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pMVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    _pMStack00000034 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMStack4);
    if (pMStack4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate *)&(pMVar5->fields).OnChange;
      pMStack7 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
      *(MVRuntimeDataVariable_OnChangeDelegate **)pMStack4 =
           (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      func_?();
      return;
    }
    pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMStack4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar6 = pMStack4;
    }
    if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    ppMVar8 = &(pMVar5->fields).OnChange;
    *ppMVar8 = pMVar6;
    pMStack7 =
         (MVRuntimeDataVariable_OnChangeDelegate__Class *)
         (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMStack4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMStack7 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)pMStack4;
    }
    this_00 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMStack7 != (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) {
      pMStack4 = (MVRuntimeDataVariable_OnChangeDelegate *)ppMVar8;
      func_?();
      return;
    }
  }
  pMStack7 = this_00;
  _pMStack00000034 = func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean get_IsInVehicle() */

bool Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_get_IsInVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  return (this->fields)._IsInVehicle_k__BackingField;
}


/* Vector3 get_VelocityAbsolute() */

Vector3 * Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_get_VelocityAbsolute
                    (Vector3 *__return_storage_ptr__,MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarRemoteMovementCalculator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar1 = (this->fields).avatarRemoteMovementCalculator;
    if (pAVar1 != (AvatarRemoteMovementCalculator *)0x0) {
      fVar3 = (pAVar1->fields).velocityEstimate.y;
      fVar4 = (pAVar1->fields).velocityEstimate.z;
      __return_storage_ptr__->x = (pAVar1->fields).velocityEstimate.x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
    func_?();
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar7->zeroVector).y;
  fVar4 = (pVVar7->zeroVector).z;
  __return_storage_ptr__->x = (pVVar7->zeroVector).x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 get_VelocityRelative() */

Vector3 * Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_get_VelocityRelative
                    (Vector3 *__return_storage_ptr__,MVAvatarRemote *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._IsInVehicle_k__BackingField != 0) {
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  }
  pAVar2 = (this->fields).avatarRemoteMovementCalculator;
  if (pAVar2 != (AvatarRemoteMovementCalculator *)0x0) {
    fVar3 = (pAVar2->fields).velocityEstimate.y;
    fVar4 = (pAVar2->fields).velocityEstimate.z;
    __return_storage_ptr__->x = (pAVar2->fields).velocityEstimate.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Void set_IsInVehicle(Boolean) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_set_IsInVehicle
               (MVAvatarRemote *this,bool value,MethodInfo *method)

{
  (this->fields)._IsInVehicle_k__BackingField = value;
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_triggerBoxEvents_TriggerEnter
               (MVAvatarRemote *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar2 - (this->fields).prevHitTime < _UNK_?) {
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    vehicleBase = (MVVehicleBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (vehicleBase == (MVVehicleBase *)0x0) {
      return;
    }
    pMVar3 = vehicleBase->klass;
    bVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if ((pMVar3->_1).naturalAligment < bVar4) {
      return;
    }
    if ((MVVehicleBase__Class *)(pMVar3->_1).typeHierarchy[bVar4 - 1] != TypeInfo__MVVehicleBase) {
      return;
    }
    bVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pMVar3->_1).naturalAligment < bVar4) ||
       ((MVVehicleBase__Class *)(pMVar3->_1).typeHierarchy[bVar4 - 1] != TypeInfo__MVVehicleBase))
    goto code_?;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar5 = MVLocalPlayer::MVLocalPlayer_IsAvatarDriving(this_01,vehicleBase,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      pGVar6 = (vehicleBase->fields)._._._.gameObject;
      if (pGVar6 != (GameObject *)0x0) {
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (pGVar6,
                       MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__)
        ;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
        if (x != (Object_1 *)0x0) {
          iVar7 = (**(code **)&x->klass[1]._0.byval_arg.attrs)();
          UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                    (*(MethodInfo **)(iVar7 + 8));
          fVar2 = 0.0;
          fVar8 = (float10)func_?();
          if ((float)fVar8 < _UNK_?) {
            return;
          }
          fVar8 = (float10)func_?();
          this = (MVAvatarRemote *)(float)fVar8;
          if ((float)this < (float)_UNK_?) {
            this = _UNK_?;
          }
          else if ((float)_UNK_? < (float)this) {
            this = _UNK_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
          fVar9 = 1.0;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
          fVar9 = (float)this * _UNK_? * fVar9;
          fVar2 = fVar2 * (float)this * _UNK_?;
          pGVar6 = (pMVar1->fields)._._._.gameObject;
          if (pGVar6 != (GameObject *)0x0) {
            this_02 = (InteractionDataHandlerBase *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar6,
                                 InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                                );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            fVar10 = 0.0;
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              return;
            }
            impulse.y = fVar9;
            impulse.x = fVar10;
            impulse.z = fVar2;
            pIVar11 = VehicleHitPackage::VehicleHitPackage_Create
                               ((InteractionData *)&stack0xffffffd8,impulse,(MethodInfo *)0x0);
            if (this_02 != (InteractionDataHandlerBase *)0x0) {
              InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                        (this_02,*pIVar11,0,(MethodInfo *)0x0);
              fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
              (pMVar1->fields).prevHitTime = fVar2;
              return;
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

