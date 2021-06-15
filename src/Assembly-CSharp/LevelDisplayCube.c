
/* Void Destroy() */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_Destroy
               (LevelDisplayCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
  uVar1 = 0;
  iVar2 = 0x10;
  do {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pUVar3 = (UseInteratorVisualization__Array *)(this->fields).renderers;
    if (pUVar3 == (UseInteratorVisualization__Array *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         (pGVar4,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      (this->fields).renderers = (Renderer__Array *)pUVar3;
      if (pUVar3 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    }
    if ((int)pUVar3->max_length <= (int)uVar1) {
      pGVar4 = (this->fields).cube;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      (this->fields).badgeTextureAsset = (Texture2D *)0x0;
      return;
    }
    pRVar6 = LevelDisplayCube_get_Renderers(this,(MethodInfo *)0x0);
    if (pRVar6 == (Renderer__Array *)0x0) goto code_?;
    if (pRVar6->max_length <= uVar1) goto code_?;
    this_00 = *(Component_1 **)((int)pRVar6->vector + iVar2 + -0x10);
    if (this_00 == (Component_1 *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar4,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}


/* Void Initialize() */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_Initialize
               (LevelDisplayCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UseInteratorVisualization__Array *)(this->fields).renderers;
  if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) goto code_?;
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (this_00,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    (this->fields).renderers = (Renderer__Array *)pUVar1;
  }
  uVar2 = 0;
  if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
    ppUVar3 = pUVar1->vector;
    while( true ) {
      if ((int)pUVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pUVar1->max_length <= uVar2) break;
      if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)*ppUVar3,(MethodInfo *)0x0);
      if (this_01 == (Material *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                (this_01,(Texture *)0x0,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppUVar3 = ppUVar3 + 1;
    }
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnBadgeTextureReceived(UnityWebRequest) */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_OnBadgeTextureReceived
               (LevelDisplayCube *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www == (UnityWebRequest *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
          UnityWebRequest_get_error(www,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar3 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
    (this->fields).badgeTextureAsset = pTVar3;
    www = (UnityWebRequest *)LevelDisplayCube_get_Renderers(this,(MethodInfo *)0x0);
    uVar4 = 0;
    if ((Renderer__Array *)www == (Renderer__Array *)0x0) goto code_?;
    ppRVar5 = ((Renderer__Array *)www)->vector;
    for (; (int)uVar4 < (int)((Renderer__Array *)www)->max_length; uVar4 = uVar4 + 1) {
      if (((Renderer__Array *)www)->max_length <= uVar4) {
        func_?();
        func_?();
        goto code_?;
      }
      this_00 = *ppRVar5;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      www = (UnityWebRequest *)0x0;
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((this_00 == (Renderer *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (this_00,(MethodInfo *)0x0), this_01 == (Material *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                  (this_01,(Texture *)this_00[1].monitor,(MethodInfo *)0x0);
      }
      ppRVar5 = ppRVar5 + 1;
    }
  }
  return;
}


/* Void SetAmount(Int32) */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_SetAmount
               (LevelDisplayCube *this,int32_t levelAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LevelDisplayCube___SetAmount_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)levelAmount;
    (this_00->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__LevelingManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__LevelingManager);
    }
    if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
      if ((this->fields).waitingForBadgeTexture == 0) {
        if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__LevelingManager);
        }
        pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this_00,
                   MethodInfo__LevelDisplayCube___SetAmount_c__AnonStorey0____m__0__,
                   (MethodInfo *)0x0);
        pUVar3 = (UnityAction *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
        pUVar1 = (UnityAction *)0x0;
        if (pUVar3 != (UnityAction *)0x0) {
          if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar1 = pUVar3;
          }
          pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
          if (pUVar1 == (UnityAction *)0x0) goto code_?;
        }
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
        (this->fields).waitingForBadgeTexture = 1;
        return;
      }
    }
    else {
      level = (this_00->fields)._._._._.m_CachedPtr;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?();
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                ((int32_t)level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
                 (MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pUStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Renderer[] get_Renderers() */

Renderer__Array *
Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_get_Renderers
          (LevelDisplayCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UseInteratorVisualization__Array *)(this->fields).renderers;
  if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      pRVar3 = (Renderer__Array *)(*pcVar2)();
      return pRVar3;
    }
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (this_00,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    (this->fields).renderers = (Renderer__Array *)pUVar1;
  }
  return (Renderer__Array *)pUVar1;
}

