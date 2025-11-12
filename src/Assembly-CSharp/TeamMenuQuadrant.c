
/* Void Initialize(TeamData) */

void Assembly-CSharp.dll::TeamMenuQuadrant::TeamMenuQuadrant_Initialize
               (TeamMenuQuadrant *this,TeamData *teamData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).teamData = teamData;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).teamData >> 0xc);
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
  pTVar6 = (this->fields).players;
  if ((teamData == (TeamData *)0x0) ||
     (pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(teamData->fields).playersCount,(MethodInfo *)0x0),
     pTVar6 == (Text *)0x0)) {
DAT_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (*(pTVar6->klass->vtable).set_text.methodPtr)
            (pTVar6,pSVar7,(pTVar6->klass->vtable).set_text.method);
  pTVar6 = (this->fields).score;
  pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                      ((Int32 *)&(teamData->fields).score,(MethodInfo *)0x0);
  if (pTVar6 == (Text *)0x0) goto DAT_?;
  (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6,pSVar7);
  pIVar9 = (this->fields).header;
  team = (teamData->fields).team;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  Styles::Styles_SetStyle_3((Graphic *)pIVar9,team,(MethodInfo *)0x0);
  Styles::Styles_SetStyle_3
            ((Graphic *)(this->fields).buttonImage,(teamData->fields).team,(MethodInfo *)0x0);
  key = (teamData->fields).team;
  pIVar9 = (this->fields).teamImage;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                  ,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Styles);
  }
  this_00 = TypeInfo__Styles->static_fields->teamIconStylesDictionary;
  if (((this_00 == (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0) ||
      (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar10 == (Object *)0x0)) || (pIVar9 == (Image *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pMVar11 = (MethodInfo *)pOVar10[1].monitor;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,pMVar11,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar12 = (pIVar9->fields).m_Sprite;
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
  if (pSVar12 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar12->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar13 = (MethodInfo *)(pIVar9->fields).m_Sprite;
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
      if (pMVar11 == (MethodInfo *)0x0 && pMVar13 == (MethodInfo *)0x0) {
        return;
      }
      if (pMVar11 == (MethodInfo *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pMVar13 == (MethodInfo *)0x0) goto code_?;
        bVar1 = (((Sprite__Fields *)&pMVar13->invoker_method)->_).m_CachedPtr == (void *)0x0;
      }
      else if (pMVar13 == (MethodInfo *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar1 = (((Sprite__Fields *)&pMVar11->invoker_method)->_).m_CachedPtr == (void *)0x0;
      }
      else {
        bVar1 = pMVar13 == pMVar11;
      }
      pTVar14 = (Texture2D *)0x0;
      if (bVar1) {
        return;
      }
      pSVar12 = (pIVar9->fields).m_Sprite;
      if (pSVar12 == (Sprite *)0x0) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
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
      pvVar15 = (pSVar12->fields)._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar12,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar15);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar13 = pMVar11;
      bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar11,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        VVar18 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar13);
        fStack_19 = VVar18.x;
        fStack_20 = VVar18.y;
      }
      else {
        if (pMVar11 == (MethodInfo *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar15 = (((Sprite__Fields *)&pMVar11->invoker_method)->_).m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar11,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar15);
        fStack_19 = 0.0;
        fStack_20 = 0.0;
      }
      if ((fStack_19 == 0.0) && (fStack_20 == 0.0)) {
        bVar17 = 1;
      }
      else {
        bVar17 = 0;
      }
      (pIVar9->fields)._._.m_SkipLayoutUpdate = bVar17;
      pSVar12 = (pIVar9->fields).m_Sprite;
      if (pSVar12 == (Sprite *)0x0) goto code_?;
      pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (pSVar12,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar11,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        if (pMVar11 == (MethodInfo *)0x0) goto code_?;
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            ((Sprite *)pMVar11,(MethodInfo *)0x0);
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
      if (pTVar14 != (Texture2D *)0x0 || pTVar21 != (Texture2D *)0x0) {
        if (pTVar14 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar21 == (Texture2D *)0x0) goto code_?;
          bVar1 = (pTVar21->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar21 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar1 = (pTVar14->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar1 = pTVar21 == pTVar14;
        }
        if (!bVar1) {
          bVar17 = 0;
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
      bVar17 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_CheckSecondaryTexturesChanged_1
                        (pIVar9,(Sprite *)pMVar11,
                         &TypeInfo__UnityEngine__UI__Image->static_fields->
                          s_TempNewSecondaryTextures,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_ClearArray
                (&TypeInfo__UnityEngine__UI__Image->static_fields->s_TempNewSecondaryTextures,
                 (MethodInfo *)0x0);
      bVar17 = bVar17 ^ 1;
code_?:
      bVar1 = iRam_? != 0;
      (pIVar9->fields)._._.m_SkipMaterialUpdate = bVar17;
      (pIVar9->fields).m_Sprite = (Sprite *)pMVar11;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pIVar9->fields).m_Sprite >> 0xc);
        uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar3;
          if (bVar1) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::
      Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(pIVar9,(MethodInfo *)0x0);
      (*(pIVar9->klass->vtable).SetAllDirty.methodPtr)(pIVar9);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(pIVar9,(MethodInfo *)0x0);
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
  if (pMVar11 == (MethodInfo *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((((Sprite__Fields *)&pMVar11->invoker_method)->_).m_CachedPtr == (void *)0x0) {
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
  pMVar13 = (((Sprite__Fields *)&pMVar11->invoker_method)->_).m_CachedPtr;
  if (pMVar13 == (MethodInfo *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar11,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)();
  VVar18 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar13);
  fVar22 = 0.0 - VVar18.x;
  fVar23 = 0.0 - VVar18.y;
  (pIVar9->fields)._._.m_SkipLayoutUpdate = fVar23 * fVar23 + fVar22 * fVar22 < _UNK_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      ((Sprite *)pMVar11,(MethodInfo *)0x0);
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
  if (pTVar14 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar14->fields)._._.m_CachedPtr != (void *)0x0) {
      bVar1 = false;
      goto code_?;
    }
  }
  iVar24 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_GetSecondaryTextureCount
                     ((Sprite *)pMVar11,(MethodInfo *)0x0);
  bVar1 = iVar24 == 0;
code_?:
  bVar25 = iRam_? != 0;
  (pIVar9->fields)._._.m_SkipMaterialUpdate = bVar1;
  (pIVar9->fields).m_Sprite = (Sprite *)pMVar11;
  if (bVar25) {
    uVar2 = (uint)((ulonglong)&(pIVar9->fields).m_Sprite >> 0xc);
    uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar3;
      if (bVar1) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::
  Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(pIVar9,(MethodInfo *)0x0);
  (*(pIVar9->klass->vtable).SetAllDirty.methodPtr)(pIVar9);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__Image);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar12 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                      (pIVar9,(MethodInfo *)0x0);
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
  if (pSVar12 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar12->fields)._.m_CachedPtr != (void *)0x0) {
      pSVar12 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                          (pIVar9,(MethodInfo *)0x0);
      if (pSVar12 != (Sprite *)0x0) {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            (pSVar12,(MethodInfo *)0x0);
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
        if (pTVar14 != (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pTVar14->fields)._._.m_CachedPtr != (void *)0x0) {
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
        pMVar11 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__Add_UnityEngine__UI__Image_
        ;
        this_01 = TypeInfo__UnityEngine__UI__Image->static_fields->m_TrackedTexturelessImages;
        if (this_01 != (List_1_UnityEngine_UI_Image_ *)0x0) {
          piVar26 = &(this_01->fields)._version;
          *piVar26 = *piVar26 + 1;
          pIVar27 = (this_01->fields)._items;
          if (pIVar27 != (Image__Array *)0x0) {
            uVar2 = (this_01->fields)._size;
            if (uVar2 < (uint)pIVar27->max_length) {
              (this_01->fields)._size = uVar2 + 1;
              FUN_?(pIVar27,(longlong)(int)uVar2,pIVar9);
              (pIVar9->fields).m_Tracked = 1;
              return;
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_01,(Object *)pIVar9,
                       pMVar11->klass->rgctx_data[0xe].method);
            (pIVar9->fields).m_Tracked = 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* Void TeamSelected() */

void Assembly-CSharp.dll::TeamMenuQuadrant::TeamMenuQuadrant_TeamSelected
               (TeamMenuQuadrant *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TeamMenuQuadrant____c___TeamSelected_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamMenuQuadrant____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pTVar3 = (this->fields).teamData, pTVar3 == (TeamData *)0x0)) ||
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 == (MVNetworkGame_OperationRequests *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
            (this_00,(pTVar3->fields).team,(MethodInfo *)0x0);
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__TeamMenuQuadrant____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TeamMenuQuadrant____c);
  }
  this_02 = TypeInfo__TeamMenuQuadrant____c->static_fields->__9__7_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__TeamMenuQuadrant____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TeamMenuQuadrant____c);
    }
    object = TypeInfo__TeamMenuQuadrant____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__TeamMenuQuadrant____c___TeamSelected_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TeamMenuQuadrant____c->static_fields->__9__7_0 = this_02;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&TypeInfo__TeamMenuQuadrant____c->static_fields->__9__7_0 >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar10 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar10);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar5,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar12 = (longlong)(pLVar11->fields)._size;
    uVar6 = 0;
    if (0 < lVar12) {
      lVar13 = 0;
      lVar14 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar11->fields)._size <= uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar15 = (pLVar11->fields)._items;
        if (pTVar15 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar15->max_length <= uVar6) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = *(Component **)((longlong)pTVar15->vector + lVar14 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
        bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar5,(BaseEventData *)0x0,
                            (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                            (pMVar10->field7_0x38).rgctx_data[1].method);
        if (bVar16 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        uVar6 = uVar6 + 1;
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar13 < lVar12);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

