
/* Void OpenGameInfo() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::GameTile::GameTile_OpenGameInfo
               (GameTile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
  if (pOVar1 == (Object__Class *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pGVar3 = (this->fields).gameDto;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,pGVar3,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PortalControl____c__DisplayClass33_0___OpenGameInfo_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PortalControl____c__DisplayClass33_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PortalControl____c__DisplayClass33_0);
  if (object != (Object *)0x0) {
    object[1].klass = pOVar1;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    iVar9 = iRam_?;
    object[1].monitor = (MonitorData *)pGVar3;
    if (iVar9 != 0) {
      uVar4 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    if (object[1].monitor == (MonitorData *)0x0) {
      return;
    }
    pPVar10 = *(PopupHandler **)&(pOVar1->_0).this_arg.attrs;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,object,MethodInfo__PortalControl____c__DisplayClass33_0___OpenGameInfo_b__0__
               ,(MethodInfo *)0x0);
    if ((pPVar10 != (PopupHandler *)0x0) &&
       (pTVar11 = (pPVar10->fields).titleText, pTVar11 != (TMP_Text *)0x0)) {
      (*(pTVar11->klass->vtable).set_text.methodPtr)();
      bVar8 = iRam_? != 0;
      (pPVar10->fields).actionButtonCallback = (Action *)this_02;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&(pPVar10->fields).actionButtonCallback >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pPVar10 = *(PopupHandler **)&(pOVar1->_0).this_arg.attrs;
      if ((pPVar10 != (PopupHandler *)0x0) &&
         (this_00 = (pPVar10->fields).canvasGroup, this_00 != (CanvasGroup *)0x0)) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pPVar10,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_03,1,(MethodInfo *)0x0);
          this_01 = (pPVar10->fields).fadingTween;
          if (this_01 != (FadingTween *)0x0) {
            FadingTween::FadingTween_FadeIn(this_01,_UNK_?,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDefaultImage() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::GameTile::GameTile_SetDefaultImage
               (GameTile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Sprite>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__GameTile___SetDefaultImage_b__4_0_UnityEngine__Sprite_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__ImageDownloader);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__GameTile____c___SetDefaultImage_b__4_1_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__GameTile____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
  if (((pPVar1 != (PortalControl *)0x0) &&
      (this_00 = (pPVar1->fields)._RegionConfigManager_k__BackingField,
      this_00 != (RegionConfigManager *)0x0)) &&
     (pRVar2 = RegionConfigManager::RegionConfigManager_get_RegionConfig(this_00,(MethodInfo *)0x0),
     pRVar2 != (RegionConfig *)0x0)) {
    pSVar3 = (pRVar2->fields).StaticAssetsConfig.url;
    if (*(int *)&(TypeInfo__UGUI__Portal__Scripts__ImageDownloader->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Portal__Scripts__ImageDownloader);
    }
    pDVar4 = TypeInfo__UGUI__Portal__Scripts__ImageDownloader->static_fields->DefaultImages;
    if ((pDVar4 != (DefaultImages *)0x0) &&
       (pDVar5 = (pDVar4->fields).defaultGameImages, pDVar5 != (DefaultGameImages *)0x0)) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar3,(pDVar5->fields).medium,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields->
                _Instance_k__BackingField;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Sprite>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__UGUI__Portal__Scripts__GameTile___SetDefaultImage_b__4_0_UnityEngine__Sprite_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UGUI__Portal__Scripts__GameTile____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_03 = TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9__4_1;
      if (this_03 == (Action_1_String_ *)0x0) {
        if (*(int *)&(TypeInfo__UGUI__Portal__Scripts__GameTile____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9;
        this_03 = (Action_1_String_ *)FUN_?(TypeInfo__System__Action<System::String>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_03,(Object *)object,
                   MethodInfo__UGUI__Portal__Scripts__GameTile____c___SetDefaultImage_b__4_1_System__String_
                   ,(MethodInfo *)0x0);
        TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9__4_1 = this_03;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)
                          &TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9__4_1
                         >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
      }
      if (this_01 != (KgmCacheManager *)0x0) {
        Utils::Cache::KgmCacheManager::KgmCacheManager_DownloadImage
                  (this_01,pSVar3,(Action_1_UnityEngine_Sprite_ *)this_02,this_03,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateContent(GameDto) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::GameTile::GameTile_UpdateContent
               (GameTile *this,GameDto *gameDto,MethodInfo *method)

{
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
  bVar1 = iRam_? != 0;
  (this->fields).gameDto = gameDto;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameDto >> 0xc);
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
  if ((gameDto != (GameDto *)0x0) && (pTVar6 = (this->fields).titleText, pTVar6 != (TMP_Text *)0x0))
  {
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,(gameDto->fields).name,(pTVar6->klass->vtable).set_text.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    imageUrl = (gameDto->fields).image_small;
    this_00 = TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields->
              _Instance_k__BackingField;
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Sprite>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__UGUI__Portal__Scripts__GameTile___UpdateContent_b__3_0_UnityEngine__Sprite_
               ,(MethodInfo *)0x0);
    this_02 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__UGUI__Portal__Scripts__GameTile___UpdateContent_b__3_1_System__String_,
               (MethodInfo *)0x0);
    if (this_00 != (KgmCacheManager *)0x0) {
      Utils::Cache::KgmCacheManager::KgmCacheManager_DownloadImage
                (this_00,imageUrl,(Action_1_UnityEngine_Sprite_ *)this_01,
                 (Action_1_String_ *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <SetDefaultImage>b__4_0(Sprite) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::GameTile::GameTile__SetDefaultImage_b__4_0
               (GameTile *this,Sprite *sprite,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 == (Image *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,sprite,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = (this_00->fields).m_Sprite;
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
  if (pSVar2 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar2->fields)._.m_CachedPtr != (void *)0x0) {
      pSVar2 = (this_00->fields).m_Sprite;
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
      if (sprite == (Sprite *)0x0 && pSVar2 == (Sprite *)0x0) {
        return;
      }
      if (sprite == (Sprite *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pSVar2 == (Sprite *)0x0) goto code_?;
        bVar3 = (pSVar2->fields)._.m_CachedPtr == (void *)0x0;
      }
      else if (pSVar2 == (Sprite *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = (sprite->fields)._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar3 = pSVar2 == sprite;
      }
      pTVar4 = (Texture2D *)0x0;
      if (bVar3) {
        return;
      }
      pSVar2 = (this_00->fields).m_Sprite;
      if (pSVar2 == (Sprite *)0x0) {
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
      pvVar5 = (pSVar2->fields)._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar2,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar5);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = (MethodInfo *)sprite;
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)sprite,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        VVar9 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar7);
        fStackX_8 = VVar9.x;
        fStackX_c = VVar9.y;
        fStack_10 = fStackX_c;
        fStack_11 = fStackX_8;
      }
      else {
        if (sprite == (Sprite *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (sprite->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)sprite,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar5);
        fStack_11 = 0.0;
        fStack_10 = 0.0;
      }
      if ((fStack_11 == 0.0) && (fStack_10 == 0.0)) {
        bVar8 = 1;
      }
      else {
        bVar8 = 0;
      }
      (this_00->fields)._._.m_SkipLayoutUpdate = bVar8;
      pSVar2 = (this_00->fields).m_Sprite;
      if (pSVar2 == (Sprite *)0x0) goto code_?;
      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (pSVar2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)sprite,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        if (sprite == (Sprite *)0x0) goto code_?;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            (sprite,(MethodInfo *)0x0);
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
      if (pTVar4 != (Texture2D *)0x0 || pTVar12 != (Texture2D *)0x0) {
        if (pTVar4 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar12 == (Texture2D *)0x0) goto code_?;
          bVar3 = (pTVar12->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar12 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar3 = (pTVar4->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar3 = pTVar12 == pTVar4;
        }
        if (!bVar3) {
          bVar8 = 0;
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
      bVar8 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_CheckSecondaryTexturesChanged_1
                        (this_00,sprite,
                         &TypeInfo__UnityEngine__UI__Image->static_fields->
                          s_TempNewSecondaryTextures,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_ClearArray
                (&TypeInfo__UnityEngine__UI__Image->static_fields->s_TempNewSecondaryTextures,
                 (MethodInfo *)0x0);
      bVar8 = bVar8 ^ 1;
code_?:
      bVar3 = iRam_? != 0;
      (this_00->fields)._._.m_SkipMaterialUpdate = bVar8;
      (this_00->fields).m_Sprite = sprite;
      if (bVar3) {
        uVar13 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
        uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar15 == *puVar16;
          if (bVar3) {
            *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
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
  if (sprite == (Sprite *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((sprite->fields)._.m_CachedPtr == (void *)0x0) {
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
  pMVar7 = (sprite->fields)._.m_CachedPtr;
  if (pMVar7 == (MethodInfo *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)sprite,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  VVar9 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar7);
  fStackX_8 = VVar9.x;
  fStackX_c = VVar9.y;
  (this_00->fields)._._.m_SkipLayoutUpdate =
       (0.0 - fStackX_c) * (0.0 - fStackX_c) + (0.0 - fStackX_8) * (0.0 - fStackX_8) <
       _UNK_?;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      (sprite,(MethodInfo *)0x0);
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
  if (pTVar4 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar4->fields)._._.m_CachedPtr != (void *)0x0) {
      bVar3 = false;
      goto code_?;
    }
  }
  iVar17 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_GetSecondaryTextureCount
                    (sprite,(MethodInfo *)0x0);
  bVar3 = iVar17 == 0;
code_?:
  bVar18 = iRam_? != 0;
  (this_00->fields)._._.m_SkipMaterialUpdate = bVar3;
  (this_00->fields).m_Sprite = sprite;
  if (bVar18) {
    uVar13 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
    uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
      puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar15 == *puVar16;
      if (bVar3) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
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
  pSVar2 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
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
  if (pSVar2 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar2->fields)._.m_CachedPtr != (void *)0x0) {
      pSVar2 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                          (this_00,(MethodInfo *)0x0);
      if (pSVar2 != (Sprite *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            (pSVar2,(MethodInfo *)0x0);
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
        if (pTVar4 != (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pTVar4->fields)._._.m_CachedPtr != (void *)0x0) {
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
        pMVar7 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__Add_UnityEngine__UI__Image_
        ;
        this_01 = TypeInfo__UnityEngine__UI__Image->static_fields->m_TrackedTexturelessImages;
        if (this_01 != (List_1_UnityEngine_UI_Image_ *)0x0) {
          piVar19 = &(this_01->fields)._version;
          *piVar19 = *piVar19 + 1;
          pIVar20 = (this_01->fields)._items;
          if (pIVar20 != (Image__Array *)0x0) {
            uVar13 = (this_01->fields)._size;
            if (uVar13 < (uint)pIVar20->max_length) {
              (this_01->fields)._size = uVar13 + 1;
              FUN_?(pIVar20,(longlong)(int)uVar13,this_00);
              (this_00->fields).m_Tracked = 1;
              return;
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_01,(Object *)this_00,
                       pMVar7->klass->rgctx_data[0xe].method);
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


/* Void <UpdateContent>b__3_1(String) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::GameTile::GameTile__UpdateContent_b__3_1
               (GameTile *this,String *error,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)error,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Sprite>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__GameTile___SetDefaultImage_b__4_0_UnityEngine__Sprite_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__ImageDownloader);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__GameTile____c___SetDefaultImage_b__4_1_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__GameTile____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
  if (((pPVar1 != (PortalControl *)0x0) &&
      (this_00 = (pPVar1->fields)._RegionConfigManager_k__BackingField,
      this_00 != (RegionConfigManager *)0x0)) &&
     (pRVar2 = RegionConfigManager::RegionConfigManager_get_RegionConfig(this_00,(MethodInfo *)0x0),
     pRVar2 != (RegionConfig *)0x0)) {
    pSVar3 = (pRVar2->fields).StaticAssetsConfig.url;
    if (*(int *)&(TypeInfo__UGUI__Portal__Scripts__ImageDownloader->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Portal__Scripts__ImageDownloader);
    }
    pDVar4 = TypeInfo__UGUI__Portal__Scripts__ImageDownloader->static_fields->DefaultImages;
    if ((pDVar4 != (DefaultImages *)0x0) &&
       (pDVar5 = (pDVar4->fields).defaultGameImages, pDVar5 != (DefaultGameImages *)0x0)) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar3,(pDVar5->fields).medium,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields->
                _Instance_k__BackingField;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Sprite>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__UGUI__Portal__Scripts__GameTile___SetDefaultImage_b__4_0_UnityEngine__Sprite_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UGUI__Portal__Scripts__GameTile____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_03 = TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9__4_1;
      if (this_03 == (Action_1_String_ *)0x0) {
        if (*(int *)&(TypeInfo__UGUI__Portal__Scripts__GameTile____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9;
        this_03 = (Action_1_String_ *)FUN_?(TypeInfo__System__Action<System::String>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_03,(Object *)object,
                   MethodInfo__UGUI__Portal__Scripts__GameTile____c___SetDefaultImage_b__4_1_System__String_
                   ,(MethodInfo *)0x0);
        TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9__4_1 = this_03;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)
                          &TypeInfo__UGUI__Portal__Scripts__GameTile____c->static_fields->__9__4_1
                         >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
      }
      if (this_01 != (KgmCacheManager *)0x0) {
        Utils::Cache::KgmCacheManager::KgmCacheManager_DownloadImage
                  (this_01,pSVar3,(Action_1_UnityEngine_Sprite_ *)this_02,this_03,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

