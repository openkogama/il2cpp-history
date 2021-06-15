
/* Void Activate(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Activate
               (MVAvatarRemote *this,int32_t idFrom,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_MVAvatarRemote_Activate,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).set_Position.method)
            (this,position._0_8_,position.z,(this->klass->vtable).get_Rotation.methodPtr);
  (*(code *)(this->klass->vtable).set_Rotation.method)
            (this,rotation.x,rotation.y,rotation.z,rotation.w,
             (this->klass->vtable).get_Scale.methodPtr);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    this_03 = (TransformNetworkManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
              TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,(MethodInfo *)0x0)
    ;
    woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    if (this_03 == (TransformNetworkManager *)0x0) goto code_?;
    pMVar1 = (MVNetworkListener *)
             TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                       (this_03,(int32_t)woID,(MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkListener *)0x0) {
code_?:
      this_00 = (this->fields)._._._.gameObject;
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
        if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
          pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                   TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                             (this_01,(MethodInfo *)0x0);
          if (pOVar2 != (Object *)0x0) {
            (*(code *)pOVar2->klass[1]._0.namespaze)();
            pDVar3 = (this->fields).cullingHandler;
            if (pDVar3 != (DynamicCullingHandler *)0x0) {
              DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                        (pDVar3,(this->fields)._._._.gameObject,(MethodInfo *)0x0);
              a = (this->fields)._._._.ScaleChanged;
              pDVar3 = (this->fields).cullingHandler;
              this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_05,(Object *)pDVar3,
                         MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                         ,
                         MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
                        );
              pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)a,(Delegate *)this_05,(MethodInfo *)0x0);
              _uStack00000040 =
                   CONCAT44(TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                            ,pDVar4);
              pDVar5 = (Delegate *)0x0;
              if (pDVar4 == (Delegate *)0x0) {
code_?:
                woID[0xe].monitor = (MonitorData *)pDVar5;
                return;
              }
              if ((UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)pDVar4->klass
                  == 
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 ) {
                pDVar5 = pDVar4;
              }
              if (pDVar5 != (Delegate *)0x0) goto code_?;
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    bVar6 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
    if (((((MVNetworkObject__Class *)pMVar1->klass)->_1).naturalAligment < bVar6) ||
       ((((MVNetworkObject__Class *)pMVar1->klass)->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__MVNetworkListener)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    this_04 = (MVNetworkListener *)0x0;
    if (bVar7) {
      this_04 = pMVar1;
    }
    if (this_04 != (MVNetworkListener *)0x0) {
      MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_04,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  _uStack00000040 = func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields)._.healParticleSpawnTime = fVar1;
  MVAvatar::MVAvatar_AvatarStateChangedHandler((MVAvatar *)this,a,(MethodInfo *)0x0);
  if (a == (Object *)0x0) goto code_?;
  pIVar2 = TypeInfo__System__Int32;
  if ((a->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
  goto code_?;
  pbVar3 = (byte *)func_?(a);
  this_00 = (this->fields)._.body;
  if ((*pbVar3 & 4) == 0) {
    if (this_00 != (MVBody *)0x0) {
      MVBody::MVBody_set_Visible(this_00,1,(MethodInfo *)0x0);
      pTVar4 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
      if (pTVar4 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
        a = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
            TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                      (pTVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame *)0x0) {
          this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
          if (this_02 != (MVLocalPlayer *)0x0) {
            MVPlayer::MVPlayer_IsOnSameTeam_1
                      ((MVPlayer *)this_02,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
            if ((AvatarUIHandlerRemote *)a != (AvatarUIHandlerRemote *)0x0) {
              pAVar5 = ((AvatarUIHandlerRemote *)a)->klass;
              bVar6 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
              if (((pAVar5->_1).naturalAligment < bVar6) ||
                 (bVar7 = true,
                 (pAVar5->_1).typeHierarchy[bVar6 - 1] !=
                 (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
                bVar7 = false;
              }
              pAVar8 = (AvatarUIHandlerRemote *)0x0;
              if (bVar7) {
                pAVar8 = (AvatarUIHandlerRemote *)a;
              }
              pIVar2 = (Int32__Class *)TypeInfo__AvatarUIHandlerRemote;
              if (pAVar8 == (AvatarUIHandlerRemote *)0x0) goto code_?;
              if (((pAVar5->_1).naturalAligment < bVar6) ||
                 ((pAVar5->_1).typeHierarchy[bVar6 - 1] !=
                  (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              pAVar8 = (AvatarUIHandlerRemote *)0x0;
              if (bVar7) {
                pAVar8 = (AvatarUIHandlerRemote *)a;
              }
              if (pAVar8 == (AvatarUIHandlerRemote *)0x0) goto code_?;
              AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                        (pAVar8,0,(MethodInfo *)0x0);
              pTVar4 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
              if (pTVar4 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
                pAVar8 = (AvatarUIHandlerRemote *)
                         UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                         TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                   (pTVar4,(MethodInfo *)0x0);
                if (pAVar8 != (AvatarUIHandlerRemote *)0x0) {
                  pAVar5 = pAVar8->klass;
                  bVar6 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
                  a = (Object *)(uint)bVar6;
                  if (((pAVar5->_1).naturalAligment < bVar6) ||
                     (bVar7 = true,
                     (pAVar5->_1).typeHierarchy
                     [(int)&(((AvatarUIHandlerRemote *)((int)a + -0x78))->fields).field_0x6f] !=
                     (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
                    bVar7 = false;
                  }
                  pAVar9 = (AvatarUIHandlerRemote *)0x0;
                  if (bVar7) {
                    pAVar9 = pAVar8;
                  }
                  if (pAVar9 != (AvatarUIHandlerRemote *)0x0) {
                    if (((pAVar5->_1).naturalAligment < bVar6) ||
                       ((pAVar5->_1).typeHierarchy
                        [(int)&(((AvatarUIHandlerRemote *)((int)a + -0x78))->fields).field_0x6f] !=
                        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
                      bVar7 = false;
                    }
                    else {
                      bVar7 = true;
                    }
                    pAVar9 = (AvatarUIHandlerRemote *)0x0;
                    if (bVar7) {
                      pAVar9 = pAVar8;
                    }
                    if (pAVar9 != (AvatarUIHandlerRemote *)0x0) {
                      AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                                (pAVar9,1,(MethodInfo *)0x0);
                      pCVar10 = (this->fields).triggerCollider;
                      if (pCVar10 != (CapsuleCollider *)0x0) {
                        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                  ((Collider *)pCVar10,1,(MethodInfo *)0x0);
                        return;
                      }
                      goto code_?;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
code_?:
    func_?(0);
  }
  else {
    if (this_00 == (MVBody *)0x0) goto code_?;
    MVBody::MVBody_set_Visible(this_00,0,(MethodInfo *)0x0);
    pTVar4 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
    if (pTVar4 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) goto code_?;
    pAVar8 = (AvatarUIHandlerRemote *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
             TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                       (pTVar4,(MethodInfo *)0x0);
    if (pAVar8 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    pAVar5 = pAVar8->klass;
    bVar6 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    a = (Object *)(uint)bVar6;
    if (((pAVar5->_1).naturalAligment < bVar6) ||
       (bVar7 = true,
       (pAVar5->_1).typeHierarchy
       [(int)&(((AvatarUIHandlerRemote *)((int)a + -0x78))->fields).field_0x6f] !=
       (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      bVar7 = false;
    }
    pAVar9 = (AvatarUIHandlerRemote *)0x0;
    if (bVar7) {
      pAVar9 = pAVar8;
    }
    if (pAVar9 != (AvatarUIHandlerRemote *)0x0) {
      if (((pAVar5->_1).naturalAligment < bVar6) ||
         ((pAVar5->_1).typeHierarchy
          [(int)&(((AvatarUIHandlerRemote *)((int)a + -0x78))->fields).field_0x6f] !=
          (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pAVar9 = (AvatarUIHandlerRemote *)0x0;
      if (bVar7) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 != (AvatarUIHandlerRemote *)0x0) {
        AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_NameTagLabelVisible
                  (pAVar9,0,(MethodInfo *)0x0);
        pCVar10 = (this->fields).triggerCollider;
        if (pCVar10 != (CapsuleCollider *)0x0) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    ((Collider *)pCVar10,0,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pIVar2 = extraout_ECX;
code_?:
  func_?(a,pIVar2);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* CapsuleCollider CreateTriggerCollider() */

