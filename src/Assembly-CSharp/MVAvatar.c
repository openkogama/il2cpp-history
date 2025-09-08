
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_AddChild
               (MVAvatar *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBody);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_AddChild((MVGroup *)this,child,(MethodInfo *)0x0);
  if ((this->fields).body != (MVBody *)0x0) {
    MVBody::MVBody_Detach((this->fields).body,(MethodInfo *)0x0);
  }
  if (child != (MVWorldObjectClient *)0x0) {
    if (((child->klass->_1).naturalAligment < (TypeInfo__MVBody->_1).naturalAligment) ||
       ((MVBody__Class *)
        (child->klass->_1).typeHierarchy[(TypeInfo__MVBody->_1).naturalAligment - 1] !=
        TypeInfo__MVBody)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    pMVar2 = (MVBody *)0x0;
    if (bVar1) {
      pMVar2 = (MVBody *)child;
    }
    if (pMVar2 != (MVBody *)0x0) {
      (this->fields).body = pMVar2;
      func_?();
    }
  }
  return;
}


/* Void AttachBody(MVBody) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_AttachBody
               (MVAvatar *this,MVBody *newBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_newBody____null);
    func_?(&StringLiteral_Created_avatar_fader);
    cRam_? = '\x01';
  }
  if ((this->fields).body != (MVBody *)0x0) {
    MVBody::MVBody_Detach((this->fields).body,(MethodInfo *)0x0);
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
    MVBody::MVBody_Attach(newBody,this,(this->fields).isLocal,(MethodInfo *)0x0);
    (this->fields).body = newBody;
    func_?(&(this->fields).body,newBody);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_newBody____null,(MethodInfo *)0x0);
  return;
}


/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_AvatarStateChangedHandler
               (MVAvatar *this,Object *a,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffd8;
  puVar5 = &stack0xffffffd8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__SpawnRoleModeType);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (a != (Object *)0x0) {
    if ((a->klass->_0).element_class == (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class)
    {
      pbVar6 = (byte *)func_?(a);
      if ((*pbVar6 & 4) == 0) {
        uStack_1 = 0;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkGame *)0x0) {
          this_00 = (pMVar7->fields).playerContainer;
          if (this_00 != (MVPlayerContainer *)0x0) {
            pMVar8 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                               (this_00,(this->fields)._._._.ownerActorNr,(MethodInfo *)0x0);
            if ((pMVar8 == (MVPlayer *)0x0) || ((pMVar8->fields).playerState == 3)) {
code_?:
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pAVar9 = (this->fields).avatar;
            if ((pAVar9 != (Avatar *)0x0) &&
               (pCVar10 = (pAVar9->fields).avatarCollider, pCVar10 != (Collider *)0x0)) {
              UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                        (pCVar10,1,(MethodInfo *)0x0);
              pAVar9 = (this->fields).avatar;
              if ((pAVar9 != (Avatar *)0x0) &&
                 (pIVar11 = (pAVar9->fields).interactionDataHandler,
                 pIVar11 != (InteractionDataHandlerBase *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pIVar11,1,(MethodInfo *)0x0);
                pAVar9 = (this->fields).avatar;
                if ((pAVar9 != (Avatar *)0x0) &&
                   (pAVar12 = (pAVar9->fields).avatarUIHandler, pAVar12 != (AvatarUIHandler *)0x0)) {
                  (*(code *)(pAVar12->klass->vtable).SetShouldShowUI.method)(pAVar12);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        pAVar9 = (this->fields).avatar;
        if ((pAVar9 != (Avatar *)0x0) &&
           (pCVar10 = (pAVar9->fields).avatarCollider, pCVar10 != (Collider *)0x0)) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar10,0,(MethodInfo *)0x0);
          pAVar9 = (this->fields).avatar;
          if ((pAVar9 != (Avatar *)0x0) &&
             (pIVar11 = (pAVar9->fields).interactionDataHandler,
             pIVar11 != (InteractionDataHandlerBase *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar11,0,(MethodInfo *)0x0);
            pAVar9 = (this->fields).avatar;
            if ((pAVar9 != (Avatar *)0x0) &&
               (this_01 = (pAVar9->fields).chatBubbleAnchor, this_01 != (ChatAnchor *)0x0)) {
              ChatAnchor::ChatAnchor_HideChatBubble(this_01,(MethodInfo *)0x0);
              pAVar9 = (this->fields).avatar;
              if ((pAVar9 != (Avatar *)0x0) &&
                 (pAVar12 = (pAVar9->fields).avatarUIHandler, pAVar12 != (AvatarUIHandler *)0x0)) {
                (*(code *)(pAVar12->klass->vtable).SetShouldShowUI.method)
                          (pAVar12,0,(pAVar12->klass->vtable).OnDestroy.methodPtr);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
    else {
      func_?(a,TypeInfo__MV__Common__SpawnRoleModeType);
    }
  }
  uStack_13 = func_?();
  func_?(&uStack_13,&UNK_?);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_Destroy(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).avatarUIHandler, this_00 != (AvatarUIHandler *)0x0)) {
    System.Xml.dll::System::Xml::XmlNodeList::XmlNodeList_System_IDisposable_Dispose
              ((XmlNodeList *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_RemoveLateUpdateObject
              ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GameObject GetHealRayAttachmentObject() */

GameObject *
Assembly-CSharp.dll::MVAvatar::MVAvatar_GetHealRayAttachmentObject
          (MVAvatar *this,MethodInfo *method)

{
  return (this->fields).healRayAttachmentObject;
}


