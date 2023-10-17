
/* Void Initialize(Int32) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_Initialize
               (AvatarBadge *this,int32_t ownerActorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarBadge__OnLevelingInitialized__);
    func_?(&MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).scaleAnimation;
  (this->fields).ownerActorId = ownerActorId;
  if (pSVar1 == (ScaleAnimations *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pSVar2 = (pSVar1->fields).OnIntermediateScaleAnimationStopped;
    this_00 = (UnityAction_1_System_Single_ *)
              func_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    if (this_00 == (UnityAction_1_System_Single_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_,(MethodInfo *)0x0)
    ;
    pSVar2 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pSVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pSVar2 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      (pSVar1->fields).OnIntermediateScaleAnimationStopped =
           (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
    }
    else {
      pSVar3 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      if (pSVar2->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
      goto code_?;
      (pSVar1->fields).OnIntermediateScaleAnimationStopped = pSVar3;
      pSVar3 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      if (pSVar2->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
      goto code_?;
    }
    func_?();
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
      AvatarBadge_OnLevelingInitialized(this,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar4 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__AvatarBadge__OnLevelingInitialized__,
               (MethodInfo *)0x0);
    pUVar4 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pUVar4 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
      func_?();
      return;
    }
    pUVar5 = (UnityAction *)0x0;
    if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar5 = pUVar4;
    }
    if (pUVar5 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar5;
      pUVar5 = (UnityAction *)0x0;
      if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar5 = pUVar4;
      }
      if (pUVar5 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnBadgeTextureReceived(UnityWebRequest) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_OnBadgeTextureReceived
               (AvatarBadge *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Failed_to_get__);
    func_?(&StringLiteral_UIItems);
    cRam_? = '\x01';
  }
  x = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::DownloadHandlerTexture
      ::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = (this->fields).badgeRenderer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pMVar2 = (this->fields).badgeRenderer;
      if (pMVar2 != (MeshRenderer *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pMVar2,(MethodInfo *)0x0);
        value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_UIItems,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (this_00,value,(MethodInfo *)0x0);
          (this->fields).badgeTextureAsset = (Texture *)x;
          func_?();
          pSVar3 = (this->fields).scaleAnimation;
          if (pSVar3 != (ScaleAnimations *)0x0) {
            (*(pSVar3->klass->vtable).Play.methodPtr)(pSVar3,0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar4 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Failed_to_get__,pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar4,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_OnDestroy(AvatarBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&
                    MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&MethodInfo__AvatarBadge__OnLevelingInitialized__);
    func_?(&MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_);
    func_?(&MethodInfo__AvatarBadge__UpdateBadge_int_);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_01 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_01 == (Action_1_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BadgeManager);
    }
    BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__AvatarBadge__OnLevelingInitialized__,
               (MethodInfo *)0x0);
    pUVar1 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar1,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pUVar1 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
      func_?();
      bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 == (MVNetworkGame *)0x0) {
        return;
      }
      if ((this->fields).ownerActorId != -1) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 == (MVNetworkGame *)0x0) ||
           (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
        goto code_?;
        bVar2 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                          (pMVar4,(this->fields).ownerActorId,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar3 == (MVNetworkGame *)0x0) ||
            (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0)) ||
           (pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                               (pMVar4,(this->fields).ownerActorId,(MethodInfo *)0x0),
           pMVar5 == (MVPlayer *)0x0)) goto code_?;
        pUVar6 = (pMVar5->fields).OnLevelChanged;
        this_03 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (this_03 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_03,(Object *)this,MethodInfo__AvatarBadge__UpdateBadge_int_,
                   (MethodInfo *)0x0);
        pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pUVar6,(Delegate *)this_03,(MethodInfo *)0x0);
        if (pDVar7 == (Delegate *)0x0) {
          (pMVar5->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
code_?:
          func_?();
          goto code_?;
        }
        pUVar6 = (UnityAction_1_System_Int32_ *)func_?();
        if (pUVar6 != (UnityAction_1_System_Int32_ *)0x0) {
          (pMVar5->fields).OnLevelChanged = pUVar6;
          iVar8 = func_?();
          if (iVar8 != 0) goto code_?;
        }
        goto code_?;
      }
code_?:
      pSVar9 = (this->fields).scaleAnimation;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pSVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
code_?:
        this_00 = (this->fields).badgeRenderer;
        if (this_00 != (MeshRenderer *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_00,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pSVar9 = (this->fields).scaleAnimation;
      if (pSVar9 == (ScaleAnimations *)0x0) goto code_?;
      pSVar10 = (pSVar9->fields).OnIntermediateScaleAnimationStopped;
      this_04 = (UnityAction_1_System_Single_ *)
                func_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
      if (this_04 == (UnityAction_1_System_Single_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (this_04,(Object *)this,
                 MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_,
                 (MethodInfo *)0x0);
      pSVar10 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pSVar10,(Delegate *)this_04,(MethodInfo *)0x0);
      if (pSVar10 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        (pSVar9->fields).OnIntermediateScaleAnimationStopped =
             (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
code_?:
        func_?();
        goto code_?;
      }
      pSVar11 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      if (pSVar10->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pSVar11 = pSVar10;
      }
      if (pSVar11 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        (pSVar9->fields).OnIntermediateScaleAnimationStopped = pSVar11;
        pSVar11 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        if (pSVar10->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
          pSVar11 = pSVar10;
        }
        if (pSVar11 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
        goto code_?;
      }
      goto code_?;
    }
    pUVar12 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar12 = pUVar1;
    }
    if (pUVar12 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar12;
    pUVar12 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar12 = pUVar1;
    }
    if (pUVar12 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnLevelingInitialized() */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_OnLevelingInitialized
               (AvatarBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarBadge__UpdateBadge_int_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar2 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                       (this_00,(this->fields).ownerActorId,(MethodInfo *)0x0);
    unaff_EBX = (UnityAction_1_System_Int32___Class *)this;
    if (pMVar2 != (MVPlayer *)0x0) {
      IStack_3.m_value = (pMVar2->fields).level;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        func_?(&
                        MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                       );
        func_?(&TypeInfo__BadgeManager);
        cRam_? = '\x01';
      }
      unaff_EDI.m_value = IStack_3.m_value;
      this_02 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_02 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BadgeManager);
        }
        BadgeManager::BadgeManager_GetBadgeTexture
                  (unaff_EDI.m_value,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,
                   (MethodInfo *)0x0);
        this_01 = (this->fields).levelText;
        value = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
        unaff_EDI.m_value = 0;
        if (this_01 != (TextMesh *)0x0) {
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (this_01,value,(MethodInfo *)0x0);
          this_03 = (UnityAction_1_System_Int32Enum_ *)
                    func_?((pMVar2->fields).OnLevelChanged);
          unaff_EDI.m_value = 0;
          if (this_03 != (UnityAction_1_System_Int32Enum_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_03,(Object *)this,MethodInfo__AvatarBadge__UpdateBadge_int_,
                       (MethodInfo *)0x0);
            unaff_EDI.m_value =
                 (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)0x0,(Delegate *)this_03,(MethodInfo *)0x0);
            unaff_EBX = TypeInfo__UnityEngine__Events__UnityAction<int>;
            if ((Delegate *)unaff_EDI.m_value == (Delegate *)0x0) {
              (pMVar2->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
              pDStack4 = (Delegate *)&(pMVar2->fields).OnLevelChanged;
              pUStack5 = (UnityAction_1_System_Int32___Class *)unaff_EDI.m_value;
              func_?();
              return;
            }
            pUStack5 = TypeInfo__UnityEngine__Events__UnityAction<int>;
            pDStack4 = (Delegate *)unaff_EDI.m_value;
            pUVar6 = (UnityAction_1_System_Int32_ *)func_?();
            if (pUVar6 != (UnityAction_1_System_Int32_ *)0x0) {
              (pMVar2->fields).OnLevelChanged = pUVar6;
              unaff_EBX = TypeInfo__UnityEngine__Events__UnityAction<int>;
              pUStack5 = TypeInfo__UnityEngine__Events__UnityAction<int>;
              pDStack4 = (Delegate *)unaff_EDI.m_value;
              pUStack5 = (UnityAction_1_System_Int32___Class *)func_?();
              if (pUStack5 != (UnityAction_1_System_Int32___Class *)0x0) {
                pDStack4 = (Delegate *)&(pMVar2->fields).OnLevelChanged;
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  pDStack4 = (Delegate *)unaff_EDI.m_value;
  pUStack5 = unaff_EBX;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ScaleAnimationIntermediateCallback(Single) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_ScaleAnimationIntermediateCallback
               (AvatarBadge *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    func_?(&StringLiteral_GUIDevScene);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
  }
  SStack_1 = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
             SceneManager_GetActiveScene((MethodInfo *)0x0);
  a = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::Scene::Scene_get_name
                (&SStack_1,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::String::String_op_Inequality
                    (a,StringLiteral_GUIDevScene,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  this_00 = (this->fields).badgeRenderer;
  if ((this_00 != (MeshRenderer *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_00,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
              (this_01,(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
    (this->fields).badgeTextureAsset = (Texture *)0x0;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateBadge(Int32) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_UpdateBadge
               (AvatarBadge *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&
                    MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__BadgeManager);
    cRam_? = '\x01';
  }
  level_00 = level;
  this_01 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_01 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BadgeManager);
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (level_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
               (MethodInfo *)0x0);
    this_00 = (this->fields).levelText;
    value = (MethodInfo *)
            mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&level,(MethodInfo *)0x0);
    if (this_00 != (TextMesh *)0x0) {
      level = (int32_t)this_00;
      method = value;
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (this_00,(String *)value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

