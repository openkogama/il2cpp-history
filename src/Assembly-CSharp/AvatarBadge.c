
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
  (this->fields).ownerActorId = ownerActorId;
  pSVar1 = (this->fields).scaleAnimation;
  if (pSVar1 == (ScaleAnimations *)0x0) {
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pSVar2 = (pSVar1->fields).OnIntermediateScaleAnimationStopped;
    this_00 = (UnityAction_1_System_Single_ *)
              func_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
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
code_?:
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
      pUVar3 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__AvatarBadge__OnLevelingInitialized__,
                 (MethodInfo *)0x0);
      pUVar3 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pUVar3 == (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
        func_?();
        return;
      }
      pUVar4 = (UnityAction *)0x0;
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar4 = pUVar3;
      }
      if (pUVar4 != (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar4;
        pUVar4 = (UnityAction *)0x0;
        if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar4 = pUVar3;
        }
        if (pUVar4 != (UnityAction *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pSVar5 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
    if (pSVar2->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
      pSVar5 = pSVar2;
    }
    if (pSVar5 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) goto code_?;
    (pSVar1->fields).OnIntermediateScaleAnimationStopped = pSVar5;
    pSVar5 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
    if (pSVar2->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
      pSVar5 = pSVar2;
    }
    if (pSVar5 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) goto code_?;
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
    func_?(&StringLiteral_Failed_to_get_AvatarBadge__);
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
            (*(code *)(pSVar3->klass->vtable).Play.method)(pSVar3,0);
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
                       (StringLiteral_Failed_to_get_AvatarBadge__,pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar4,(MethodInfo *)0x0);
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
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
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
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__AvatarBadge__OnLevelingInitialized__,
             (MethodInfo *)0x0);
  pUStack2 =
       (UnityAction *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pUVar1,(Delegate *)this_02,(MethodInfo *)0x0);
  if (pUStack2 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    pUStack3 = (UnityAction__Class *)0x0;
code_?:
    pUStack2 = (UnityAction *)TypeInfo__LevelingManager->static_fields;
    func_?();
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) {
      return;
    }
    if ((this->fields).ownerActorId == -1) {
code_?:
      pSVar6 = (this->fields).scaleAnimation;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pSVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pSVar6 = (this->fields).scaleAnimation;
        if (pSVar6 == (ScaleAnimations *)0x0) goto code_?;
        pSVar7 = (pSVar6->fields).OnIntermediateScaleAnimationStopped;
        this_04 = (UnityAction_1_System_Single_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single___ctor
                  (this_04,(Object *)this,
                   MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_,
                   (MethodInfo *)0x0);
        pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pSVar7,(Delegate *)this_04,(MethodInfo *)0x0);
        if (pSVar7 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
          (pSVar6->fields).OnIntermediateScaleAnimationStopped =
               (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        }
        else {
          pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
          if (pSVar7->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
            pSVar8 = pSVar7;
          }
          if (pSVar8 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
          goto code_?;
          (pSVar6->fields).OnIntermediateScaleAnimationStopped = pSVar8;
          pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
          if (pSVar7->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
            pSVar8 = pSVar7;
          }
          if (pSVar8 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
          goto code_?;
        }
        func_?();
      }
      this_00 = (this->fields).badgeRenderer;
      if (this_00 != (MeshRenderer *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pMVar9 = (pMVar5->fields).playerContainer, pMVar9 != (MVPlayerContainer *)0x0)) {
        bVar4 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                          (pMVar9,(this->fields).ownerActorId,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar5 == (MVNetworkGame *)0x0) ||
              (pMVar9 = (pMVar5->fields).playerContainer, pMVar9 == (MVPlayerContainer *)0x0)) ||
             (pMVar10 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                 (pMVar9,(this->fields).ownerActorId,(MethodInfo *)0x0),
             pMVar10 == (MVPlayer *)0x0)) goto code_?;
          pUVar11 = (pMVar10->fields).OnLevelChanged;
          this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_03,(Object *)this,MethodInfo__AvatarBadge__UpdateBadge_int_,
                     (MethodInfo *)0x0);
          pDVar12 = mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pUVar11,(Delegate *)this_03,(MethodInfo *)0x0);
          if (pDVar12 == (Delegate *)0x0) {
            (pMVar10->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
          }
          else {
            pUVar11 = (UnityAction_1_System_Int32_ *)func_?();
            if (pUVar11 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
            (pMVar10->fields).OnLevelChanged = pUVar11;
            iVar13 = func_?();
            if (iVar13 == 0) goto code_?;
          }
          func_?();
        }
        goto code_?;
      }
    }
  }
  else {
    pUVar1 = (UnityAction *)0x0;
    if (pUStack2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUStack2;
    }
    if (pUVar1 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
      pUStack3 = (UnityAction__Class *)(UnityAction *)0x0;
      if (pUStack2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUStack3 = (UnityAction__Class *)pUStack2;
      }
      pUVar14 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUStack3 == (UnityAction__Class *)0x0) goto code_?;
      goto code_?;
    }
    pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
  pUStack2 = extraout_ECX;
  pUVar14 = extraout_EDX;