/* Void HandleLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_HandleLeaveVehicle(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                   );
    func_?(&
                    VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                   );
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Could_not_find_AvatarPickupOwner);
    func_?(&StringLiteral_Did_not_find_seatmanager__Cannot);
    func_?(&StringLiteral_Trying_to_leave_vehicle_but_Grou);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.group;
  if (pMVar1 != (MVGroup *)0x0) {
    pMVar2 = pMVar1->klass;
    if (((TypeInfo__MVVehicleBase->_1).naturalAligment <= (pMVar2->_1).naturalAligment) &&
       ((MVVehicleBase__Class *)
        (pMVar2->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] ==
        TypeInfo__MVVehicleBase)) {
      pGVar3 = (((this->fields)._._.group)->fields)._.gameObject;
      if (pGVar3 != (GameObject *)0x0) {
        this_00 = (VehicleSeatManager *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (pGVar3,
                             VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                            );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Did_not_find_seatmanager__Cannot,(MethodInfo *)0x0);
          return;
        }
        if (this_00 != (VehicleSeatManager *)0x0) {
          VehicleSeatManager::VehicleSeatManager_DetachFromSeat(this_00,this,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._._.gameObject;
          if (pGVar3 != (GameObject *)0x0) {
            x = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar3,
                           AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                          );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Could_not_find_AvatarPickupOwner,(MethodInfo *)0x0)
              ;
              return;
            }
            if (x != (Object_1 *)0x0) {
              x[7].monitor = (MonitorData *)0x0;
              func_?(&x[7].monitor,0);
              return;
            }
          }
        }
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  pSVar7 = StringLiteral_Trying_to_leave_vehicle_but_Grou;
  if (pTVar6 == (Type *)0x0) {
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)
           (*(code *)(pTVar6->klass->vtable).ToString.method)
                     (pTVar6,(pTVar6->klass->vtable).GetCustomAttributes.methodPtr);
  }
  pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar7,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar7,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_Initialize(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarPickupOwner>__
                   );
    func_?(&MethodInfo__MVAvatar___Initialize_b__54_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  if ((this->fields)._._._.ownerActorNr == -1) {
    return;
  }
  pMVar1 = (this->fields).body;
  this_04 = this;
  if (pMVar1 == (MVBody *)0x0) {
code_?:
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
code_?:
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?(pMVar2,this_04);
    pMVar3 = extraout_ECX;
  }
  else {
    MVBody::MVBody_Attach(pMVar1,this,(this->fields).isLocal,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._._.gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pAVar5 = (AvatarPickupOwner *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar4,
                        AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarPickupOwner>__
                       );
    (this->fields).avatarPickupOwner = pAVar5;
    func_?(&(this->fields).avatarPickupOwner,pAVar5);
    pAVar5 = (this->fields).avatarPickupOwner;
    if (pAVar5 == (AvatarPickupOwner *)0x0) goto code_?;
    (pAVar5->fields)._._IsLocal_k__BackingField = (this->fields).isLocal;
    pAVar5 = (this->fields).avatarPickupOwner;
    if (pAVar5 == (AvatarPickupOwner *)0x0) goto code_?;
    AvatarPickupOwner::AvatarPickupOwner_Init
              (pAVar5,(this->fields).CurrentItem,(this->fields).IsFiring,this,
               (this->fields).skillDataManager,(MethodInfo *)0x0);
    pAVar6 = (this->fields).avatar;
    if (pAVar6 == (Avatar *)0x0) goto code_?;
    (*(code *)(pAVar6->klass->vtable).Initialize.method)
              (pAVar6,this,(this->fields).isLocal,pAVar6->klass[1]._0.image);
    pAVar6 = (this->fields).avatar;
    if ((pAVar6 == (Avatar *)0x0) ||
       (this_00 = (pAVar6->fields).interactionDataHandler,
       this_00 == (InteractionDataHandlerBase *)0x0)) goto code_?;
    MVComponent::MVComponent_FindWorldObjectParent((MVComponent *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&MethodInfo__MVAvatar___InitializeModifiers_b__60_0_System__Object_);
      func_?();
      cRam_? = '\x01';
    }
    pMVar7 = (this->fields).Modifiers;
    if (pMVar7 == (MVRuntimeDataVariable *)0x0) goto code_?;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)(pMVar7->fields).OnChange;
    pVVar8 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
             func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (pVVar8,(Object *)this,
               MethodInfo__MVAvatar___InitializeModifiers_b__60_0_System__Object_,(MethodInfo *)0x0)
    ;
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)unaff_EDI,(Delegate *)pVVar8,(MethodInfo *)0x0);
    pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar7->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?(&(pMVar7->fields).OnChange,pMVar9);
      pMVar7 = (this->fields).Modifiers;
      this_01 = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).avatar;
      this_04 = this;
      unaff_EDI = this_01;
      if ((pMVar7 != (MVRuntimeDataVariable *)0x0) &&
         (newModifiers = (Dictionary_2_System_Object_System_Object_ *)
                         MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                                   (pMVar7,(MethodInfo *)0x0),
         pDVar10 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
         , this_01 != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
        if ((newModifiers != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
           ((unaff_EDI = 
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
            (newModifiers->klass->_1).naturalAligment <
            (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment ||
            ((Dictionary_2_System_Object_System_Object___Class *)
             (newModifiers->klass->_1).typeHierarchy
             [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
        goto code_?;
        Avatar::Avatar_UpdateModifiers((Avatar *)this_01,newModifiers,(MethodInfo *)0x0);
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pMVar1 = (this->fields).body;
        (this->fields).healParticleSpawnTime = fVar11;
        unaff_EDI = pDVar10;
        if ((pMVar1 != (MVBody *)0x0) &&
           ((this_02 = (MethodCall *)MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            this_02 != (MethodCall *)0x0 &&
            (this_03 = (Component *)
                       mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::
                       MethodCall_GetArg(this_02,0,(MethodInfo *)0x0), this_03 != (Component *)0x0))
           )) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_03,(MethodInfo *)0x0);
          (this->fields).healRayAttachmentObject = pGVar4;
          func_?(&(this->fields).healRayAttachmentObject,pGVar4);
          pMVar7 = (this->fields).SpawnRoleModeTypes;
          if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
            unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                        (pMVar7->fields).OnChange;
            this_04 = (MVAvatar *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
            ;
            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
            VideoCapture+OnVideoCaptureResourceCreatedCallback::
            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                      ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)this_04,(Object *)this,
                       (this->klass->vtable).AttachBody.methodPtr,(MethodInfo *)0x0);
            pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)unaff_EDI,(Delegate *)this_04,(MethodInfo *)0x0);
            pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (pMVar7->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            }
            else {
              if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar9 = pMVar2;
              }
              pMVar3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
              if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
              (pMVar7->fields).OnChange = pMVar9;
              pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar9 = pMVar2;
              }
              this_04 = (MVAvatar *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
              if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
            }
            func_?(&(pMVar7->fields).OnChange,pMVar9);
            pMVar7 = (this->fields).Animation;
            if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
              unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                          (pMVar7->fields).OnChange;
              this_04 = (MVAvatar *)
                        func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)this_04,
                         (Object *)this,(this->klass->vtable).OnHealthChange.methodPtr,
                         (MethodInfo *)0x0);
              pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)unaff_EDI,(Delegate *)this_04,(MethodInfo *)0x0);
              pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (pMVar7->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              }
              else {
                if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pMVar9 = pMVar2;
                }
                pMVar3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
                (pMVar7->fields).OnChange = pMVar9;
                pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pMVar9 = pMVar2;
                }
                this_04 = (MVAvatar *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
              }
              func_?(&(pMVar7->fields).OnChange,pMVar9);
              pMVar12 = (this->fields).Health;
              if (pMVar12 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                            (pMVar12->fields)._.OnChange;
                this_04 = (MVAvatar *)
                          func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                VideoCapture+OnVideoCaptureResourceCreatedCallback::
                VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                          ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)this_04,
                           (Object *)this,(this->klass->vtable).OnShieldChange.methodPtr,
                           (MethodInfo *)0x0);
                pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)unaff_EDI,(Delegate *)this_04,(MethodInfo *)0x0);
                pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  (pMVar12->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                }
                else {
                  if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                    pMVar9 = pMVar2;
                  }
                  pMVar3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                  if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                  goto code_?;
                  (pMVar12->fields)._.OnChange = pMVar9;
                  pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                  if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                    pMVar9 = pMVar2;
                  }
                  this_04 = (MVAvatar *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                  if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                  goto code_?;
                }
                func_?(&(pMVar12->fields)._.OnChange,pMVar9);
                pMVar13 = (this->fields).shield;
                if (pMVar13 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                  unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                              (pMVar13->fields)._._.OnChange;
                  this_04 = (MVAvatar *)
                            func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                  VideoCapture+OnVideoCaptureResourceCreatedCallback::
                  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)this_04,
                             (Object *)this,(this->klass->vtable).OnCurrentPickupChange.methodPtr,
                             (MethodInfo *)0x0);
                  pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)unaff_EDI,(Delegate *)this_04,(MethodInfo *)0x0);
                  pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                  if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                    (pMVar13->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                  }
                  else {
                    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pMVar9 = pMVar2;
                    }
                    pMVar3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                    if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                    goto code_?;
                    (pMVar13->fields)._._.OnChange = pMVar9;
                    pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pMVar9 = pMVar2;
                    }
                    this_04 = (MVAvatar *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                    if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                    goto code_?;
                  }
                  func_?(&(pMVar13->fields)._._.OnChange,pMVar9);
                  pMVar7 = (this->fields).CurrentItem;
                  if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
                    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                                (pMVar7->fields).OnChange;
                    this_04 = (MVAvatar *)
                              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                    VideoCapture+OnVideoCaptureResourceCreatedCallback::
                    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)this_04,
                               (Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
                    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)unaff_EDI,(Delegate *)this_04,(MethodInfo *)0x0)
                    ;
                    pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                    if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                      (pMVar7->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                    }
                    else {
                      if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                        pMVar9 = pMVar2;
                      }
                      pMVar3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                      if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                      goto code_?;
                      (pMVar7->fields).OnChange = pMVar9;
                      pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                      if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                        pMVar9 = pMVar2;
                      }
                      this_04 = (MVAvatar *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                      if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                      goto code_?;
                    }
                    func_?(&(pMVar7->fields).OnChange,pMVar9);
                    pMVar13 = (this->fields).Size;
                    if (pMVar13 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                      unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                                  (pMVar13->fields)._._.OnChange;
                      pVVar8 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                               func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                      VideoCapture+OnVideoCaptureResourceCreatedCallback::
                      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                                (pVVar8,(Object *)this,
                                 MethodInfo__MVAvatar___Initialize_b__54_0_System__Object_,
                                 (MethodInfo *)0x0);
                      pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
                               mscorlib.dll::System::Delegate::Delegate_Combine
                                         ((Delegate *)unaff_EDI,(Delegate *)pVVar8,(MethodInfo *)0x0
                                         );
                      pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                      if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                        (pMVar13->fields)._._.OnChange =
                             (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                      }
                      else {
                        if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pMVar9 = pMVar2;
                        }
                        pMVar3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                        if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                        goto code_?;
                        (pMVar13->fields)._._.OnChange = pMVar9;
                        pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                        if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pMVar9 = pMVar2;
                        }
                        this_04 = (MVAvatar *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                        if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0)
                        goto code_?;
                      }
                      func_?(&(pMVar13->fields)._._.OnChange,pMVar9);
                      pMVar13 = (this->fields).Size;
                      this_04 = this;
                      if (pMVar13 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                        (*(code *)(pMVar13->klass->vtable).get_Value.method)
                                  (pMVar13,(pMVar13->klass->vtable).set_Value.methodPtr);
                        pMVar13 = (this->fields).Size;
                        if (pMVar13 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                          fVar14 = (float10)(*(code *)(pMVar13->klass->vtable).get_Value.method)
                                                      (pMVar13,(pMVar13->klass->vtable).set_Value.
                                                               methodPtr);
                          pMVar13 = (this->fields).Size;
                          if (pMVar13 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                            fVar15 = (float10)(*(code *)(pMVar13->klass->vtable).get_Value.method)
                                                        (pMVar13,(pMVar13->klass->vtable).set_Value.
                                                                 methodPtr,0,0);
                            (*(code *)(this->klass->vtable).set_Scale.method)
                                      (this,CONCAT44((float)fVar14,pMVar13),(float)fVar15,
                                       (this->klass->vtable).get_WorldPosition.methodPtr);
                            if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__UpdateController);
                            }
                            UpdateController::UpdateController_AddLateUpdateObject
                                      ((IUpdatecontrollerSubscriberLateUpdate *)this,
                                       UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
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
    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar9 = pMVar2;
    }
    pMVar3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar9 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar7->fields).OnChange = pMVar9;
      pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar9 = pMVar2;
      }
      this_04 = (MVAvatar *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar9 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?(pMVar2,pMVar3);
  newModifiers = extraout_EDX;
code_?:
  func_?(newModifiers,unaff_EDI);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitializeModifiers() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_InitializeModifiers(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&MethodInfo__MVAvatar___InitializeModifiers_b__60_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).Modifiers;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
code_?:
    func_?();
    newModifiers = extraout_EDX;
  }
  else {
    pMVar2 = (pMVar1->fields).OnChange;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)unaff_ESI,(Object *)this,
               MethodInfo__MVAvatar___InitializeModifiers_b__60_0_System__Object_,(MethodInfo *)0x0)
    ;
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar2,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
    if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar1->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      (pMVar1->fields).OnChange = pMVar3;
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
    func_?();
    this_00 = (Avatar *)pMVar1[6].fields.sendValue;
    pMVar2 = pMVar1[6].fields.OnChange;
    if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    newModifiers = (Dictionary_2_System_Object_System_Object_ *)
                   MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                             ((MVRuntimeDataVariable *)pMVar2,(MethodInfo *)0x0);
    if (this_00 == (Avatar *)0x0) goto code_?;
    if (newModifiers == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Avatar::Avatar_UpdateModifiers
                (this_00,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      return;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= (newModifiers->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (newModifiers->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      Avatar::Avatar_UpdateModifiers(this_00,newModifiers,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(newModifiers,unaff_ESI);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsInMode(SpawnRoleModeType) */

