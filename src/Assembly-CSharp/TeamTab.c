
/* Void Initialize(MVTeam, GameStatCounterType) */

void Assembly-CSharp.dll::TeamTab::TeamTab_Initialize
               (TeamTab *this,MVTeam__Enum team,GameStatCounterType__Enum statToDisplay,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                 );
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
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((char)statToDisplay == '\0') {
    if (team == MVTeam__Enum_None) goto code_?;
code_?:
    pTVar1 = (this->fields).playerCount;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
        (pMVar4 = (pMVar3->fields).teamManager, pMVar4 == (MVTeamManager *)0x0)) ||
       (pLVar5 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar4,team,(MethodInfo *)0x0),
       pLVar5 == (List_1_MVPlayer_ *)0x0)) goto code_?;
    iVar6 = (pLVar5->fields)._size;
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
    CStack_7.r = 0.0;
    CStack_7.g = 0.0;
    CStack_7.b = 0.0;
    CStack_7.a = 0.0;
    pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                        (iVar6,(ReadOnlySpan_1_Char_ *)&CStack_7,(IFormatProvider *)0x0,
                         (MethodInfo *)0x0);
    if (pTVar1 == (Text *)0x0) goto code_?;
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar8,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).score;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       (pMVar4 = (pMVar3->fields).teamManager, pMVar4 == (MVTeamManager *)0x0))
    goto code_?;
    iVar6 = MVTeamManager::MVTeamManager_GetScore
                       (pMVar4,team,statToDisplay & 0xff,(MethodInfo *)0x0);
    pSVar8 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (iVar6,statToDisplay & 0xff,(MethodInfo *)0x0);
    if (pTVar1 == (Text *)0x0) goto code_?;
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar8);
  }
  else {
    if (team != MVTeam__Enum_None) {
      pTVar1 = (this->fields).score;
      if ((pTVar1 == (Text *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar1,(MethodInfo *)0x0), this_02 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
        (pMVar4 = (pMVar3->fields).teamManager, pMVar4 == (MVTeamManager *)0x0)) ||
       (pLVar9 = MVTeamManager::MVTeamManager_GetTeamList(pMVar4,(MethodInfo *)0x0),
       pLVar9 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
    if ((pLVar9->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pMVar11 = (pLVar9->fields)._items;
    if (pMVar11 == (MVTeam__Enum__Array *)0x0) goto code_?;
    if ((int)pMVar11->max_length == 0) {
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    team_00 = pMVar11->vector[0];
    pTVar1 = (this->fields).playerCount;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       ((pMVar4 = (pMVar3->fields).teamManager, pMVar4 == (MVTeamManager *)0x0 ||
        (pLVar5 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar4,team_00,(MethodInfo *)0x0),
        pLVar5 == (List_1_MVPlayer_ *)0x0)))) goto code_?;
    iVar6 = (pLVar5->fields)._size;
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
    CStack_7.r = 0.0;
    CStack_7.g = 0.0;
    CStack_7.b = 0.0;
    CStack_7.a = 0.0;
    pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                        (iVar6,(ReadOnlySpan_1_Char_ *)&CStack_7,(IFormatProvider *)0x0,
                         (MethodInfo *)0x0);
    if (pTVar1 == (Text *)0x0) goto code_?;
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar8,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).score;
    if (pTVar1 == (Text *)0x0) goto code_?;
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,::StringLiteral__);
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar12 = Styles::Styles_GetTeamColor(&CStack_7,team,0,(MethodInfo *)0x0);
  uVar13._0_4_ = pCVar12->r;
  uVar13._4_4_ = pCVar12->g;
  uVar14._0_4_ = pCVar12->b;
  uVar14._4_4_ = pCVar12->a;
  pCVar12 = Styles::Styles_GetTeamColor(&CStack_7,team,1,(MethodInfo *)0x0);
  pLVar15 = (this->fields).teamColoredImages;
  uVar16 = 0;
  uVar17 = 0;
  uVar18._0_4_ = pCVar12->r;
  uVar18._4_4_ = pCVar12->g;
  uVar19._0_4_ = pCVar12->b;
  uVar19._4_4_ = pCVar12->a;
  if (pLVar15 != (List_1_UnityEngine_UI_Image_ *)0x0) {
    lVar20 = 0x20;
    lVar21 = 0x20;
    do {
      if ((pLVar15->fields)._size <= (int)uVar17) {
        pLVar15 = (this->fields).darkTeamColoredImages;
        if (pLVar15 != (List_1_UnityEngine_UI_Image_ *)0x0) goto code_?;
        break;
      }
      if (pLVar15 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
      if ((uint)(pLVar15->fields)._size <= uVar17) goto code_?;
      pIVar22 = (pLVar15->fields)._items;
      if (pIVar22 == (Image__Array *)0x0) break;
      if ((uint)pIVar22->max_length <= uVar17) goto code_?;
      plVar23 = *(longlong **)((longlong)pIVar22->vector + lVar21 + -0x20);
      if (plVar23 == (longlong *)0x0) break;
      CStack_7._0_8_ = uVar13;
      CStack_7._8_8_ = uVar14;
      (**(code **)(*plVar23 + 0x2a8))(plVar23,&CStack_7,*(undefined8 *)(*plVar23 + 0x2b0));
      pLVar15 = (this->fields).teamColoredImages;
      uVar17 = uVar17 + 1;
      lVar21 = lVar21 + 8;
    } while (pLVar15 != (List_1_UnityEngine_UI_Image_ *)0x0);
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
  while( true ) {
    if (pLVar15 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
    if ((uint)(pLVar15->fields)._size <= uVar16) goto code_?;
    pIVar22 = (pLVar15->fields)._items;
    if (pIVar22 == (Image__Array *)0x0) break;
    if ((uint)pIVar22->max_length <= uVar16) goto code_?;
    plVar23 = *(longlong **)((longlong)pIVar22->vector + lVar20 + -0x20);
    if (plVar23 == (longlong *)0x0) break;
    CStack_7._0_8_ = uVar18;
    CStack_7._8_8_ = uVar19;
    (**(code **)(*plVar23 + 0x2a8))(plVar23,&CStack_7,*(undefined8 *)(*plVar23 + 0x2b0));
    pLVar15 = (this->fields).darkTeamColoredImages;
    uVar16 = uVar16 + 1;
    lVar20 = lVar20 + 8;
    if (pLVar15 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
code_?:
    if ((pLVar15->fields)._size <= (int)uVar16) {
      this_00 = (this->fields).teamImage;
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__Styles);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = TypeInfo__Styles->static_fields->teamIconStylesDictionary;
      if (((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0) &&
          (pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                               ), pOVar24 != (Object *)0x0)) && (this_00 != (Image *)0x0)) {
        pMVar25 = (MethodInfo *)pOVar24[1].monitor;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,pMVar25,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar26 = (this_00->fields).m_Sprite;
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
        if (pSVar26 != (Sprite *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pSVar26->fields)._.m_CachedPtr != (void *)0x0) {
            pMVar27 = (MethodInfo *)(this_00->fields).m_Sprite;
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
            if (pMVar25 != (MethodInfo *)0x0 || pMVar27 != (MethodInfo *)0x0) {
              if (pMVar25 == (MethodInfo *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (pMVar27 == (MethodInfo *)0x0) goto code_?;
                bVar28 = (((Sprite__Fields *)&pMVar27->invoker_method)->_).m_CachedPtr ==
                         (void *)0x0;
              }
              else if (pMVar27 == (MethodInfo *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar28 = (((Sprite__Fields *)&pMVar25->invoker_method)->_).m_CachedPtr ==
                         (void *)0x0;
              }
              else {
                bVar28 = pMVar27 == pMVar25;
              }
              pTVar29 = (Texture2D *)0x0;
              if (!bVar28) {
                pSVar26 = (this_00->fields).m_Sprite;
                if (pSVar26 == (Sprite *)0x0) {
code_?:
                  FUN_?();
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
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
                CStack_7.r = 0.0;
                CStack_7.g = 0.0;
                CStack_7.b = 0.0;
                CStack_7.a = 0.0;
                pvVar30 = (pSVar26->fields)._.m_CachedPtr;
                if (pvVar30 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar26,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                (*pcRam_?)(pvVar30);
                fVar31 = CStack_7.b;
                fVar32 = CStack_7.a;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pMVar27 = pMVar25;
                bVar33 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                                   ((Object_1 *)pMVar25,(MethodInfo *)0x0);
                if (bVar33 == 0) {
                  VVar34 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                                     (pMVar27);
                  fVar35 = VVar34.x;
                  fVar36 = VVar34.y;
                }
                else {
                  if (pMVar25 == (MethodInfo *)0x0) goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Sprite>_UnityEngine__Sprite_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  CStack_7.r = 0.0;
                  CStack_7.g = 0.0;
                  CStack_7.b = 0.0;
                  CStack_7.a = 0.0;
                  pvVar30 = (((Sprite__Fields *)&pMVar25->invoker_method)->_).m_CachedPtr;
                  if (pvVar30 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar25,(MethodInfo *)0x0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar13 = func_?(&UNK_?);
                    FUN_?(uVar13,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  (*pcRam_?)(pvVar30);
                  fVar36 = CStack_7.a;
                  fVar35 = CStack_7.b;
                }
                if ((fVar31 == fVar35) && (fVar32 == fVar36)) {
                  bVar33 = 1;
                }
                else {
                  bVar33 = 0;
                }
                (this_00->fields)._._.m_SkipLayoutUpdate = bVar33;
                pSVar26 = (this_00->fields).m_Sprite;
                if (pSVar26 == (Sprite *)0x0) goto code_?;
                pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                    (pSVar26,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar33 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                                   ((Object_1 *)pMVar25,(MethodInfo *)0x0);
                if (bVar33 != 0) {
                  if (pMVar25 == (MethodInfo *)0x0) goto code_?;
                  pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                      ((Sprite *)pMVar25,(MethodInfo *)0x0);
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
                if (pTVar29 == (Texture2D *)0x0 && pTVar37 == (Texture2D *)0x0) {
code_?:
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__UI__Image);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__UI__Image->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__UnityEngine__UI__Image);
                  }
                  bVar33 = UnityEngine.UI.dll::UnityEngine::UI::Image::
                           Image_CheckSecondaryTexturesChanged_1
                                     (this_00,(Sprite *)pMVar25,
                                      &TypeInfo__UnityEngine__UI__Image->static_fields->
                                       s_TempNewSecondaryTextures,(MethodInfo *)0x0);
                  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_ClearArray
                            (&TypeInfo__UnityEngine__UI__Image->static_fields->
                              s_TempNewSecondaryTextures,(MethodInfo *)0x0);
                  bVar33 = bVar33 ^ 1;
                }
                else {
                  if (pTVar29 == (Texture2D *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (pTVar37 == (Texture2D *)0x0) goto code_?;
                    bVar28 = (pTVar37->fields)._._.m_CachedPtr == (void *)0x0;
                  }
                  else if (pTVar37 == (Texture2D *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    bVar28 = (pTVar29->fields)._._.m_CachedPtr == (void *)0x0;
                  }
                  else {
                    bVar28 = pTVar37 == pTVar29;
                  }
                  if (bVar28) goto code_?;
                  bVar33 = 0;
                }
                bVar28 = iRam_? != 0;
                (this_00->fields)._._.m_SkipMaterialUpdate = bVar33;
                (this_00->fields).m_Sprite = (Sprite *)pMVar25;
                if (bVar28) {
                  uVar16 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
                  uVar38 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
                  do {
                    uVar39 = *(ulonglong *)(uVar38 * 8 + 0xADDR);
                    puVar40 = (ulonglong *)(uVar38 * 8 + 0xADDR);
                    LOCK();
                    bVar28 = uVar39 == *puVar40;
                    if (bVar28) {
                      *puVar40 = uVar39 | 1L << (uVar16 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar28);
                }
                UnityEngine.UI.dll::UnityEngine::UI::Image::
                Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_00,(MethodInfo *)0x0);
                (*(this_00->klass->vtable).SetAllDirty.methodPtr)(this_00);
                UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite
                          (this_00,(MethodInfo *)0x0);
              }
            }
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
        if (pMVar25 == (MethodInfo *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((((Sprite__Fields *)&pMVar25->invoker_method)->_).m_CachedPtr == (void *)0x0) {
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
        CStack_7.r = 0.0;
        CStack_7.g = 0.0;
        CStack_7.b = 0.0;
        CStack_7.a = 0.0;
        pMVar27 = (((Sprite__Fields *)&pMVar25->invoker_method)->_).m_CachedPtr;
        if (pMVar27 == (MethodInfo *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar25,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)();
        VVar34 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(pMVar27);
        fVar31 = CStack_7.b - VVar34.x;
        fVar32 = CStack_7.a - VVar34.y;
        (this_00->fields)._._.m_SkipLayoutUpdate =
             fVar32 * fVar32 + fVar31 * fVar31 < _UNK_?;
        pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            ((Sprite *)pMVar25,(MethodInfo *)0x0);
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
        if (pTVar29 != (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pTVar29->fields)._._.m_CachedPtr != (void *)0x0) {
            bVar28 = false;
            goto code_?;
          }
        }
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_GetSecondaryTextureCount
                           ((Sprite *)pMVar25,(MethodInfo *)0x0);
        bVar28 = iVar6 == 0;
code_?:
        bVar41 = iRam_? != 0;
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar28;
        (this_00->fields).m_Sprite = (Sprite *)pMVar25;
        if (bVar41) {
          uVar16 = (uint)((ulonglong)&(this_00->fields).m_Sprite >> 0xc);
          uVar38 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
          do {
            uVar39 = *(ulonglong *)(uVar38 * 8 + 0xADDR);
            puVar40 = (ulonglong *)(uVar38 * 8 + 0xADDR);
            LOCK();
            bVar28 = uVar39 == *puVar40;
            if (bVar28) {
              *puVar40 = uVar39 | 1L << (uVar16 & 0x3f);
            }
            UNLOCK();
          } while (!bVar28);
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
        pSVar26 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
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
        if (pSVar26 != (Sprite *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pSVar26->fields)._.m_CachedPtr != (void *)0x0) {
            pSVar26 = UnityEngine.UI.dll::UnityEngine::UI::Image::Image_get_activeSprite
                                (this_00,(MethodInfo *)0x0);
            if (pSVar26 != (Sprite *)0x0) {
              pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                  (pSVar26,(MethodInfo *)0x0);
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
              if (pTVar29 != (Texture2D *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pTVar29->fields)._._.m_CachedPtr != (void *)0x0) {
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
              pMVar25 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__Add_UnityEngine__UI__Image_
              ;
              pLVar15 = TypeInfo__UnityEngine__UI__Image->static_fields->m_TrackedTexturelessImages;
              if (pLVar15 != (List_1_UnityEngine_UI_Image_ *)0x0) {
                piVar42 = &(pLVar15->fields)._version;
                *piVar42 = *piVar42 + 1;
                pIVar22 = (pLVar15->fields)._items;
                if (pIVar22 != (Image__Array *)0x0) {
                  uVar16 = (pLVar15->fields)._size;
                  if (uVar16 < (uint)pIVar22->max_length) {
                    (pLVar15->fields)._size = uVar16 + 1;
                    FUN_?(pIVar22,(longlong)(int)uVar16,this_00);
                    (this_00->fields).m_Tracked = 1;
                    return;
                  }
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__AddWithResize
                            ((List_1_System_Object_ *)pLVar15,(Object *)this_00,
                             pMVar25->klass->rgctx_data[0xe].method);
                  (this_00->fields).m_Tracked = 1;
                  return;
                }
              }
            }
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        return;
      }
      break;
    }
  }
  goto code_?;
}

