
/* Void Initialize(Int32) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_Initialize
               (AvatarBadge *this,int32_t ownerActorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).ownerActorId = ownerActorId;
  pSVar1 = (this->fields).scaleAnimation;
  if (pSVar1 == (ScaleAnimations *)0x0) {
    func_?(0);
  }
  else {
    pSVar2 = (pSVar1->fields).OnIntermediateScaleAnimationStopped;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_,(MethodInfo *)0x0)
    ;
    pSVar4 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pSVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pSVar2 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
    if (pSVar4 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
      if (pSVar4->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pSVar2 = pSVar4;
      }
      if (pSVar2 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
      goto code_?;
    }
    (pSVar1->fields).OnIntermediateScaleAnimationStopped = pSVar2;
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
    if (bVar5 != 0) {
      AvatarBadge_OnLevelingInitialized(this,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?();
    }
    pUVar6 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__AvatarBadge__OnLevelingInitialized__,
               (MethodInfo *)0x0);
    pUVar7 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pUVar6 = (UnityAction *)0x0;
    if (pUVar7 == (UnityAction *)0x0) {
code_?:
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar6;
      return;
    }
    if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar7;
    }
    if (pUVar6 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnBadgeTextureReceived(UnityWebRequest) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_OnBadgeTextureReceived
               (AvatarBadge *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::DownloadHandlerTexture
      ::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (www != (UnityWebRequest *)0x0) {
      pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Failed_to_get__,pSVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this_00 = (this->fields).badgeRenderer;
    if (this_00 != (MeshRenderer *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_UIItems,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (this_01,value,(MethodInfo *)0x0);
        pSVar3 = (this->fields).scaleAnimation;
        (this->fields).badgeTextureAsset = (Texture *)x;
        if (pSVar3 != (ScaleAnimations *)0x0) {
          pSVar4 = pSVar3->klass;
          pIStack5 = pSVar4[1]._0.image;
          puStack6 = (undefined *)0x0;
          (*(code *)(pSVar4->vtable).Play.method)();
          return;
        }
      }
    }
  }
  pIStack5 = (Il2CppImage *)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_OnDestroy(AvatarBadge *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?();
  }
  pUVar2 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,MethodInfo__AvatarBadge__OnLevelingInitialized__,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)pUVar1,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)0x0;
  if (pUVar3 == (UnityAction *)0x0) {
code_?:
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) {
      return;
    }
    if ((this->fields).ownerActorId != -1) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar6 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 == (MVAvatar *)0x0) ||
         (pMVar7 = MVAvatar::MVAvatar_get_Shield(pMVar6,(MethodInfo *)0x0),
         pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
      bVar4 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        ((MVPlayerContainer *)pMVar7,(this->fields).ownerActorId,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar6 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar6 == (MVAvatar *)0x0) ||
            (pMVar7 = MVAvatar::MVAvatar_get_Shield(pMVar6,(MethodInfo *)0x0),
            pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0)) ||
           (pMVar8 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                               ((MVPlayerContainer *)pMVar7,(this->fields).ownerActorId,
                                (MethodInfo *)0x0), pMVar8 == (MVPlayer *)0x0))
        goto code_?;
        pUVar9 = (pMVar8->fields).OnLevelChanged;
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)this,MethodInfo__AvatarBadge__UpdateBadge_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        mscorlib.dll::System::Delegate::Delegate_Remove
                  ((Delegate *)pUVar9,(Delegate *)pUVar1,(MethodInfo *)0x0);
        pUVar9 = (UnityAction_1_System_Int32_ *)func_?();
        (pMVar8->fields).OnLevelChanged = pUVar9;
      }
    }
    pSVar10 = (this->fields).scaleAnimation;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pSVar10 = (this->fields).scaleAnimation;
      if (pSVar10 == (ScaleAnimations *)0x0) goto code_?;
      pSVar11 = (pSVar10->fields).OnIntermediateScaleAnimationStopped;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,
                 MethodInfo__AvatarBadge__ScaleAnimationIntermediateCallback_float_,
                 (MethodInfo *)0x0);
      pSVar12 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pSVar11,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pSVar11 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      if (pSVar12 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        if (pSVar12->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
          pSVar11 = pSVar12;
        }
        if (pSVar11 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
        goto code_?;
      }
      (pSVar10->fields).OnIntermediateScaleAnimationStopped = pSVar11;
    }
    this_00 = (this->fields).badgeRenderer;
    if (this_00 != (MeshRenderer *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                      ((Renderer *)this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar3;
    }
    if (pUVar2 != (UnityAction *)0x0) goto code_?;
    func_?();
code_?:
    func_?();
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_01 != (MVAvatar *)0x0) &&
      (this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0),
      this_02 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
     (this_03 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                          ((MVPlayerContainer *)this_02,(this->fields).ownerActorId,
                           (MethodInfo *)0x0), this_03 != (MVPlayer *)0x0)) {
    level = System.dll::System::Collections::Generic::
            SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
            Single,System::Object]::
            SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                      ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                        *)this_03,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    object = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,
               MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
      func_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              ((int32_t)level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,
               (MethodInfo *)0x0);
    this_00 = (this->fields).levelText;
    value = (String *)func_?();
    if (this_00 != (TextMesh *)0x0) {
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (this_00,value,(MethodInfo *)0x0);
      pUVar2 = (this_03->fields).OnLevelChanged;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)object,MethodInfo__AvatarBadge__UpdateBadge_int_,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      pUStack3 =
           (UnityAction_1_System_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_1_System_Int32_ *)0x0;
      if (pUStack3 == (UnityAction_1_System_Int32_ *)0x0) {
code_?:
        (this_03->fields).OnLevelChanged = pUVar2;
        return;
      }
      if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
        pUVar2 = pUStack3;
      }
      pUStack4 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pUVar2 != (UnityAction_1_System_Int32_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pUStack3 = extraout_ECX;
  pUStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ScaleAnimationIntermediateCallback(Single) */

void Assembly-CSharp.dll::AvatarBadge::AvatarBadge_ScaleAnimationIntermediateCallback
               (AvatarBadge *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  if ((((uint)(TypeInfo__UnityEngine__SceneManagement__SceneManager->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__SceneManagement__SceneManager);
  }
  puStack_1 = (undefined *)
              UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
              SceneManager_GetActiveScene((MethodInfo *)0x0);
  a = (String *)func_?(&puStack_1,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality
                    (a,StringLiteral_GUIDevScene,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  this_00 = (this->fields).badgeRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                (this_01,(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
      (this->fields).badgeTextureAsset = (Texture *)0x0;
      return;
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  level_00 = level;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarBadge__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (level_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields).levelText;
  value = (String *)func_?(&level,0);
  level = 0;
  if (this_00 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

