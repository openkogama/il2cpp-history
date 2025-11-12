
/* Void Callback(UnityWebRequest) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_Callback
               (AccessoryLoader_AccessoryLoaderRequest *this,UnityWebRequest *www,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AccessoryBackAccessoriesSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__AccessoryHatSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__AccessoryParticlesSettings);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarAccessoryBackAccessories_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryBackAccessories>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarAccessoryHat_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryHat>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarAccessoryParticles_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryParticles>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AccessorySettings_MethodInfo__UnityEngine__GameObject__GetComponent<AccessorySettings>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::GameObject>_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
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
    if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar2 = StreamingAsset::StreamingAsset_UnpackBundle_Cached
                       (www,
                        UnityEngine__GameObject_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::GameObject>_UnityEngine__Networking__UnityWebRequest_
                       );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (GameObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        (pOVar2,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    if (this_00 != (GameObject *)0x0) {
      pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          AccessorySettings_MethodInfo__UnityEngine__GameObject__GetComponent<AccessorySettings>__
                         );
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
      if (pOVar2 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar2[1].klass != (Object__Class *)0x0) {
          lVar3 = FUN_?(&(pOVar2->klass->_0).byval_arg);
          pIVar4 = TypeRef__AccessoryHatSettings;
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          if (pIVar4 == (Il2CppType *)0x0) {
            lVar5 = 0;
          }
          else {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            lVar5 = FUN_?(pIVar4);
            lVar5 = FUN_?(lVar5 + 0x20);
          }
          method_00 = 
          AvatarAccessoryHat_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryHat>__
          ;
          if (lVar3 != lVar5) {
            pTVar6 = (Type *)FUN_?(&(pOVar2->klass->_0).byval_arg);
            pIVar4 = TypeRef__AccessoryParticlesSettings;
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
            method_00 = 
            AvatarAccessoryParticles_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryParticles>__
            ;
            if (pTVar6 != pTVar7) {
              pTVar6 = (Type *)FUN_?(&(pOVar2->klass->_0).byval_arg);
              pIVar4 = TypeRef__AccessoryBackAccessoriesSettings;
              if (*(int *)(lRam_? + 0xe4) == 0) {
                FUN_?();
              }
              pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
              method_00 = 
              AvatarAccessoryBackAccessories_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarAccessoryBackAccessories>__
              ;
              if (pTVar6 != pTVar7) {
                uVar8 = func_?(&TypeInfo__System__Exception);
                pEVar9 = (Exception *)func_?(uVar8);
                pSVar1 = (String *)func_?(&StringLiteral_Unknown_settings);
                mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar1,(MethodInfo *)0x0)
                ;
                uVar8 = func_?(&
                                             MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                                            );
                FUN_?(pEVar9,uVar8);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
          }
          pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                             (this_00,method_00);
          if (pOVar2 != (Object *)0x0) {
            pSVar1 = (this->fields).subUrl;
            (*(code *)pOVar2->klass[1]._0.fields)(pOVar2,pSVar1,pSVar1,pOVar2->klass[1]._0.events);
            if ((this->fields).accessoryCreatedCallback == (Action_2_Int32_AvatarAccessory_ *)0x0) {
              return;
            }
            pAVar11 = (this->fields).accessoryCreatedCallback;
            (*(pAVar11->fields)._._.invoke_impl)
                      ((pAVar11->fields)._._.method_code,(this->fields).id,pOVar2,
                       (pAVar11->fields)._._.method);
            (this->fields).accessoryCreatedCallback = (Action_2_Int32_AvatarAccessory_ *)0x0;
            func_?(&(this->fields).accessoryCreatedCallback);
            return;
          }
          goto code_?;
        }
      }
      uVar8 = func_?(&TypeInfo__System__Exception);
      pEVar9 = (Exception *)func_?(uVar8);
      pSVar1 = (String *)func_?(&StringLiteral_AvatarAccessory_settings_not_fou);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar1,(MethodInfo *)0x0);
      uVar8 = func_?(&
                                   MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                                  );
      FUN_?(pEVar9,uVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void LoadAccessory() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
               (AccessoryLoader_AccessoryLoaderRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__LoadAccessory__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedAssetBundleRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__LoadAccessory__
               ,(MethodInfo *)0x0);
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
      pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    return;
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__Common__Urls);
  }
  pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
           FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar3,(Object *)this,
             MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__LoadAccessory__
             ,(MethodInfo *)0x0);
  pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
  if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
         (Urls_OnStreamingAssetsUrlAvailable *)0x0;
  }
  else {
    pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar4 = pUVar2;
    }
    if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      FUN_?(pUVar2,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar4;
    pUVar4 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar2->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
      pUVar4 = pUVar2;
    }
    if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      FUN_?(pUVar2);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar11 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
  pSVar11 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar11,(this->fields).subUrl,(MethodInfo *)0x0);
  if (pSVar11 != (String *)0x0) {
    length = mscorlib.dll::System::SpanHelpers::SpanHelpers_LastIndexOf
                       (&(pSVar11->fields)._firstChar,0x2f,(pSVar11->fields)._stringLength,
                        (MethodInfo *)0x0);
    str0 = mscorlib.dll::System::String::String_Substring_1(pSVar11,0,length,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Substring_1
                       (pSVar11,length,(pSVar11->fields)._stringLength - length,(MethodInfo *)0x0);
    if (pSVar11 != (String *)0x0) {
      pSVar11 = mscorlib.dll::System::String::String_ToLowerInvariant(pSVar11,(MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar11,(MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,pSVar11,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Remove() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_Remove
               (AccessoryLoader_AccessoryLoaderRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).accessoryCreatedCallback = (Action_2_Int32_AvatarAccessory_ *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryCreatedCallback >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current._4_4_ = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._36_4_ = 0;
  QStack_7._q = (Queue_1_System_Object_ *)0x0;
  QStack_7._version = 0;
  QStack_7._index = 0;
  QStack_7._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar8 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar8 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pHStack_9 >> 0xc);
      lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar3 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar1 = uVar5 == *puVar3;
        if (bVar1) {
          *puVar3 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar8->fields)._version << 0x20);
    uStack_12 = 0;
    auStack_13._8_8_ = pDStack_11;
    pOStack_14 = (Object *)0x0;
    pHStack_9 = pHVar8;
    auStack_13._0_8_ = pHVar8;
code_?:
    while (bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_13,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar16 = pOStack_14, bVar15 != 0) {
      ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar17 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar16 == (Object *)0x0) goto code_?;
      pOVar18 = pOVar16[1].klass;
      if (pOVar18 == (Object__Class *)0x0) goto code_?;
      if ((this_01 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar19 = (**(code **)&(pOVar18->_0).image[4].typeCount)(pOVar18,this_01), cVar19 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar20 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar20 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pDStack_21 >> 0xc);
        lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar3 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar1 = uVar5 == *puVar3;
          if (bVar1) {
            *puVar3 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      uStack_22 = (ulonglong)(uint)(pDVar20->fields)._version;
      uStack_23 = 2;
      uStack_24 = 0;
      uStack_25 = 0;
      DStack_6._version = (undefined4)uStack_22;
      DStack_6._index = uStack_22._4_4_;
      DStack_6._current.key = 0;
      DStack_6._current._4_4_ = 0;
      DStack_6._current.value = (Object *)0x0;
      DStack_6._getEnumeratorRetType = 2;
      DStack_6._36_4_ = 0;
      pHStack_9 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_11 = &DStack_6;
      pDStack_21 = pDVar20;
      DStack_6._dictionary = pDVar20;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_6,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar15 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_6._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_22 = 0;
        uStack_24 = 0;
        pDStack_21 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_6._current.value;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&pDStack_21 >> 0xc);
          lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar3 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar1 = uVar5 == *puVar3;
            if (bVar1) {
              *puVar3 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_6._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_7._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_6._current.value + 0x10))->_freeList;
        uStack_22 = CONCAT44(0xffffffff,QStack_7._version);
        uStack_24 = 0;
        QStack_7._q = (Queue_1_System_Object_ *)DStack_6._current.value;
        QStack_7._index = 0xffffffff;
        QStack_7._currentElement = (Object *)0x0;
        while (bVar15 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_7,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar16 = QStack_7._currentElement, bVar15 != 0) {
          ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_7._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar16,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar16;
        }
        QStack_7._index = 0xfffffffe;
        QStack_7._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_00 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar17,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar10 = func_?((((AsyncWWWManager__Class *)ppAVar17)->_0).byval_arg.data.dummy);
  uVar26 = func_?(*(undefined8 *)(lVar10 + 0xc0),4);
  FUN_?(&QStack_7,uVar26);
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
code_?:
  if (this_01 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar16[1].klass,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar18 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar18 = (Object__Class *)
                  FUN_?(unaff_RDI,
                                TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar18 == (Object__Class *)0x0)) goto code_?;
    pOVar16[1].klass = pOVar18;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)(pOVar16 + 1) >> 0xc);
      lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar3 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar1 = uVar5 == *puVar3;
        if (bVar1) {
          *puVar3 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  goto code_?;
}

