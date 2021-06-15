
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_AddChild
               (MVAvatar *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_AddChild((MVGroup *)this,child,(MethodInfo *)0x0);
  pMVar1 = (this->fields).body;
  if (pMVar1 != (MVBody *)0x0) {
    MVBody::MVBody_Detach(pMVar1,(MethodInfo *)0x0);
  }
  if (child != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVBody->_1).naturalAligment;
    if (((child->klass->_1).naturalAligment < bVar2) ||
       ((MVBody__Class *)(child->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVBody)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar1 = (MVBody *)0x0;
    if (bVar3) {
      pMVar1 = (MVBody *)child;
    }
    if (pMVar1 != (MVBody *)0x0) {
      (this->fields).body = pMVar1;
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
    cRam_? = '\x01';
  }
  this_00 = (this->fields).body;
  if (this_00 != (MVBody *)0x0) {
    MVBody::MVBody_Detach(this_00,(MethodInfo *)0x0);
  }
  if (newBody != (MVBody *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Created_avatar_fader,(MethodInfo *)0x0);
    uStack_1 = 0;
    uStack_2 = 0;
    func_?(&uStack_2,0,0x3cf5c28f,0,0);
    (*(code *)(newBody->klass->vtable).set_Position.method)
              (newBody,uStack_2,uStack_1,(newBody->klass->vtable).get_Rotation.methodPtr);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       (&QStack_4,(MethodInfo *)0x0);
    QStack_4.x = pQVar3->w;
    QStack_4.y = (float)(newBody->klass->vtable).get_Scale.methodPtr;
    (*(code *)(newBody->klass->vtable).set_Rotation.method)(newBody,pQVar3->x,pQVar3->y,pQVar3->z);
    MVBody::MVBody_Attach(newBody,this,(this->fields).isLocal,(MethodInfo *)0x0);
    (this->fields).body = newBody;
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_newBody____null,(MethodInfo *)0x0);
  return;
}


/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_AvatarStateChangedHandler
               (MVAvatar *this,Object *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (a != (Object *)0x0) {
    pSVar1 = TypeInfo__MV__Common__SpawnRoleModeType;
    if ((a->klass->_0).element_class != (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class)
    goto code_?;
    pbVar2 = (byte *)func_?(a);
    pAVar3 = (this->fields).avatar;
    if ((*pbVar2 & 4) == 0) {
      if (pAVar3 != (Avatar_1 *)0x0) {
        pCVar4 = (Collider *)
                 UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pAVar3,
                            (MethodInfo *)0x0);
        if (pCVar4 != (Collider *)0x0) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar4,1,(MethodInfo *)0x0);
          pAVar3 = (this->fields).avatar;
          if (pAVar3 != (Avatar_1 *)0x0) {
            pBVar5 = (Behaviour *)
                     System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                     KeyValuePair`2[System::Object,System::Object],System::Object]::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                 *)pAVar3,(MethodInfo *)0x0);
            if (pBVar5 != (Behaviour *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        (pBVar5,1,(MethodInfo *)0x0);
              pTVar6 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields).avatar;
              if (pTVar6 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
                pOVar7 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                         TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                   (pTVar6,(MethodInfo *)0x0);
                if (pOVar7 != (Object *)0x0) {
                  (*(code *)pOVar7->klass[1]._0.parent)(pOVar7,1,pOVar7->klass[1]._0.generic_class);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else if (pAVar3 != (Avatar_1 *)0x0) {
      pCVar4 = (Collider *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pAVar3,(MethodInfo *)0x0)
      ;
      if (pCVar4 != (Collider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar4,0,(MethodInfo *)0x0);
        pAVar3 = (this->fields).avatar;
        if (pAVar3 != (Avatar_1 *)0x0) {
          pBVar5 = (Behaviour *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                   KeyValuePair`2[System::Object,System::Object],System::Object]::
                   Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                               *)pAVar3,(MethodInfo *)0x0);
          if (pBVar5 != (Behaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      (pBVar5,0,(MethodInfo *)0x0);
            this_00 = (InventoryItemPreviewer *)(this->fields).avatar;
            if (this_00 != (InventoryItemPreviewer *)0x0) {
              this_01 = (ChatAnchor *)
                        InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                  (this_00,(MethodInfo *)0x0);
              if (this_01 != (ChatAnchor *)0x0) {
                ChatAnchor::ChatAnchor_HideChatBubble(this_01,(MethodInfo *)0x0);
                pTVar6 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields).avatar;
                if (pTVar6 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
                  pOVar7 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                           TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                           TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                     (pTVar6,(MethodInfo *)0x0);
                  if (pOVar7 != (Object *)0x0) {
                    (*(code *)pOVar7->klass[1]._0.parent)
                              (pOVar7,0,pOVar7->klass[1]._0.generic_class);
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
  func_?(0);
  a = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(a,pSVar1);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_Destroy(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields).avatar;
  if (this_00 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    this_01 = (AvatarUIHandler *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
              TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (AvatarUIHandler *)0x0) {
      AvatarUIHandler::AvatarUIHandler_ForceDestroy(this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?();
      }
      UpdateController::UpdateController_RemoveLateUpdateObject
                ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pOVar1 != (ObjectPrefab *)0x0) {
    bVar2 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((pOVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVVehicleBase__Class *)(pOVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVVehicleBase)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pOVar4 = (ObjectPrefab *)0x0;
    if (bVar3) {
      pOVar4 = pOVar1;
    }
    if (pOVar4 != (ObjectPrefab *)0x0) {
      this_01 = (DayNightCycle *)
                PrefabPool::PrefabPool_get_MVRandomBoxPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (this_01 != (DayNightCycle *)0x0) {
        this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
        if (this_02 != (CelestialParam *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                              ((GameObject *)this_02,
                               VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                              );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Did_not_find_seatmanager__Cannot,(MethodInfo *)0x0);
            return;
          }
          if (this_03 != (UseInteractorHandler *)0x0) {
            VehicleSeatManager::VehicleSeatManager_DetachFromSeat
                      ((VehicleSeatManager *)this_03,this,(MethodInfo *)0x0);
            this_00 = (this->fields)._._.gameObject;
            if (this_00 != (GameObject *)0x0) {
              this_04 = (AvatarPickupOwner *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_47
                                  (this_00,
                                   AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                                  );
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)this_04,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Could_not_find_AvatarPickupOwner,
                           (MethodInfo *)0x0);
                return;
              }
              if (this_04 != (AvatarPickupOwner *)0x0) {
                AvatarPickupOwner::AvatarPickupOwner_set_AdditionalIgnoreWOIDS
                          (this_04,(HashSet_1_System_Int32_ *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  arg1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Trying_to_leave_vehicle_but_Grou,(Object *)arg1,
                       (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)message,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_Initialize(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0xffffffff) {
    return;
  }
  pMVar2 = (this->fields).body;
  if (pMVar2 == (MVBody *)0x0) {
code_?:
    func_?();
  }
  else {
    MVBody::MVBody_Attach(pMVar2,this,(this->fields).isLocal,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._._.gameObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pAVar4 = (AvatarPickupOwner *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar3,
                        AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarPickupOwner>__
                       );
    (this->fields).avatarPickupOwner = pAVar4;
    if (pAVar4 == (AvatarPickupOwner *)0x0) goto code_?;
    MVPickupOwner::MVPickupOwner_set_IsLocal
              ((MVPickupOwner *)pAVar4,(this->fields).isLocal,(MethodInfo *)0x0);
    pAVar4 = (this->fields).avatarPickupOwner;
    if (pAVar4 == (AvatarPickupOwner *)0x0) goto code_?;
    AvatarPickupOwner::AvatarPickupOwner_Init
              (pAVar4,(this->fields).CurrentItem,(this->fields).IsFiring,this,
               (this->fields).skillDataManager,(MethodInfo *)0x0);
    pAVar5 = (this->fields).avatar;
    if (pAVar5 == (Avatar_1 *)0x0) goto code_?;
    (*(code *)(pAVar5->klass->vtable).Initialize.method)();
    pAVar5 = (this->fields).avatar;
    if ((pAVar5 == (Avatar_1 *)0x0) ||
       (this_00 = (MVComponent *)
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                  KeyValuePair`2[System::Object,System::Object],System::Object]::
                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                            ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                              *)pAVar5,(MethodInfo *)0x0), this_00 == (MVComponent *)0x0))
    goto code_?;
    MVComponent::MVComponent_FindWorldObjectParent(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar6 = (this->fields).Modifiers;
    if (pMVar6 == (MVRuntimeDataVariable *)0x0) goto code_?;
    pMVar7 = (pMVar6->fields).OnChange;
    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar8,(Object *)this,
               MethodInfo__MVAvatar___InitializeModifiers_m__1_System__Object_,(MethodInfo *)0x0);
    pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
      (pMVar6->fields).OnChange = pMVar7;
      pMVar6 = (this->fields).Modifiers;
      pAVar5 = (this->fields).avatar;
      if ((pMVar6 != (MVRuntimeDataVariable *)0x0) &&
         (pDVar10 = (Dictionary_2_System_Object_System_Object_ *)
                    MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                              (pMVar6,(MethodInfo *)0x0), pAVar5 != (Avatar_1 *)0x0)) {
        newModifiers = pDVar10;
        if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar11 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar10->klass->_1).naturalAligment < bVar11) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar10->klass->_1).typeHierarchy[bVar11 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          newModifiers = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar12) {
            newModifiers = pDVar10;
          }
          if (newModifiers == (Dictionary_2_System_Object_System_Object_ *)0x0)
          goto code_?;
        }
        Avatar::Avatar_1_UpdateModifiers(pAVar5,newModifiers,(MethodInfo *)0x0);
        fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pMVar2 = (this->fields).body;
        (this->fields).healParticleSpawnTime = fVar13;
        if (((pMVar2 != (MVBody *)0x0) &&
            (this_01 = MVBody::MVBody_get_BodyData(pMVar2,(MethodInfo *)0x0),
            this_01 != (BodyData *)0x0)) &&
           (this_02 = BodyData::BodyData_GetPartBone
                                (this_01,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0),
           this_02 != (Transform *)0x0)) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_02,(MethodInfo *)0x0);
          (this->fields).healRayAttachmentObject = pGVar3;
          pMVar6 = (this->fields).SpawnRoleModeTypes;
          if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
            pMVar7 = (pMVar6->fields).OnChange;
            pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar8,(Object *)this,(this->klass->vtable).AttachBody.methodPtr,
                       (MethodInfo *)0x0);
            pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
            pDVar15 = (Delegate *)0x0;
            if (pDVar14 != (Delegate *)0x0) {
              if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pDVar15 = pDVar14;
              }
              if (pDVar15 == (Delegate *)0x0) goto code_?;
            }
            (pMVar7->fields)._._.method_info = (MethodInfo_1 *)pDVar15;
            pMVar6 = (this->fields).Animation;
            if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
              pMVar7 = (pMVar6->fields).OnChange;
              pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar8,(Object *)this,(this->klass->vtable).OnHealthChange.methodPtr,
                         (MethodInfo *)0x0);
              pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
              pDVar15 = (Delegate *)0x0;
              if (pDVar14 != (Delegate *)0x0) {
                if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                    TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pDVar15 = pDVar14;
                }
                if (pDVar15 == (Delegate *)0x0) goto code_?;
              }
              (pMVar7->fields)._._.method_info = (MethodInfo_1 *)pDVar15;
              pMVar16 = (this->fields).Health;
              if (pMVar16 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                pMVar7 = (pMVar16->fields)._.OnChange;
                pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar8,(Object *)this,(this->klass->vtable).OnShieldChange.methodPtr,
                           (MethodInfo *)0x0);
                pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
                pDVar15 = (Delegate *)0x0;
                if (pDVar14 != (Delegate *)0x0) {
                  if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                      TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                    pDVar15 = pDVar14;
                  }
                  if (pDVar15 == (Delegate *)0x0) goto code_?;
                }
                (pMVar7->fields)._._.method_info = (MethodInfo_1 *)pDVar15;
                pMVar17 = (this->fields).shield;
                if (pMVar17 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                  pMVar7 = (pMVar17->fields)._._.OnChange;
                  pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar8,(Object *)this,
                             (this->klass->vtable).OnCurrentPickupChange.methodPtr,(MethodInfo *)0x0
                            );
                  pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
                  pDVar15 = (Delegate *)0x0;
                  if (pDVar14 != (Delegate *)0x0) {
                    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pDVar15 = pDVar14;
                    }
                    if (pDVar15 == (Delegate *)0x0) goto code_?;
                  }
                  (pMVar7->fields)._._.method_info = (MethodInfo_1 *)pDVar15;
                  pMVar6 = (this->fields).CurrentItem;
                  if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
                    pMVar7 = (pMVar6->fields).OnChange;
                    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar8,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
                    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
                    pDVar15 = (Delegate *)0x0;
                    if (pDVar14 != (Delegate *)0x0) {
                      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                        pDVar15 = pDVar14;
                      }
                      if (pDVar15 == (Delegate *)0x0) goto code_?;
                    }
                    (pMVar7->fields)._._.method_info = (MethodInfo_1 *)pDVar15;
                    pMVar17 = (this->fields).Size;
                    if (pMVar17 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                      pMVar7 = (pMVar17->fields)._._.OnChange;
                      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar8,(Object *)this,
                                 MethodInfo__MVAvatar___Initialize_m__0_System__Object_,
                                 (MethodInfo *)0x0);
                      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0
                                          );
                      pDVar15 = (Delegate *)0x0;
                      if (pDVar14 != (Delegate *)0x0) {
                        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pDVar15 = pDVar14;
                        }
                        if (pDVar15 == (Delegate *)0x0) goto code_?;
                      }
                      (pMVar7->fields)._._.method_info = (MethodInfo_1 *)pDVar15;
                      pMVar17 = (this->fields).Size;
                      if (pMVar17 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                        (*(code *)(pMVar17->klass->vtable).get_Value.method)();
                        pMVar17 = (this->fields).Size;
                        if (pMVar17 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                          (*(code *)(pMVar17->klass->vtable).get_Value.method)();
                          pMVar17 = (this->fields).Size;
                          if (pMVar17 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                            (*(code *)(pMVar17->klass->vtable).get_Value.method)();
                            func_?();
                            (*(code *)(this->klass->vtable).set_Scale.method)();
                            if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
                              func_?();
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
    if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar7 = pMVar9;
    }
    if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void InitializeModifiers() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_InitializeModifiers(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).Modifiers;
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
code_?:
    func_?(0);
    pDVar2 = extraout_EDX;
  }
  else {
    pMVar3 = (pMVar1->fields).OnChange;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )unaff_ESI,(Object *)this,
               MethodInfo__MVAvatar___InitializeModifiers_m__1_System__Object_,(MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMVar4;
      }
      pMVar5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
    (pMVar1->fields).OnChange = pMVar3;
    pMVar1 = (this->fields).Modifiers;
    this_00 = (this->fields).avatar;
    if (pMVar1 == (MVRuntimeDataVariable *)0x0) goto code_?;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar1,(MethodInfo *)0x0);
    if (this_00 == (Avatar_1 *)0x0) goto code_?;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Avatar::Avatar_1_UpdateModifiers
                (this_00,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      return;
    }
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar2->klass->_1).naturalAligment < bVar6) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar2->klass->_1).typeHierarchy[bVar6 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    newModifiers = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar7) {
      newModifiers = pDVar2;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (newModifiers != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Avatar::Avatar_1_UpdateModifiers(this_00,newModifiers,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(pDVar2,unaff_ESI);
  pMVar4 = extraout_ECX;
  pMVar5 = extraout_EDX_00;
code_?:
  func_?(pMVar4,pMVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsInMode(SpawnRoleModeType) */

bool Assembly-CSharp.dll::MVAvatar::MVAvatar_IsInMode
               (MVAvatar *this,SpawnRoleModeType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      goto code_?;
    }
  }
  pOVar1 = (Object *)func_?(0);
code_?:
  func_?(pOVar1);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnAnimationChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnAnimationChange
               (MVAvatar *this,Object *newAnimationData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if (pMVar1 == (MVBody *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pMVar1->fields).bodyObject;
  if ((pMVar3 == (MVBodyObject *)0x0) ||
     (this_02 = (pMVar3->fields).boneAnimation, this_02 == (BoneAnimation *)0x0)) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  player = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if (newAnimationData == (Object *)0x0) goto code_?;
  bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((newAnimationData->klass->_1).naturalAligment < bVar4) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (newAnimationData->klass->_1).typeHierarchy[bVar4 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  this_04 = (Dictionary_2_System_Type_Pool_ *)0x0;
  if (bVar5) {
    this_04 = (Dictionary_2_System_Type_Pool_ *)newAnimationData;
  }
  if (this_04 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_04,(Type *)StringLiteral_state,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  player = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  if (pDVar6 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_04,(Type *)StringLiteral_timeStamp,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar7 == (Pool *)0x0) {
code_?:
      pPVar7 = (Pool *)func_?();
    }
    else if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar8 = (undefined4 *)func_?();
      friend_1 = (Friend *)*puVar8;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (this_02->fields).OnAnimationChange;
      if (this_00 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_00,(Dictionary_2_System_String_System_Object_ *)player,
                   MethodInfo__System__Action<System::String>__Invoke_System__String_);
      }
      if ((this_02->fields).isLocal != 0) {
        this_03 = (PlayerElementData *)func_?();
        PlayerElementData::PlayerElementData__ctor
                  (this_03,(MVPlayer *)player,friend_1,(MethodInfo *)0x0);
        (this_02->fields).currentAnim = (AnimationData *)this_03;
        BoneAnimation::BoneAnimation_ComputeAnimation(this_02,(MethodInfo *)0x0);
        return;
      }
      this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this_02->fields).animationQueue;
      item = (SmoothPhysicsMovement_Package *)func_?();
      PlayerElementData::PlayerElementData__ctor
                ((PlayerElementData *)item,(MVPlayer *)player,friend_1,(MethodInfo *)0x0);
      if (this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
        System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
        Queue_1_SmoothPhysicsMovement_Package__Enqueue
                  (this_01,item,
                   MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                  );
        BoneAnimation::BoneAnimation_ComputeRemoteAnimation(this_02,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)func_?(pPVar7);
    pSVar9 = extraout_ECX;
  }
  else {
    if ((String__Class *)(pDVar6->_0).image == TypeInfo__System__String) {
      player = pDVar6;
    }
    pSVar9 = TypeInfo__System__String;
    if (player != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
  }
  func_?(pDVar6,pSVar9);
  newAnimationData = extraout_EDX;
code_?:
  func_?(newAnimationData,player);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnEnterVehicle(MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatar;
  if (pAVar1 == (Avatar_1 *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pAVar1->fields).waterSplashComponent;
  if (this_00 != (WaterSplashComponent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnHealthChange
               (MVAvatar *this,Object *newHealthData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if (pMVar1 == (MVBody *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pMVar1->fields).bodyObject;
  if ((pMVar3 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar3->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (newHealthData == (Object *)0x0) {
      func_?(0);
      newHealthData = extraout_ECX;
      pSVar4 = extraout_EDX;
    }
    else {
      pSVar4 = TypeInfo__System__Single;
      if ((newHealthData->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class)
      {
        pfVar5 = (float *)func_?(newHealthData);
        fVar6 = *pfVar5;
        if (fVar6 < (this_00->fields).previousBlinkHealth) {
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.5,(MethodInfo *)0x0);
        }
        (this_00->fields).previousBlinkHealth = fVar6;
        return;
      }
    }
    func_?(newHealthData,pSVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnLeaveVehicle(MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatar;
  if (pAVar1 == (Avatar_1 *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pAVar1->fields).waterSplashComponent;
  if (this_00 != (WaterSplashComponent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShieldChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnShieldChange
               (MVAvatar *this,Object *newShieldData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if (pMVar1 == (MVBody *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pMVar1->fields).bodyObject;
  if ((pMVar3 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar3->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (newShieldData == (Object *)0x0) {
      func_?(0);
      newShieldData = extraout_ECX;
      pSVar4 = extraout_EDX;
    }
    else {
      pSVar4 = TypeInfo__System__Single;
      if ((newShieldData->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class)
      {
        pfVar5 = (float *)func_?(newShieldData);
        fVar6 = *pfVar5;
        if (fVar6 < (this_00->fields).previousBlinkShield) {
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_00,BlinkType__Enum_ShieldDamage,0.5,(MethodInfo *)0x0);
        }
        (this_00->fields).previousBlinkShield = fVar6;
        return;
      }
    }
    func_?(newShieldData,pSVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnStateChangeToHidden() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnStateChangeToHidden
               (MVAvatar *this,MethodInfo *method)

{
  this_00 = (InventoryItemPreviewer *)(this->fields).avatar;
  if ((this_00 == (InventoryItemPreviewer *)0x0) ||
     (pGVar1 = InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                         (this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_3 + 0xc);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return;
  }
  iVar5 = *(int *)(in_stack_3 + 0xc);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x48) = 0;
    *(undefined4 *)(iVar5 + 0x44) = 0;
    if (*(CanvasGroup **)(iVar5 + 0x30) != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (*(CanvasGroup **)(iVar5 + 0x30),0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar4 = (MethodInfo *)0x0;
  func_?();
  this_00 = (this->fields).avatar;
  if (this_00 != (Avatar_1 *)0x0) {
    bVar5 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
            CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                      ((CrossPlatformInputManager_VirtualAxis *)this_00,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      pTVar6 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields).avatar;
      if ((pTVar6 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) &&
         (pAVar7 = (AvatarUIHandlerRemote *)
                    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                    TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                              (pTVar6,(MethodInfo *)0x0), pAVar7 != (AvatarUIHandlerRemote *)0x0))
      {
        bVar8 = (pAVar7->klass->_1).naturalAligment;
        bVar9 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
        if ((bVar8 < bVar9) ||
           (bVar10 = true,
           (pAVar7->klass->_1).typeHierarchy[bVar9 - 1] !=
           (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
          bVar10 = false;
        }
        pAVar11 = (AvatarUIHandlerRemote *)0x0;
        if (bVar10) {
          pAVar11 = pAVar7;
        }
        if (pAVar11 != (AvatarUIHandlerRemote *)0x0) {
          if ((bVar8 < bVar9) ||
             (bVar10 = true,
             (pAVar7->klass->_1).typeHierarchy[bVar9 - 1] !=
             (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
            bVar10 = false;
          }
          pAVar11 = (AvatarUIHandlerRemote *)0x0;
          if (bVar10) {
            pAVar11 = pAVar7;
          }
          if (pAVar11 != (AvatarUIHandlerRemote *)0x0) {
            AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag(pAVar11,(MethodInfo *)0x0);
            pTVar6 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields).avatar;
            if (pTVar6 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
              pAVar7 = (AvatarUIHandlerRemote *)
                        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                        TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                        TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                  (pTVar6,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar12 != (MVNetworkGame *)0x0) &&
                  (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0)
                  , pMVar13 != (MVLocalPlayer *)0x0)) &&
                 (bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                    ((MVPlayer *)pMVar13,(MVWorldObjectClient *)this,
                                     (MethodInfo *)0x0), pAVar7 != (AvatarUIHandlerRemote *)0x0)) {
                pAVar14 = pAVar7->klass;
                bVar8 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
                if (((pAVar14->_1).naturalAligment < bVar8) ||
                   (bVar10 = true,
                   (pAVar14->_1).typeHierarchy[bVar8 - 1] !=
                   (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
                  bVar10 = false;
                }
                pAVar11 = (AvatarUIHandlerRemote *)0x0;
                if (bVar10) {
                  pAVar11 = pAVar7;
                }
                if (pAVar11 != (AvatarUIHandlerRemote *)0x0) {
                  if (((pAVar14->_1).naturalAligment < bVar8) ||
                     ((pAVar14->_1).typeHierarchy[bVar8 - 1] !=
                      (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
                    bVar10 = false;
                  }
                  else {
                    bVar10 = true;
                  }
                  pAVar11 = (AvatarUIHandlerRemote *)0x0;
                  if (bVar10) {
                    pAVar11 = pAVar7;
                  }
                  if (pAVar11 != (AvatarUIHandlerRemote *)0x0) {
                    AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                              (pAVar11,bVar5,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
                goto code_?;
              }
            }
            goto code_?;
          }
        }
        func_?();
        func_?();
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((this_01 != (MVAvatar *)0x0) &&
          (this_02 = MVAvatar_get_Shield(this_01,(MethodInfo *)0x0),
          this_02 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
         (this_03 = MVPlayerContainer::MVPlayerContainer_get_Values
                              ((MVPlayerContainer *)this_02,pMVar4),
         this_03 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                    *)&stack0xffffffb8,
                   (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                   this_03,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                  );
        uStack_1 = 0;
        while (cVar15 = func_?(), cVar15 != '\0') {
          pMVar4 = (MethodInfo *)&UNK_?;
          this_04 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?();
          if (this_04 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) goto code_?;
          pSVar16 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_04,in_stack_17);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar12 == (MVNetworkGame *)0x0) ||
             (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
             pMVar13 == (MVLocalPlayer *)0x0)) goto code_?;
          pSVar18 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar13,pMVar4);
          if (pSVar16 != pSVar18) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_Reimplement_with_callback_functi,(MethodInfo *)0x0);
          }
        }
        uStack_1 = 0xffffffff;
        func_?();
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void TransferChild(Int32) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_TransferChild
               (MVAvatar *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_TransferChild((MVGroup *)this,id,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Transfer_child,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,id,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      bVar2 = (TypeInfo__MVBody->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVBody__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVBody)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pMStack4 = (MVWorldObject *)0x0;
      if (bVar3) {
        pMStack4 = pMVar1;
      }
      if (pMStack4 != (MVWorldObject *)0x0) {
        pIStack5 = (this->klass->vtable).__unknown.methodPtr;
        (*(code *)(this->klass->vtable).AttachBody.method)();
      }
    }
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void TrySpawningHealParticles(Single, Single) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_TrySpawningHealParticles
               (MVAvatar *this,float previousHealth,float currentHealth,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((previousHealth < currentHealth) &&
     (_UNK_? < fVar2 - (this->fields).healParticleSpawnTime)) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).healParticleSpawnTime = fVar2;
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      pXVar3 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_HealingParticles(this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar3,
                          UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                         );
      this_00 = (this->fields)._._.gameObject;
      if ((this_00 != (GameObject *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        this = (MVAvatar *)pVVar5->z;
        uVar8 = CONCAT44((float)uVar7 + _UNK_?,uVar6);
        if ((pXVar3 != (XpBoostParticlePreviewer *)0x0) &&
           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pXVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0
           )) {
          fVar9 = (float)uVar8;
          fVar10 = (float)(int)((ulonglong)uVar8 >> 0x20);
          value = (Vector3)CONCAT84(uVar11,fVar9);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar4,value,(MethodInfo *)0x0);
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pXVar3,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar4,(pMVar1->fields)._._.transform,(MethodInfo *)0x0);
            this_01 = (pMVar1->fields).avatar;
            if (this_01 != (Avatar_1 *)0x0) {
              Avatar::Avatar_1_StartBlinking(this_01,BlinkType__Enum_Healing,1.5,(MethodInfo *)0x0);
              return;
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


/* Void <InitializeModifiers>m__1(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__InitializeModifiers_m__1
               (MVAvatar *this,Object *modifiers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatar;
  if (this_00 == (Avatar_1 *)0x0) {
    func_?(0);
    modifiers = extraout_EDX;
  }
  else {
    if (modifiers == (Object *)0x0) {
      Avatar::Avatar_1_UpdateModifiers
                (this_00,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      return;
    }
    bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((modifiers->klass->_1).naturalAligment < bVar1) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (modifiers->klass->_1).typeHierarchy[bVar1 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    newModifiers = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar2) {
      newModifiers = (Dictionary_2_System_Object_System_Object_ *)modifiers;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (newModifiers != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Avatar::Avatar_1_UpdateModifiers(this_00,newModifiers,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(modifiers,unaff_ESI);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <Initialize>m__0(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__Initialize_m__0
               (MVAvatar *this,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (val == (Object *)0x0) {
    func_?(0);
    val = extraout_ECX;
    pSVar1 = extraout_EDX;
  }
  else {
    pSVar1 = TypeInfo__System__Single;
    if ((val->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      puVar2 = (undefined4 *)func_?(val);
      uVar3 = *puVar2;
      uStack_4 = 0;
      fStack_5 = 0.0;
      func_?(&uStack_4,uVar3,uVar3,uVar3,0);
      value.z = fStack_5;
      value.x = (float)(undefined4)uStack_4;
      value.y = (float)uStack_4._4_4_;
      MVWorldObjectClient::MVWorldObjectClient_set_Scale
                ((MVWorldObjectClient *)this,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(val,pSVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LimbRotationRuntimeData;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  fStack_1 = 0.0;
  uStack_2 = 0;
  (this->fields).LimbRotationRuntimeData = (LimbRotationRuntimeData *)this_00;
  func_?(&uStack_2,0,0x3f733333,0,0);
  (this->fields).characterControllerCenterOffset.x = (float)(undefined4)uStack_2;
  (this->fields).characterControllerCenterOffset.y = (float)uStack_2._4_4_;
  (this->fields).characterControllerCenterOffset.z = fStack_1;
  MVGroup::MVGroup__ctor((MVGroup *)this,data,avatarPrefab,worldObjects,(MethodInfo *)0x0);
  pSVar3 = (String *)
           UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
      *(undefined4 *)&(this->fields)._._.interactionFlags = 0;
      *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
      (this->fields).isLocal = pSVar3 == pSVar4;
      MVWorldObjectClient::MVWorldObjectClient_set_PlayInteractionType
                ((MVWorldObjectClient *)this,PlayInteractionType__Enum_HandlesHits,(MethodInfo *)0x0
                );
      pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pOVar5 != (ObjectPrefab *)0x0) {
        pMVar6 = MVRuntimeDataVariables::MVRuntimeDataVariables_New_2
                           ((MVRuntimeDataVariables *)pOVar5,StringLiteral_health,0.2,0,
                            MVRuntimeDataVariable<float>_MethodInfo__MVRuntimeDataVariables__New<float>_System__String__float__bool_
                           );
        (this->fields).Health = pMVar6;
        pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                           ((PrefabPool *)this,(MethodInfo *)0x0);
        if (pOVar5 != (ObjectPrefab *)0x0) {
          pMVar7 = MVRuntimeDataVariables::MVRuntimeDataVariables_New_3
                             ((MVRuntimeDataVariables *)pOVar5,StringLiteral_maxHealth,0.0,1,
                              MVRuntimeDataVariable<int>_MethodInfo__MVRuntimeDataVariables__New<int>_System__String__float__bool_
                             );
          (this->fields).MaxHealth = pMVar7;
          pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                             ((PrefabPool *)this,(MethodInfo *)0x0);
          if (pOVar5 != (ObjectPrefab *)0x0) {
            pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                               ((MVRuntimeDataVariables *)pOVar5,StringLiteral_shield,0.2,0,0.0,
                                100.0,(MethodInfo *)0x0);
            (this->fields).shield = pMVar8;
            pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                               ((PrefabPool *)this,(MethodInfo *)0x0);
            if (pOVar5 != (ObjectPrefab *)0x0) {
              pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                  ((MVRuntimeDataVariables *)pOVar5,StringLiteral_isFiring,0.0,0,
                                   (MethodInfo *)0x0);
              (this->fields).IsFiring = pMVar9;
              pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                 ((PrefabPool *)this,(MethodInfo *)0x0);
              if (pOVar5 != (ObjectPrefab *)0x0) {
                pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                    ((MVRuntimeDataVariables *)pOVar5,StringLiteral_modifiers,1.0,0,
                                     (MethodInfo *)0x0);
                (this->fields).Modifiers = pMVar9;
                pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                   ((PrefabPool *)this,(MethodInfo *)0x0);
                if (pOVar5 != (ObjectPrefab *)0x0) {
                  pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                      ((MVRuntimeDataVariables *)pOVar5,StringLiteral_currentItem,
                                       0.0,1,(MethodInfo *)0x0);
                  (this->fields).CurrentItem = pMVar9;
                  pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                     ((PrefabPool *)this,(MethodInfo *)0x0);
                  if (pOVar5 != (ObjectPrefab *)0x0) {
                    pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                        ((MVRuntimeDataVariables *)pOVar5,
                                         StringLiteral_spawnRoleModeType,0.0,1,(MethodInfo *)0x0);
                    (this->fields).SpawnRoleModeTypes = pMVar9;
                    pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                       ((PrefabPool *)this,(MethodInfo *)0x0);
                    if (pOVar5 != (ObjectPrefab *)0x0) {
                      pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                          ((MVRuntimeDataVariables *)pOVar5,StringLiteral_animation,
                                           0.0,0,(MethodInfo *)0x0);
                      pLVar10 = (this->fields).LimbRotationRuntimeData;
                      (this->fields).Animation = pMVar9;
                      pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                         ((PrefabPool *)this,(MethodInfo *)0x0);
                      if (pOVar5 != (ObjectPrefab *)0x0) {
                        pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                            ((MVRuntimeDataVariables *)pOVar5,
                                             StringLiteral_headRotationYaw,0.8,0,(MethodInfo *)0x0);
                        if (pLVar10 != (LimbRotationRuntimeData *)0x0) {
                          (pLVar10->fields).HeadRotationYaw = pMVar9;
                          pLVar10 = (this->fields).LimbRotationRuntimeData;
                          pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                             ((PrefabPool *)this,(MethodInfo *)0x0);
                          if (pOVar5 != (ObjectPrefab *)0x0) {
                            pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                ((MVRuntimeDataVariables *)pOVar5,
                                                 StringLiteral_headRotationPitch,0.8,0,
                                                 (MethodInfo *)0x0);
                            if (pLVar10 != (LimbRotationRuntimeData *)0x0) {
                              (pLVar10->fields).HeadRotationPitch = pMVar9;
                              pLVar10 = (this->fields).LimbRotationRuntimeData;
                              pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                                 ((PrefabPool *)this,(MethodInfo *)0x0);
                              if (pOVar5 != (ObjectPrefab *)0x0) {
                                pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                    ((MVRuntimeDataVariables *)pOVar5,
                                                     StringLiteral_pointRotationYaw,0.8,0,
                                                     (MethodInfo *)0x0);
                                if (pLVar10 != (LimbRotationRuntimeData *)0x0) {
                                  (pLVar10->fields).PointRotationYaw = pMVar9;
                                  pLVar10 = (this->fields).LimbRotationRuntimeData;
                                  pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                                     ((PrefabPool *)this,(MethodInfo *)0x0);
                                  if (pOVar5 != (ObjectPrefab *)0x0) {
                                    pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                        ((MVRuntimeDataVariables *)pOVar5,
                                                         StringLiteral_pointRotationPitch,0.8,0,
                                                         (MethodInfo *)0x0);
                                    if (pLVar10 != (LimbRotationRuntimeData *)0x0) {
                                      (pLVar10->fields).PointRotationPitch = pMVar9;
                                      pLVar10 = (this->fields).LimbRotationRuntimeData;
                                      pOVar5 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
                                                         ((PrefabPool *)this,(MethodInfo *)0x0);
                                      if (pOVar5 != (ObjectPrefab *)0x0) {
                                        pMVar9 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                            ((MVRuntimeDataVariables *)pOVar5,
                                                             StringLiteral_emote,0.5,0,
                                                             (MethodInfo *)0x0);
                                        if (pLVar10 != (LimbRotationRuntimeData *)0x0) {
                                          (pLVar10->fields).Emote = pMVar9;
                                          pGVar11 = (this->fields)._._.gameObject;
                                          value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask
                                                  ::LayerMask_NameToLayer
                                                            (StringLiteral_Player,(MethodInfo *)0x0)
                                          ;
                                          if (pGVar11 != (GameObject *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_set_layer(pGVar11,value,(MethodInfo *)0x0);
                                            pGVar11 = (this->fields)._._.gameObject;
                                            if (pGVar11 != (GameObject *)0x0) {
                                              pAVar12 = (Avatar_1 *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_GetComponent_47
                                                                  (pGVar11,
                                                  Avatar_MethodInfo__UnityEngine__GameObject__GetComponent<Avatar>__
                                                  );
                                              (this->fields).avatar = pAVar12;
                                              pOVar5 = PrefabPool::
                                                       PrefabPool_get_MVTimeTriggerPrefab
                                                                 ((PrefabPool *)this,
                                                                  (MethodInfo *)0x0);
                                              if (pOVar5 != (ObjectPrefab *)0x0) {
                                                pMVar8 = MVRuntimeDataVariables::
                                                         MVRuntimeDataVariables_NewClampedFloat
                                                                   ((MVRuntimeDataVariables *)pOVar5
                                                                    ,StringLiteral_size,0.0,1,0.01,
                                                                    10.0,(MethodInfo *)0x0);
                                                (this->fields).Size = pMVar8;
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
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void <set_Scale>__BaseCallProxy0(Vector3) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__set_Scale___BaseCallProxy0
               (MVAvatar *this,Vector3 value,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Scale
            ((MVWorldObjectClient *)this,value,(MethodInfo *)0x0);
  return;
}


/* MVBody get_Body() */

MVBody * Assembly-CSharp.dll::MVAvatar::MVAvatar_get_Body(MVAvatar *this,MethodInfo *method)

{
  return (this->fields).body;
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
  pAVar1 = (this->fields).avatarPickupOwner;
  if (pAVar1 != (AvatarPickupOwner *)0x0) {
    return (pAVar1->fields)._.currentItem;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pPVar3 = (PickupItem *)(*pcVar2)();
  return pPVar3;
}


/* Boolean get_IsSeated() */

bool Assembly-CSharp.dll::MVAvatar::MVAvatar_get_IsSeated(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(code *)(this->klass->vtable).get_RunTimeData.method)
                     (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)(this);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar3 = Extensions::Extensions_GetObscuredType(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_MVAvatar_does_not_contain_key_se,(MethodInfo *)0x0);
  return 0;
}


/* Int32 get_SeatID() */

int32_t Assembly-CSharp.dll::MVAvatar::MVAvatar_get_SeatID(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(code *)(this->klass->vtable).get_RunTimeData.method)
                     (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)(this);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar3 = Extensions::Extensions_GetObscuredType(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_MVAvatar_does_not_contain_key_se,(MethodInfo *)0x0);
  return -1;
}


/* MVRuntimeDataVariableClampedFloat get_Shield() */

MVRuntimeDataVariableClampedFloat *
Assembly-CSharp.dll::MVAvatar::MVAvatar_get_Shield(MVAvatar *this,MethodInfo *method)

{
  return (this->fields).shield;
}


/* Void set_HealParticleSpawnTime(Single) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_HealParticleSpawnTime
               (MVAvatar *this,float value,MethodInfo *method)

{
  (this->fields).healParticleSpawnTime = value;
  return;
}


/* Void set_SeatID(Int32) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_SeatID
               (MVAvatar *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = MVAvatar_get_IsSeated(this,(MethodInfo *)0x0);
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value,(MethodInfo *)0x0);
  puVar3 = (undefined *)pOVar2->currentCryptoKey;
  pEVar4 = (Extensions__Class *)pOVar2->hiddenValue;
  iVar5 = pOVar2->fakeValue;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
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
  this_00 = (this->fields).avatar;
  if (this_00 != (Avatar_1 *)0x0) {
    this_01 = (AvatarFader *)
              System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System
              ::Object]::
              Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (AvatarFader *)0x0) {
      AvatarFader::AvatarFader_SetTransparency(this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Shield(MVRuntimeDataVariableClampedFloat) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_Shield
               (MVAvatar *this,MVRuntimeDataVariableClampedFloat *value,MethodInfo *method)

{
  (this->fields).shield = value;
  return;
}

