
/* Void UpdateToggleState() */

void Assembly-CSharp.dll::ToggleStateHandler::ToggleStateHandler_UpdateToggleState
               (ToggleStateHandler *this,MethodInfo *method)

{
  if ((this->fields)._.usingImageComponent == 0) {
    this_00 = (this->fields)._.button;
    if (this_00 == (Button *)0x0) goto code_?;
    this_02 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                        ((Selectable *)this_00,(MethodInfo *)0x0);
  }
  else {
    this_02 = (this->fields)._.imageComponent;
  }
  if (this_02 == (Image *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->fields)._.toggleState == 0) {
    pMVar2 = (MethodInfo *)(this->fields).toggleOff;
  }
  else {
    pMVar2 = (MethodInfo *)(this->fields).toggleOn;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = (this_02->fields).m_Sprite;
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
      pMVar4 = (MethodInfo *)(this_02->fields).m_Sprite;
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
        bVar5 = pMVar2->invoker_method == (InvokerMethod)0x0;
      }
      else {
        bVar5 = pMVar4 == pMVar2;
      }
      pTVar6 = (Texture2D *)0x0;
      if (bVar5) {
        return;
      }
      pSVar3 = (this_02->fields).m_Sprite;
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
        pIVar13 = pMVar2->invoker_method;
        if (pIVar13 == (InvokerMethod)0x0) {
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
        (*pcRam_?)(pIVar13);
        fStack_12 = 0.0;
        fStack_11 = 0.0;
      }
      if ((fStack_12 == 0.0) && (fStack_11 == 0.0)) {
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      (this_02->fields)._._.m_SkipLayoutUpdate = bVar9;
      pSVar3 = (this_02->fields).m_Sprite;
      if (pSVar3 == (Sprite *)0x0) goto code_?;
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
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
      if (pTVar6 != (Texture2D *)0x0 || pTVar14 != (Texture2D *)0x0) {
        if (pTVar6 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar14 == (Texture2D *)0x0) goto code_?;
          bVar5 = (pTVar14->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar14 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar5 = (pTVar6->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar5 = pTVar14 == pTVar6;
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
                        (this_02,(Sprite *)pMVar2,
                         &TypeInfo__UnityEngine__UI__Image->static_fields->
                          s_TempNewSecondaryTextures,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_ClearArray
                (&TypeInfo__UnityEngine__UI__Image->static_fields->s_TempNewSecondaryTextures,
                 (MethodInfo *)0x0);
      bVar9 = bVar9 ^ 1;
code_?:
      bVar5 = iRam_? != 0;
      (this_02->fields)._._.m_SkipMaterialUpdate = bVar9;
      (this_02->fields).m_Sprite = (Sprite *)pMVar2;
      if (bVar5) {
        uVar15 = (uint)((ulonglong)&(this_02->fields).m_Sprite >> 0xc);
        uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
        do {
          uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
          puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar17 == *puVar18;
          if (bVar5) {
            *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::
      Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_02,(MethodInfo *)0x0);
      (*(this_02->klass->vtable).SetAllDirty.methodPtr)(this_02);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_02,(MethodInfo *)0x0);
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
  if (pMVar2->invoker_method == (InvokerMethod)0x0) {
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
  pMVar4 = (MethodInfo *)pMVar2->invoker_method;
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
  (this_02->fields)._._.m_SkipLayoutUpdate =
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
  iVar19 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_GetSecondaryTextureCount
                    ((Sprite *)pMVar2,(MethodInfo *)0x0);
  bVar5 = iVar19 == 0;
code_?:
  bVar20 = iRam_? != 0;
  (this_02->fields)._._.m_SkipMaterialUpdate = bVar5;
  (this_02->fields).m_Sprite = (Sprite *)pMVar2;
  if (bVar20) {
    uVar15 = (uint)((ulonglong)&(this_02->fields).m_Sprite >> 0xc);
    uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
    do {
      uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
      puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar17 == *puVar18;
      if (bVar5) {
        *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::
  Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_02,(MethodInfo *)0x0);
  (*(this_02->klass->vtable).SetAllDirty.methodPtr)(this_02);
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
                      (this_02,(MethodInfo *)0x0);
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
                          (this_02,(MethodInfo *)0x0);
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
          this_03 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<UnityEngine::U2D::SpriteAtlas>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_03,(Object *)0x0,
                     MethodInfo__UnityEngine__UI__Image__RebuildImage_UnityEngine__U2D__SpriteAtlas_
                     ,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::U2D::SpriteAtlasManager::
          SpriteAtlasManager_add_atlasRegistered
                    ((Action_1_UnityEngine_U2D_SpriteAtlas_ *)this_03,(MethodInfo *)0x0);
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
          piVar21 = &(this_01->fields)._version;
          *piVar21 = *piVar21 + 1;
          pIVar22 = (this_01->fields)._items;
          if (pIVar22 != (Image__Array *)0x0) {
            uVar15 = (this_01->fields)._size;
            if (uVar15 < (uint)pIVar22->max_length) {
              (this_01->fields)._size = uVar15 + 1;
              FUN_?(pIVar22,(longlong)(int)uVar15,this_02);
              (this_02->fields).m_Tracked = 1;
              return;
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_01,(Object *)this_02,
                       pMVar2->klass->rgctx_data[0xe].method);
            (this_02->fields).m_Tracked = 1;
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

