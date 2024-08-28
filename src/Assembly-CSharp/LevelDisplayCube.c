
/* Void Destroy() */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_Destroy
               (LevelDisplayCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)this,
             MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
  uVar1 = 0;
  ppRVar2 = &(this->fields).renderers;
  iVar3 = 0x10;
  do {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (*ppRVar2 == (Renderer__Array *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pRVar6 = (Renderer__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         (pGVar4,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      *ppRVar2 = pRVar6;
      func_?();
      this = (LevelDisplayCube *)ppRVar2;
    }
    if (*ppRVar2 == (Renderer__Array *)0x0) goto code_?;
    if ((int)(*ppRVar2)->max_length <= (int)uVar1) {
      pGVar4 = (this->fields).cube;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      ppTVar7 = &(this->fields).badgeTextureAsset;
      *ppTVar7 = (Texture2D *)0x0;
      func_?(ppTVar7);
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (*ppRVar2 == (Renderer__Array *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      pRVar6 = (Renderer__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         (pGVar4,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      *ppRVar2 = pRVar6;
      func_?();
    }
    pRVar6 = *ppRVar2;
    if (pRVar6 == (Renderer__Array *)0x0) goto code_?;
    if (pRVar6->max_length <= uVar1) goto code_?;
    this_00 = *(Component **)((int)&pRVar6->klass + iVar3);
    if (this_00 == (Component *)0x0) goto code_?;
    this = (LevelDisplayCube *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}


/* Void Initialize() */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_Initialize
               (LevelDisplayCube *this,MethodInfo *method)

{
  pRVar1 = LevelDisplayCube_get_Renderers(this,(MethodInfo *)0x0);
  uVar2 = 0;
  if (pRVar1 != (Renderer__Array *)0x0) {
    ppRVar3 = pRVar1->vector;
    while( true ) {
      if ((int)pRVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pRVar1->max_length <= uVar2) break;
      if (*ppRVar3 == (Renderer *)0x0) goto code_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (*ppRVar3,(MethodInfo *)0x0);
      if (this_00 == (Material *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                (this_00,(Texture *)0x0,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppRVar3 = ppRVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnBadgeTextureReceived(UnityWebRequest) */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_OnBadgeTextureReceived
               (LevelDisplayCube *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
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
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar3 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
    ppTVar4 = &(this->fields).badgeTextureAsset;
    *ppTVar4 = pTVar3;
    func_?(ppTVar4);
    pRVar5 = LevelDisplayCube_get_Renderers(this,(MethodInfo *)0x0);
    uVar6 = 0;
    if (pRVar5 == (Renderer__Array *)0x0) goto code_?;
    ppRVar7 = pRVar5->vector;
    for (; (int)uVar6 < (int)pRVar5->max_length; uVar6 = uVar6 + 1) {
      if (pRVar5->max_length <= uVar6) {
        func_?();
        goto code_?;
      }
      this_00 = *ppRVar7;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((this_00 == (Renderer *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (this_00,(MethodInfo *)0x0), this_01 == (Material *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                  (this_01,(Texture *)*ppTVar4,(MethodInfo *)0x0);
      }
      ppRVar7 = ppRVar7 + 1;
    }
  }
  return;
}


/* Void SetAmount(Int32) */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_SetAmount
               (LevelDisplayCube *this,int32_t levelAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__LevelingManager);
    func_?(&MethodInfo__LevelDisplayCube____c__DisplayClass7_0___SetAmount_b__0__);
    func_?(&TypeInfo__LevelDisplayCube____c__DisplayClass7_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LevelDisplayCube____c__DisplayClass7_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
    func_?();
    pUStack1 = extraout_EDX;
  }
  else {
    value[1].klass = (Object__Class *)levelAmount;
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__LevelingManager);
      cRam_? = '\x01';
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
      level = value[1].klass;
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,(Object *)this,
                 MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                ((int32_t)level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 (MethodInfo *)0x0);
      return;
    }
    if ((this->fields).waitingForBadgeTexture != 0) {
      return;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar2 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,value,MethodInfo__LevelDisplayCube____c__DisplayClass7_0___SetAmount_b__0__,
               (MethodInfo *)0x0);
    pUVar2 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pUVar2 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      pUVar3 = (UnityAction *)0x0;
code_?:
      pUStack1 = (UnityAction__Class *)pUVar3;
      func_?();
      (this->fields).waitingForBadgeTexture = 1;
      return;
    }
    pUVar3 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar2;
    }
    pUStack1 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar3 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
    pUVar3 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar2;
    }
    pUStack1 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar3 != (UnityAction *)0x0) goto code_?;
  }
  pUStack1 = (UnityAction__Class *)func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Renderer[] get_Renderers() */

Renderer__Array *
Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_get_Renderers
          (LevelDisplayCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).renderers;
  if ((this->fields).renderers == (Renderer__Array *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pRVar3 = (Renderer__Array *)(*pcVar2)();
      return pRVar3;
    }
    pRVar3 = (Renderer__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    *ppRVar1 = pRVar3;
    func_?(ppRVar1,pRVar3);
  }
  return *ppRVar1;
}