bool Assembly-CSharp.dll::MVAvatar::MVAvatar_IsInMode
               (MVAvatar *this,SpawnRoleModeType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).SpawnRoleModeTypes;
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        pSVar2 = (SpawnRoleModeType__Enum *)func_?();
        return 0 < (int)(*pSVar2 & t);
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnAnimationChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnAnimationChange
               (MVAvatar *this,Object *newAnimationData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if (((pMVar1 == (MVBody *)0x0) ||
      (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 == (MVBodyObject *)0x0)) ||
     ((pMVar2->fields).boneAnimation == (BoneAnimation *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_timeStamp);
    func_?(&StringLiteral_state);
    cRam_? = '\x01';
  }
  if (newAnimationData == (Object *)0x0) goto code_?;
  if (((newAnimationData->klass->_1).naturalAligment <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (newAnimationData->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     newAnimationData,(Object *)StringLiteral_state,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  this_00 = StringLiteral_timeStamp;
  TVar4.m_Index = 0;
  if (TVar3.m_Index == 0) {
code_?:
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       newAnimationData,(Object *)StringLiteral_timeStamp,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) {
code_?:
      uVar5 = func_?(&stack0xfffffff0);
      func_?(uVar5);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (this_00[1].klass != (String__Class *)0x0) {
        (*(code *)((this_00[1].klass)->_0).namespaze)();
      }
      method_00 = TypeInfo__AnimationData;
      if ((char)this_00[1].fields._firstChar != '\0') {
        pOVar7 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        pOVar7[1].klass = (Object__Class *)TVar4.m_Index;
        func_?();
        pOVar7[1].monitor = (MonitorData *)&UNK_?;
        *(Object **)&this_00[2].fields._firstChar = pOVar7;
        func_?();
        BoneAnimation::BoneAnimation_ComputeAnimation((BoneAnimation *)this_00,(MethodInfo *)0x0);
        return;
      }
      this_01 = (Queue_1_System_Object_ *)this_00[2].monitor;
      pOVar7 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      pOVar7[1].klass = (Object__Class *)TVar4.m_Index;
      func_?();
      pOVar7[1].monitor = (MonitorData *)&UNK_?;
      if (this_01 != (Queue_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  (this_01,pOVar7,
                   MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                  );
        BoneAnimation::BoneAnimation_ComputeRemoteAnimation
                  ((BoneAnimation *)this_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    func_?();
  }
  else {
    if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
      TVar4 = TVar3;
    }
    if ((Object__Class *)TVar4.m_Index != (Object__Class *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnEnterVehicle(MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).waterSplashComponent, this_00 != (WaterSplashComponent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnHealthChange
               (MVAvatar *this,Object *newHealthData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if (((pMVar1 != (MVBody *)0x0) &&
      (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) &&
     (this_00 = (pMVar2->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (newHealthData != (Object *)0x0) {
      if ((newHealthData->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pfVar4 = (float *)func_?();
      fVar5 = *pfVar4;
      if (fVar5 < (this_00->fields).previousBlinkHealth) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.5,(MethodInfo *)0x0);
      }
      (this_00->fields).previousBlinkHealth = fVar5;
      return;
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnLeaveVehicle(MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (this_00 = (pAVar1->fields).waterSplashComponent, this_00 != (WaterSplashComponent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnShieldChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnShieldChange
               (MVAvatar *this,Object *newShieldData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if (((pMVar1 != (MVBody *)0x0) &&
      (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) &&
     (this_00 = (pMVar2->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (newShieldData != (Object *)0x0) {
      if ((newShieldData->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pfVar4 = (float *)func_?();
      fVar5 = *pfVar4;
      if (fVar5 < (this_00->fields).previousBlinkShield) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_ShieldDamage,0.5,(MethodInfo *)0x0);
      }
      (this_00->fields).previousBlinkShield = fVar5;
      return;
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnStateChangeToHidden() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnStateChangeToHidden
               (MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (pCVar2 = (pAVar1->fields).chatBubbleAnchor, pCVar2 != (ChatAnchor *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pCVar3 = (pCVar2->fields).AttachedBubble;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pCVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pCVar3 = (pCVar2->fields).AttachedBubble;
    if (pCVar3 != (ChatBubble *)0x0) {
      (pCVar3->fields).timeUntilFade = 0.0;
      (pCVar3->fields).currentFade = 0.0;
      this_00 = (pCVar3->fields).CanvasGroup;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTeam() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_SetTeam(MVAvatar *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    func_?(&TypeInfo__UnityEngine__Debug);
    in_stack_4 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&StringLiteral_Reimplement_with_callback_functi);
    cRam_? = '\x01';
  }
  pAVar5 = (this->fields).avatar;
  if (pAVar5 != (Avatar *)0x0) {
    if ((pAVar5->fields).isLocal == 0) {
      pAVar5 = (this->fields).avatar;
      if (pAVar5 != (Avatar *)0x0) {
        pAVar6 = (AvatarUIHandlerRemote *)(pAVar5->fields).avatarUIHandler;
        if (pAVar6 != (AvatarUIHandlerRemote *)0x0) {
          if (((pAVar6->klass->_1).naturalAligment <
               (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment) ||
             ((pAVar6->klass->_1).typeHierarchy
              [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
            func_?(pAVar6,TypeInfo__AvatarUIHandlerRemote);
          }
          else {
            AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag(pAVar6,(MethodInfo *)0x0);
            pAVar5 = (this->fields).avatar;
            if (pAVar5 != (Avatar *)0x0) {
              pAVar6 = (AvatarUIHandlerRemote *)(pAVar5->fields).avatarUIHandler;
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar7 != (MVNetworkGame *)0x0) {
                pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
                if (pMVar8 != (MVLocalPlayer *)0x0) {
                  bVar9 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                    ((MVPlayer *)pMVar8,(MVWorldObjectClient *)this,
                                     (MethodInfo *)0x0);
                  if (pAVar6 != (AvatarUIHandlerRemote *)0x0) {
                    if (((TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment <=
                         (pAVar6->klass->_1).naturalAligment) &&
                       ((pAVar6->klass->_1).typeHierarchy
                        [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] ==
                        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
                      AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                                (pAVar6,bVar9,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = uStack_3;
                      return;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar7 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar7->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        this_01 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               (this_00,(MethodInfo *)0x0);
        if (this_01 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar10 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)&stack0xffffffd8,this_01,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                             );
          pOVar11 = pDVar10->_currentValue;
          uStack_1 = 1;
          while( true ) {
            bVar9 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffc8,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                              );
            if (bVar9 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffffc8,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,(MethodInfo *)in_stack_4);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            if (pOVar11 == (Object *)0x0) break;
            pOVar12 = pOVar11[6].klass;
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar7 == (MVNetworkGame *)0x0) break;
            in_stack_4 = (MethodInfo **)0x0;
            pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
            if (pMVar8 == (MVLocalPlayer *)0x0) break;
            if (pOVar12 != (Object__Class *)(pMVar8->fields)._._ActorNr_k__BackingField) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              in_stack_4 = (MethodInfo **)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_Reimplement_with_callback_functi,(MethodInfo *)0x0)
              ;
            }
          }
        }
      }
    }
  }
  uVar13 = func_?();
  func_?(uVar13);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void TransferChild(Int32) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_TransferChild
               (MVAvatar *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVBody);
    func_?(&StringLiteral_Transfer_child);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_TransferChild((MVGroup *)this,id,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Transfer_child,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,id,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVBody->_1).naturalAligment) ||
         ((MVBody__Class *)
          (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVBody->_1).naturalAligment - 1] !=
          TypeInfo__MVBody)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pMStack3 = (MVWorldObject *)0x0;
      if (bVar2) {
        pMStack3 = pMVar1;
      }
      if (pMStack3 != (MVWorldObject *)0x0) {
        pIStack4 = (this->klass->vtable).__unknown.methodPtr;
        (*(code *)(this->klass->vtable).AttachBody.method)();
      }
    }
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TrySpawningHealParticles(Single, Single) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_TrySpawningHealParticles
               (MVAvatar *this,float previousHealth,float currentHealth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((previousHealth < currentHealth) &&
     (_UNK_? < fVar1 - (this->fields).healParticleSpawnTime)) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).healParticleSpawnTime = fVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      original = (pPVar2->fields).healingParticles;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_02 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                          );
      this_00 = (this->fields)._._.gameObject;
      if ((this_00 != (GameObject *)0x0) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe0,pTVar3,(MethodInfo *)0x0);
        fVar1 = pVVar4->z;
        if (this_02 != (Component *)0x0) {
          puVar5 = &UNK_?;
          pCVar6 = this_02;
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_02,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            value.y = (float)pCVar6;
            value.x = (float)puVar5;
            value.z = fVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar3,value,(MethodInfo *)0x0);
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_02,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                        (pTVar3,(this->fields)._._.transform,(MethodInfo *)0x0);
              this_01 = (this->fields).avatar;
              if (this_01 != (Avatar *)0x0) {
                Avatar::Avatar_StartBlinking(this_01,BlinkType__Enum_Healing,1.5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}


/* Void UpdateControllerLateUpdate() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_UpdateControllerLateUpdate
               (MVAvatar *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarPickupOwner;
  pAVar1 = (this->fields).limbManager;
  if (this_00 != (AvatarPickupOwner *)0x0) {
    pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                       ((Vector3 *)&stack0xfffffff0,(MVPickupOwner *)this_00,(MethodInfo *)0x0);
    if (pAVar1 != (AvatarLimbManager *)0x0) {
      uVar3._0_4_ = pVVar2->x;
      uVar3._4_4_ = pVVar2->y;
      (*(code *)(pAVar1->klass->vtable).UpdateLimbRotations.method)(pAVar1,uVar3,pVVar2->z);
      this_01 = (this->fields).body;
      if (this_01 != (MVBody *)0x0) {
        MVBody::MVBody_UpdateBlinking(this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <InitializeModifiers>b__60_0(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__InitializeModifiers_b__60_0
               (MVAvatar *this,Object *modifiers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatar;
  if (this_00 == (Avatar *)0x0) {
    func_?();
    pDVar1 = extraout_EDX;
  }
  else {
    if (modifiers == (Object *)0x0) {
      Avatar::Avatar_UpdateModifiers
                (this_00,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= (modifiers->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (modifiers->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      Avatar::Avatar_UpdateModifiers
                (this_00,(Dictionary_2_System_Object_System_Object_ *)modifiers,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(modifiers,pDVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Initialize>b__54_0(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__Initialize_b__54_0
               (MVAvatar *this,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (val == (Object *)0x0) {
    func_?();
    val = extraout_ECX;
    pSVar1 = extraout_EDX;
  }
  else {
    pSVar1 = TypeInfo__System__Single;
    if ((val->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar2 = (float *)func_?(val);
      fVar3 = *pfVar2;
      value.y = fVar3;
      value.x = fVar3;
      value.z = fVar3;
      MVWorldObjectClient::MVWorldObjectClient_set_Scale
                ((MVWorldObjectClient *)this,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(val,pSVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVAvatar(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__ctor
               (MVAvatar *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *avatarPrefab,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Avatar_MethodInfo__UnityEngine__GameObject__GetComponent<Avatar>__);
    func_?(&TypeInfo__LimbRotationRuntimeData);
    func_?(&
                    MVRuntimeDataVariable<int>_MethodInfo__MVRuntimeDataVariables__New<int>_System__String__float__bool_
                   );
    func_?(&
                    MVRuntimeDataVariable<float>_MethodInfo__MVRuntimeDataVariables__New<float>_System__String__float__bool_
                   );
    func_?(&StringLiteral_modifiers);
    func_?(&StringLiteral_pointRotationPitch);
    func_?(&StringLiteral_headRotationYaw);
    func_?(&StringLiteral_headRotationPitch);
    func_?(&StringLiteral_size);
    func_?(&StringLiteral_maxHealth);
    func_?(&StringLiteral_isFiring);
    func_?(&StringLiteral_currentItem);
    func_?(&StringLiteral_emote);
    func_?(&StringLiteral_shield);
    func_?(&StringLiteral_pointRotationYaw);
    func_?(&StringLiteral_hasHandEquippableItem);
    func_?(&StringLiteral_health);
    func_?(&StringLiteral_spawnRoleModeType);
    func_?(&StringLiteral_Player);
    func_?(&StringLiteral_animation);
    cRam_? = '\x01';
  }
  pLVar1 = (LimbRotationRuntimeData *)func_?(TypeInfo__LimbRotationRuntimeData);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pLVar1,(MethodInfo *)0x0);
  (this->fields).LimbRotationRuntimeData = pLVar1;
  func_?(&(this->fields).LimbRotationRuntimeData,pLVar1);
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).characterControllerCenterOffset.x = (float)(int)(uVar2 << 0x20);
  (this->fields).characterControllerCenterOffset.y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).characterControllerCenterOffset.z = 0.0;
  MVGroup::MVGroup__ctor((MVGroup *)this,data,avatarPrefab,worldObjects,(MethodInfo *)0x0);
  iVar3 = (this->fields)._._._.ownerActorNr;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      iVar5 = (pMVar4->fields)._._ActorNr_k__BackingField;
      *(undefined4 *)&(this->fields)._._.interactionFlags = 0;
      *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
      (this->fields).isLocal = iVar3 == iVar5;
      pMVar6 = (this->fields)._._.runtimeDataVariables;
      (this->fields)._._._PlayInteractionType_k__BackingField = 1;
      if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
        pMVar7 = MVRuntimeDataVariables::MVRuntimeDataVariables_New_2
                           (pMVar6,StringLiteral_health,0.2,0,
                            MVRuntimeDataVariable<float>_MethodInfo__MVRuntimeDataVariables__New<float>_System__String__float__bool_
                           );
        (this->fields).Health = pMVar7;
        func_?();
        pMVar6 = (this->fields)._._.runtimeDataVariables;
        if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
          pMVar7 = MVRuntimeDataVariables::MVRuntimeDataVariables_New_2
                             (pMVar6,StringLiteral_maxHealth,0.0,1,
                              MVRuntimeDataVariable<int>_MethodInfo__MVRuntimeDataVariables__New<int>_System__String__float__bool_
                             );
          (this->fields).MaxHealth = (MVRuntimeDataVariable_1_System_Int32_ *)pMVar7;
          func_?();
          pMVar6 = (this->fields)._._.runtimeDataVariables;
          if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
            pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                                (pMVar6,StringLiteral_shield,0.2,0,0.0,100.0,(MethodInfo *)0x0);
            (this->fields).shield = pMVar8;
            func_?();
            pMVar6 = (this->fields)._._.runtimeDataVariables;
            if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
              pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                  (pMVar6,StringLiteral_isFiring,0.0,0,(MethodInfo *)0x0);
              (this->fields).IsFiring = pMVar9;
              func_?();
              pMVar6 = (this->fields)._._.runtimeDataVariables;
              if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                    (pMVar6,StringLiteral_modifiers,1.0,0,(MethodInfo *)0x0);
                (this->fields).Modifiers = pMVar9;
                func_?();
                pMVar6 = (this->fields)._._.runtimeDataVariables;
                if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                  pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                      (pMVar6,StringLiteral_currentItem,0.0,1,(MethodInfo *)0x0);
                  (this->fields).CurrentItem = pMVar9;
                  func_?();
                  pMVar6 = (this->fields)._._.runtimeDataVariables;
                  if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                    pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                        (pMVar6,StringLiteral_spawnRoleModeType,0.0,1,
                                         (MethodInfo *)0x0);
                    (this->fields).SpawnRoleModeTypes = pMVar9;
                    func_?();
                    pMVar6 = (this->fields)._._.runtimeDataVariables;
                    if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                      pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                          (pMVar6,StringLiteral_animation,0.0,0,(MethodInfo *)0x0);
                      (this->fields).Animation = pMVar9;
                      func_?();
                      pMVar6 = (this->fields)._._.runtimeDataVariables;
                      pLVar1 = (this->fields).LimbRotationRuntimeData;
                      if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                        pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                            (pMVar6,StringLiteral_headRotationYaw,0.8,0,
                                             (MethodInfo *)0x0);
                        if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                          (pLVar1->fields).HeadRotationYaw = pMVar9;
                          func_?();
                          pMVar6 = (this->fields)._._.runtimeDataVariables;
                          pLVar1 = (this->fields).LimbRotationRuntimeData;
                          if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                            pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                (pMVar6,StringLiteral_headRotationPitch,0.8,0,
                                                 (MethodInfo *)0x0);
                            if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                              (pLVar1->fields).HeadRotationPitch = pMVar9;
                              func_?();
                              pMVar6 = (this->fields)._._.runtimeDataVariables;
                              pLVar1 = (this->fields).LimbRotationRuntimeData;
                              if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                                pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                    (pMVar6,StringLiteral_pointRotationYaw,0.8,0,
                                                     (MethodInfo *)0x0);
                                if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                                  (pLVar1->fields).PointRotationYaw = pMVar9;
                                  func_?();
                                  pMVar6 = (this->fields)._._.runtimeDataVariables;
                                  pLVar1 = (this->fields).LimbRotationRuntimeData;
                                  if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                                    pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                        (pMVar6,StringLiteral_pointRotationPitch,0.8
                                                         ,0,(MethodInfo *)0x0);
                                    if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                                      (pLVar1->fields).PointRotationPitch = pMVar9;
                                      func_?();
                                      pMVar6 = (this->fields)._._.runtimeDataVariables;
                                      pLVar1 = (this->fields).LimbRotationRuntimeData;
                                      if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                                        pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                            (pMVar6,
                                                  StringLiteral_hasHandEquippableItem,0.0,0,
                                                  (MethodInfo *)0x0);
                                        if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                                          (pLVar1->fields).HasHandEquippableItem = pMVar9;
                                          func_?();
                                          pMVar6 = (this->fields)._._.runtimeDataVariables;
                                          pLVar1 = (this->fields).LimbRotationRuntimeData;
                                          if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                                            pMVar9 = MVRuntimeDataVariables::
                                                      MVRuntimeDataVariables_New
                                                                (pMVar6,StringLiteral_emote,0.5,0,
                                                                 (MethodInfo *)0x0);
                                            if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
                                              (pLVar1->fields).Emote = pMVar9;
                                              func_?();
                                              pGVar10 = (this->fields)._._.gameObject;
                                              value = UnityEngine.CoreModule.dll::UnityEngine::
                                                      LayerMask::LayerMask_NameToLayer
                                                                (StringLiteral_Player,
                                                                 (MethodInfo *)0x0);
                                              if (pGVar10 != (GameObject *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_set_layer
                                                          (pGVar10,value,(MethodInfo *)0x0);
                                                pGVar10 = (this->fields)._._.gameObject;
                                                if (pGVar10 != (GameObject *)0x0) {
                                                  pAVar11 = (Avatar *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_GetComponent_1
                                                                      (pGVar10,
                                                  Avatar_MethodInfo__UnityEngine__GameObject__GetComponent<Avatar>__
                                                  );
                                                  (this->fields).avatar = pAVar11;
                                                  func_?();
                                                  pMVar6 = (this->fields)._._.runtimeDataVariables;
                                                  if (pMVar6 != (MVRuntimeDataVariables *)0x0) {
                                                    pMVar8 = MVRuntimeDataVariables::
                                                              MVRuntimeDataVariables_NewClampedFloat
                                                                        (pMVar6,StringLiteral_size,
                                                                         0.0,1,0.01,10.0,
                                                                         (MethodInfo *)0x0);
                                                    (this->fields).Size = pMVar8;
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
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Vector3 get_CharacterControllerCenterOffset() */

Vector3 * Assembly-CSharp.dll::MVAvatar::MVAvatar_get_CharacterControllerCenterOffset
                    (Vector3 *__return_storage_ptr__,MVAvatar *this,MethodInfo *method)

{
  fVar1 = (this->fields).characterControllerCenterOffset.y;
  fVar2 = (this->fields).characterControllerCenterOffset.z;
  __return_storage_ptr__->x = (this->fields).characterControllerCenterOffset.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* PickupItem get_CurrentPickup() */

PickupItem *
Assembly-CSharp.dll::MVAvatar::MVAvatar_get_CurrentPickup(MVAvatar *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).avatarPickupOwner;
  if (pAVar2 != (AvatarPickupOwner *)0x0) {
    return (pAVar2->fields)._.currentItem;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pPVar6 = (PickupItem *)(*pcVar5)();
  return pPVar6;
}


/* Boolean get_IsHidden() */

bool Assembly-CSharp.dll::MVAvatar::MVAvatar_get_IsHidden(MVAvatar *this,MethodInfo *method)

{
  return (this->fields).isHidden;
}


/* Boolean get_IsSeated() */

bool Assembly-CSharp.dll::MVAvatar::MVAvatar_get_IsSeated(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_seat);
    func_?(&StringLiteral_MVAvatar_does_not_contain_key_se);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(code *)(this->klass->vtable).get_RunTimeData.method)
                     (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)(this);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = Extensions::Extensions_GetObscuredType(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        pOVar4 = (ObscuredInt *)func_?();
        iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(*pOVar4,(MethodInfo *)0x0);
        return iVar5 != -1;
      }
      func_?();
    }
    func_?();
    pcVar6 = (code *)swi(3);
    bVar2 = (*pcVar6)();
    return bVar2;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_MVAvatar_does_not_contain_key_se,(MethodInfo *)0x0);
  return 0;
}


/* Int32 get_SeatID() */

int32_t Assembly-CSharp.dll::MVAvatar::MVAvatar_get_SeatID(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_seat);
    func_?(&StringLiteral_MVAvatar_does_not_contain_key_se);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(code *)(this->klass->vtable).get_RunTimeData.method)
                     (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)(this);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = Extensions::Extensions_GetObscuredType(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        pOVar4 = (ObscuredInt *)func_?();
        iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(*pOVar4,(MethodInfo *)0x0);
        return iVar5;
      }
      func_?();
    }
    func_?();
    pcVar6 = (code *)swi(3);
    iVar5 = (*pcVar6)();
    return iVar5;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_MVAvatar_does_not_contain_key_se,(MethodInfo *)0x0);
  return -1;
}


/* Void set_HealParticleSpawnTime(Single) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_HealParticleSpawnTime
               (MVAvatar *this,float value,MethodInfo *method)

{
  (this->fields).healParticleSpawnTime = value;
  return;
}


/* Void set_IsHidden(Boolean) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_IsHidden
               (MVAvatar *this,bool value,MethodInfo *method)

{
  (this->fields).isHidden = value;
  pAVar1 = (this->fields).avatar;
  if (pAVar1 != (Avatar *)0x0) {
    this_00 = (pAVar1->fields).avatarFader;
    fadeFactor = _UNK_?;
    if (value != 0) {
      fadeFactor = 0.0;
    }
    if (this_00 != (AvatarFader *)0x0) {
      AvatarFader::AvatarFader_SetTransparency(this_00,fadeFactor,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_SeatID(Int32) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_SeatID
               (MVAvatar *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_seat);
    cRam_? = '\x01';
  }
  bVar1 = MVAvatar_get_IsSeated(this,(MethodInfo *)0x0);
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value,(MethodInfo *)0x0);
  puVar3 = (undefined *)pOVar2->currentCryptoKey;
  pEVar4 = (Extensions__Class *)pOVar2->hiddenValue;
  iVar5 = pOVar2->fakeValue;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    puVar3 = &UNK_?;
    pEVar4 = TypeInfo__Extensions;
    func_?();
  }
  value_00.hiddenValue = (int32_t)pEVar4;
  value_00.currentCryptoKey = (int32_t)puVar3;
  value_00.fakeValue = iVar5;
  value_00.inited = pOVar2->inited;
  value_00._13_3_ = *(undefined3 *)&pOVar2->field_0xd;
  Extensions::Extensions_SetObscuredType_2
            (hashtable,StringLiteral_seat,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  bVar6 = MVAvatar_get_IsSeated(this,(MethodInfo *)0x0);
  if (bVar6 != bVar1) {
    MVAvatar_get_IsSeated(this,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnSeatedChanged.method)();
  }
  return;
}


/* Void set_SetTransparency(Single) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_SetTransparency
               (MVAvatar *this,float value,MethodInfo *method)

{
  if ((this->fields).isHidden == 0) {
    pAVar1 = (this->fields).avatar;
    if ((pAVar1 == (Avatar *)0x0) ||
       (this_00 = (pAVar1->fields).avatarFader, this_00 == (AvatarFader *)0x0)) {
      uVar2 = func_?(&stack0xfffffff0);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AvatarFader::AvatarFader_SetTransparency(this_00,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_Shield(MVRuntimeDataVariableClampedFloat) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_Shield
               (MVAvatar *this,MVRuntimeDataVariableClampedFloat *value,MethodInfo *method)

{
  (this->fields).shield = value;
  func_?(&(this->fields).shield,value);
  return;
}

