
/* Void Activate(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Activate
               (MVAvatarRemote *this,int32_t idFrom,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                   );
    func_?(&TypeInfo__MVNetworkListener);
    func_?();
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
  unaff_EDI = TypeInfo__MVNetworkListener;
  if (this_02 == (MVNetworkListener *)0x0) {
code_?:
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 == (GameObject *)0x0) {
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
    pDVar4 = (this->fields).cullingHandler;
    if (pDVar4 == (DynamicCullingHandler *)0x0) goto code_?;
    DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
              (pDVar4,(this->fields)._._._.gameObject,(MethodInfo *)0x0);
    pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    a = (this->fields)._._._.ScaleChanged;
    pDVar4 = (this->fields).cullingHandler;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)pDVar4,
               MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
               ,(MethodInfo *)0x0);
    pMStack6 =
         (MVAvatarRemote *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    this = (MVAvatarRemote *)
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    if (pMStack6 == (MVAvatarRemote *)0x0) {
      (pUVar5->_1).cctor_finished_or_no_cctor = 0;
      func_?();
      return;
    }
    pMStack6 =
         (MVAvatarRemote *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    uVar7 = func_?();
    if (uVar7 == 0) goto code_?;
    (pUVar5->_1).cctor_finished_or_no_cctor = uVar7;
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack6 =
         (MVAvatarRemote *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack6 = (MVAvatarRemote *)func_?();
    this = (MVAvatarRemote *)pUVar5;
    if (pMStack6 != (MVAvatarRemote *)0x0) {
      func_?();
      return;
    }
  }
  else {
    if (((TypeInfo__MVNetworkListener->_1).naturalAligment <= (this_02->klass->_1).naturalAligment)
       && ((this_02->klass->_1).typeHierarchy[(TypeInfo__MVNetworkListener->_1).naturalAligment - 1]
           == (Il2CppClass *)TypeInfo__MVNetworkListener)) {
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_02,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    func_?(this_02,unaff_EDI);
  }
  pMStack6 = (MVAvatarRemote *)unaff_EBX;
  func_?();
code_?:
  pMStack6 = this;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  if ((this->fields)._.body != (MVBody *)0x0) {
    MVBody::MVBody_Detach((this->fields)._.body,(MethodInfo *)0x0);
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
    pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
    (*(code *)(newBody->klass->vtable).set_Rotation.method)
              (newBody,(pQVar1->identityQuaternion).x,(pQVar1->identityQuaternion).y,
               (pQVar1->identityQuaternion).z,(pQVar1->identityQuaternion).w,
               (newBody->klass->vtable).get_Scale.methodPtr);
    MVBody::MVBody_Attach(newBody,(MVAvatar *)this,(this->fields)._.isLocal,(MethodInfo *)0x0);
    (this->fields)._.body = newBody;
    func_?(&(this->fields)._.body,newBody);
    MVBody::MVBody_set_Visible(newBody,1,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_newBody____null,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_00,StringLiteral_triggerCollider,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._._._.gameObject;
    if (pGVar2 != (GameObject *)0x0) {
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar1,value,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar1,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                     (MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
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
                      (this_00,value_00,(MethodInfo *)0x0);
            pCVar3 = (CapsuleCollider *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                               (this_00,
                                UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::CapsuleCollider>__
                               );
            if (pCVar3 != (CapsuleCollider *)0x0) {
              UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
              CapsuleCollider_set_center
                        (pCVar3,(Vector3)ZEXT812(0x3f80000000000000),(MethodInfo *)0x0);
              UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                        ((Collider *)pCVar3,1,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._._._.gameObject;
              if (pGVar2 != (GameObject *)0x0) {
                this_01 = (CapsuleCollider *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (pGVar2,
                                     UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                    );
                if (this_01 != (CapsuleCollider *)0x0) {
                  if (((this_01->klass->_1).naturalAligment <
                       (TypeInfo__UnityEngine__CapsuleCollider->_1).naturalAligment) ||
                     ((this_01->klass->_1).typeHierarchy
                      [(TypeInfo__UnityEngine__CapsuleCollider->_1).naturalAligment - 1] !=
                      (Il2CppClass *)TypeInfo__UnityEngine__CapsuleCollider)) goto code_?;
                  fVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                          CapsuleCollider_get_height(this_01,(MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_height(pCVar3,fVar4,(MethodInfo *)0x0);
                  fVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                          CapsuleCollider_get_radius(this_01,(MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_radius(pCVar3,fVar4,(MethodInfo *)0x0);
                  this_02 = (TriggerBoxEvents *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (this_00,
                                       TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__AddComponent<TriggerBoxEvents>__
                                      );
                  this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (this_03,(Object *)&UNK_?,
                             MethodInfo__MVAvatarRemote__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                             ,(MethodInfo *)0x0);
                  if (this_02 != (TriggerBoxEvents *)0x0) {
                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                              (this_02,(EventHandler_1_TriggerEventArgs_ *)this_03,(MethodInfo *)0x0
                              );
                    return pCVar3;
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
  pCVar3 = (CapsuleCollider *)(*pcVar5)();
  return pCVar3;
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
    unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    if (unaff_EDI == (Delegate *)0x0) {
      (this->fields)._._._.ScaleChanged =
           (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
      pDStack6 = (Delegate *)&(this->fields)._._._.ScaleChanged;
      pMStack7 = (MVAvatarRemote *)unaff_EDI;
      func_?();
      return;
    }
    pMStack7 =
         (MVAvatarRemote *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pDStack6 = unaff_EDI;
    pUVar4 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
    pMStack7 = (MVAvatarRemote *)pUVar5;
    if (pUVar4 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
    goto code_?;
    (this->fields)._._._.ScaleChanged = pUVar4;
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pMStack7 =
         (MVAvatarRemote *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    pDStack6 = unaff_EDI;
    pMStack7 = (MVAvatarRemote *)func_?();
    if (pMStack7 != (MVAvatarRemote *)0x0) {
      pDStack6 = (Delegate *)&(this->fields)._._._.ScaleChanged;
      func_?();
      return;
    }
  }
  pDStack6 = unaff_EDI;
  pMStack7 = (MVAvatarRemote *)unaff_EBX;
  func_?();
  pMStack7 = this;
code_?:
  pDStack6 = unaff_EDI;
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
    source_00 = (pMVar3->fields).OnLocalPlayerReady;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source_00,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (source_00->fields)._._.extra_arg = (void *)0x0;
code_?:
      func_?();
      this_01 = (this->fields).cullingHandler;
      if (this_01 == (DynamicCullingHandler *)0x0) goto code_?;
      DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_01,(MethodInfo *)0x0);
      pUVar5 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
      object = pORam00000150;
      source = (this->fields)._._._.ScaleChanged;
      this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_03,object,
                 MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        (pUVar5->_1).cctor_finished_or_no_cctor = 0;
        func_?();
        return;
      }
      uVar6 = func_?();
      if (uVar6 != 0) {
        (pUVar5->_1).cctor_finished_or_no_cctor = uVar6;
        iVar7 = func_?();
        if (iVar7 != 0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
    pDVar8 = (Delegate *)0x0;
    if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
      pDVar8 = pDVar4;
    }
    if (pDVar8 == (Delegate *)0x0) goto code_?;
    (source_00->fields)._._.extra_arg = pDVar8;
    pDVar8 = (Delegate *)0x0;
    if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
      pDVar8 = pDVar4;
    }
    if (pDVar8 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  pAVar1 = unaff_EDI;
  if (this_00 != (MVBody *)0x0) {
    MVBody::MVBody_set_Visible(this_00,0,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._.avatar;
    if ((pAVar2 != (Avatar *)0x0) &&
       (pAVar3 = (pAVar2->fields).avatarUIHandler, pAVar3 != (AvatarUIHandler *)0x0)) {
      (*(code *)(pAVar3->klass->vtable).SetShouldShowUI.method)(pAVar3,0);
      pAVar2 = (this->fields)._.avatar;
      if (pAVar2 != (Avatar *)0x0) {
        this_02 = (AvatarUIHandlerRemote *)(pAVar2->fields).avatarUIHandler;
        pAVar1 = TypeInfo__AvatarUIHandlerRemote;
        if (this_02 != (AvatarUIHandlerRemote *)0x0) {
          pAVar1 = TypeInfo__AvatarUIHandlerRemote;
          if (((this_02->klass->_1).naturalAligment <
               (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment) ||
             ((this_02->klass->_1).typeHierarchy
              [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
          AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                    (this_02,0,(MethodInfo *)0x0);
          this_01 = (this->fields).triggerCollider;
          pAVar1 = unaff_EDI;
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
  func_?(this_02,pAVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).AvatarStateChangedHandler.method)
              (this,pOVar1,(this->klass->vtable).AttachBody.methodPtr);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
      pAVar4 = (pMVar3->fields).OnLocalPlayerReady;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
      if (pAVar4 == (Action *)0x0) {
        (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
        ppAStack6 = &(pMVar3->fields).OnLocalPlayerReady;
        pAStack7 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar8 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar4;
      }
      if (pAVar8 != (Action *)0x0) {
        (pMVar3->fields).OnLocalPlayerReady = pAVar8;
        uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
        pAStack7 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAStack7 = pAVar4;
        }
        if (pAStack7 != (Action *)0x0) {
          ppAStack6 = &(pMVar3->fields).OnLocalPlayerReady;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?();
code_?:
  _ppAStack0000000c = uVar5;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
code_?:
      func_?();
      pAVar7 = (this->fields)._.avatar;
      if ((pAVar7 == (Avatar *)0x0) ||
         (pAVar8 = (AvatarUIHandlerRemote *)(pAVar7->fields).avatarUIHandler,
         pAVar8 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
      if (((TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment <=
           (pAVar8->klass->_1).naturalAligment) &&
         ((pAVar8->klass->_1).typeHierarchy
          [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
        AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag(pAVar8,(MethodInfo *)0x0);
        bVar9 = (pNVar6->fields)._._.method_is_virtual;
        this = (MVAvatarRemote *)CONCAT31((int3)((uint)unaff_EDI >> 8),bVar9);
        if ((bVar9 != 3) && (bVar9 != 4)) {
code_?:
          pAVar7 = (this_02->fields)._.avatar;
          if ((pAVar7 == (Avatar *)0x0) ||
             (pAVar10 = (pAVar7->fields).avatarUIHandler, pAVar10 == (AvatarUIHandler *)0x0))
          goto code_?;
          if (((pAVar10->klass->_1).naturalAligment <
               (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment) ||
             ((pAVar10->klass->_1).typeHierarchy
              [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
          this_00 = pAVar10[2].fields._._._._.m_CachedPtr;
          if (this_00 == (HealthBar *)0x0) goto code_?;
          HealthBar::HealthBar_set_Oxygen(this_00,0.0,(MethodInfo *)0x0);
          MVAvatarRemote_InitializeHealth(this_02,(MethodInfo *)0x0);
          MVAvatarRemote_InitializeShield(this_02,(MethodInfo *)0x0);
          pCVar11 = MVAvatarRemote_CreateTriggerCollider(this_02,(MethodInfo *)0x0);
          (this_02->fields).triggerCollider = pCVar11;
          func_?();
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar1 == (MVNetworkGame *)0x0) ||
              (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) ||
             (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar2,(MethodInfo *)0x0), this_03 == (MVLocalPlayer *)0x0))
          goto code_?;
          bVar9 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_03,(MethodInfo *)0x0);
          if (bVar9 != 0) {
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
            pAVar12 = (pMVar2->fields).OnLocalPlayerReady;
            pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar4,(Object *)this_02,MethodInfo__MVAvatarRemote__InitAvatarState__,
                       (MethodInfo *)0x0);
            pAVar12 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pAVar12,(Delegate *)pNVar4,(MethodInfo *)0x0);
            if (pAVar12 != (Action *)0x0) {
              pAVar13 = (Action *)0x0;
              if (pAVar12->klass == TypeInfo__System__Action) {
                pAVar13 = pAVar12;
              }
              if (pAVar13 != (Action *)0x0) {
                _UNK_? = pAVar13;
                pAVar13 = (Action *)0x0;
                if (pAVar12->klass == TypeInfo__System__Action) {
                  pAVar13 = pAVar12;
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
          pAVar12 = (pMVar2->fields).OnLocalPlayerReady;
          pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar4,(Object *)this_02,MethodInfo__MVAvatarRemote__InitAvatarState__,
                     (MethodInfo *)0x0);
          pAVar12 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar12,(Delegate *)pNVar4,(MethodInfo *)0x0);
          if (pAVar12 == (Action *)0x0) {
            (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
          }
          else {
            pAVar13 = (Action *)0x0;
            if (pAVar12->klass == TypeInfo__System__Action) {
              pAVar13 = pAVar12;
            }
            if (pAVar13 == (Action *)0x0) goto code_?;
            (pMVar2->fields).OnLocalPlayerReady = pAVar13;
            pAVar13 = (Action *)0x0;
            if (pAVar12->klass == TypeInfo__System__Action) {
              pAVar13 = pAVar12;
            }
joined_?:
            if (pAVar13 == (Action *)0x0) goto code_?;
          }
code_?:
          func_?();
          pGVar14 = (this_02->fields)._._._.gameObject;
          if (pGVar14 != (GameObject *)0x0) {
            pAVar15 = (AvatarRemoteMovementCalculator *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar14,
                                 AvatarRemoteMovementCalculator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarRemoteMovementCalculator>__
                                );
            (this_02->fields).avatarRemoteMovementCalculator = pAVar15;
            func_?();
            pAVar16 = (AvatarLimbManager *)func_?();
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor
                      ((UxmlObjectListAttributeDescription_1_System_Object_ *)pAVar16,
                       (MethodInfo *)0x0);
            (this_02->fields)._.limbManager = pAVar16;
            func_?(&(this_02->fields)._.limbManager,pAVar16);
            if (((this_02->fields)._.avatar != (Avatar *)0x0) &&
               (pAVar16 = (this_02->fields)._.limbManager, pAVar16 != (AvatarLimbManager *)0x0)) {
              this_04 = this_02;
              (*(code *)(pAVar16->klass->vtable).Initialize.method)
                        (pAVar16,this_02,(this_02->fields)._.body);
              pGVar14 = (this_02->fields)._._._.gameObject;
              if (pGVar14 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar14,0,(MethodInfo *)0x0);
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
        pAVar7 = (this_02->fields)._.avatar;
        if ((pAVar7 == (Avatar *)0x0) ||
           (pAVar8 = (AvatarUIHandlerRemote *)(pAVar7->fields).avatarUIHandler,
           pAVar8 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
        if (((TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment <=
             (pAVar8->klass->_1).naturalAligment) &&
           ((pAVar8->klass->_1).typeHierarchy
            [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] ==
            (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
          AvatarUIHandlerRemote::AvatarUIHandlerRemote_ShowMobileIcon
                    (pAVar8,(BuildTarget__Enum)this,(MethodInfo *)0x0);
          goto code_?;
        }
code_?:
        func_?();
code_?:
        func_?();
      }
      func_?();
    }
    else {
      pDVar17 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar17 = pDVar5;
      }
      if (pDVar17 != (Delegate *)0x0) {
        (pNVar6->fields)._._.interp_method = pDVar17;
        pDVar17 = (Delegate *)0x0;
        if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar17 = pDVar5;
        }
        if (pDVar17 != (Delegate *)0x0) goto code_?;
      }
    }
  }
  else {
    pDVar17 = (Delegate *)0x0;
    if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pDVar17 = pDVar5;
    }
    if (pDVar17 != (Delegate *)0x0) {
      (pNVar4->fields)._._.interp_invoke_impl = pDVar17;
      pDVar17 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar17 = pDVar5;
      }
      if (pDVar17 != (Delegate *)0x0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  method_00 = TypeInfo__MVAvatarRemote____c__DisplayClass23_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    pAVar1 = (this->fields)._.avatar;
    unaff_EDI = (MVBody *)0x0;
    if (pAVar1 == (Avatar *)0x0) goto code_?;
    unaff_EDI = (MVBody *)(pAVar1->fields).avatarUIHandler;
    if (unaff_EDI == (MVBody *)0x0) goto code_?;
    pAVar2 = TypeInfo__AvatarUIHandlerRemote;
    if (((unaff_EDI->klass->_1).naturalAligment <
         (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment) ||
       ((unaff_EDI->klass->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    pMVar3 = (MonitorData *)(unaff_EDI->fields)._._._._.scale.x;
    value[1].monitor = pMVar3;
    func_?(&value[1].monitor,pMVar3);
    pMVar4 = (this->fields)._.Health;
    unaff_EDI = (MVBody *)value[1].monitor;
    if (pMVar4 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    fVar5 = (float10)(*(code *)(pMVar4->klass->vtable).get_Value.method)
                                (pMVar4,(pMVar4->klass->vtable).set_Value.methodPtr);
    if (unaff_EDI == (MVBody *)0x0) goto code_?;
    HealthBar::HealthBar_SetScaleFromHealth((HealthBar *)unaff_EDI,(float)fVar5,(MethodInfo *)0x0);
    pMVar4 = (this->fields)._.Health;
    unaff_EDI = (this->fields)._.body;
    if (pMVar4 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    fVar5 = (float10)(*(code *)(pMVar4->klass->vtable).get_Value.method)
                                (pMVar4,(pMVar4->klass->vtable).set_Value.methodPtr);
    if (unaff_EDI == (MVBody *)0x0) goto code_?;
    MVBody::MVBody_InitializeHealth(unaff_EDI,(float)fVar5,(MethodInfo *)0x0);
    pMVar4 = (this->fields)._.Health;
    if (pMVar4 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    unaff_EDI = (MVBody *)(pMVar4->fields)._.OnChange;
    pVVar6 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
             func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (pVVar6,value,
               MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__0_System__Object_
               ,(MethodInfo *)0x0);
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)unaff_EDI,(Delegate *)pVVar6,(MethodInfo *)0x0);
    if (pMVar7 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar4->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      unaff_EDI = (MVBody *)value[1].monitor;
      if (_UNK_? != (int *)0x0) {
        iVar8 = (**(code **)(*_UNK_? + 0xe0))
                          (_UNK_?,*(undefined4 *)(*_UNK_? + 0xe4));
        if (unaff_EDI != (MVBody *)0x0) {
          (unaff_EDI->fields)._._._._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)(float)iVar8;
          piVar9 = _UNK_?;
          if (_UNK_? != (int *)0x0) {
            unaff_EDI = (MVBody *)_UNK_?[8];
            pVVar6 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                     func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
            VideoCapture+OnVideoCaptureResourceCreatedCallback::
            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                      (pVVar6,value,
                       MethodInfo__MVAvatarRemote____c__DisplayClass23_0___InitializeHealth_b__1_System__Object_
                       ,(MethodInfo *)0x0);
            pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)unaff_EDI,(Delegate *)pVVar6,(MethodInfo *)0x0);
            if (pDVar10 == (Delegate *)0x0) {
              piVar9[8] = 0;
              func_?();
              return;
            }
            pDVar11 = (Delegate *)0x0;
            if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar10->klass ==
                TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pDVar11 = pDVar10;
            }
            if (pDVar11 != (Delegate *)0x0) {
              piVar9[8] = (int)pDVar11;
              pDVar11 = (Delegate *)0x0;
              if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar10->klass ==
                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pDVar11 = pDVar10;
              }
              if (pDVar11 != (Delegate *)0x0) {
                func_?();
                return;
              }
              goto code_?;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar7->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar12 = pMVar7;
    }
    if (pMVar12 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar4->fields)._.OnChange = pMVar12;
      pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar7->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar12 = pMVar7;
      }
      if (pMVar12 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
  pAVar2 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pAVar2);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
      if (((TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment <=
           (pAVar4->klass->_1).naturalAligment) &&
         ((pAVar4->klass->_1).typeHierarchy
          [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
        unaff_ESI = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
                    pAVar4[2].fields._.m_CancellationTokenSource;
        pMVar1 = (this->fields)._.shield;
        if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          fVar5 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                     (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
          if (unaff_ESI != (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) {
            ShieldBar::ShieldBar_set_Shield((ShieldBar *)unaff_ESI,(float)fVar5,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._.shield;
            unaff_ESI = (MVRuntimeDataVariable_OnChangeDelegate__Class *)(this->fields)._.body;
            if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
              fVar5 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                         (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
              if (unaff_ESI != (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) {
                MVBody::MVBody_InitializeShield((MVBody *)unaff_ESI,(float)fVar5,(MethodInfo *)0x0);
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
    pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar6 = pMVar2;
    }
    if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar1->fields)._._.OnChange = pMVar6;
    pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar6 = pMVar2;
    }
    unaff_ESI = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    if ((newAnimationData == (Object *)0x0) ||
       ((pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment <= (newAnimationData->klass->_1).naturalAligment &&
        ((Dictionary_2_System_Object_System_Object___Class *)
         (newAnimationData->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
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
  }
  func_?(newAnimationData,pDVar4);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnEnterVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).waterSplashComponent, this_00 != (WaterSplashComponent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    (this->fields)._IsInVehicle_k__BackingField = 1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnLeaveVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).waterSplashComponent, this_00 != (WaterSplashComponent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    (this->fields)._IsInVehicle_k__BackingField = 0;
    MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    if (((pAVar2->klass->_1).naturalAligment < (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment
        ) || ((pAVar2->klass->_1).typeHierarchy
              [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
              (pAVar2,isFriendly,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.avatar;
    if (pAVar1 == (Avatar *)0x0) goto code_?;
    pAVar2 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler;
    if (pAVar2 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    if (((TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment <=
         (pAVar2->klass->_1).naturalAligment) &&
       ((pAVar2->klass->_1).typeHierarchy[(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1]
        == (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                (pAVar2,1,(MethodInfo *)0x0);
      pAVar1 = (this->fields)._.avatar;
      if ((pAVar1 != (Avatar *)0x0) &&
         (pAVar3 = (pAVar1->fields).avatarUIHandler, pAVar3 != (AvatarUIHandler *)0x0)) {
        (*(code *)(pAVar3->klass->vtable).SetShouldShowUI.method)();
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_VisualizeBulletImpact
               (MVAvatarRemote *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGUICrossHair);
    func_?();
    cRam_? = '\x01';
  }
  this_03 = (MVPlayer *)0x0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) {
code_?:
    func_?();
  }
  else {
    bVar2 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this_00,(int32_t)lineOfFire.m_Direction.z,(MVPlayer **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (this_03 == (MVPlayer *)0x0) goto code_?;
    bVar2 = MVPlayer::MVPlayer_IsOnSameTeam_1(this_03,(MVWorldObjectClient *)this,(MethodInfo *)0x0)
    ;
    if (bVar2 != 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (this->fields)._.SpawnRoleModeTypes;
    if ((this_01 == (MVRuntimeDataVariable *)0x0) ||
       (pOVar3 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_01,(MethodInfo *)0x0),
       pOVar3 == (Object *)0x0)) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pbVar4 = (byte *)func_?();
    if ((*pbVar4 & 2) != 0) {
      return;
    }
    pAVar5 = (this->fields)._.avatar;
    if ((pAVar5 == (Avatar *)0x0) ||
       (pBVar6 = (pAVar5->fields).modifierEffectCount, pBVar6 == (Byte__Array *)0x0))
    goto code_?;
    if (10 < pBVar6->max_length) {
      if (pBVar6->vector[10] != 0) {
        return;
      }
      pAVar5 = (this->fields)._.avatar;
      if ((pAVar5 != (Avatar *)0x0) &&
         (pAVar7 = (pAVar5->fields).bulletImpactVisualizer,
         pAVar7 != (AvatarBulletImpactVisualizer *)0x0)) {
        (*(code *)(pAVar7->klass->vtable).VisualizeBulletImpact_1.method)
                  (pAVar7,pAVar7->klass[1]._0.image,&UNK_?,pOVar3,voxelHit.point.z,
                   voxelHit.normal.x,voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,
                   voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,voxelHit.woId,voxelHit.cube,
                   voxelHit.distance,voxelHit.collider,voxelHit.transform,voxelHit._60_8_,
                   voxelHit.interactionFlags._4_4_,lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,
                   lineOfFire.m_Origin.z);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           pMVar8 != (MVLocalPlayer *)0x0)) {
          if (lineOfFire.m_Direction.z != (float)(pMVar8->fields)._._ActorNr_k__BackingField) {
            return;
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (this_02 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_PlayPlingSound(this_02,(MethodInfo *)0x0);
            piVar9 = (int *)func_?();
            if (piVar9 != (int *)0x0) {
              uVar10 = 0;
              uVar11 = *(ushort *)(*piVar9 + 0xb6);
              if (uVar11 != 0) {
                do {
                  if (*(IPlayModeUI__Class **)(*(int *)(*piVar9 + 0x58) + (uint)uVar10 * 8) ==
                      TypeInfo__IPlayModeUI) {
                    puVar12 = (undefined4 *)
                              (*piVar9 +
                              (*(int *)(*(int *)(*piVar9 + 0x58) + 4 + (uint)uVar10 * 8) + 0x1a) *
                              8);
                    goto code_?;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
              }
              puVar12 = (undefined4 *)func_?();
code_?:
              iVar13 = (*(code *)*puVar12)();
              if (iVar13 != 0) {
                func_?();
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  }
  else {
    pAVar4 = (pAVar2->fields).avatarUIHandler;
    unaff_ESI = pAVar1;
    if (pAVar4 == (AvatarUIHandler *)0x0) goto code_?;
    if (((pAVar4->klass->_1).naturalAligment < (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment
        ) || ((pAVar4->klass->_1).typeHierarchy
              [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    this_00 = pAVar4[2].fields._.m_CancellationTokenSource;
    if (this_00 == (CancellationTokenSource *)0x0) goto code_?;
    previousHealth = ShieldBar::ShieldBar_get_Shield((ShieldBar *)this_00,(MethodInfo *)0x0);
    pMVar5 = (this->fields)._.shield;
    if (pMVar5 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    fVar6 = (float10)(*(code *)(pMVar5->klass->vtable).get_Value.method)
                               (pMVar5,(pMVar5->klass->vtable).set_Value.methodPtr);
    MVAvatar::MVAvatar_TrySpawningHealParticles
              ((MVAvatar *)this,previousHealth,(float)fVar6,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._.avatar;
    if (pAVar2 == (Avatar *)0x0) goto code_?;
    pAVar4 = (pAVar2->fields).avatarUIHandler;
    unaff_ESI = TypeInfo__AvatarUIHandlerRemote;
    if (pAVar4 == (AvatarUIHandler *)0x0) goto code_?;
    if (((pAVar4->klass->_1).naturalAligment < (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment
        ) || ((pAVar4->klass->_1).typeHierarchy
              [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    unaff_ESI = (AvatarUIHandlerRemote__Class *)pAVar4[2].fields._.m_CancellationTokenSource;
    if (unaff_ESI == (AvatarUIHandlerRemote__Class *)0x0) goto code_?;
    if (shield == (Object *)0x0) goto code_?;
    pSVar3 = TypeInfo__System__Single;
    if ((shield->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?(shield);
      ShieldBar::ShieldBar_set_Shield((ShieldBar *)unaff_ESI,*pfVar7,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(shield,pSVar3);
  pAVar4 = extraout_EDX_00;
code_?:
  func_?(pAVar4,unaff_ESI);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  (this->fields).cullingHandler = (DynamicCullingHandler *)this_00;
  func_?(&(this->fields).cullingHandler,this_00);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).prevHitTime = fVar1 - _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
code_?:
    pMStack3 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  }
  else {
    MVAvatar::MVAvatar__ctor
              ((MVAvatar *)this,data,(pPVar2->fields).mvRemoteAvatarPrefab,worldObjects,
               (MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
              ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
    pMVar4 = (this->fields)._.Animation;
    (this->fields)._IsInVehicle_k__BackingField = 0;
    if (pMVar4 == (MVRuntimeDataVariable *)0x0) goto code_?;
    pMVar5 = (pMVar4->fields).OnChange;
    this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_01,(Object *)this,(this->klass->vtable).OnHealthChange.methodPtr,
               (MethodInfo *)0x0);
    pMStack3 =
         (MVRuntimeDataVariable_OnChangeDelegate *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pMVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMStack3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
      (pMVar4->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      pMStack3 = (MVRuntimeDataVariable_OnChangeDelegate *)&(pMVar4->fields).OnChange;
      func_?();
      return;
    }
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMStack3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar5 = pMStack3;
    }
    pMStack6 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar4->fields).OnChange = pMVar5;
    pMStack6 =
         (MVRuntimeDataVariable_OnChangeDelegate__Class *)
         (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMStack3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)pMStack3;
    }
    this_00 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMStack6 != (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) {
      pMStack3 = (MVRuntimeDataVariable_OnChangeDelegate *)&(pMVar4->fields).OnChange;
      func_?();
      return;
    }
  }
  pMStack6 = this_00;
  pMStack3 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  pMStack6 = extraout_ECX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    if ((vehicleBase->klass->_1).naturalAligment < (TypeInfo__MVVehicleBase->_1).naturalAligment) {
      return;
    }
    if ((MVVehicleBase__Class *)
        (vehicleBase->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] !=
        TypeInfo__MVVehicleBase) {
      return;
    }
    if (((vehicleBase->klass->_1).naturalAligment < (TypeInfo__MVVehicleBase->_1).naturalAligment)
       || ((MVVehicleBase__Class *)
           (vehicleBase->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1]
           != TypeInfo__MVVehicleBase)) goto code_?;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar3 = MVLocalPlayer::MVLocalPlayer_IsAvatarDriving(this_01,vehicleBase,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pGVar4 = (vehicleBase->fields)._._._.gameObject;
      if (pGVar4 != (GameObject *)0x0) {
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (pGVar4,
                       MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__)
        ;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          return;
        }
        if (x != (Object_1 *)0x0) {
          iVar5 = func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                    (*(MethodInfo **)(iVar5 + 8));
          fVar2 = 0.0;
          puVar6 = &UNK_?;
          fVar7 = (float10)func_?();
          if ((float)fVar7 < _UNK_?) {
            return;
          }
          fVar7 = (float10)func_?();
          this = (MVAvatarRemote *)(float)fVar7;
          if ((float)this < (float)_UNK_?) {
            this = _UNK_?;
          }
          else if ((float)_UNK_? < (float)this) {
            this = _UNK_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
          fVar8 = 1.0;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
          fVar9 = (float)this * _UNK_?;
          fVar10 = (float)puVar6 * fVar9;
          fVar8 = fVar9 * fVar8;
          fVar2 = fVar2 * fVar9;
          pGVar4 = (pMVar1->fields)._._._.gameObject;
          if (pGVar4 != (GameObject *)0x0) {
            this_02 = (InteractionDataHandlerBase *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar4,
                                 InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                                );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              return;
            }
            impulse.y = fVar8;
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