code_?:
  pUStack3 = pUVar14;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    unaff_EDI = (UnityAction_1_System_Int32___Class *)
                MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                          (this_00,(this->fields).ownerActorId,(MethodInfo *)0x0);
    if (unaff_EDI != (UnityAction_1_System_Int32___Class *)0x0) {
      IStack_2.m_value = (unaff_EDI->_0).byval_arg.data.__klassIndex;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        func_?(&
                        MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                       );
        func_?(&TypeInfo__BadgeManager);
        cRam_? = '\x01';
      }
      level.m_value = IStack_2.m_value;
      this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_02,(Object *)this,
                 MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BadgeManager);
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                (level.m_value,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,
                 (MethodInfo *)0x0);
      this_01 = (this->fields).levelText;
      value = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
      unaff_ESI = (Delegate *)0x0;
      if (this_01 != (TextMesh *)0x0) {
        UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                  (this_01,value,(MethodInfo *)0x0);
        pIVar3 = &(unaff_EDI->_0).this_arg;
        a = (Delegate *)(pIVar3->data).typeHandle;
        this_03 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_03,(Object *)this,MethodInfo__AvatarBadge__UpdateBadge_int_,
                   (MethodInfo *)0x0);
        unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                              (a,(Delegate *)this_03,(MethodInfo *)0x0);
        unaff_EDI = TypeInfo__UnityEngine__Events__UnityAction<int>;
        if (unaff_ESI == (Delegate *)0x0) {
          (pIVar3->data).dummy = (void *)0x0;
          pDStack4 = (Delegate *)pIVar3;
          pUStack5 = (UnityAction_1_System_Int32___Class *)unaff_ESI;
          func_?();
          return;
        }
        pUStack5 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        pDStack4 = unaff_ESI;
        pvVar6 = (void *)func_?();
        if (pvVar6 != (void *)0x0) {
          (pIVar3->data).dummy = pvVar6;
          unaff_EDI = TypeInfo__UnityEngine__Events__UnityAction<int>;
          pUStack5 = TypeInfo__UnityEngine__Events__UnityAction<int>;
          pDStack4 = unaff_ESI;
          pUStack5 = (UnityAction_1_System_Int32___Class *)func_?();
          if (pUStack5 != (UnityAction_1_System_Int32___Class *)0x0) {
            pDStack4 = (Delegate *)pIVar3;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pDStack4 = unaff_ESI;
  pUStack5 = unaff_EDI;
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
    ppTVar3 = &(this->fields).badgeTextureAsset;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
              (this_01,*ppTVar3,(MethodInfo *)0x0);
    *ppTVar3 = (Texture *)0x0;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (level_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0)
  ;
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

