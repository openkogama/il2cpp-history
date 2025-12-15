
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Carousel::GameCarousel::GameCarousel_Awake
               (GameCarousel *this,MethodInfo *method)

{
  pTVar1 = (this->fields).titleText;
  pSVar2 = TM::TM__((this->fields).title,(MethodInfo *)0x0);
  if (pTVar1 != (TMP_Text *)0x0) {
    UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CleanUpDummyTiles() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Carousel::GameCarousel::
     GameCarousel_CleanUpDummyTiles(GameCarousel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).dummyGameTiles;
  uVar2 = 0;
  if (pGVar1 != (GameObject__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) break;
      obj = *ppGVar3;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void GetMoreGames(String) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Carousel::GameCarousel::GameCarousel_GetMoreGames
               (GameCarousel *this,String *fullUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Carousel__GameCarousel__OnGetMoreGames_UGUI__Portal__Scripts__WebResponse_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Get);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Getting_more_games_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).loading != 0) {
    return;
  }
  pGVar1 = (this->fields).carouselContent;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    this_00 = (this->fields).gameCarouselError;
    if ((this_00 != (GameCarouselError *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      message = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Getting_more_games_,fullUrl,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      (this->fields).loading = 1;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__UGUI__Portal__Scripts__Carousel__GameCarousel__OnGetMoreGames_UGUI__Portal__Scripts__WebResponse_
                 ,(MethodInfo *)0x0);
      this_02 = (WebRequest *)FUN_?(TypeInfo__UGUI__Portal__Scripts__Get);
      mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
                ((Tuple_2_Object_Object_ *)this_02,(Object *)fullUrl,(Object *)this_01,
                 (MethodInfo *)0x0);
      if (this_02 != (WebRequest *)0x0) {
        routine = WebRequest::WebRequest_DoRequest(this_02,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LoadGames() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Carousel::GameCarousel::GameCarousel_LoadGames
               (GameCarousel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).url;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).count,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (pSVar1,StringLiteral__count_,pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Carousel__GameCarousel__OnGetMoreGames_UGUI__Portal__Scripts__WebResponse_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Get);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Getting_more_games_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).loading != 0) {
    return;
  }
  pGVar3 = (this->fields).carouselContent;
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    this_00 = (this->fields).gameCarouselError;
    if ((this_00 != (GameCarouselError *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Getting_more_games_,pSVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      (this->fields).loading = 1;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__UGUI__Portal__Scripts__Carousel__GameCarousel__OnGetMoreGames_UGUI__Portal__Scripts__WebResponse_
                 ,(MethodInfo *)0x0);
      this_02 = (WebRequest *)FUN_?(TypeInfo__UGUI__Portal__Scripts__Get);
      mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
                ((Tuple_2_Object_Object_ *)this_02,(Object *)pSVar1,(Object *)this_01,
                 (MethodInfo *)0x0);
      if (this_02 != (WebRequest *)0x0) {
        routine = WebRequest::WebRequest_DoRequest(this_02,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGetMoreGames(WebResponse) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Carousel::GameCarousel::GameCarousel_OnGetMoreGames
               (GameCarousel *this,WebResponse *response,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UGUI__Portal__Scripts__GamesDto_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<UGUI::Portal::Scripts::GamesDto>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Portal__Scripts__GameTile_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Portal::Scripts::GameTile>_UGUI__Portal__Scripts__GameTile__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (response != (WebResponse *)0x0) {
    if ((response->fields)._IsOk_k__BackingField == 0) {
      pGVar1 = (this->fields).carouselContent;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        this_00 = (this->fields).gameCarouselError;
        if ((this_00 != (GameCarouselError *)0x0) &&
           (pTVar2 = (this_00->fields).errorText, pTVar2 != (TMP_Text *)0x0)) {
          (*(pTVar2->klass->vtable).set_text.methodPtr)();
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,1,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = (this->fields).dummyGameTiles;
      uVar4 = 0;
      if (pGVar3 != (GameObject__Array *)0x0) {
        ppGVar5 = pGVar3->vector;
        for (; (int)uVar4 < (int)pGVar3->max_length; uVar4 = uVar4 + 1) {
          if ((uint)pGVar3->max_length <= uVar4) goto code_?;
          pGVar1 = *ppGVar5;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
          ppGVar5 = ppGVar5 + 1;
        }
        pSVar6 = (response->fields)._Content_k__BackingField;
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar7 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            (pSVar6,
                             UGUI__Portal__Scripts__GamesDto_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<UGUI::Portal::Scripts::GamesDto>_System__String_
                            );
        if ((pOVar7 != (Object *)0x0) && (pOVar7[1].klass != (Object__Class *)0x0)) {
          iVar8 = *(int *)&((pOVar7[1].klass)->_0).namespaze;
          uVar4 = 0;
          if (0 < iVar8) {
            lVar9 = 0x20;
            lStackX_10 = 0;
            do {
              pGVar1 = (this->fields).carouselContent;
              original = (this->fields).gameTilePrefab;
              if (pGVar1 == (GameObject *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar10 = (pGVar1->fields)._.m_CachedPtr;
              if (pvVar10 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcVar11 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcRam_? = pcVar11;
              pvVar10 = (void *)(*pcRam_?)(pvVar10);
              parent = (Transform *)
                       UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                       Unmarshal_UnmarshalUnityObject
                                 (pvVar10,
                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                 );
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              object = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                                 ((Object *)original,parent,
                                  UGUI__Portal__Scripts__GameTile_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Portal::Scripts::GameTile>_UGUI__Portal__Scripts__GameTile__UnityEngine__Transform_
                                 );
              pOVar13 = pOVar7[1].klass;
              if (pOVar13 == (Object__Class *)0x0) goto code_?;
              if (*(uint *)&(pOVar13->_0).namespaze <= uVar4) {
code_?:
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pOVar13 = *(Object__Class **)((longlong)&(pOVar13->_0).image + lVar9);
              if (object == (Object *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action<System::String>);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__System__Action<UnityEngine::Sprite>);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__UGUI__Portal__Scripts__GameTile___UpdateContent_b__3_0_UnityEngine__Sprite_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__UGUI__Portal__Scripts__GameTile___UpdateContent_b__3_1_System__String_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              bVar14 = iRam_? != 0;
              object[3].klass = pOVar13;
              if (bVar14) {
                uVar15 = (uint)((ulonglong)(object + 3) >> 0xc);
                uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
                do {
                  uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
                  puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
                  LOCK();
                  bVar14 = uVar17 == *puVar18;
                  if (bVar14) {
                    *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar14);
              }
              if ((pOVar13 == (Object__Class *)0x0) ||
                 (pMVar19 = object[2].monitor, pMVar19 == (MonitorData *)0x0))
              goto code_?;
              (**(code **)(*(longlong *)pMVar19 + 0x558))
                        (pMVar19,(pOVar13->_0).namespaze,*(undefined8 *)(*(longlong *)pMVar19 + 0x560))
              ;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pSVar6 = (String *)(pOVar13->_0).byval_arg.data.typeHandle;
              this_01 = TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->
                        static_fields->_Instance_k__BackingField;
              this_02 = (UnityAction_1_System_Object_ *)
                        FUN_?(TypeInfo__System__Action<UnityEngine::Sprite>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_02,object,
                         MethodInfo__UGUI__Portal__Scripts__GameTile___UpdateContent_b__3_0_UnityEngine__Sprite_
                         ,(MethodInfo *)0x0);
              this_03 = (UnityAction_1_System_Object_ *)
                        FUN_?(TypeInfo__System__Action<System::String>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_03,object,
                         MethodInfo__UGUI__Portal__Scripts__GameTile___UpdateContent_b__3_1_System__String_
                         ,(MethodInfo *)0x0);
              if (this_01 == (KgmCacheManager *)0x0) goto code_?;
              Utils::Cache::KgmCacheManager::KgmCacheManager_DownloadImage
                        (this_01,pSVar6,(Action_1_UnityEngine_Sprite_ *)this_02,
                         (Action_1_String_ *)this_03,(MethodInfo *)0x0);
              uVar4 = uVar4 + 1;
              lStackX_10 = lStackX_10 + 1;
              lVar9 = lVar9 + 8;
            } while (lStackX_10 < iVar8);
          }
code_?:
          (this->fields).loading = 0;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Carousel::GameCarousel::GameCarousel_Start
               (GameCarousel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).url;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).count,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (pSVar1,StringLiteral__count_,pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Carousel__GameCarousel__OnGetMoreGames_UGUI__Portal__Scripts__WebResponse_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Get);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Getting_more_games_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).loading != 0) {
    return;
  }
  pGVar3 = (this->fields).carouselContent;
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    this_00 = (this->fields).gameCarouselError;
    if ((this_00 != (GameCarouselError *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Getting_more_games_,pSVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      (this->fields).loading = 1;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__UGUI__Portal__Scripts__Carousel__GameCarousel__OnGetMoreGames_UGUI__Portal__Scripts__WebResponse_
                 ,(MethodInfo *)0x0);
      this_02 = (WebRequest *)FUN_?(TypeInfo__UGUI__Portal__Scripts__Get);
      mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
                ((Tuple_2_Object_Object_ *)this_02,(Object *)pSVar1,(Object *)this_01,
                 (MethodInfo *)0x0);
      if (this_02 != (WebRequest *)0x0) {
        routine = WebRequest::WebRequest_DoRequest(this_02,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GameCarousel() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Carousel::GameCarousel::GameCarousel__ctor
               (GameCarousel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_GAMES);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_GAMES,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).title = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).title >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  bVar2 = cRam_? == '\0';
  (this->fields).count = 0x18;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar7 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar8 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar9 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar10 = ppMVar8;
  if (lVar9 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar9 = lRam_?;
  }
  else {
    do {
      uVar3 = (uint)ppMVar10;
      LOCK();
      bVar2 = uVar3 != uRam_?;
      uVar11 = uVar3;
      uVar12 = uVar3 + 1;
      if (bVar2) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar2) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar11, uVar3 = uVar11, uVar11 != 2)
            );
    while (uVar3 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar3 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar9;
  puVar13 = &(pOVar7->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar13 == 1;
  if (bVar2) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar3 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar7->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar14 == 1;
  if (bVar2) {
    *puVar14 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar3 = GetCurrentThreadId();
    psVar15 = &(pOVar7->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar3 == *psVar15;
    if (bVar2) {
      *psVar15 = (ulonglong)uVar3;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar7->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar13 == 1;
      if (bVar2) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar9._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
      lVar9._4_4_ = (pOVar7->_1).cctor_started;
      if (lVar9 == 0) {
        (pOVar7->_1).initializationExceptionGCHandle = 0;
        (pOVar7->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar9 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar7->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar3 = GetCurrentThreadId();
    LOCK();
    (pOVar7->_1).cctor_thread = (ulonglong)uVar3;
    UNLOCK();
    LOCK();
    (pOVar7->_1).cctor_finished_or_no_cctor = 1;
    uVar3 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar7->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar7);
      ppMVar10 = ppMVar8;
      pIVar17 = (Il2CppClass *)pOVar7;
code_?:
      do {
        if (ppMVar10 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar10 = pIVar17->methods;
            pMVar18 = *ppMVar10;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar8;
                while (ppMVar20 = ppMVar19 + 0x3052a1b1,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar10 = ppMVar10 + 1;
          if (ppMVar10 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar10;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar10 = ppMVar8;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar7->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_24 < 0x10) {
code_?:
      lVar9 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar6;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar9 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar9;
        if (iRam_? != 0) {
          uVar3 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
      }
      FUN_?(pOVar7,lVar16);
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar21 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar7->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