CapsuleCollider *
Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_CreateTriggerCollider
          (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar1,*pVVar3,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                             ((Quaternion *)&stack0xffffffd8,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar1,*pQVar4,(MethodInfo *)0x0);
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                 (StringLiteral_Player,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      (this_00,value_00,(MethodInfo *)0x0);
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_AddComponent_85
                                (this_00,
                                 UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::CapsuleCollider>__
                                );
            uVar5 = 0;
            func_?();
            if (this_01 != (Worker *)0x0) {
              auVar6._4_8_ = 0;
              auVar6._0_4_ = uVar5;
              UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
              CapsuleCollider_set_center
                        ((CapsuleCollider *)this_01,(Vector3)(auVar6 << 0x40),(MethodInfo *)0x0);
              UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                        ((Collider *)this_01,1,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._._._.gameObject;
              if (pGVar2 != (GameObject *)0x0) {
                pUVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_47
                                   (pGVar2,
                                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                   );
                if (pUVar7 != (UseInteractorHandler *)0x0) {
                  bVar8 = (TypeInfo__UnityEngine__CapsuleCollider->_1).naturalAligment;
                  if (((pUVar7->klass->_1).naturalAligment < bVar8) ||
                     ((pUVar7->klass->_1).typeHierarchy[bVar8 - 1] !=
                      (Il2CppClass *)TypeInfo__UnityEngine__CapsuleCollider)) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  this_04 = (UseInteractorHandler *)0x0;
                  if (bVar9) {
                    this_04 = pUVar7;
                  }
                  if (this_04 == (UseInteractorHandler *)0x0) goto code_?;
                  fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                           CapsuleCollider_get_height((CapsuleCollider *)this_04,(MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_height((CapsuleCollider *)this_01,fVar10,(MethodInfo *)0x0);
                  fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                           CapsuleCollider_get_radius((CapsuleCollider *)this_04,(MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_radius((CapsuleCollider *)this_01,fVar10,(MethodInfo *)0x0);
                  this_02 = (TriggerBoxEvents *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_85
                                      (this_00,
                                       TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__AddComponent<TriggerBoxEvents>__
                                      );
                  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_03,(Object *)this,
                             MethodInfo__MVAvatarRemote__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                             ,
                             MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                            );
                  if (this_02 != (TriggerBoxEvents *)0x0) {
                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                              (this_02,(EventHandler_1_TriggerEventArgs_ *)this_03,(MethodInfo *)0x0
                              );
                    return (CapsuleCollider *)this_01;
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
  pcVar11 = (code *)swi(3);
  pCVar12 = (CapsuleCollider *)(*pcVar11)();
  return pCVar12;
}


/* Void DeActivate(Int32) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_DeActivate
               (MVAvatarRemote *this,int32_t idTo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
    if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
      pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      if (pOVar1 != (Object *)0x0) {
        (**(code **)&pOVar1->klass[1]._0.byval_arg.attrs)(pOVar1);
        pDVar2 = (this->fields).cullingHandler;
        if (pDVar2 != (DynamicCullingHandler *)0x0) {
          DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(pDVar2,(MethodInfo *)0x0);
          pUVar3 = (this->fields)._._._.ScaleChanged;
          pDVar2 = (this->fields).cullingHandler;
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)pDVar2,
                     MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
                     ,
                     MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
                    );
          pUStack4 =
               (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar3,(Delegate *)this_02,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
          if (pUStack4 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
code_?:
            (this->fields)._._._.ScaleChanged = pUVar3;
            return;
          }
          if (pUStack4->klass ==
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
             ) {
            pUVar3 = pUStack4;
          }
          pUStack5 =
               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
          ;
          if (pUVar3 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
          goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pUStack4 = extraout_ECX;
  pUStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_Destroy
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
  if ((this_00 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) ||
     (this_02 = (AvatarUIHandler *)
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                          (this_00,(MethodInfo *)0x0), this_02 == (AvatarUIHandler *)0x0)) {
code_?:
    func_?();
  }
  else {
    AvatarUIHandler::AvatarUIHandler_ForceDestroy(this_02,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?();
    }
    UpdateController::UpdateController_RemoveLateUpdateObject
              ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_03 == (MVAvatar *)0x0) ||
       (pMVar1 = MVAvatar::MVAvatar_get_Shield(this_03,(MethodInfo *)0x0),
       pMVar1 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
    pDVar2 = *(Delegate **)&(pMVar1->fields)._._.writeThrough;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,(MethodInfo *)0x0
              );
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar4 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar4;
      }
      if (pDVar2 == (Delegate *)0x0) goto code_?;
    }
    *(Delegate **)&(pMVar1->fields)._._.writeThrough = pDVar2;
    this_01 = (this->fields).cullingHandler;
    if (this_01 == (DynamicCullingHandler *)0x0) goto code_?;
    DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_01,(MethodInfo *)0x0);
    object = _UNK_?;
    source = (this->fields)._._._.ScaleChanged;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,object,
               MethodInfo__DynamicCullingHandler__UpdateCullingRadius_MVWorldObjectClient__ScaleChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>__UnityAction_System__Object__void__
              );
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      _UNK_? = (Delegate *)0x0;
      return;
    }
    pDVar4 = (Delegate *)0x0;
    if ((UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)pDVar2->klass ==
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>) {
      pDVar4 = pDVar2;
    }
    if (pDVar4 != (Delegate *)0x0) {
      _UNK_? = pDVar4;
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitAvatarState() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitAvatarState
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.SpawnRoleModeTypes;
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).AvatarStateChangedHandler.method)
              (this,pOVar1,(this->klass->vtable).AttachBody.methodPtr);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVAvatar *)0x0) {
      pMVar2 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
      if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        pDVar3 = *(Delegate **)&(pMVar2->fields)._._.writeThrough;
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                   (MethodInfo *)0x0);
        pDStack4 =
             mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar3,(Delegate *)this_02,(MethodInfo *)0x0);
        pDVar3 = (Delegate *)0x0;
        if (pDStack4 == (Delegate *)0x0) {
code_?:
          *(Delegate **)&(pMVar2->fields)._._.writeThrough = pDVar3;
          return;
        }
        if ((Action__Class *)pDStack4->klass == TypeInfo__System__Action) {
          pDVar3 = pDStack4;
        }
        pAStack5 = TypeInfo__System__Action;
        if (pDVar3 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
  pDStack4 = extraout_ECX;
  pAStack5 = extraout_EDX;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVAvatar::MVAvatar_Initialize((MVAvatar *)this,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
            ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_OwnerActorNr_,pOVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0xffffffff) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_OwnerActorNr_____1,(MethodInfo *)0x0);
    return;
  }
  pTVar2 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
  if ((pTVar2 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) ||
     (pAVar3 = (AvatarUIHandlerRemote *)
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                          (pTVar2,(MethodInfo *)0x0), pAVar3 == (AvatarUIHandlerRemote *)0x0))
  goto code_?;
  bVar4 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
  pAVar5 = pAVar3->klass;
  uVar6 = (uint)bVar4 << 8;
  if (((pAVar5->_1).naturalAligment < bVar4) ||
     (uVar6 = CONCAT13(1,(int3)uVar6),
     (pAVar5->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
    uVar6 = uVar6 & 0xffffff;
  }
  pAVar7 = (AvatarUIHandlerRemote *)0x0;
  if ((char)(uVar6 >> 0x18) != '\0') {
    pAVar7 = pAVar3;
  }
  if (pAVar7 != (AvatarUIHandlerRemote *)0x0) {
    if (((pAVar5->_1).naturalAligment < (byte)(uVar6 >> 8)) ||
       (bVar8 = true,
       (pAVar5->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      bVar8 = false;
    }
    pAVar7 = (AvatarUIHandlerRemote *)0x0;
    if (bVar8) {
      pAVar7 = pAVar3;
    }
    if (pAVar7 != (AvatarUIHandlerRemote *)0x0) {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag(pAVar7,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar9 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar9 == (MVAvatar *)0x0) goto code_?;
      pMVar10 = MVAvatar::MVAvatar_get_Shield(pMVar9,(MethodInfo *)0x0);
      pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
      if ((pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0) ||
         (this_02 = (MVBuildModeAvatarLocal_EditMode *)
                    MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)pMVar10,(int32_t)pOVar1,(MethodInfo *)0x0),
         this_02 == (MVBuildModeAvatarLocal_EditMode *)0x0)) goto code_?;
      bVar11 = MVBuildModeAvatarLocal+EditMode::
              MVBuildModeAvatarLocal_EditMode_get_MovementConstrained(this_02,(MethodInfo *)0x0);
      if ((bVar11 == 3) || (bVar11 == 4)) {
        pTVar2 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
        if (pTVar2 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) goto code_?;
        method_00 = (MethodInfo *)
                    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                    TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                              (pTVar2,(MethodInfo *)0x0);
        iVar12 = func_?();
        if (iVar12 == 0) goto code_?;
        pAVar3 = (AvatarUIHandlerRemote *)func_?();
        AvatarUIHandlerRemote::AvatarUIHandlerRemote_ShowMobileIcon(pAVar3,0xADDR,method_00);
      }
      pTVar2 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
      if ((pTVar2 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) ||
         (pIVar13 = (InventoryItemPreviewer *)
                    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                    TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                              (pTVar2,(MethodInfo *)0x0), pIVar13 == (InventoryItemPreviewer *)0x0))
      goto code_?;
      pOVar14 = (Object__Class *)pIVar13->klass;
      bVar4 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
      uVar15 = (ushort)bVar4;
      if (((pOVar14->_1).naturalAligment < bVar4) ||
         (uVar15 = (ushort)(CONCAT13(1,(uint3)bVar4 << 0x10) >> 0x10),
         (pOVar14->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
        uVar15 = uVar15 & 0xff;
      }
      pIVar16 = (InventoryItemPreviewer *)0x0;
      if ((char)(uVar15 >> 8) != '\0') {
        pIVar16 = pIVar13;
      }
      if (pIVar16 != (InventoryItemPreviewer *)0x0) {
        if (((pOVar14->_1).naturalAligment < (byte)uVar15) ||
           (bVar8 = true,
           (pOVar14->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote))
        {
          bVar8 = false;
        }
        pIVar16 = (InventoryItemPreviewer *)0x0;
        if (bVar8) {
          pIVar16 = pIVar13;
        }
        if (pIVar16 != (InventoryItemPreviewer *)0x0) {
          this_03 = (HealthBar *)
                    InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                              (pIVar16,(MethodInfo *)0x0);
          if (this_03 == (HealthBar *)0x0) goto code_?;
          HealthBar::HealthBar_set_Oxygen(this_03,0.0,(MethodInfo *)0x0);
          MVAvatarRemote_InitializeHealth(this,(MethodInfo *)0x0);
          MVAvatarRemote_InitializeShield(this,(MethodInfo *)0x0);
          pCVar17 = MVAvatarRemote_CreateTriggerCollider(this,(MethodInfo *)0x0);
          (this->fields).triggerCollider = pCVar17;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar9 = (MVAvatar *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar9 == (MVAvatar *)0x0) ||
              (pMVar10 = MVAvatar::MVAvatar_get_Shield(pMVar9,(MethodInfo *)0x0),
              pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0)) ||
             (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  ((MVPlayerContainer *)pMVar10,(MethodInfo *)0x0),
             this_04 == (MVLocalPlayer *)0x0)) goto code_?;
          bVar11 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_04,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar9 = (MVAvatar *)
                      MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar9 == (MVAvatar *)0x0) ||
               (pMVar10 = MVAvatar::MVAvatar_get_Shield(pMVar9,(MethodInfo *)0x0),
               pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
            pDVar18 = *(Delegate **)&(pMVar10->fields)._._.writeThrough;
            pUVar19 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar19,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                       (MethodInfo *)0x0);
            pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar18,(Delegate *)pUVar19,(MethodInfo *)0x0);
            pDVar18 = (Delegate *)0x0;
            if (pDVar20 != (Delegate *)0x0) {
              if ((Action__Class *)pDVar20->klass == TypeInfo__System__Action) {
                pDVar18 = pDVar20;
              }
joined_?:
              if (pDVar18 == (Delegate *)0x0) goto code_?;
            }
          }
          else {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_00 = (this->fields)._.SpawnRoleModeTypes;
            if (this_00 == (MVRuntimeDataVariable *)0x0) goto code_?;
            MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
            (*(code *)(this->klass->vtable).AvatarStateChangedHandler.method)();
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar9 = (MVAvatar *)
                      MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar9 == (MVAvatar *)0x0) ||
               (pMVar10 = MVAvatar::MVAvatar_get_Shield(pMVar9,(MethodInfo *)0x0),
               pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
            pDVar18 = *(Delegate **)&(pMVar10->fields)._._.writeThrough;
            pUVar19 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar19,(Object *)this,MethodInfo__MVAvatarRemote__InitAvatarState__,
                       (MethodInfo *)0x0);
            pDVar20 = mscorlib.dll::System::Delegate::Delegate_Remove
                                (pDVar18,(Delegate *)pUVar19,(MethodInfo *)0x0);
            pDVar18 = (Delegate *)0x0;
            if (pDVar20 != (Delegate *)0x0) {
              if ((Action__Class *)pDVar20->klass == TypeInfo__System__Action) {
                pDVar18 = pDVar20;
              }
              goto joined_?;
            }
          }
          *(Delegate **)&(pMVar10->fields)._._.writeThrough = pDVar18;
          pGVar21 = (this->fields)._._._.gameObject;
          if (pGVar21 != (GameObject *)0x0) {
            pAVar22 = (AvatarRemoteMovementCalculator *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_AddComponent_85
                                (pGVar21,
                                 AvatarRemoteMovementCalculator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarRemoteMovementCalculator>__
                                );
            (this->fields).avatarRemoteMovementCalculator = pAVar22;
            this_05 = (AvatarLimbManager *)func_?();
            WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
            WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                      ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this_05,
                       (MethodInfo *)0x0);
            this_01 = (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)(this->fields)._.avatar;
            (this->fields)._.limbManager = this_05;
            if ((this_01 != (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0) &&
               (TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                          (this_01,(MethodInfo *)0x0), this_05 != (AvatarLimbManager *)0x0)) {
              (*(code *)(((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__Class *)
                         this_05->klass)->vtable).System_Collections_IEnumerator_get_Current.method)
                        ();
              pGVar21 = (this->fields)._._._.gameObject;
              if (pGVar21 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar21,0,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar9 = (MVAvatar *)
                          MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar9 != (MVAvatar *)0x0) {
                  pMVar10 = MVAvatar::MVAvatar_get_Shield(pMVar9,(MethodInfo *)0x0);
                  pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,
                                      (MethodInfo *)0x0);
                  if (pMVar10 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                    this_06 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                        ((MVPlayerContainer *)pMVar10,(int32_t)pOVar1,
                                         (MethodInfo *)0x0);
                    id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
                    if (this_06 != (MVPlayer *)0x0) {
                      MVPlayer::MVPlayer_NotifyAvatarCreated(this_06,(int32_t)id,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void InitializeHealth() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitializeHealth
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_03 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__MVAvatarRemote___InitializeHealth_c__AnonStorey0);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_03,(MethodInfo *)0x0);
  if (this_03 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_03->fields)._current = (Object *)this;
    this_00 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
    if (this_00 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
      pIVar1 = (InventoryItemPreviewer *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         (this_00,(MethodInfo *)0x0);
      if (pIVar1 != (InventoryItemPreviewer *)0x0) {
        bVar2 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
        bVar3 = (((Object__Class *)pIVar1->klass)->_1).naturalAligment;
        uVar4 = (uint)CONCAT11(bVar3,bVar2) << 8;
        uVar5 = CONCAT11(bVar3,bVar2) & 0xff;
        if ((bVar3 < bVar2) ||
           (uVar4 = CONCAT13(1,(uint3)CONCAT11(bVar3,bVar2) << 8),
           (((Object__Class *)pIVar1->klass)->_1).typeHierarchy[uVar5 - 1] !=
           (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
          uVar4 = uVar4 & 0xffffff;
        }
        pIVar6 = (InventoryItemPreviewer *)0x0;
        if ((char)(uVar4 >> 0x18) != '\0') {
          pIVar6 = pIVar1;
        }
        pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__AvatarUIHandlerRemote;
        if (pIVar6 == (InventoryItemPreviewer *)0x0) goto code_?;
        if (((byte)(uVar4 >> 0x10) < (byte)(uVar4 >> 8)) ||
           (bVar8 = true,
           (((Object__Class *)pIVar1->klass)->_1).typeHierarchy[uVar5 - 1] !=
           (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
          bVar8 = false;
        }
        pIVar6 = (InventoryItemPreviewer *)0x0;
        if (bVar8) {
          pIVar6 = pIVar1;
        }
        if (pIVar6 == (InventoryItemPreviewer *)0x0) goto code_?;
        this_04 = (WinningConditionDebriefing *)
                  InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                            (pIVar6,(MethodInfo *)0x0);
        (this_03->fields)._this = this_04;
        pMVar9 = (this->fields)._.Health;
        if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
          fVar10 = (float10)(*(code *)(pMVar9->klass->vtable).get_Value.method)
                                      (pMVar9,(pMVar9->klass->vtable).set_Value.methodPtr);
          if (this_04 != (WinningConditionDebriefing *)0x0) {
            HealthBar::HealthBar_set_Health((HealthBar *)this_04,(float)fVar10,(MethodInfo *)0x0);
            pMVar9 = (this->fields)._.Health;
            this_01 = (this->fields)._.body;
            if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
              fVar10 = (float10)(*(code *)(pMVar9->klass->vtable).get_Value.method)
                                          (pMVar9,(pMVar9->klass->vtable).set_Value.methodPtr);
              if (this_01 != (MVBody *)0x0) {
                MVBody::MVBody_InitializeHealth(this_01,(float)fVar10,(MethodInfo *)0x0);
                pMVar9 = (this->fields)._.Health;
                if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                  pMVar11 = (pMVar9->fields)._.OnChange;
                  pOVar12 = (Object *)&UNK_?;
                  pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar13,pOVar12,
                             MethodInfo__MVAvatarRemote___InitializeHealth_c__AnonStorey0____m__0_System__Object_
                             ,(MethodInfo *)0x0);
                  pIVar1 = (InventoryItemPreviewer *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pMVar11,(Delegate *)pUVar13,(MethodInfo *)0x0);
                  pIVar6 = (InventoryItemPreviewer *)0x0;
                  if (pIVar1 != (InventoryItemPreviewer *)0x0) {
                    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pIVar1->klass ==
                        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pIVar6 = pIVar1;
                    }
                    pMVar7 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                    if (pIVar6 == (InventoryItemPreviewer *)0x0) goto code_?;
                  }
                  (pMVar9->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pIVar6;
                  pMVar14 = (this->fields)._.MaxHealth;
                  this_02 = pOVar12[1].klass;
                  if (pMVar14 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
                    iVar15 = (*(code *)(pMVar14->klass->vtable).get_Value.method)
                                       (pMVar14,(pMVar14->klass->vtable).set_Value.methodPtr);
                    if (this_02 != (Object__Class *)0x0) {
                      HealthBar::HealthBar_set_MaxHealth
                                ((HealthBar *)this_02,(float)iVar15,(MethodInfo *)0x0);
                      pMVar14 = (this->fields)._.MaxHealth;
                      if (pMVar14 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
                        pMVar11 = (pMVar14->fields)._.OnChange;
                        pOVar12 = (Object *)&UNK_?;
                        pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                  *)func_?(
                                                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                        ;
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar13,pOVar12,
                                   MethodInfo__MVAvatarRemote___InitializeHealth_c__AnonStorey0____m__1_System__Object_
                                   ,(MethodInfo *)0x0);
                        pIVar1 = (InventoryItemPreviewer *)
                                 mscorlib.dll::System::Delegate::Delegate_Combine
                                           ((Delegate *)pMVar11,(Delegate *)pUVar13,(MethodInfo *)0x0)
                        ;
                        pIVar6 = (InventoryItemPreviewer *)0x0;
                        if (pIVar1 != (InventoryItemPreviewer *)0x0) {
                          if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pIVar1->klass ==
                              TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                            pIVar6 = pIVar1;
                          }
                          pMVar7 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
                          if (pIVar6 == (InventoryItemPreviewer *)0x0) goto code_?;
                        }
                        (pMVar14->fields)._.OnChange =
                             (MVRuntimeDataVariable_OnChangeDelegate *)pIVar6;
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
  func_?(0);
  pIVar1 = extraout_ECX;
  pMVar7 = extraout_EDX;
code_?:
  func_?(pIVar1,pMVar7);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitializeShield() */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_InitializeShield
               (MVAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    a = (pMVar1->fields)._._.OnChange;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__MVAvatarRemote___InitializeShield_m__0_System__Object_,(MethodInfo *)0x0)
    ;
    pAVar2 = (AvatarUIHandlerRemote *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
    pAVar3 = (AvatarUIHandlerRemote *)0x0;
    if (pAVar2 != (AvatarUIHandlerRemote *)0x0) {
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pAVar2->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pAVar3 = pAVar2;
      }
      pMVar4 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pAVar3 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    }
    (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pAVar3;
    this_00 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
    if (this_00 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
      pAVar2 = (AvatarUIHandlerRemote *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         (this_00,(MethodInfo *)0x0);
      if (pAVar2 != (AvatarUIHandlerRemote *)0x0) {
        pDVar5 = (Delegate__Class *)pAVar2->klass;
        bVar6 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
        if (((pDVar5->_1).naturalAligment < bVar6) ||
           (bVar7 = true,
           (pDVar5->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote))
        {
          bVar7 = false;
        }
        pAVar3 = (AvatarUIHandlerRemote *)0x0;
        if (bVar7) {
          pAVar3 = pAVar2;
        }
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__AvatarUIHandlerRemote;
        if (pAVar3 == (AvatarUIHandlerRemote *)0x0) goto code_?;
        if (((pDVar5->_1).naturalAligment < bVar6) ||
           (bVar7 = true,
           (pDVar5->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote))
        {
          bVar7 = false;
        }
        pAVar3 = (AvatarUIHandlerRemote *)0x0;
        if (bVar7) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (AvatarUIHandlerRemote *)0x0) goto code_?;
        this_03 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                            (pAVar3,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._.shield;
        if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          fVar8 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                     (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
          if (this_03 != (ShieldBar *)0x0) {
            ShieldBar::ShieldBar_set_Shield(this_03,(float)fVar8,(MethodInfo *)0x0);
            pMVar1 = (this->fields)._.shield;
            this_01 = (this->fields)._.body;
            if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
              fVar8 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                         (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
              if (this_01 != (MVBody *)0x0) {
                MVBody::MVBody_InitializeShield(this_01,(float)fVar8,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pAVar2 = extraout_ECX;
  pMVar4 = extraout_EDX;
code_?:
  func_?(pAVar2,pMVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnAnimationChange(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_OnAnimationChange
               (MVAvatarRemote *this,Object *newAnimationData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.body;
  if (pMVar1 == (MVBody *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    MVBody::MVBody_OnAnimationUpdate(pMVar1,newAnimationData,(MethodInfo *)0x0);
    this_00 = (this->fields)._.SpawnRoleModeTypes;
    if ((this_00 == (MVRuntimeDataVariable *)0x0) ||
       (pOVar2 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0),
       pOVar2 == (Object *)0x0)) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pbVar3 = (byte *)func_?();
    if ((*pbVar3 & 1) == 0) {
      return;
    }
    if (newAnimationData == (Object *)0x0) {
      this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
code_?:
      pMVar1 = (this->fields)._.body;
      if (((pMVar1 == (MVBody *)0x0) ||
          (this_01 = MVBody::MVBody_get_Animation(pMVar1,(MethodInfo *)0x0),
          this_02 == (Dictionary_2_System_Type_Pool_ *)0x0)) ||
         (pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_02,(Type *)StringLiteral_state,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), this_01 == (BoneAnimation *)0x0)) goto code_?;
      animationName = (Pool *)0x0;
      if (pPVar4 == (Pool *)0x0) {
code_?:
        BoneAnimation::BoneAnimation_Play(this_01,(String *)animationName,(MethodInfo *)0x0);
        return;
      }
      if ((String__Class *)pPVar4->klass == TypeInfo__System__String) {
        animationName = pPVar4;
      }
      if (animationName != (Pool *)0x0) goto code_?;
      goto code_?;
    }
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((newAnimationData->klass->_1).naturalAligment < bVar5) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (newAnimationData->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar6) {
      this_02 = (Dictionary_2_System_Type_Pool_ *)newAnimationData;
    }
    if (this_02 != (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  }
  func_?();
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
  this_00 = (this->fields)._.avatar;
  if (this_00 != (Avatar_1 *)0x0) {
    Avatar::Avatar_1_OnEnterVehicle(this_00,(MethodInfo *)0x0);
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
  if (this_00 != (Avatar_1 *)0x0) {
    Avatar::Avatar_1_OnExitVehicle(this_00,(MethodInfo *)0x0);
    (this->fields)._IsInVehicle_k__BackingField = 0;
    MVAvatar::MVAvatar_HandleLeaveVehicle((MVAvatar *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_VisualizeBulletImpact
               (MVAvatarRemote *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  VVar1 = voxelHit;
  auVar2._0_52_ = in_stack_3._0_52_;
  auVar2._52_4_ = in_ECX;
  auVar2._56_4_ = unaff_EBP;
  auVar4._52_8_ = auVar2._52_8_;
  auVar4._0_48_ = in_stack_3._0_48_;
  auVar4._48_4_ = unaff_EBX;
  auVar5._48_12_ = auVar4._48_12_;
  auVar5._0_44_ = in_stack_3._0_44_;
  auVar5._44_4_ = unaff_ESI;
  auVar6._44_16_ = auVar5._44_16_;
  auVar6._0_40_ = in_stack_3._0_40_;
  auVar6._40_4_ = unaff_EDI;
  if (cRam_? == '\0') {
    auVar7._40_20_ = auVar6._40_20_;
    auVar7._0_36_ = in_stack_3._0_36_;
    auVar7._36_4_ = _UNK_?;
    auVar6._36_24_ = auVar7._36_24_;
    auVar6._0_32_ = in_stack_3._0_32_;
    auVar6._32_4_ = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  auVar8._56_4_ = auVar6._56_4_;
  auVar8._0_52_ = auVar6._0_52_;
  auVar8._52_4_ = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    auVar9._40_20_ = auVar8._40_20_;
    auVar9._0_36_ = auVar6._0_36_;
    auVar9._36_4_ = TypeInfo__MVGameControllerBase;
    auVar8._36_24_ = auVar9._36_24_;
    auVar8._0_32_ = auVar6._0_32_;
    auVar8._32_4_ = &UNK_?;
    func_?();
  }
  auVar10._40_20_ = auVar8._40_20_;
  auVar10._0_36_ = auVar8._0_36_;
  auVar10._36_4_ = 0;
  auVar11._36_24_ = auVar10._36_24_;
  auVar11._0_32_ = auVar8._0_32_;
  auVar11._32_4_ = &UNK_?;
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    auVar12._44_16_ = auVar11._44_16_;
    auVar12._0_40_ = auVar11._0_40_;
    auVar12._40_4_ = 0;
    auVar13._40_20_ = auVar12._40_20_;
    auVar13._0_36_ = auVar11._0_36_;
    auVar13._36_4_ = this_00;
    auVar14._36_24_ = auVar13._36_24_;
    auVar14._0_32_ = auVar11._0_32_;
    auVar14._32_4_ = &UNK_?;
    this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      auVar15._52_8_ = auVar14._52_8_;
      auVar15._0_48_ = auVar14._0_48_;
      auVar15._48_4_ = 0;
      auVar16._48_12_ = auVar15._48_12_;
      auVar16._0_44_ = auVar14._0_44_;
      auVar16._44_4_ = &stack0xfffffff8;
      auVar17._44_16_ = auVar16._44_16_;
      auVar17._0_40_ = auVar14._0_40_;
      auVar17._40_4_ = lineOfFire.m_Direction.z;
      auVar18._40_20_ = auVar17._40_20_;
      auVar18._0_36_ = auVar14._0_36_;
      auVar18._36_4_ = this_01;
      auVar19._36_24_ = auVar18._36_24_;
      auVar19._0_32_ = auVar14._0_32_;
      auVar19._32_4_ = &UNK_?;
      bVar20 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                        ((MVPlayerContainer *)this_01,(int32_t)lineOfFire.m_Direction.z,
                         (MVPlayer **)&stack0xfffffff8,(MethodInfo *)0x0);
      if (bVar20 == 0) {
        return;
      }
      if (auVar19._52_4_ != (MVPlayer *)0x0) {
        bVar20 = MVPlayer::MVPlayer_IsOnSameTeam_1
                          (auVar19._52_4_,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (bVar20 != 0) {
          return;
        }
        bVar20 = MVAvatar::MVAvatar_IsInMode
                          ((MVAvatar *)this,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
        if (bVar20 != 0) {
          return;
        }
        pAVar21 = (this->fields)._.avatar;
        if (pAVar21 != (Avatar_1 *)0x0) {
          bVar20 = Avatar::Avatar_1_HasModifierEffect
                            (pAVar21,AvatarModifierEffect__Enum_Invulnerable,(MethodInfo *)0x0);
          if (bVar20 != 0) {
            return;
          }
          pAVar21 = (this->fields)._.avatar;
          if (pAVar21 != (Avatar_1 *)0x0) {
            voxelHit_00.cubePos._0_4_ = shooterActorNumber;
            voxelHit_00._0_24_ = lineOfFire;
            voxelHit_00._28_4_ = 0;
            voxelHit_00.face = voxelHit.face;
            voxelHit_00.isCubeHit = voxelHit.isCubeHit;
            voxelHit_00._37_3_ = voxelHit._37_3_;
            voxelHit_00.woId = voxelHit.woId;
            voxelHit_00.cube = voxelHit.cube;
            voxelHit_00.distance = voxelHit.distance;
            voxelHit_00.collider = voxelHit.collider;
            voxelHit_00.transform = voxelHit.transform;
            voxelHit_00._60_12_ = VVar1._60_12_;
            Avatar::Avatar_1_VisualizeBulletImpact
                      (pAVar21,voxelHit_00,lineOfFire,shooterActorNumber,0.0,
                       (MethodInfo *)voxelHit.face);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((this_02 != (MVNetworkGame *)0x0) &&
               (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
               this_03 != (MVLocalPlayer *)0x0)) {
              pSVar22 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,
                                  (MethodInfo *)0x0);
              if ((String *)lineOfFire.m_Direction.z != pSVar22) {
                return;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_04 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_PlayPlingSound(this_04,(MethodInfo *)0x0);
                pIVar23 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI
                                   ((MethodInfo *)0x0);
                if (pIVar23 != (IPlayModeUI *)0x0) {
                  pIVar24 = pIVar23->klass;
                  uVar25 = 0;
                  uVar26._0_1_ = (pIVar24->_1).rank;
                  uVar26._1_1_ = (pIVar24->_1).minimumAlignment;
                  if (uVar26 != 0) {
                    do {
                      if (pIVar24->interfaceOffsets[uVar25].interfaceType ==
                          (Il2CppClass *)TypeInfo__IPlayModeUI) {
                        ppMVar27 = &(&(pIVar23->klass->vtable).GetCrossHair)
                                   [pIVar24->interfaceOffsets[uVar25].offset].method;
                        goto code_?;
                      }
                      uVar25 = uVar25 + 1;
                    } while (uVar25 < uVar26);
                  }
                  iStack28 = 2;
                  pIStack29 = TypeInfo__IPlayModeUI;
                  ppMVar27 = (MethodInfo **)func_?();
code_?:
                  iStack28 = (int)ppMVar27[1];
                  pIStack29 = (IPlayModeUI__Class *)pIVar23;
                  iStack28 = (*(code *)*ppMVar27)();
                  if (iStack28 != 0) {
                    pIStack29 = (IPlayModeUI__Class *)TypeInfo__IGUICrossHair;
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
  iStack28 = 0;
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void <InitializeShield>m__0(Object) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote__InitializeShield_m__0
               (MVAvatarRemote *this,Object *shield,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
  if (pTVar1 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
code_?:
    func_?(0);
    shield = extraout_EDX;
  }
  else {
    pAVar2 = (AvatarUIHandlerRemote *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
             TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                       (pTVar1,(MethodInfo *)0x0);
    if (pAVar2 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    pAVar3 = pAVar2->klass;
    bVar4 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    unaff_ESI = (Single__Class *)(uint)bVar4;
    if (((pAVar3->_1).naturalAligment < bVar4) ||
       (bVar5 = true,
       (pAVar3->_1).typeHierarchy[(int)((int)&unaff_ESI[-1].vtable.Equals_1.method + 3)] !=
       (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      bVar5 = false;
    }
    pAVar6 = (AvatarUIHandlerRemote *)0x0;
    if (bVar5) {
      pAVar6 = pAVar2;
    }
    pAVar7 = TypeInfo__AvatarUIHandlerRemote;
    if (pAVar6 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    if (((pAVar3->_1).naturalAligment < bVar4) ||
       ((pAVar3->_1).typeHierarchy[(int)((int)&unaff_ESI[-1].vtable.Equals_1.method + 3)] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pAVar6 = (AvatarUIHandlerRemote *)0x0;
    if (bVar5) {
      pAVar6 = pAVar2;
    }
    if (pAVar6 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    pSVar8 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(pAVar6,(MethodInfo *)0x0);
    if (pSVar8 == (ShieldBar *)0x0) goto code_?;
    ShieldBar::ShieldBar_get_Shield(pSVar8,(MethodInfo *)0x0);
    pMVar9 = (this->fields)._.shield;
    if (pMVar9 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    previousHealth = &UNK_?;
    fVar10 = (float10)(*(code *)(pMVar9->klass->vtable).get_Value.method)
                                (pMVar9,(pMVar9->klass->vtable).set_Value.methodPtr);
    MVAvatar::MVAvatar_TrySpawningHealParticles
              ((MVAvatar *)this,(float)previousHealth,(float)fVar10,(MethodInfo *)0x0);
    pTVar1 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)(this->fields)._.avatar;
    if (pTVar1 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) goto code_?;
    pAVar2 = (AvatarUIHandlerRemote *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
             TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                       (pTVar1,(MethodInfo *)0x0);
    if (pAVar2 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    pAVar3 = pAVar2->klass;
    bVar4 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
    unaff_ESI = (Single__Class *)(uint)bVar4;
    bVar11 = (pAVar3->_1).naturalAligment;
    if ((bVar11 < bVar4) ||
       ((pAVar3->_1).typeHierarchy[(int)((int)&unaff_ESI[-1].vtable.Equals_1.method + 3)] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pAVar6 = (AvatarUIHandlerRemote *)0x0;
    if (bVar5) {
      pAVar6 = pAVar2;
    }
    pAVar7 = TypeInfo__AvatarUIHandlerRemote;
    if (pAVar6 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    if ((bVar11 < bVar4) ||
       ((pAVar3->_1).typeHierarchy[(int)((int)&unaff_ESI[-1].vtable.Equals_1.method + 3)] !=
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pAVar6 = (AvatarUIHandlerRemote *)0x0;
    if (bVar5) {
      pAVar6 = pAVar2;
    }
    if (pAVar6 == (AvatarUIHandlerRemote *)0x0) goto code_?;
    pSVar8 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(pAVar6,(MethodInfo *)0x0);
    if (pSVar8 == (ShieldBar *)0x0) goto code_?;
    unaff_ESI = TypeInfo__System__Single;
    if (shield == (Object *)0x0) goto code_?;
    if ((shield->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar12 = (float *)func_?(shield);
      ShieldBar::ShieldBar_set_Shield(pSVar8,*pfVar12,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(shield,unaff_ESI);
  pAVar2 = extraout_ECX;
  pAVar7 = extraout_EDX_00;
code_?:
  func_?(pAVar2,pAVar7);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVAvatarRemote(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote__ctor
               (MVAvatarRemote *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (DynamicCullingHandler *)func_?(TypeInfo__DynamicCullingHandler);
  DynamicCullingHandler::DynamicCullingHandler__ctor(this_00,3.5,(MethodInfo *)0x0);
  (this->fields).cullingHandler = this_00;
  (this->fields).impulseMagnitudeFactor = 0.6;
  (this->fields).velocityMinMagnitude = 1500.0;
  (this->fields).velocityMaxMagnitude = 5000.0;
  (this->fields).minVelocity = 700.0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).prevHitTime = fVar1 - _UNK_?;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    avatarPrefab = (GameObject *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                   JsonSchemaType]::
                   Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                             ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                               *)this_01,(MethodInfo *)0x0);
    MVAvatar::MVAvatar__ctor((MVAvatar *)this,data,avatarPrefab,worldObjects,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
              ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._.Animation;
    (this->fields)._IsInVehicle_k__BackingField = 0;
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
      pMStack3 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      pMVar4 = (pMVar2->fields).OnChange;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,(this->klass->vtable).OnHealthChange.methodPtr,
                 (MethodInfo *)0x0);
      pMStack5 =
           (MVRuntimeDataVariable_OnChangeDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar4,(Delegate *)this_02,(MethodInfo *)0x0);
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMStack5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
        (pMVar2->fields).OnChange = pMVar4;
        return;
      }
      if (pMStack5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMStack5;
      }
      pMStack6 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  pMStack3 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
  func_?();
  pMStack5 = extraout_ECX;
  pMStack6 = extraout_EDX;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).avatarRemoteMovementCalculator;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (SentryGunBeam *)(this->fields).avatarRemoteMovementCalculator;
    if (this_00 == (SentryGunBeam *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    pVVar3 = SentryGunBeam::SentryGunBeam_get_StartPosition
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  }
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Vector3 get_VelocityRelative() */

Vector3 * Assembly-CSharp.dll::MVAvatarRemote::MVAvatarRemote_get_VelocityRelative
                    (Vector3 *__return_storage_ptr__,MVAvatarRemote *this,MethodInfo *method)

{
  bVar1 = (this->fields)._IsInVehicle_k__BackingField;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1 != 0) {
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    VStack_2.z = 0.0;
    func_?(&VStack_2,0,0,0);
    __return_storage_ptr__->x = VStack_2.x;
    __return_storage_ptr__->y = VStack_2.y;
    __return_storage_ptr__->z = VStack_2.z;
    return __return_storage_ptr__;
  }
  this_00 = (SentryGunBeam *)(this->fields).avatarRemoteMovementCalculator;
  if (this_00 != (SentryGunBeam *)0x0) {
    pVVar3 = SentryGunBeam::SentryGunBeam_get_StartPosition(&VStack_2,this_00,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    __return_storage_ptr__->x = pVVar3->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar6)();
  return pVVar3;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (_UNK_? <= fVar1 - (this->fields).prevHitTime) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e == (TriggerEventArgs *)0x0) || (this_01 == (MVWorldObjectClientManager *)0x0))
    goto code_?;
    this_02 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (this_02 != (DayNightCycle *)0x0) {
      bVar2 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      if (((this_02->klass->_1).naturalAligment < bVar2) ||
         ((MVVehicleBase__Class *)(this_02->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__MVVehicleBase)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pDVar4 = (DayNightCycle *)0x0;
      if (bVar3) {
        pDVar4 = this_02;
      }
      if (pDVar4 != (DayNightCycle *)0x0) {
        this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0);
        if (this_03 == (CelestialParam *)0x0) {
code_?:
          func_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                           ((GameObject *)this_03,
                            MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                           );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pUVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          if (pUVar6 == (UseInteractorHandler *)0x0) goto code_?;
          puVar8 = (undefined8 *)(*(code *)pUVar6->klass[1]._0.namespaze)();
          fVar1 = *(float *)(puVar8 + 1);
          method_00 = (MethodInfo *)((ulonglong)*puVar8 >> 0x20);
          puVar9 = &UNK_?;
          fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a_00.y = (float)method_00;
          a_00.x = (float)puVar9;
          a_00.z = fVar1;
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                             ((Vector3 *)&stack0xffffffdc,a_00,fVar10,(MethodInfo *)0x0);
          fVar1 = pVVar11->x;
          fVar10 = pVVar11->z;
          fVar12 = (float10)func_?();
          if ((this->fields).minVelocity <= (float)fVar12) {
            fVar12 = (float10)func_?();
            fVar13 = (this->fields).velocityMinMagnitude;
            max = (this->fields).velocityMaxMagnitude;
            value = (float)fVar12;
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              func_?();
            }
            fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                               (value,fVar13,max,(MethodInfo *)0x0);
            func_?();
            uVar14._0_1_ = 0;
            uVar14._1_1_ = 0;
            uVar14._2_2_ = 0x3f80;
            func_?();
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a.y = (float)uVar14;
            a.x = fVar1;
            a.z = fVar10;
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               ((Vector3 *)&stack0xffffffdc,a,fVar13 * 0.0,(MethodInfo *)0x0);
            fVar1 = pVVar11->z;
            this_00 = (this->fields)._._._.gameObject;
            if (this_00 == (GameObject *)0x0) goto code_?;
            pUVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                               (this_00,
                                InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                               );
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pUVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              arg1 = (Object *)func_?();
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              message = mscorlib.dll::System::String::String_Concat
                                  ((Object *)StringLiteral_Applying_impulse_,arg1,(MethodInfo *)0x0)
              ;
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              uVar14 = 0;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)message,(MethodInfo *)0x0);
              impulse.y = (float)uVar14;
              impulse.x = (float)message;
              impulse.z = fVar1;
              pIVar15 = ImpulseHitPackage::ImpulseHitPackage_Create
                                  ((InteractionData *)&stack0xffffffe8,impulse,(MethodInfo *)0x0);
              if (pUVar6 == (UseInteractorHandler *)0x0) goto code_?;
              InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                        ((InteractionDataHandlerBase *)pUVar6,*pIVar15,0,(MethodInfo *)0x0);
              fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              (this->fields).prevHitTime = fVar1;
            }
          }
        }
      }
    }
  }
  return;
}

