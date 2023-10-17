
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
  (*(this->klass->vtable).set_Position.methodPtr)
            (this,position._0_8_,position.z,(this->klass->vtable).set_Position.method);
  (*(this->klass->vtable).set_Rotation.methodPtr)
            (this,rotation.x,rotation.y,rotation.z,rotation.w,
             (this->klass->vtable).set_Rotation.method);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).transformNetworkManager, this_00 == (TransformNetworkManager *)0x0)
     ) {
code_?:
    func_?();
    this_03 = extraout_EDX;
  }
  else {
    this_03 = (MVNetworkListener *)
              TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                        (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__MVNetworkListener;
    if (this_03 == (MVNetworkListener *)0x0) {
code_?:
      this_01 = (this->fields)._._._.gameObject;
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        pAVar2 = (this->fields)._.avatar;
        if ((pAVar2 != (Avatar *)0x0) &&
           (pAVar3 = (pAVar2->fields).avatarUIHandler, pAVar3 != (AvatarUIHandler *)0x0)) {
          (*(pAVar3->klass->vtable).Activate.methodPtr)();
          this_02 = (this->fields).cullingHandler;
          if (this_02 != (DynamicCullingHandler *)0x0) {
            DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                      (this_02,(this->fields)._._._.gameObject,(MethodInfo *)0x0);
            pUVar4 = (this->fields)._._._.ScaleChanged;
            this_04 = (UnityAction_2_System_Object_System_Object_ *)func_?();
            unaff_EDI = (MVNetworkListener__Class *)0x0;
            if (this_04 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (this_04,(Object *)0x0,
                         MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                         ,(MethodInfo *)0x0);
              pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pUVar4,(Delegate *)this_04,(MethodInfo *)0x0);
              if (pDVar5 == (Delegate *)0x0) {
                (this->fields)._._._.ScaleChanged =
                     (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
                func_?();
                return;
              }
              pUVar4 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?()
              ;
              if (pUVar4 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
                (this->fields)._._._.ScaleChanged = pUVar4;
                iVar6 = func_?();
                if (iVar6 != 0) {
                  func_?();
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    if (((TypeInfo__MVNetworkListener->_1).typeHierarchyDepth <=
         (this_03->klass->_1).typeHierarchyDepth) &&
       ((this_03->klass->_1).typeHierarchy[(TypeInfo__MVNetworkListener->_1).typeHierarchyDepth - 1]
        == (Il2CppClass *)TypeInfo__MVNetworkListener)) {
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_03,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?(this_03,unaff_EDI);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AttachBody(MVBody) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_AttachBody
               (MVAvatarRemote *this,MVBody *newBody,MethodInfo *method)

{
  MVAvatar::MVAvatar_AttachBody((MVAvatar *)this,newBody,(MethodInfo *)0x0);
  if (newBody != (MVBody *)0x0) {
    MVBody::MVBody_set_Visible(newBody,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this_00,StringLiteral_triggerCollider,(MethodInfo *)0x0);
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
                  if (((this_01->klass->_1).typeHierarchyDepth <
                       (TypeInfo__UnityEngine__CapsuleCollider->_1).typeHierarchyDepth) ||
                     ((this_01->klass->_1).typeHierarchy
                      [(TypeInfo__UnityEngine__CapsuleCollider->_1).typeHierarchyDepth - 1] !=
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
                  if (this_03 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (this_03,(Object *)&UNK_?,
                               MethodInfo__MVAvatarRemote__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                               ,(MethodInfo *)0x0);
                    if (this_02 != (TriggerBoxEvents *)0x0) {
                      TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                (this_02,(EventHandler_1_TriggerEventArgs_ *)this_03,
                                 (MethodInfo *)0x0);
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
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.avatar;
    if ((pAVar1 != (Avatar *)0x0) &&
       (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 != (AvatarUIHandler *)0x0)) {
      (*(pAVar2->klass->vtable).Deactivate.methodPtr)
                (pAVar2,(pAVar2->klass->vtable).Deactivate.method);
      pDVar3 = (this->fields).cullingHandler;
      if (pDVar3 != (DynamicCullingHandler *)0x0) {
        DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(pDVar3,(MethodInfo *)0x0);
        pDVar3 = (this->fields).cullingHandler;
        pUVar4 = (this->fields)._._._.ScaleChanged;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                 );
        if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,(Object *)pDVar3,
                     MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pDVar5 == (Delegate *)0x0) {
            (this->fields)._._._.ScaleChanged =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
            func_?();
            return;
          }
          pUVar4 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
          if (pUVar4 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
            (this->fields)._._._.ScaleChanged = pUVar4;
            iVar6 = func_?();
            if (iVar6 != 0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  MVAvatar::MVAvatar_Destroy((MVAvatar *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) {
code_?:
    func_?();
  }
  else {
    pAVar3 = (pMVar2->fields).OnLocalPlayerReady;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar3 == (Action *)0x0) {
      (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
    }
    else {
      pAVar4 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action *)0x0) goto code_?;
      (pMVar2->fields).OnLocalPlayerReady = pAVar4;
      pAVar4 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action *)0x0) goto code_?;
    }
    func_?();
    pDVar5 = (this->fields).cullingHandler;
    if (pDVar5 == (DynamicCullingHandler *)0x0) goto code_?;
    DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(pDVar5,(MethodInfo *)0x0);
    pDVar5 = (this->fields).cullingHandler;
    pUVar6 = (this->fields)._._._.ScaleChanged;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                             );
    if (this_01 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)pDVar5,
               MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      (this->fields)._._._.ScaleChanged =
           (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
      func_?();
      return;
    }
    pUVar6 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
    if (pUVar6 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
      (this->fields)._._._.ScaleChanged = pUVar6;
      iVar8 = func_?();
      if (iVar8 != 0) {
        func_?();
        return;
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
      (*(pAVar3->klass->vtable).SetShouldShowUI.methodPtr)(pAVar3,0);
      pAVar2 = (this->fields)._.avatar;
      if (pAVar2 != (Avatar *)0x0) {
        this_02 = (AvatarUIHandlerRemote *)(pAVar2->fields).avatarUIHandler;
        pAVar1 = TypeInfo__AvatarUIHandlerRemote;
        if (this_02 != (AvatarUIHandlerRemote *)0x0) {
          pAVar1 = TypeInfo__AvatarUIHandlerRemote;
          if (((this_02->klass->_1).typeHierarchyDepth <
               (TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth) ||
             ((this_02->klass->_1).typeHierarchy
              [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] !=
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
    (*(this->klass->vtable).AvatarStateChangedHandler.methodPtr)
              (this,pOVar1,(this->klass->vtable).AvatarStateChangedHandler.method);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
      pAVar4 = (pMVar3->fields).OnLocalPlayerReady;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_OwnerActorNr_____1,(MethodInfo *)0x0);
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 == (MVNetworkGame *)0x0) ||
      (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) ||
     (this_02 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                          (pMVar2,(this->fields)._._._._.ownerActorNr,(MethodInfo *)0x0),
     this_02 == (MVPlayer *)0x0)) goto code_?;
  pUVar3 = (this_02->fields).OnObserve;
  pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar4,(Object *)this,MethodInfo__MVAvatarRemote__OnObserve__,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
  if (pUVar3 != (UnityAction *)0x0) {
    pUVar5 = (UnityAction *)0x0;
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar5 = pUVar3;
    }
    if (pUVar5 != (UnityAction *)0x0) {
      (this_02->fields).OnObserve = pUVar5;
      pUVar5 = (UnityAction *)0x0;
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar5 = pUVar3;
      }
      if (pUVar5 != (UnityAction *)0x0) goto code_?;
    }
    goto code_?;
  }
  (this_02->fields).OnObserve = (UnityAction *)0x0;
code_?:
  func_?();
  pUVar3 = (this_02->fields).OnResume;
  pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar4,(Object *)this,MethodInfo__MVAvatarRemote__OnResume__,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
  if (pUVar3 == (UnityAction *)0x0) {
    (this_02->fields).OnResume = (UnityAction *)0x0;
code_?:
    func_?();
    pAVar6 = (this->fields)._.avatar;
    if ((pAVar6 == (Avatar *)0x0) ||
       (this_00 = (AvatarUIHandlerRemote *)(pAVar6->fields).avatarUIHandler,
       this_00 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
    if (((this_00->klass->_1).typeHierarchyDepth <
         (TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth) ||
       ((this_00->klass->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
code_?:
      func_?();
    }
    else {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag(this_00,(MethodInfo *)0x0);
      uVar7 = (this_02->fields)._BuildTarget_k__BackingField;
      if ((uVar7 != 3) && (uVar7 != 4)) {
code_?:
        pAVar6 = (this->fields)._.avatar;
        if ((pAVar6 == (Avatar *)0x0) ||
           (pAVar8 = (pAVar6->fields).avatarUIHandler, pAVar8 == (AvatarUIHandler *)0x0))
        goto code_?;
        if (((pAVar8->klass->_1).typeHierarchyDepth <
             (TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth) ||
           ((pAVar8->klass->_1).typeHierarchy
            [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
        pCVar9 = pAVar8[2].fields.chatBubbleAnchor;
        if ((pCVar9 == (ChatAnchor *)0x0) ||
           (pTVar10 = (Transform *)(pCVar9->fields).AttachedRadius, pTVar10 == (Transform *)0x0))
        goto code_?;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                            ((Vector3 *)&stack0xffffffe0,pTVar10,(MethodInfo *)0x0);
        uVar12 = pVVar11->y;
        pTVar10 = (Transform *)(pCVar9->fields).AttachedRadius;
        if (pTVar10 == (Transform *)0x0) goto code_?;
        auVar13._4_4_ = pVVar11->z;
        auVar13._0_4_ = uVar12;
        auVar13._8_4_ = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar10,(Vector3)(auVar13 << 0x20),(MethodInfo *)0x0);
        MVAvatarRemote_InitializeHealth(this,(MethodInfo *)0x0);
        MVAvatarRemote_InitializeShield(this,(MethodInfo *)0x0);
        pCVar14 = MVAvatarRemote_CreateTriggerCollider(this,(MethodInfo *)0x0);
        (this->fields).triggerCollider = pCVar14;
        method_00 = (Action__Class *)&UNK_?;
        func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 == (MVNetworkGame *)0x0) ||
            (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0)) ||
           (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0)
           , this_04 == (MVLocalPlayer *)0x0)) goto code_?;
        bVar15 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_04,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (this->fields)._.SpawnRoleModeTypes;
          if (this_01 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_01,(MethodInfo *)0x0);
          (*(this->klass->vtable).AvatarStateChangedHandler.methodPtr)();
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
          goto code_?;
          pAVar16 = (pMVar2->fields).OnLocalPlayerReady;
          pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar4,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                     (MethodInfo *)0x0);
          pAVar16 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar16,(Delegate *)pNVar4,(MethodInfo *)0x0);
          if (pAVar16 != (Action *)0x0) {
            pAVar17 = (Action *)0x0;
            if (pAVar16->klass == TypeInfo__System__Action) {
              pAVar17 = pAVar16;
            }
            if (pAVar17 != (Action *)0x0) {
              (pMVar2->fields).OnLocalPlayerReady = pAVar17;
              pAVar17 = (Action *)0x0;
              if (pAVar16->klass == TypeInfo__System__Action) {
                pAVar17 = pAVar16;
              }
              goto joined_?;
            }
            goto code_?;
          }
          (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
          goto code_?;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
        goto code_?;
        pAVar16 = (pMVar2->fields).OnLocalPlayerReady;
        method_00 = TypeInfo__System__Action;
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                   (MethodInfo *)0x0);
        pAVar16 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar16,(Delegate *)pNVar4,(MethodInfo *)0x0);
        if (pAVar16 == (Action *)0x0) {
          (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
code_?:
          func_?();
          pGVar18 = (this->fields)._._._.gameObject;
          if (pGVar18 != (GameObject *)0x0) {
            pAVar19 = (AvatarRemoteMovementCalculator *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar18,
                                 AvatarRemoteMovementCalculator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarRemoteMovementCalculator>__
                                );
            (this->fields).avatarRemoteMovementCalculator = pAVar19;
            func_?();
            pAVar20 = (AvatarLimbManager *)func_?();
            if (pAVar20 != (AvatarLimbManager *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)pAVar20,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
              (this->fields)._.limbManager = pAVar20;
              func_?();
              if (((this->fields)._.avatar != (Avatar *)0x0) &&
                 (pAVar20 = (this->fields)._.limbManager, pAVar20 != (AvatarLimbManager *)0x0)) {
                (*(pAVar20->klass->vtable).Initialize.methodPtr)(pAVar20,this,(this->fields)._.body)
                ;
                pGVar18 = (this->fields)._._._.gameObject;
                if (pGVar18 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar18,0,(MethodInfo *)0x0);
                  if ((this_02->fields).playerState == 3) {
                    MVAvatarRemote_HideBody(this,(MethodInfo *)0x0);
                  }
                  MVPlayer::MVPlayer_NotifyAvatarCreated
                            (this_02,(this->fields)._._._._.id,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto code_?;
        }
        pAVar17 = (Action *)0x0;
        if (pAVar16->klass == TypeInfo__System__Action) {
          pAVar17 = pAVar16;
        }
        if (pAVar17 != (Action *)0x0) {
          (pMVar2->fields).OnLocalPlayerReady = pAVar17;
          pAVar17 = (Action *)0x0;
          if (pAVar16->klass == TypeInfo__System__Action) {
            pAVar17 = pAVar16;
          }
joined_?:
          if (pAVar17 != (Action *)0x0) goto code_?;
        }
code_?:
        func_?();
        goto code_?;
      }
      pAVar6 = (this->fields)._.avatar;
      if ((pAVar6 == (Avatar *)0x0) ||
         (pAVar8 = (pAVar6->fields).avatarUIHandler, pAVar8 == (AvatarUIHandler *)0x0))
      goto code_?;
      if (((TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth <=
           (pAVar8->klass->_1).typeHierarchyDepth) &&
         ((pAVar8->klass->_1).typeHierarchy
          [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
        pCVar9 = pAVar8[3].fields.chatBubbleAnchor;
        if ((pCVar9 == (ChatAnchor *)0x0) ||
           (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar9,(MethodInfo *)0x0),
           pGVar18 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar18,1,(MethodInfo *)0x0);
        if (uVar7 == 3) {
          pCVar9 = pAVar8[3].fields.chatBubbleAnchor;
          if ((pCVar9 == (ChatAnchor *)0x0) ||
             (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pCVar9,(MethodInfo *)0x0), this_03 == (Material *)0x0
             )) goto code_?;
          value = pAVar8[3].fields.worldObject;
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                    (this_03,(Texture *)value,(MethodInfo *)0x0);
        }
        else if (uVar7 == 4) {
          pCVar9 = pAVar8[3].fields.chatBubbleAnchor;
          if ((pCVar9 == (ChatAnchor *)0x0) ||
             (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pCVar9,(MethodInfo *)0x0), this_03 == (Material *)0x0
             )) goto code_?;
          value = (MVWorldObjectClient *)pAVar8[3].fields.ownerActorNr;
          goto code_?;
        }
        *(undefined1 *)&pAVar8[4].monitor = 1;
        goto code_?;
      }
    }
    func_?();
  }
  else {
    pUVar5 = (UnityAction *)0x0;
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar5 = pUVar3;
    }
    if (pUVar5 != (UnityAction *)0x0) {
      (this_02->fields).OnResume = pUVar5;
      pUVar5 = (UnityAction *)0x0;
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar5 = pUVar3;
      }
      if (pUVar5 != (UnityAction *)0x0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
                    MethodInfo__MVAvatarRemote____c__DisplayClass18_0___InitializeHealth_b__0_System__Object_
                   );
    func_?(&
                    MethodInfo__MVAvatarRemote____c__DisplayClass18_0___InitializeHealth_b__1_System__Object_
                   );
    func_?(&TypeInfo__MVAvatarRemote____c__DisplayClass18_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MVAvatarRemote____c__DisplayClass18_0);
  if (value == (Object *)0x0) {
code_?:
    pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    pAVar2 = (this->fields)._.avatar;
    unaff_EBX = (MVBody *)0x0;
    if (pAVar2 == (Avatar *)0x0) goto code_?;
    unaff_EBX = (MVBody *)(pAVar2->fields).avatarUIHandler;
    if (unaff_EBX == (MVBody *)0x0) goto code_?;
    pAVar3 = TypeInfo__AvatarUIHandlerRemote;
    if (((unaff_EBX->klass->_1).typeHierarchyDepth <
         (TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth) ||
       ((unaff_EBX->klass->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    pMVar4 = (MonitorData *)(unaff_EBX->fields)._._._._.rotation.w;
    value[1].monitor = pMVar4;
    func_?(&value[1].monitor,pMVar4);
    pMVar5 = (this->fields)._.Health;
    unaff_EBX = (MVBody *)value[1].monitor;
    if (pMVar5 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    fVar6 = (float10)(*(pMVar5->klass->vtable).get_Value.methodPtr)
                                (pMVar5,(pMVar5->klass->vtable).get_Value.method);
    if (unaff_EBX == (MVBody *)0x0) goto code_?;
    HealthBar::HealthBar_SetScaleFromHealth((HealthBar *)unaff_EBX,(float)fVar6,(MethodInfo *)0x0);
    pMVar5 = (this->fields)._.Health;
    unaff_EBX = (this->fields)._.body;
    if (pMVar5 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    fVar6 = (float10)(*(pMVar5->klass->vtable).get_Value.methodPtr)
                                (pMVar5,(pMVar5->klass->vtable).get_Value.method);
    if (unaff_EBX == (MVBody *)0x0) goto code_?;
    MVBody::MVBody_InitializeHealth(unaff_EBX,(float)fVar6,(MethodInfo *)0x0);
    unaff_EBX = (MVBody *)(this->fields)._.Health;
    if (unaff_EBX == (MVBody *)0x0) goto code_?;
    a = (Delegate *)(unaff_EBX->fields)._._._._.objectLinkRefs;
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,value,
               MethodInfo__MVAvatarRemote____c__DisplayClass18_0___InitializeHealth_b__0_System__Object_
               ,(MethodInfo *)0x0);
    pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       (a,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (unaff_EBX->fields)._._._._.objectLinkRefs = (List_1_MV_WorldObject_ObjectLink_ *)0x0;
code_?:
      func_?(&(unaff_EBX->fields)._._._._.objectLinkRefs);
      pMVar7 = (this->fields)._.MaxHealth;
      unaff_EBX = (MVBody *)value[1].monitor;
      if (pMVar7 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
        iVar8 = (*(pMVar7->klass->vtable).get_Value.methodPtr)
                          (pMVar7,(pMVar7->klass->vtable).get_Value.method);
        if (unaff_EBX != (MVBody *)0x0) {
          *(float *)&(unaff_EBX->fields)._._._._.inputState = (float)iVar8;
          pMVar7 = (this->fields)._.MaxHealth;
          if (pMVar7 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
            pMVar1 = (pMVar7->fields)._.OnChange;
            unaff_EBX = (MVBody *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
            ;
            if (unaff_EBX != (MVBody *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        ((UnityAction_1_System_Object_ *)unaff_EBX,value,
                         MethodInfo__MVAvatarRemote____c__DisplayClass18_0___InitializeHealth_b__1_System__Object_
                         ,(MethodInfo *)0x0);
              pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pMVar1,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
              if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (pMVar7->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                func_?(&(pMVar7->fields)._.OnChange);
                return;
              }
              pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar9 = pMVar1;
              }
              if (pMVar9 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (pMVar7->fields)._.OnChange = pMVar9;
                pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pMVar9 = pMVar1;
                }
                if (pMVar9 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  func_?(&(pMVar7->fields)._.OnChange);
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar9 = pMVar1;
    }
    if (pMVar9 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (unaff_EBX->fields)._._._._.objectLinkRefs = (List_1_MV_WorldObject_ObjectLink_ *)pMVar9;
      pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar9 = pMVar1;
      }
      if (pMVar9 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
  }
code_?:
  func_?(pMVar1);
  pAVar3 = extraout_EDX;
code_?:
  func_?(unaff_EBX,pAVar3);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeShield() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitializeShield
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    func_?(&MethodInfo__MVAvatarRemote___InitializeShield_b__19_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  this_01 = (MVBody *)(this->fields)._.shield;
  if (this_01 == (MVBody *)0x0) {
code_?:
    func_?();
    pAVar1 = extraout_EDX;
  }
  else {
    pDVar2 = (Delegate *)(this_01->fields)._._._._.objectLinkRefs;
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVAvatarRemote___InitializeShield_b__19_0_System__Object_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (this_01->fields)._._._._.objectLinkRefs = (List_1_MV_WorldObject_ObjectLink_ *)0x0;
    }
    else {
      pDVar3 = (Delegate *)0x0;
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar2->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) goto code_?;
      (this_01->fields)._._._._.objectLinkRefs = (List_1_MV_WorldObject_ObjectLink_ *)pDVar3;
      pDVar3 = (Delegate *)0x0;
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar2->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) goto code_?;
    }
    func_?();
    pAVar4 = (this->fields)._.avatar;
    if (pAVar4 == (Avatar *)0x0) goto code_?;
    pAVar1 = (pAVar4->fields).avatarUIHandler;
    this_01 = (MVBody *)TypeInfo__AvatarUIHandlerRemote;
    if (pAVar1 == (AvatarUIHandler *)0x0) goto code_?;
    if (((TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth <=
         (pAVar1->klass->_1).typeHierarchyDepth) &&
       ((pAVar1->klass->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      this_01 = (MVBody *)pAVar1[2].fields.worldObject;
      pMVar5 = (this->fields)._.shield;
      if (pMVar5 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        fVar6 = (float10)(*(pMVar5->klass->vtable).get_Value.methodPtr)
                                   (pMVar5,(pMVar5->klass->vtable).get_Value.method);
        if (this_01 != (MVBody *)0x0) {
          (this_01->fields)._._._._.itemId = (int32_t)(float)fVar6;
          (this_01->fields)._._._._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
          pMVar5 = (this->fields)._.shield;
          this_01 = (this->fields)._.body;
          if (pMVar5 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            fVar6 = (float10)(*(pMVar5->klass->vtable).get_Value.methodPtr)
                                       (pMVar5,(pMVar5->klass->vtable).get_Value.method);
            if (this_01 != (MVBody *)0x0) {
              MVBody::MVBody_InitializeShield(this_01,(float)fVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(pAVar1,this_01);
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
  MVAvatar::MVAvatar_OnAnimationChange((MVAvatar *)this,newAnimationData,(MethodInfo *)0x0);
  this_00 = (this->fields)._.SpawnRoleModeTypes;
  if ((this_00 == (MVRuntimeDataVariable *)0x0) ||
     (pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0),
     pOVar1 == (Object *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
    pDVar2 = extraout_EDX;
  }
  else {
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pbVar3 = (byte *)func_?();
    if ((*pbVar3 & 1) == 0) {
      return;
    }
    if ((newAnimationData == (Object *)0x0) ||
       ((pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth <= (newAnimationData->klass->_1).typeHierarchyDepth &&
        ((Dictionary_2_System_Object_System_Object___Class *)
         (newAnimationData->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      this_01 = (this->fields)._.body;
      if ((this_01 == (MVBody *)0x0) ||
         ((pBVar4 = MVBody::MVBody_get_Animation(this_01,(MethodInfo *)0x0),
          newAnimationData == (Object *)0x0 ||
          (pSVar5 = (String *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                               (Object *)StringLiteral_state,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pBVar4 == (BoneAnimation *)0x0)))) goto code_?;
      newAnimationData = (Object *)0x0;
      if (pSVar5 == (String *)0x0) {
code_?:
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_02 = (pBVar4->fields).playingAnimations;
        if (this_02 != (HashSet_1_System_String_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Add
                    ((HashSet_1_System_Object_ *)this_02,newAnimationData,
                     MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                    );
          pAVar6 = (pBVar4->fields).avatarAnimation;
          if ((pAVar6 != (Animation *)0x0) &&
             (pAVar7 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                 (pAVar6,(String *)newAnimationData,(MethodInfo *)0x0),
             pAVar7 != (AnimationState *)0x0)) {
            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                      (pAVar7,1.0,(MethodInfo *)0x0);
            pAVar6 = (pBVar4->fields).avatarAnimation;
            if ((pAVar6 != (Animation *)0x0) &&
               (pAVar7 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                   (pAVar6,(String *)newAnimationData,(MethodInfo *)0x0),
               pAVar7 != (AnimationState *)0x0)) {
              UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                        (pAVar7,0.0,(MethodInfo *)0x0);
              pAVar6 = (pBVar4->fields).avatarAnimation;
              if (pAVar6 != (Animation *)0x0) {
                UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                          (pAVar6,(String *)newAnimationData,PlayMode__Enum_StopAll,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
      if (pSVar5->klass == TypeInfo__System__String) {
        newAnimationData = (Object *)pSVar5;
      }
      if ((String *)newAnimationData != (String *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(newAnimationData,pDVar2);
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
  MVAvatar::MVAvatar_OnEnterVehicle((MVAvatar *)this,(MethodInfo *)0x0);
  (this->fields)._IsInVehicle_k__BackingField = 1;
  return;
}


/* Void OnLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnLeaveVehicle
               (MVAvatarRemote *this,MethodInfo *method)

{
  MVAvatar::MVAvatar_OnLeaveVehicle((MVAvatar *)this,(MethodInfo *)0x0);
  (this->fields)._IsInVehicle_k__BackingField = 0;
  MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)this,(MethodInfo *)0x0);
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
    if (((pAVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth) ||
       ((pAVar2->klass->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
              (pAVar2,isFriendly,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.avatar;
    if (pAVar1 == (Avatar *)0x0) goto code_?;
    pAVar2 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler;
    if (pAVar2 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    if (((TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth <=
         (pAVar2->klass->_1).typeHierarchyDepth) &&
       ((pAVar2->klass->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                (pAVar2,1,(MethodInfo *)0x0);
      pAVar1 = (this->fields)._.avatar;
      if ((pAVar1 != (Avatar *)0x0) &&
         (pAVar3 = (pAVar1->fields).avatarUIHandler, pAVar3 != (AvatarUIHandler *)0x0)) {
        (*(pAVar3->klass->vtable).SetShouldShowUI.methodPtr)();
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
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    ppIVar2 = &TypeInfo__IGUICrossHair;
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__IPlayModeUI,ppIVar2,uVar1);
    cRam_? = '\x01';
  }
  this_02 = (MVPlayer *)0x0;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    bVar4 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this_00,(int32_t)lineOfFire.m_Direction.z,(MVPlayer **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if (this_02 != (MVPlayer *)0x0) {
      bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        (this_02,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return;
      }
      bVar4 = MVAvatar::MVAvatar_IsInMode
                        ((MVAvatar *)this,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return;
      }
      pAVar5 = (this->fields)._.avatar;
      if ((pAVar5 != (Avatar *)0x0) &&
         (pBVar6 = (pAVar5->fields).modifierEffectCount, pBVar6 != (Byte__Array *)0x0)) {
        if (pBVar6->max_length < 0xb) goto code_?;
        if (pBVar6->vector[10] != 0) {
          return;
        }
        pAVar5 = (this->fields)._.avatar;
        if ((pAVar5 != (Avatar *)0x0) &&
           (pAVar7 = (pAVar5->fields).bulletImpactVisualizer,
           pAVar7 != (AvatarBulletImpactVisualizer *)0x0)) {
          voxelHit.point.x = lineOfFire.m_Direction.y;
          (*(pAVar7->klass->vtable).VisualizeBulletImpact_1.methodPtr)
                    (pAVar7,lineOfFire.m_Direction.x,voxelHit.point.x,lineOfFire.m_Direction.z,
                     shooterActorNumber,(pAVar7->klass->vtable).VisualizeBulletImpact_1.method,
                     voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,voxelHit._28_4_,
                     voxelHit.face,voxelHit._36_4_,voxelHit.woId,voxelHit.cube,voxelHit.distance,
                     voxelHit.collider,voxelHit.transform,voxelHit._60_8_);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
             pMVar8 != (MVLocalPlayer *)0x0)) {
            if (lineOfFire.m_Direction.z != (float)(pMVar8->fields)._._ActorNr_k__BackingField) {
              return;
            }
            this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_01 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_PlayPlingSound(this_01,(MethodInfo *)0x0);
              iVar9 = func_?();
              if ((iVar9 != 0) && (iVar9 = func_?(), iVar9 != 0)) {
                func_?();
                return;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <InitializeShield>b__19_0(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote__InitializeShield_b__19_0
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
    VStack_3.x = (float)&UNK_?;
    func_?();
    shield = extraout_ECX;
    VStack_3.x = (float)extraout_EDX;
  }
  else {
    pAVar4 = (pAVar2->fields).avatarUIHandler;
    unaff_ESI = pAVar1;
    if (pAVar4 == (AvatarUIHandler *)0x0) goto code_?;
    if (((pAVar4->klass->_1).typeHierarchyDepth <
         (TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth) ||
       ((pAVar4->klass->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    pMVar5 = pAVar4[2].fields.worldObject;
    if ((pMVar5 == (MVWorldObjectClient *)0x0) ||
       (this_00 = (Transform *)(pMVar5->fields)._.groupId, this_00 == (Transform *)0x0))
    goto code_?;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_3,this_00,(MethodInfo *)0x0);
    pMVar7 = (this->fields)._.shield;
    fStack_8 = pVVar6->x;
    if (pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    VStack_3.x = (float)(pMVar7->klass->vtable).get_Value.method;
    fVar9 = (float10)(*(pMVar7->klass->vtable).get_Value.methodPtr)(pMVar7);
    MVAvatar::MVAvatar_TrySpawningHealParticles
              ((MVAvatar *)this,fStack_8 * _UNK_?,(float)fVar9,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._.avatar;
    if (pAVar2 == (Avatar *)0x0) goto code_?;
    pAVar4 = (pAVar2->fields).avatarUIHandler;
    unaff_ESI = TypeInfo__AvatarUIHandlerRemote;
    if (pAVar4 == (AvatarUIHandler *)0x0) goto code_?;
    if (((pAVar4->klass->_1).typeHierarchyDepth <
         (TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth) ||
       ((pAVar4->klass->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) goto code_?;
    unaff_ESI = (AvatarUIHandlerRemote__Class *)pAVar4[2].fields.worldObject;
    if (unaff_ESI == (AvatarUIHandlerRemote__Class *)0x0) goto code_?;
    if (shield == (Object *)0x0) goto code_?;
    VStack_3.x = (float)TypeInfo__System__Single;
    if ((shield->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      VStack_3.x = (float)shield;
      p_Var7 = (_union_86 *)func_?();
      (unaff_ESI->_0).byval_arg.data = *p_Var7;
      (unaff_ESI->_0).this_arg.data.dummy = (void *)0x0;
      return;
    }
  }
  func_?(shield);
  pAVar4 = extraout_EDX_00;
code_?:
  VStack_3.x = (float)unaff_ESI;
  func_?(pAVar4);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  this_00 = (DynamicCullingHandler *)func_?(TypeInfo__DynamicCullingHandler);
  if (this_00 != (DynamicCullingHandler *)0x0) {
    DynamicCullingHandler::DynamicCullingHandler__ctor(this_00,3.5,(MethodInfo *)0x0);
    (this->fields).cullingHandler = this_00;
    func_?(&(this->fields).cullingHandler,this_00);
    (this->fields).impulseMagnitudeFactor = 0.6;
    (this->fields).velocityMinMagnitude = 1500.0;
    (this->fields).velocityMaxMagnitude = 5000.0;
    (this->fields).minVelocity = 700.0;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).prevHitTime = fVar1 - _UNK_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      MVAvatar::MVAvatar__ctor
                ((MVAvatar *)this,data,(pPVar2->fields).mvRemoteAvatarPrefab,worldObjects,
                 (MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
      pMVar3 = (this->fields)._.Animation;
      (this->fields)._IsInVehicle_k__BackingField = 0;
      if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
        pMVar4 = (pMVar3->fields).OnChange;
        this_01 = (UnityAction_1_System_Object_ *)func_?();
        if (this_01 != (UnityAction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_01,(Object *)this,(this->klass->vtable).OnAnimationChange.method,
                     (MethodInfo *)0x0);
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pMVar4,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (pMVar3->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            pMStack5 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
            func_?();
            return;
          }
          pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar6 = pMVar4;
          }
          pMStack5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
          if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (pMVar3->fields).OnChange = pMVar6;
            pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar6 = pMVar4;
            }
            pMStack5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
            if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              pMStack5 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)pMVar6;
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pMStack5 = extraout_EDX;
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
  if (_UNK_? <= fVar2 - (this->fields).prevHitTime) {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e == (TriggerEventArgs *)0x0) || (this_02 == (MVWorldObjectClientManager *)0x0)) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if ((pMVar4 != (MVWorldObject *)0x0) &&
       (((TypeInfo__MVVehicleBase->_1).typeHierarchyDepth <= (pMVar4->klass->_1).typeHierarchyDepth
        && ((MVVehicleBase__Class *)
            (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1]
            == TypeInfo__MVVehicleBase)))) {
      this_00 = pMVar4[1].fields.inputLinkRefs;
      if (this_00 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    ((GameObject *)this_00,
                     MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        if (x == (Object_1 *)0x0) goto code_?;
        puVar6 = (undefined8 *)(*(code *)x->klass[1]._0.byval_arg.data)();
        fVar2 = (float)*puVar6;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar2 = fVar2 / fVar7;
        fVar8 = (float10)func_?();
        if ((this->fields).minVelocity <= (float)fVar8) {
          puVar9 = &stack0xffffffec;
          fVar8 = (float10)func_?();
          pMVar10 = (MVAvatarRemote *)(this->fields).velocityMinMagnitude;
          pMVar11 = (MVAvatarRemote *)(float)fVar8;
          if (((float)pMVar10 <= (float)pMVar11) &&
             (pMVar12 = (MVAvatarRemote *)(this->fields).velocityMaxMagnitude, pMVar10 = pMVar11,
             (float)pMVar12 < (float)pMVar11)) {
            pMVar10 = pMVar12;
          }
          this = pMVar10;
          fVar7 = (pMVar1->fields).impulseMagnitudeFactor;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
          fVar13 = 1.0;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
          fVar7 = (float)this * fVar7;
          fVar2 = fVar2 * fVar7;
          fVar13 = fVar7 * fVar13;
          fVar7 = (float)puVar9 * fVar7;
          this_01 = (pMVar1->fields)._._._.gameObject;
          if (this_01 == (GameObject *)0x0) goto code_?;
          this_03 = (InteractionDataHandlerBase *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (this_01,
                               InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                              );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            impulse.y = fVar13;
            impulse.x = fVar2;
            impulse.z = fVar7;
            pIVar14 = ImpulseHitPackage::ImpulseHitPackage_Create
                               ((InteractionData *)&stack0xffffffd8,impulse,(MethodInfo *)0x0);
            if (this_03 == (InteractionDataHandlerBase *)0x0) goto code_?;
            InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                      (this_03,*pIVar14,0,(MethodInfo *)0x0);
            fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
            (pMVar1->fields).prevHitTime = fVar2;
          }
        }
      }
    }
  }
  return;
}

