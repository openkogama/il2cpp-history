
/* Void Destroy() */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_Destroy
               (LevelDisplayCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  uVar1 = 0;
  pRVar2 = LevelDisplayCube_get_Renderers(this,(MethodInfo *)0x0);
  if (pRVar2 != (Renderer__Array *)0x0) {
    lVar3 = 0x20;
    do {
      if ((int)pRVar2->max_length <= (int)uVar1) {
        obj_00 = (this->fields).cube;
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
                  ((Object_1 *)obj_00,0.0,(MethodInfo *)0x0);
        bVar4 = iRam_? != 0;
        (this->fields).badgeTextureAsset = (Texture2D *)0x0;
        if (bVar4) {
          uVar1 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
          uVar5 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar6 == *puVar7;
            if (bVar4) {
              *puVar7 = uVar6 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        return;
      }
      pRVar2 = LevelDisplayCube_get_Renderers(this,(MethodInfo *)0x0);
      if (pRVar2 == (Renderer__Array *)0x0) break;
      if ((uint)pRVar2->max_length <= uVar1) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      obj = *(Object **)((longlong)pRVar2->vector + lVar3 + -0x20);
      if (obj == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar9 = obj[1].klass;
      if (pOVar9 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      gcHandlePtr = (void *)(*pcRam_?)(pOVar9);
      obj_01 = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (gcHandlePtr,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
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
                (obj_01,0.0,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 8;
      pRVar2 = LevelDisplayCube_get_Renderers(this,(MethodInfo *)0x0);
    } while (pRVar2 != (Renderer__Array *)0x0);
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
      if ((uint)pRVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      obj = *ppRVar3;
      if (obj == (Renderer *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Material_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Material>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (obj->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      pvVar5 = (void *)(*pcRam_?)(pvVar5);
      this_00 = (Material *)
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar5,
                           UnityEngine__Material_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Material>_void__
                          );
      if (this_00 == (Material *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Material);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      name = UnityEngine.CoreModule.dll::UnityEngine::Material::
             Material_GetFirstPropertyNameIdByAttribute
                       (this_00,ShaderPropertyFlags__Enum_MainTexture,(MethodInfo *)0x0);
      if (name < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__Material);
        }
        name = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                (this_00,name,(Texture *)0x0,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppRVar3 = ppRVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnBadgeTextureReceived(UnityWebRequest) */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_OnBadgeTextureReceived
               (LevelDisplayCube *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (DownloadHandlerTexture *)
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
              DownloadHandler_GetCheckedDownloader
                        (www,
                         UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                        );
    if (this_01 != (DownloadHandlerTexture *)0x0) {
      pTVar2 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
               DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                         (this_01,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).badgeTextureAsset = pTVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      pRVar8 = LevelDisplayCube_get_Renderers(this,(MethodInfo *)0x0);
      uVar4 = 0;
      if (pRVar8 != (Renderer__Array *)0x0) {
        ppRVar9 = pRVar8->vector;
        do {
          if ((int)pRVar8->max_length <= (int)uVar4) {
            return;
          }
          if ((uint)pRVar8->max_length <= uVar4) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          this_00 = *ppRVar9;
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
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this_00 != (Renderer *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((this_00->fields)._._.m_CachedPtr != (void *)0x0) {
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  (this_00,(MethodInfo *)0x0);
              if (this_02 == (Material *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                        (this_02,(Texture *)(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
            }
          }
          uVar4 = uVar4 + 1;
          ppRVar9 = ppRVar9 + 1;
        } while( true );
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetAmount(Int32) */

void Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_SetAmount
               (LevelDisplayCube *this,int32_t levelAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelDisplayCube____c__DisplayClass7_0___SetAmount_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelDisplayCube____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__LevelDisplayCube____c__DisplayClass7_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  *(int32_t *)&object[1].klass = levelAmount;
  object[1].monitor = (MonitorData *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&object[1].monitor >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    if ((this->fields).waitingForBadgeTexture == 0) {
      if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pUVar7 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,object,
                 MethodInfo__LevelDisplayCube____c__DisplayClass7_0___SetAmount_b__0__,
                 (MethodInfo *)0x0);
      pUVar7 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar7,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pUVar7 == (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      }
      else {
        pUVar8 = (UnityAction *)0x0;
        if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar8 = pUVar7;
        }
        if (pUVar8 == (UnityAction *)0x0) {
          FUN_?(pUVar7,TypeInfo__UnityEngine__Events__UnityAction);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar8;
        pUVar8 = (UnityAction *)0x0;
        if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar8 = pUVar7;
        }
        if (pUVar8 == (UnityAction *)0x0) {
          FUN_?(pUVar7,TypeInfo__UnityEngine__Events__UnityAction);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      (this->fields).waitingForBadgeTexture = 1;
    }
  }
  else {
    level = *(int32_t *)&object[1].klass;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Renderer[] get_Renderers() */

Renderer__Array *
Assembly-CSharp.dll::LevelDisplayCube::LevelDisplayCube_get_Renderers
          (LevelDisplayCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).renderers == (Renderer__Array *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pMVar1 = 
    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
    ;
    if (this_00 == (GameObject *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pRVar3 = (Renderer__Array *)(*pcVar2)();
      return pRVar3;
    }
    if ((
        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    }
    pRVar3 = (Renderer__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    bVar4 = iRam_? != 0;
    (this->fields).renderers = pRVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).renderers >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
  }
  return (this->fields).renderers;
}

