
/* Void InternalReset() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::
     DamageIndicator_IndicatorArrow_InternalReset
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).arrow;
  if (this_00 != (DamageArrow *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    (this->fields).idle = 1;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InternalUpdate() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::
     DamageIndicator_IndicatorArrow_InternalUpdate
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  if ((this->fields).idle == 0) {
    fVar1 = (this->fields).timer;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    this_00 = (this->fields).arrow;
    fVar1 = fVar1 - fVar4;
    (this->fields).timer = fVar1;
    (this->fields).idle = fVar1 <= 0.0;
    if (this_00 == (DamageArrow *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,fVar1 > 0.0,(MethodInfo *)0x0);
    DamageIndicator_IndicatorArrow_UpdateArrowPosition(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_Reset
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  for (pDVar1 = (this->fields).nextArrow; pDVar1 != this; pDVar1 = (pDVar1->fields).nextArrow) {
    if ((pDVar1 == (DamageIndicator_IndicatorArrow *)0x0) ||
       (pDVar2 = (pDVar1->fields).arrow, pDVar2 == (DamageArrow *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pDVar2,0,(MethodInfo *)0x0);
    (pDVar1->fields).idle = 1;
  }
  pDVar2 = (this->fields).arrow;
  if (pDVar2 != (DamageArrow *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pDVar2->fields)._._._._.m_CachedPtr;
    if (pvVar3 != (void *)0x0) {
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pDVar2,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSprite(Sprite) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_SetSprite
               (DamageIndicator_IndicatorArrow *this,Sprite *sprite,MethodInfo *method)

{
  pDVar1 = (this->fields).arrow;
  if ((pDVar1 == (DamageArrow *)0x0) || (this_00 = (pDVar1->fields).image, this_00 == (Image *)0x0))
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,sprite,0);
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
      if (sprite == (Sprite *)0x0 && pSVar3 == (Sprite *)0x0) {
        return;
      }
      if (sprite == (Sprite *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pSVar3 == (Sprite *)0x0) goto code_?;
        bVar4 = (pSVar3->fields)._.m_CachedPtr == (void *)0x0;
      }
      else if (pSVar3 == (Sprite *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar4 = (sprite->fields)._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar4 = pSVar3 == sprite;
      }
      pTVar5 = (Texture2D *)0x0;
      if (bVar4) {
        return;
      }
      pSVar3 = (this_00->fields).m_Sprite;
      if (pSVar3 == (Sprite *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
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
      pvVar6 = (pSVar3->fields)._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar3,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar6);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = (MethodInfo *)sprite;
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)sprite,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        VVar10 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar8);
        fStackX_8 = VVar10.x;
        fStackX_c = VVar10.y;
        fStack_11 = fStackX_c;
        fStack_12 = fStackX_8;
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
        pvVar6 = (sprite->fields)._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)sprite,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar6);
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
                        ((Object_1 *)sprite,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        if (sprite == (Sprite *)0x0) goto code_?;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
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
      if (pTVar5 != (Texture2D *)0x0 || pTVar13 != (Texture2D *)0x0) {
        if (pTVar5 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar13 == (Texture2D *)0x0) goto code_?;
          bVar4 = (pTVar13->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar13 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar4 = (pTVar5->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar4 = pTVar13 == pTVar5;
        }
        if (!bVar4) {
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
                        (this_00,sprite,
                         &TypeInfo__UnityEngine__UI__Image->static_fields->
                          s_TempNewSecondaryTextures,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_ClearArray
                (&TypeInfo__UnityEngine__UI__Image->static_fields->s_TempNewSecondaryTextures,
                 (MethodInfo *)0x0);
      bVar9 = bVar9 ^ 1;
code_?:
      bVar4 = iRam_? != 0;
      (this_00->fields)._._.m_SkipMaterialUpdate = bVar9;
      (this_00->fields).m_Sprite = sprite;
      if (bVar4) {
        uVar14 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
        uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
        do {
          uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
          puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar16 == *puVar17;
          if (bVar4) {
            *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
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
  pMVar8 = (sprite->fields)._.m_CachedPtr;
  if (pMVar8 == (MethodInfo *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)sprite,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)();
  VVar10 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar8);
  fStackX_8 = VVar10.x;
  fStackX_c = VVar10.y;
  (this_00->fields)._._.m_SkipLayoutUpdate =
       (0.0 - fStackX_c) * (0.0 - fStackX_c) + (0.0 - fStackX_8) * (0.0 - fStackX_8) <
       _UNK_?;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
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
  if (pTVar5 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar5->fields)._._.m_CachedPtr != (void *)0x0) {
      bVar4 = false;
      goto code_?;
    }
  }
  iVar18 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_GetSecondaryTextureCount
                    (sprite,(MethodInfo *)0x0);
  bVar4 = iVar18 == 0;
code_?:
  bVar19 = iRam_? != 0;
  (this_00->fields)._._.m_SkipMaterialUpdate = bVar4;
  (this_00->fields).m_Sprite = sprite;
  if (bVar19) {
    uVar14 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
    uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
      puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar16 == *puVar17;
      if (bVar4) {
        *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
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
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
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
        if (pTVar5 != (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pTVar5->fields)._._.m_CachedPtr != (void *)0x0) {
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
        pMVar8 = 
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
                       pMVar8->klass->rgctx_data[0xe].method);
            (this_00->fields).m_Tracked = 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void Show(Transform, Single, Single) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_Show
               (DamageIndicator_IndicatorArrow *this,Transform *origin,float time,
               float indicationRadius,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).damageOrigin = origin;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).damageOrigin >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (this->fields).arrow;
  (this->fields).timer = time;
  if (this_00 == (DamageArrow *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this_00,1,(MethodInfo *)0x0);
  (this->fields).idle = 0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_Update
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).nextArrow;
  while( true ) {
    if (this_00 == this) {
      if ((this->fields).idle == 0) {
        fVar1 = (this->fields).timer;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?,0), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar4 = (float)(*pcRam_?)();
        pDVar5 = (this->fields).arrow;
        fVar1 = fVar1 - fVar4;
        (this->fields).timer = fVar1;
        (this->fields).idle = fVar1 <= 0.0;
        if (pDVar5 == (DamageArrow *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pDVar5,fVar1 > 0.0,(MethodInfo *)0x0);
        DamageIndicator_IndicatorArrow_UpdateArrowPosition(this,(MethodInfo *)0x0);
      }
      return;
    }
    if (this_00 == (DamageIndicator_IndicatorArrow *)0x0) break;
    if ((this_00->fields).idle == 0) {
      fVar1 = (this_00->fields).timer;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      pDVar5 = (this_00->fields).arrow;
      fVar1 = fVar1 - fVar4;
      (this_00->fields).timer = fVar1;
      (this_00->fields).idle = fVar1 <= 0.0;
      if (pDVar5 == (DamageArrow *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pDVar5,fVar1 > 0.0,(MethodInfo *)0x0);
      DamageIndicator_IndicatorArrow_UpdateArrowPosition(this_00,(MethodInfo *)0x0);
    }
    this_00 = (this_00->fields).nextArrow;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateArrowPosition() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::
     DamageIndicator_IndicatorArrow_UpdateArrowPosition
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_00 != (MainCameraManager *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    uStack_4 = 0;
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    pvVar10 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar10);
    pTVar1 = (this->fields).damageOrigin;
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar10);
      fVar13 = _UNK_?;
      fVar14 = _UNK_? /
               (uStack_5._4_4_ * 0.0 + uStack_3._4_4_ * 0.0 + uStack_7._4_4_ * 0.0 +
               uStack_9._4_4_);
      uStackX_18 = CONCAT44((uStack_4._4_4_ * 0.0 + uStack_2._4_4_ * 0.0 + uStack_6._4_4_ * 0.0 +
                            uStack_8._4_4_) * fVar14,
                            ((float)uStack_4 * 0.0 + (float)uStack_2 * 0.0 +
                             (float)uStack_6 * 0.0 + (float)uStack_8) * fVar14);
      uStackX_18 = FUN_?(&uStackX_18);
      pDVar15 = (this->fields).arrow;
      if ((pDVar15 != (DamageArrow *)0x0) &&
         (pIVar16 = (pDVar15->fields).image, pIVar16 != (Image *)0x0)) {
        pRVar17 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar16,(MethodInfo *)0x0);
        fVar14 = (float)uStackX_18;
        fVar18 = uStackX_18._4_4_;
        uStack_19 = 0;
        fStack_20 = fVar13;
        uStack_21 = 0;
        uStack_22 = 0;
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
        (*pcRam_?)(&uStack_19);
        if (pRVar17 != (RectTransform *)0x0) {
          uStack_23 = (undefined4)uStack_21;
          uStack_24 = uStack_21._4_4_;
          uStack_25 = (undefined4)uStack_22;
          uStack_26 = uStack_22._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pRVar17->fields)._._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar17,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar10);
          pDVar15 = (this->fields).arrow;
          if ((pDVar15 != (DamageArrow *)0x0) &&
             (pIVar16 = (pDVar15->fields).image, pIVar16 != (Image *)0x0)) {
            pRVar17 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar16,(MethodInfo *)0x0);
            fVar13 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius;
            if (pRVar17 != (RectTransform *)0x0) {
              value.y = fVar13 * fVar18;
              value.x = fVar13 * fVar14;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_set_anchoredPosition(pRVar17,value,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* DamageIndicator+IndicatorArrow(Int32, DamageArrow, Single) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor
               (DamageIndicator_IndicatorArrow *this,int32_t numberOfArrows,DamageArrow *arrowBase,
               float indicationRadius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DamageIndicator__IndicatorArrow);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DamageIndicator_IndicatorArrow__ctor_1
            (this,numberOfArrows,arrowBase,(DamageIndicator_IndicatorArrow *)0x0,(MethodInfo *)0x0);
  TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius = indicationRadius;
  TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__DamageIndicator__IndicatorArrow->static_fields >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* DamageIndicator+IndicatorArrow(Int32, DamageArrow, DamageIndicator+IndicatorArrow) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor_1
               (DamageIndicator_IndicatorArrow *this,int32_t numberOfArrows,DamageArrow *arrowBase,
               DamageIndicator_IndicatorArrow *firstArrow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DamageIndicator__IndicatorArrow);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DamageArrow_MethodInfo__UnityEngine__Object__Instantiate<DamageArrow>_DamageArrow__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).idle = 1;
  if ((arrowBase != (DamageArrow *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)arrowBase,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pDVar2 = (DamageArrow *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)arrowBase,pTVar1,0,
                        DamageArrow_MethodInfo__UnityEngine__Object__Instantiate<DamageArrow>_DamageArrow__UnityEngine__Transform__bool_
                       );
    (this->fields).arrow = pDVar2;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).arrow >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    iVar8 = iRam_?;
    firstArrow_00 = this;
    if (firstArrow != (DamageIndicator_IndicatorArrow *)0x0) {
      firstArrow_00 = firstArrow;
    }
    if (numberOfArrows + -1 == 0) {
      (this->fields).nextArrow = firstArrow_00;
      if (iVar8 != 0) {
        uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    else {
      this_00 = (DamageIndicator_IndicatorArrow *)
                FUN_?(TypeInfo__DamageIndicator__IndicatorArrow);
      DamageIndicator_IndicatorArrow__ctor_1
                (this_00,numberOfArrows + -1,arrowBase,firstArrow_00,(MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).nextArrow = this_00;
      if (bVar7) {
        uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* DamageIndicator+IndicatorArrow get_NextArrow() */

DamageIndicator_IndicatorArrow *
Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_get_NextArrow
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DamageIndicator__IndicatorArrow);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow;
  if (pDVar1 == (DamageIndicator_IndicatorArrow *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar1 = (DamageIndicator_IndicatorArrow *)(*pcVar2)();
    return pDVar1;
  }
  TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow = (pDVar1->fields).nextArrow;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__DamageIndicator__IndicatorArrow->static_fields >> 0xc);
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
  return TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow;
}

