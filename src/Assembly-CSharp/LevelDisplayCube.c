
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
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BadgeManager);
    }
    BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    pLVar1 = (LevelDisplayCube *)0x10;
    uVar2 = 0;
    ppRVar3 = &(this->fields).renderers;
    do {
      if (cRam_? == '\0') {
        pLVar1 = (LevelDisplayCube *)&UNK_?;
        func_?(&
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
        cRam_? = '\x01';
      }
      if (*ppRVar3 == (Renderer__Array *)0x0) {
        pLVar1 = this;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) break;
        pRVar5 = (Renderer__Array *)
                 Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar4,
                            UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                           );
        *ppRVar3 = pRVar5;
        func_?();
      }
      if (*ppRVar3 == (Renderer__Array *)0x0) break;
      if ((int)(*ppRVar3)->max_length <= (int)uVar2) {
        pGVar4 = (this->fields).cube;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar4,(MethodInfo *)0x0);
        (this->fields).badgeTextureAsset = (Texture2D *)0x0;
        func_?(&(this->fields).badgeTextureAsset);
        return;
      }
      if (cRam_? == '\0') {
        pLVar1 = (LevelDisplayCube *)&UNK_?;
        func_?(&
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
        cRam_? = '\x01';
      }
      if (*ppRVar3 == (Renderer__Array *)0x0) {
        pLVar1 = this;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) break;
        pRVar5 = (Renderer__Array *)
                 Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar4,
                            UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                           );
        *ppRVar3 = pRVar5;
        func_?();
      }
      pRVar5 = *ppRVar3;
      if (pRVar5 == (Renderer__Array *)0x0) break;
      if (pRVar5->max_length <= uVar2) goto code_?;
      this_01 = *(Component **)((int)pRVar5->vector + (int)&pLVar1[-1].fields.cube);
      if (this_01 == (Component *)0x0) break;
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (this_01,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      pLVar1 = (LevelDisplayCube *)&this_01->monitor;
    } while( true );
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
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
    (unaff_EBX->fields).badgeTextureAsset = pTVar3;
    func_?(&(unaff_EBX->fields).badgeTextureAsset);
    pRVar4 = LevelDisplayCube_get_Renderers(unaff_EBX,(MethodInfo *)0x0);
    uVar5 = 0;
    if (pRVar4 == (Renderer__Array *)0x0) goto code_?;
    ppRVar6 = pRVar4->vector;
    for (; (int)uVar5 < (int)pRVar4->max_length; uVar5 = uVar5 + 1) {
      if (pRVar4->max_length <= uVar5) {
        func_?();
        goto code_?;
      }
      this_00 = *ppRVar6;
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
                  (this_01,(Texture *)(unaff_EBX->fields).badgeTextureAsset,(MethodInfo *)0x0);
      }
      ppRVar6 = ppRVar6 + 1;
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
  value = (Object *)func_?(TypeInfo__LevelDisplayCube____c__DisplayClass7_0);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
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
      this_00 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BadgeManager);
        }
        BadgeManager::BadgeManager_GetBadgeTexture
                  ((int32_t)level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((this->fields).waitingForBadgeTexture != 0) {
      return;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,value,MethodInfo__LevelDisplayCube____c__DisplayClass7_0___SetAmount_b__0__,
               (MethodInfo *)0x0);
    pUVar1 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pUVar1 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
      func_?();
      (this->fields).waitingForBadgeTexture = 1;
      return;
    }
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if ((this->fields).renderers == (Renderer__Array *)0x0) {
    source = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (source == (GameObject *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      pRVar2 = (Renderer__Array *)(*pcVar1)();
      return pRVar2;
    }
    pRVar2 = (Renderer__Array *)
             Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    (this->fields).renderers = pRVar2;
    func_?(&(this->fields).renderers,pRVar2);
  }
  return (this->fields).renderers;
}

