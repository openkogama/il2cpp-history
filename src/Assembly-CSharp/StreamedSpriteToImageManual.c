
/* Void Download(String, UnityAction) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
               (StreamedSpriteToImageManual *this,String *url,UnityAction *onAssetSet,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__DownloadWhenPossible__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).onAssetSetManual = onAssetSet;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).onAssetSetManual >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._._.url = url;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.url >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pUVar7 = (this->fields)._._.onAssetSetAction;
  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar8,(Object *)this,MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__,
             (MethodInfo *)0x0);
  pUVar7 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
  if (pUVar7 == (UnityAction *)0x0) {
    (this->fields)._._.onAssetSetAction = (UnityAction *)0x0;
  }
  else {
    pUVar9 = (UnityAction *)0x0;
    if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar9 = pUVar7;
    }
    if (pUVar9 == (UnityAction *)0x0) {
      FUN_?(pUVar7,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this->fields)._._.onAssetSetAction = pUVar9;
    pUVar9 = (UnityAction *)0x0;
    if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar9 = pUVar7;
    }
    if (pUVar9 == (UnityAction *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.onAssetSetAction >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMVar11 = 
  MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__DownloadWhenPossible__;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
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
  bVar12 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar12 == 0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar13 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar8,(Object *)this,pMVar11->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0);
    pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar13,(Delegate *)pNVar8,(MethodInfo *)0x0);
    if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar13->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar13,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar14;
      pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar13->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar13,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  else {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar13 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar8,(Object *)this,pMVar11->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0);
    pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar13,(Delegate *)pNVar8,(MethodInfo *)0x0);
    if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar13->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar13,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar14;
      pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar13->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar14 = pUVar13;
      }
      if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar13,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    requestPriority = (this->fields)._.requestPriority;
    pUVar7 = (this->fields)._._.onAssetSetAction;
    url_00 = (this->fields)._._.url;
    if ((this->fields)._.useCache == 0) {
      StreamingAsset::StreamingAsset_Download_NonCached
                ((StreamingAsset *)this,url_00,pUVar7,requestPriority,(MethodInfo *)0x0);
    }
    else {
      StreamingAsset::StreamingAsset_Download_Cached
                ((StreamingAsset *)this,url_00,pUVar7,requestPriority,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual_OnAssetSet
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__get_Asset__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).image;
  if (this_00 == (Image *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = (MethodInfo *)(this->fields)._.asset;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,pMVar2,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = (this_00->fields).m_Sprite;
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
  if (pSVar3 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar3->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar4 = (MethodInfo *)(this_00->fields).m_Sprite;
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
      if (pMVar2 == (MethodInfo *)0x0 && pMVar4 == (MethodInfo *)0x0) {
        return;
      }
      if (pMVar2 == (MethodInfo *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pMVar4 == (MethodInfo *)0x0) goto code_?;
        bVar5 = (((Sprite__Fields *)&pMVar4->invoker_method)->_).m_CachedPtr == (void *)0x0;
      }
      else if (pMVar4 == (MethodInfo *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar5 = (((Sprite__Fields *)&pMVar2->invoker_method)->_).m_CachedPtr == (void *)0x0;
      }
      else {
        bVar5 = pMVar4 == pMVar2;
      }
      pTVar6 = (Texture2D *)0x0;
      if (bVar5) {
        return;
      }
      pSVar3 = (this_00->fields).m_Sprite;
      if (pSVar3 == (Sprite *)0x0) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pSVar3->fields)._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar3,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar7);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar4 = pMVar2;
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar2,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        VVar10 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar4);
        fStackX_8 = VVar10.x;
        fStackX_c = VVar10.y;
        fStack_11 = fStackX_c;
        fStack_12 = fStackX_8;
      }
      else {
        if (pMVar2 == (MethodInfo *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (((Sprite__Fields *)&pMVar2->invoker_method)->_).m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar2,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar7);
        fStack_12 = 0.0;
        fStack_11 = 0.0;
      }
      if ((fStack_12 == 0.0) && (fStack_11 == 0.0)) {
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      (this_00->fields)._._.m_SkipLayoutUpdate = bVar9;
      pSVar3 = (this_00->fields).m_Sprite;
      if (pSVar3 == (Sprite *)0x0) goto code_?;
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar2,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        if (pMVar2 == (MethodInfo *)0x0) goto code_?;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            ((Sprite *)pMVar2,(MethodInfo *)0x0);
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
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar6 != (Texture2D *)0x0 || pTVar13 != (Texture2D *)0x0) {
        if (pTVar6 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar13 == (Texture2D *)0x0) goto code_?;
          bVar5 = (pTVar13->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar13 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar5 = (pTVar6->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar5 = pTVar13 == pTVar6;
        }
        if (!bVar5) {
          bVar9 = 0;
          goto code_?;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__UI__Image);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__UI__Image);
      }
      bVar9 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_CheckSecondaryTexturesChanged_1
                        (this_00,(Sprite *)pMVar2,
                         &TypeInfo__UnityEngine__UI__Image->static_fields->
                          s_TempNewSecondaryTextures,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_ClearArray
                (&TypeInfo__UnityEngine__UI__Image->static_fields->s_TempNewSecondaryTextures,
                 (MethodInfo *)0x0);
      bVar9 = bVar9 ^ 1;
code_?:
      bVar5 = iRam_? != 0;
      (this_00->fields)._._.m_SkipMaterialUpdate = bVar9;
      (this_00->fields).m_Sprite = (Sprite *)pMVar2;
      if (bVar5) {
        uVar14 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
        uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
        do {
          uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
          puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar16 == *puVar17;
          if (bVar5) {
            *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::
      Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_00,(MethodInfo *)0x0);
      (*(this_00->klass->vtable).SetAllDirty.methodPtr)(this_00);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
      return;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar2 == (MethodInfo *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((((Sprite__Fields *)&pMVar2->invoker_method)->_).m_CachedPtr == (void *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = (((Sprite__Fields *)&pMVar2->invoker_method)->_).m_CachedPtr;
  if (pMVar4 == (MethodInfo *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar2,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  VVar10 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar4);
  fStackX_8 = VVar10.x;
  fStackX_c = VVar10.y;
  (this_00->fields)._._.m_SkipLayoutUpdate =
       (0.0 - fStackX_c) * (0.0 - fStackX_c) + (0.0 - fStackX_8) * (0.0 - fStackX_8) <
       _UNK_?;
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      ((Sprite *)pMVar2,(MethodInfo *)0x0);
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
  if (pTVar6 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar6->fields)._._.m_CachedPtr != (void *)0x0) {
      bVar5 = false;
      goto code_?;
    }
  }
  iVar18 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_GetSecondaryTextureCount
                    ((Sprite *)pMVar2,(MethodInfo *)0x0);
  bVar5 = iVar18 == 0;
code_?:
  bVar19 = iRam_? != 0;
  (this_00->fields)._._.m_SkipMaterialUpdate = bVar5;
  (this_00->fields).m_Sprite = (Sprite *)pMVar2;
  if (bVar19) {
    uVar14 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
    uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
      puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar16 == *puVar17;
      if (bVar5) {
        *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::
  Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_00,(MethodInfo *)0x0);
  (*(this_00->klass->vtable).SetAllDirty.methodPtr)(this_00);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__Image);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                      (this_00,(MethodInfo *)0x0);
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
  if (pSVar3 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar3->fields)._.m_CachedPtr != (void *)0x0) {
      pSVar3 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                          (this_00,(MethodInfo *)0x0);
      if (pSVar3 != (Sprite *)0x0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            (pSVar3,(MethodInfo *)0x0);
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
        if (pTVar6 != (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pTVar6->fields)._._.m_CachedPtr != (void *)0x0) {
            return;
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<UnityEngine::U2D::SpriteAtlas>);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__UnityEngine__UI__Image__RebuildImage_UnityEngine__U2D__SpriteAtlas_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__UI__Image);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__Add_UnityEngine__UI__Image_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (TypeInfo__UnityEngine__UI__Image->static_fields->s_Initialized == 0) {
          this_02 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<UnityEngine::U2D::SpriteAtlas>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_02,(Object *)0x0,
                     MethodInfo__UnityEngine__UI__Image__RebuildImage_UnityEngine__U2D__SpriteAtlas_
                     ,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::U2D::SpriteAtlasManager::
          SpriteAtlasManager_add_atlasRegistered
                    ((Action_1_UnityEngine_U2D_SpriteAtlas_ *)this_02,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__UI__Image);
          }
          TypeInfo__UnityEngine__UI__Image->static_fields->s_Initialized = 1;
        }
        if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar2 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__Add_UnityEngine__UI__Image_
        ;
        this_01 = TypeInfo__UnityEngine__UI__Image->static_fields->m_TrackedTexturelessImages;
        if (this_01 != (List_1_UnityEngine_UI_Image_ *)0x0) {
          piVar20 = &(this_01->fields)._version;
          *piVar20 = *piVar20 + 1;
          pIVar21 = (this_01->fields)._items;
          if (pIVar21 != (Image__Array *)0x0) {
            uVar14 = (this_01->fields)._size;
            if (uVar14 < (uint)pIVar21->max_length) {
              (this_01->fields)._size = uVar14 + 1;
              FUN_?(pIVar21,(longlong)(int)uVar14,this_00);
              (this_00->fields).m_Tracked = 1;
              return;
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_01,(Object *)this_00,
                       pMVar2->klass->rgctx_data[0xe].method);
            (this_00->fields).m_Tracked = 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


/* Void OnAssetSetCallback() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::
     StreamedSpriteToImageManual_OnAssetSetCallback
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._.onAssetSetAction;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    (this->fields)._._.onAssetSetAction = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields)._._.onAssetSetAction = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._._.onAssetSetAction >> 0xc);
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
  if ((this->fields).onAssetSetManual != (UnityAction *)0x0) {
    pUVar1 = (this->fields).onAssetSetManual;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::
     StreamedSpriteToImageManual_OnDownloadFinished
               (StreamedSpriteToImageManual *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__set_Asset_UnityEngine__Sprite_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Sprite_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::Sprite>_UnityEngine__Networking__UnityWebRequest_
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
    if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
      if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
        FUN_?();
      }
      value = StreamingAsset::StreamingAsset_UnpackBundle_Cached
                        (www,
                         UnityEngine__Sprite_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::Sprite>_UnityEngine__Networking__UnityWebRequest_
                        );
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__set_Asset
                ((StreamingAsset_2_System_Object_System_Object_ *)this,value,
                 MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__set_Asset_UnityEngine__Sprite_
                );
      if ((this->fields)._.useCache == 0) {
        if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
          FUN_?();
        }
        routine = StreamingAsset::StreamingAsset_DelayedUnload(www,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual_Reset
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).image;
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
  if (pIVar1 != (Image *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pIVar1->fields)._._._._._._._ != (void *)0x0) {
      return;
    }
  }
  pIVar1 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                              );
  bVar2 = iRam_? != 0;
  (this->fields).image = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).image >> 0xc);
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
  return;
}


/* StreamedSpriteToImageManual() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual__ctor
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__StreamingAsset__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StreamingAsset,
                  MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__StreamingAsset__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.useCache = 1;
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_NOT_SET);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._._.url = StringLiteral_NOT_SET;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.url >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar9;
      LOCK();
      bVar1 = uVar2 != uRam_?;
      uVar10 = uVar2;
      uVar11 = uVar2 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar10, uVar2 = uVar10, uVar10 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar12 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar14 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar2 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar16 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar9 = pIVar16->methods;
            pMVar17 = *ppMVar9;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar7;
                while (ppMVar19 = ppMVar18 + 0x30528cee,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar5 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_23 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar5;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar8 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar15 + 0x28U >> 0xc);
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
      }
      FUN_?(pOVar6,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar20 = _UNK_?;
      uVar5 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar6->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

