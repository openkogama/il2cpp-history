
/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::PlayerListSelectorButton::PlayerListSelectorButton_Initialize
               (PlayerListSelectorButton *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = (void *)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uStack_2 = unaff_XMM6_Dd;
  iStack_3 = unaff_XMM6_Dc;
  if (team == MVTeam__Enum_None) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar4 == (MVGameControllerBase *)0x0) ||
         (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
        (pMVar6 = (pMVar5->fields).teamManager, pMVar6 == (MVTeamManager *)0x0)) ||
       (pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(pMVar6,(MethodInfo *)0x0),
       pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
    if ((pLVar7->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pMVar9 = (pLVar7->fields)._items;
    if (pMVar9 == (MVTeam__Enum__Array *)0x0) goto code_?;
    if ((int)pMVar9->max_length == 0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    team_00 = pMVar9->vector[0];
    pTVar10 = (this->fields).playerCount;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 == (MVGameControllerBase *)0x0) ||
        (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
       ((pMVar6 = (pMVar5->fields).teamManager, pMVar6 == (MVTeamManager *)0x0 ||
        (pLVar11 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar6,team_00,(MethodInfo *)0x0),
        pLVar11 == (List_1_MVPlayer_ *)0x0)))) goto code_?;
    iVar12 = (pLVar11->fields)._size;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_13._pointer._value = (void *)0x0;
    RStack_13._length = 0;
    RStack_13._12_4_ = 0;
    pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                        (iVar12,&RStack_13,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pTVar10 == (Text *)0x0) goto code_?;
    pMVar15 = (pTVar10->klass->vtable).set_text.method;
    (*(pTVar10->klass->vtable).set_text.methodPtr)(pTVar10,pSVar14,pMVar15);
    pTVar10 = (this->fields).score;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar4 == (MVGameControllerBase *)0x0) ||
       (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) goto code_?;
    pMVar6 = (pMVar5->fields).teamManager;
  }
  else {
    pTVar10 = (this->fields).playerCount;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar4 == (MVGameControllerBase *)0x0) ||
         (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
        (pMVar6 = (pMVar5->fields).teamManager, pMVar6 == (MVTeamManager *)0x0)) ||
       (pLVar11 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar6,team,(MethodInfo *)0x0),
       pLVar11 == (List_1_MVPlayer_ *)0x0)) goto code_?;
    iVar12 = (pLVar11->fields)._size;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_13._pointer._value = (void *)0x0;
    RStack_13._length = 0;
    RStack_13._12_4_ = 0;
    pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                        (iVar12,&RStack_13,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pTVar10 == (Text *)0x0) goto code_?;
    pMVar15 = (pTVar10->klass->vtable).set_text.method;
    (*(pTVar10->klass->vtable).set_text.methodPtr)(pTVar10,pSVar14,pMVar15);
    pTVar10 = (this->fields).score;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar4 == (MVGameControllerBase *)0x0) ||
       (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) goto code_?;
    pMVar6 = (pMVar5->fields).teamManager;
    team_00 = team;
  }
  if (pMVar6 == (MVTeamManager *)0x0) {
code_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar12 = MVTeamManager::MVTeamManager_GetScore
                     (pMVar6,team_00,
                      (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)pMVar15 >> 8),1),
                      (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_13._pointer._value = (void *)0x0;
  RStack_13._length = 0;
  RStack_13._12_4_ = 0;
  pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                      (iVar12,&RStack_13,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar10 == (Text *)0x0) goto code_?;
  (*(pTVar10->klass->vtable).set_text.methodPtr)
            (pTVar10,pSVar14,(pTVar10->klass->vtable).set_text.method);
  button = (this->fields).button;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  Styles::Styles_SetStyle_4
            (button,ButtonStyle__Enum_TabButton,team,SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
  this_00 = (this->fields).teamImage;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                  ,team,0);
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
  this_01 = TypeInfo__Styles->static_fields->teamIconStylesDictionary;
  if (((this_01 == (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0) ||
      (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar16 == (Object *)0x0)) || (this_00 == (Image *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pMVar15 = (MethodInfo *)pOVar16[1].monitor;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,pMVar15,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar17 = (this_00->fields).m_Sprite;
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
  if (pSVar17 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar17->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar18 = (MethodInfo *)(this_00->fields).m_Sprite;
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
      if (pMVar15 == (MethodInfo *)0x0 && pMVar18 == (MethodInfo *)0x0) {
        return;
      }
      RStack_13._pointer._value = uStack_1;
      RStack_13._length = iStack_3;
      RStack_13._12_4_ = uStack_2;
      if (pMVar15 == (MethodInfo *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pMVar18 == (MethodInfo *)0x0) goto code_?;
        bVar19 = (((Sprite__Fields *)&pMVar18->invoker_method)->_).m_CachedPtr == (void *)0x0;
      }
      else if (pMVar18 == (MethodInfo *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar19 = (((Sprite__Fields *)&pMVar15->invoker_method)->_).m_CachedPtr == (void *)0x0;
      }
      else {
        bVar19 = pMVar18 == pMVar15;
      }
      pTVar20 = (Texture2D *)0x0;
      if (bVar19) {
        return;
      }
      pSVar17 = (this_00->fields).m_Sprite;
      if (pSVar17 == (Sprite *)0x0) {
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
      pvVar21 = (pSVar17->fields)._.m_CachedPtr;
      if (pvVar21 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar17,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar22 = func_?(&UNK_?);
        FUN_?(uVar22,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar21);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar18 = pMVar15;
      bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                         ((Object_1 *)pMVar15,(MethodInfo *)0x0);
      if (bVar23 == 0) {
        VVar24 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar18);
        fStackY_40 = VVar24.x;
        fStackY_3c = VVar24.y;
      }
      else {
        if (pMVar15 == (MethodInfo *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar21 = (((Sprite__Fields *)&pMVar15->invoker_method)->_).m_CachedPtr;
        if (pvVar21 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar15,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar22 = func_?(&UNK_?);
          FUN_?(uVar22,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar21);
        fStackY_40 = 0.0;
        fStackY_3c = 0.0;
      }
      if ((fStackY_40 == 0.0) && (fStackY_3c == 0.0)) {
        bVar23 = 1;
      }
      else {
        bVar23 = 0;
      }
      (this_00->fields)._._.m_SkipLayoutUpdate = bVar23;
      pSVar17 = (this_00->fields).m_Sprite;
      if (pSVar17 == (Sprite *)0x0) goto code_?;
      pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (pSVar17,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                         ((Object_1 *)pMVar15,(MethodInfo *)0x0);
      if (bVar23 != 0) {
        if (pMVar15 == (MethodInfo *)0x0) goto code_?;
        pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            ((Sprite *)pMVar15,(MethodInfo *)0x0);
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
      if (pTVar20 != (Texture2D *)0x0 || pTVar25 != (Texture2D *)0x0) {
        if (pTVar20 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar25 == (Texture2D *)0x0) goto code_?;
          bVar19 = (pTVar25->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar25 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar19 = (pTVar20->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar19 = pTVar25 == pTVar20;
        }
        if (!bVar19) {
          bVar23 = 0;
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
      bVar23 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_CheckSecondaryTexturesChanged_1
                         (this_00,(Sprite *)pMVar15,
                          &TypeInfo__UnityEngine__UI__Image->static_fields->
                           s_TempNewSecondaryTextures,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_ClearArray
                (&TypeInfo__UnityEngine__UI__Image->static_fields->s_TempNewSecondaryTextures,
                 (MethodInfo *)0x0);
      bVar23 = bVar23 ^ 1;
code_?:
      bVar19 = iRam_? != 0;
      (this_00->fields)._._.m_SkipMaterialUpdate = bVar23;
      (this_00->fields).m_Sprite = (Sprite *)pMVar15;
      if (bVar19) {
        uVar26 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
        uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
        do {
          uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
          puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
          LOCK();
          bVar19 = uVar28 == *puVar29;
          if (bVar19) {
            *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
          }
          UNLOCK();
        } while (!bVar19);
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
  if (pMVar15 == (MethodInfo *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((((Sprite__Fields *)&pMVar15->invoker_method)->_).m_CachedPtr == (void *)0x0) {
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
  pMVar18 = (((Sprite__Fields *)&pMVar15->invoker_method)->_).m_CachedPtr;
  if (pMVar18 == (MethodInfo *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar15,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar22 = func_?(&UNK_?);
    FUN_?(uVar22,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)();
  VVar24 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar18);
  fVar30 = 0.0 - VVar24.x;
  fVar31 = 0.0 - VVar24.y;
  (this_00->fields)._._.m_SkipLayoutUpdate = fVar31 * fVar31 + fVar30 * fVar30 < _UNK_?;
  pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      ((Sprite *)pMVar15,(MethodInfo *)0x0);
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
  if (pTVar20 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar20->fields)._._.m_CachedPtr != (void *)0x0) {
      bVar19 = false;
      goto code_?;
    }
  }
  iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_GetSecondaryTextureCount
                     ((Sprite *)pMVar15,(MethodInfo *)0x0);
  bVar19 = iVar12 == 0;
code_?:
  bVar32 = iRam_? != 0;
  (this_00->fields)._._.m_SkipMaterialUpdate = bVar19;
  (this_00->fields).m_Sprite = (Sprite *)pMVar15;
  if (bVar32) {
    uVar26 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
    uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
    do {
      uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
      puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
      LOCK();
      bVar19 = uVar28 == *puVar29;
      if (bVar19) {
        *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
      }
      UNLOCK();
    } while (!bVar19);
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
  pSVar17 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
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
  if (pSVar17 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar17->fields)._.m_CachedPtr != (void *)0x0) {
      pSVar17 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                          (this_00,(MethodInfo *)0x0);
      if (pSVar17 != (Sprite *)0x0) {
        pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            (pSVar17,(MethodInfo *)0x0);
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
        if (pTVar20 != (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pTVar20->fields)._._.m_CachedPtr != (void *)0x0) {
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
        pMVar15 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__Add_UnityEngine__UI__Image_
        ;
        this_02 = TypeInfo__UnityEngine__UI__Image->static_fields->m_TrackedTexturelessImages;
        if (this_02 != (List_1_UnityEngine_UI_Image_ *)0x0) {
          piVar33 = &(this_02->fields)._version;
          *piVar33 = *piVar33 + 1;
          pIVar34 = (this_02->fields)._items;
          if (pIVar34 != (Image__Array *)0x0) {
            uVar26 = (this_02->fields)._size;
            if (uVar26 < (uint)pIVar34->max_length) {
              (this_02->fields)._size = uVar26 + 1;
              FUN_?(pIVar34,(longlong)(int)uVar26,this_00);
              (this_00->fields).m_Tracked = 1;
              return;
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_02,(Object *)this_00,
                       pMVar15->klass->rgctx_data[0xe].method);
            (this_00->fields).m_Tracked = 1;
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

