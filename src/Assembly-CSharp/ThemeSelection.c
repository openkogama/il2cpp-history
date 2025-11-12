
/* Void Awake() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_Awake
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::ThemesData::ThemeData_[]>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSelection__CallbackHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeSelection__CreateThemeButtons_MV__WorldObject__ThemesData__ThemeData____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeSelection__LocalizeAndSetDescriptionText__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<MV::WorldObject::ThemesData::ThemeData_[]>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ThemeSelection__CreateThemeButtons_MV__WorldObject__ThemesData__ThemeData____
             ,(MethodInfo *)0x0);
  TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived =
       (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)this_00;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__ThemeSelection__CallbackHandler->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 != (MVGameControllerBase *)0x0) &&
      (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
     (pMVar7 = (pMVar6->fields).operationRequests, pMVar7 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar8 = (pMVar7->fields).peer;
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    pMVar9 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar8 != (PhotonPeer *)0x0) {
      (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                (pPVar8,CONCAT71((int7)((ulonglong)pMVar9 >> 8),100),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar8->klass->vtable).SendOperation.method);
      pTVar10 = (this->fields).themeDescription;
      pSVar11 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
      if (pTVar10 != (Text *)0x0) {
        (*(pTVar10->klass->vtable).set_text.methodPtr)
                  (pTVar10,pSVar11,(pTVar10->klass->vtable).set_text.method);
        this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,
                   MethodInfo__ThemeSelection__LocalizeAndSetDescriptionText__,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                        ,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar12 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar12 != (TM *)0x0) {
          if ((pTVar12->fields).languageLoadingDone != 0) {
            return;
          }
          pTVar12 = TM::TM_get_Instance((MethodInfo *)0x0);
          pMVar9 = 
          MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
          if ((pTVar12 != (TM *)0x0) &&
             (pLVar13 = (pTVar12->fields).languageChangedCallback,
             pLVar13 != (List_1_System_Action_ *)0x0)) {
            pAVar14 = (pLVar13->fields)._items;
            piVar15 = &(pLVar13->fields)._version;
            *piVar15 = *piVar15 + 1;
            if (pAVar14 == (Action__Array *)0x0) {
              FUN_?();
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar1 = (pLVar13->fields)._size;
            if (uVar1 < (uint)pAVar14->max_length) {
              (pLVar13->fields)._size = uVar1 + 1;
            }
            else {
              uVar1 = (pLVar13->fields)._size;
              FUN_?(pLVar13,uVar1 + 1,
                            (pMVar9->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                            rgctxDataDummy,pAVar14,unaff_RDI);
              pAVar14 = (pLVar13->fields)._items;
              (pLVar13->fields)._size = uVar1 + 1;
              if (pAVar14 == (Action__Array *)0x0) {
                FUN_?();
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            if ((uint)pAVar14->max_length <= uVar1) {
              FUN_?();
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            bVar17 = iRam_? != 0;
            pAVar14->vector[(int)uVar1] = (Action *)this_02;
            if (bVar17) {
              uVar1 = (uint)((ulonglong)(pAVar14->vector + (int)uVar1) >> 0xc);
              puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar3 = *puVar2;
                LOCK();
                uVar4 = *puVar2;
                if (uVar3 == uVar4) {
                  *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
                }
                UNLOCK();
              } while (uVar3 != uVar4);
            }
            return;
          }
        }
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void CreateThemeButtons(ThemeData[]) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_CreateThemeButtons
               (ThemeSelection *this,ThemeData__Array *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ThemeSelectionButton_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelectionButton>_ThemeSelectionButton_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeSelection___CreateThemeButtons_b__21_0__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeSelection___CreateThemeButtons_b__21_1__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeSelection____c__DisplayClass21_0___CreateThemeButtons_b__2__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSelection____c__DisplayClass21_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).themeRepo;
  if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
  pTVar2 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
  if (pTVar2 != (ThemeWorldObject *)0x0) {
    original = (this->fields).themeRemovalButtonPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                        );
    if ((this_01 == (Component *)0x0) ||
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (this_01,(MethodInfo *)0x0), this_02 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_02,(Transform *)(this->fields).themeButtonContainer,0,(MethodInfo *)0x0);
    this_00 = this_01[10].fields._.m_CachedPtr;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__ThemeSelection___CreateThemeButtons_b__21_0__,
               (MethodInfo *)0x0);
    if (this_00 == (UnityEvent *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
              (this_00,(UnityAction *)pNVar3,(MethodInfo *)0x0);
  }
  uVar4 = 0;
  if (data != (ThemeData__Array *)0x0) {
    ppTVar5 = data->vector;
    while( true ) {
      if ((int)data->max_length <= (int)uVar4) {
        return;
      }
      if ((uint)data->max_length <= uVar4) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pOVar7 = (Object__Class *)*ppTVar5;
      object = (Object *)FUN_?(TypeInfo__ThemeSelection____c__DisplayClass21_0);
      if (object == (Object *)0x0) break;
      bVar8 = iRam_? != 0;
      object[2].monitor = (MonitorData *)this;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&object[2].monitor >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      original_00 = (this->fields).buttonPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar13 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_00,
                           ThemeSelectionButton_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelectionButton>_ThemeSelectionButton_
                          );
      bVar8 = iRam_? != 0;
      object[1].klass = pOVar13;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)(object + 1) >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pOVar13 = object[1].klass;
      if (pOVar13 == (Object__Class *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
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
      pcVar14 = (pOVar13->_0).name;
      if (pcVar14 == (char *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar13,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      pvVar16 = (void *)(*pcRam_?)(pcVar14);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar16,
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                      );
      pRVar17 = (this->fields).themeButtonContainer;
      if (obj == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar13 = obj[1].klass;
      if (pOVar13 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pRVar17 == (RectTransform *)0x0) {
        pvVar16 = (void *)0x0;
      }
      else {
        pvVar16 = (pRVar17->fields)._._._.m_CachedPtr;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pOVar13,pvVar16,0);
      pTVar1 = (this->fields).themeRepo;
      if (pTVar1 == (ThemeRepository *)0x0) break;
      pTVar2 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
      if (pTVar2 == (ThemeWorldObject *)0x0) {
        pSVar18 = (String *)0x0;
      }
      else {
        pTVar2 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
        if (pTVar2 == (ThemeWorldObject *)0x0) break;
        pSVar18 = ThemeWorldObject::ThemeWorldObject_get_Identifier(pTVar2,(MethodInfo *)0x0);
      }
      if (pOVar7 == (Object__Class *)0x0) break;
      pSVar19 = (String *)(pOVar7->_0).namespaze;
      if ((pSVar18 == pSVar19) ||
         ((((pSVar18 != (String *)0x0 && (pSVar19 != (String *)0x0)) &&
           ((pSVar18->fields)._stringLength == (pSVar19->fields)._stringLength)) &&
          (bVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar18->fields)._firstChar,
                              (uint8_t *)&(pSVar19->fields)._firstChar,
                              (longlong)(pSVar18->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar20 != 0)))) {
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,MethodInfo__ThemeSelection___CreateThemeButtons_b__21_1__,
                   (MethodInfo *)0x0);
        pTVar1 = (this->fields).themeRepo;
        pOVar13 = object[1].klass;
        if ((pTVar1 == (ThemeRepository *)0x0) ||
           (themePrefab = ThemeRepository::ThemeRepository_GetThemePrefab
                                    (pTVar1,(String *)(pOVar7->_0).namespaze,(MethodInfo *)0x0),
           pOVar13 == (Object__Class *)0x0)) break;
        bVar20 = 1;
      }
      else {
        object[1].monitor = (MonitorData *)(pOVar7->_0).namespaze;
        func_?(&object[1].monitor);
        object[2].klass = pOVar7;
        func_?(object + 2);
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,object,
                   MethodInfo__ThemeSelection____c__DisplayClass21_0___CreateThemeButtons_b__2__,
                   (MethodInfo *)0x0);
        pTVar1 = (this->fields).themeRepo;
        pOVar13 = object[1].klass;
        if ((pTVar1 == (ThemeRepository *)0x0) ||
           (themePrefab = ThemeRepository::ThemeRepository_GetThemePrefab
                                    (pTVar1,(String *)(pOVar7->_0).namespaze,(MethodInfo *)0x0),
           pOVar13 == (Object__Class *)0x0)) break;
        bVar20 = 0;
      }
      ThemeSelectionButton::ThemeSelectionButton_Initialize
                ((ThemeSelectionButton *)pOVar13,this,themePrefab,(UnityAction *)pNVar3,
                 (pOVar7->_0).byval_arg.data.__klassIndex,
                 *(int32_t *)((longlong)&(pOVar7->_0).byval_arg.data + 4),bVar20,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      ppTVar5 = ppTVar5 + 1;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitializeWithBackButton(ThemeMenuController) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_InitializeWithBackButton
               (ThemeSelection *this,ThemeMenuController *menuController,MethodInfo *method)

{
  pIVar1 = (this->fields).close;
  if ((pIVar1 != (Image *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pIVar1 = (this->fields).back;
    if ((pIVar1 != (Image *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).menuController = menuController;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).menuController >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LoadTheme(String, ThemeData) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_LoadTheme
               (ThemeSelection *this,String *identifier,ThemeData *data,MethodInfo *method)

{
  this_00 = (this->fields).themeRepo;
  if (this_00 != (ThemeRepository *)0x0) {
    pTVar1 = ThemeRepository::ThemeRepository_CreateTemporaryThemeVisualization
                       (this_00,identifier,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pTVar2 = (this->fields).previewTheme;
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
    if (pTVar2 != (Theme *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pTVar2 = (this->fields).previewTheme;
        if (pTVar2 == (Theme *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar2,(MethodInfo *)0x0);
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
                  ((Object_1 *)pGVar3,0.0,(MethodInfo *)0x0);
      }
    }
    bVar4 = iRam_? != 0;
    (this->fields).previewTheme = pTVar1;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).previewTheme >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    menuController = (this->fields).menuController;
    if (menuController != (ThemeMenuController *)0x0) {
      pTVar1 = (this->fields).previewTheme;
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                      ,pTVar1,data,0);
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
                      ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ThemeMenuController____c__DisplayClass6_0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      object = (Object *)FUN_?(TypeInfo__ThemeMenuController____c__DisplayClass6_0);
      if (object != (Object *)0x0) {
        bVar4 = iRam_? != 0;
        object[1].monitor = (MonitorData *)pTVar1;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&object[1].monitor >> 0xc);
          lVar9 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar8 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar4 = uVar6 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar6 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        original = (menuController->fields).previewSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar10 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                            );
        bVar4 = iRam_? != 0;
        object[1].klass = pOVar10;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar9 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar8 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar4 = uVar6 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar6 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        if (object[1].klass != (Object__Class *)0x0) {
          ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_Initialize
                    ((ThemePreviewSettingsMenu *)object[1].klass,(Theme *)object[1].monitor,data,
                     menuController,(MethodInfo *)0x0);
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)menuController,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object,
                     MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar11 = 
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
            if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar11);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar3,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar9 = (longlong)(pLVar12->fields)._size;
            uVar5 = 0;
            if (0 < lVar9) {
              lVar13 = 0;
              lVar14 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar12->fields)._size <= uVar5) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pTVar16 = (pLVar12->fields)._items;
                if (pTVar16 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar16->max_length <= uVar5) {
                  FUN_?();
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                this_01 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
                if (this_01 == (Component *)0x0) goto code_?;
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_01,(MethodInfo *)0x0);
                bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_Execute_18
                                  (pGVar3,(BaseEventData *)0x0,this_02,
                                   (pMVar11->field7_0x38).rgctx_data[1].method);
                if (bVar17 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
                uVar5 = uVar5 + 1;
                lVar13 = lVar13 + 1;
                lVar14 = lVar14 + 8;
              } while (lVar13 < lVar9);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void LocalizeAndSetDescriptionText() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_LocalizeAndSetDescriptionText
               (ThemeSelection *this,MethodInfo *method)

{
  pTVar1 = (this->fields).themeDescription;
  pSVar2 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_OnDestroy
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeSelection__CallbackHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived =
       (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__ThemeSelection__CallbackHandler->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void OnThemeRemovalWarningResolved(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_OnThemeRemovalWarningResolved
               (ThemeSelection *this,bool answer,ConfirmationPopup *popup,MethodInfo *method)

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
                  MethodInfo__ThemeSelection____c___OnThemeRemovalWarningResolved_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSelection____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (answer != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ThemeSelection____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemeSelection____c);
    }
    pEVar2 = TypeInfo__ThemeSelection____c->static_fields->__9__24_0;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__ThemeSelection____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemeSelection____c);
      }
      object = TypeInfo__ThemeSelection____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)object,
                 MethodInfo__ThemeSelection____c___OnThemeRemovalWarningResolved_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ThemeSelection____c->static_fields->__9__24_0 = pEVar2;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__ThemeSelection____c->static_fields->__9__24_0 >> 0xc);
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
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ThemeRepository);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
    if (this_00 == (ThemeRepository *)0x0) goto code_?;
    pTVar7 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
    if (pTVar7 == (ThemeWorldObject *)0x0) {
      worldObjectID = -1;
    }
    else {
      pTVar7 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
      if (pTVar7 == (ThemeWorldObject *)0x0) goto code_?;
      worldObjectID = (pTVar7->fields)._._.id;
    }
    if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
              (this_02,worldObjectID,(MethodInfo *)0x0);
  }
  if (popup != (ConfirmationPopup *)0x0) {
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
                    MethodInfo__ConfirmationPopup____c___Pop_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ConfirmationPopup____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)popup,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ConfirmationPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ConfirmationPopup____c);
    }
    pEVar2 = TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__ConfirmationPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ConfirmationPopup____c);
      }
      object_00 = TypeInfo__ConfirmationPopup____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)object_00,
                 MethodInfo__ConfirmationPopup____c___Pop_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0 = pEVar2;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0 >> 0xc
                       );
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
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar8 = 
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
      if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar8);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar1,(IList_1_UnityEngine_Transform_ *)
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                      s_InternalTransformList,(MethodInfo *)0x0);
    pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList;
    if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar10 = (longlong)(pLVar9->fields)._size;
      uVar3 = 0;
      if (0 < lVar10) {
        lVar11 = 0;
        lVar12 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar9->fields)._size <= uVar3) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar14 = (pLVar9->fields)._items;
          if (pTVar14 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar14->max_length <= uVar3) {
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          this_01 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
          if (this_01 == (Component *)0x0) goto code_?;
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (this_01,(MethodInfo *)0x0);
          bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_Execute_18
                            (pGVar1,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
                             (pMVar8->field7_0x38).rgctx_data[1].method);
          if (bVar15 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_01,(MethodInfo *)0x0);
            return;
          }
          uVar3 = uVar3 + 1;
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 8;
        } while (lVar11 < lVar10);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ShowThemeRemovalWarning() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_ShowThemeRemovalWarning
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeSelection____c__DisplayClass23_0___ShowThemeRemovalWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSelection____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_will_remove_the_current_the);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_u000A_1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Are_you_sure_you_want_to_do_this);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemeSelection____c__DisplayClass23_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
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
  arg0 = TM::TM__(StringLiteral_This_will_remove_the_current_the,(MethodInfo *)0x0);
  arg1 = TM::TM__(StringLiteral_Are_you_sure_you_want_to_do_this,(MethodInfo *)0x0);
  format = StringLiteral__0_u000A_1_;
  PStack_7._arg0 = (Object *)0x0;
  PStack_7._arg1 = (Object *)0x0;
  PStack_7._arg2 = (Object *)0x0;
  PStack_7._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_7,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0);
  pOStack_8 = PStack_7._arg0;
  pOVar9 = (Object__Class *)
           mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,format,(ParamsArray *)&pOStack_8,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  object[1].klass = pOVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__ThemeSelection____c__DisplayClass23_0___ShowThemeRemovalWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar11 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar11);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar10,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar12->fields)._size;
    uVar3 = 0;
    if (0 < lVar4) {
      lVar13 = 0;
      lVar14 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar12->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar15 = (pLVar12->fields)._items;
        if (pTVar15 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar15->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar15->vector + lVar14 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar10,(BaseEventData *)0x0,this_01,
                           (pMVar11->field7_0x38).rgctx_data[1].method);
        if (bVar16 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar13 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <CreateThemeButtons>b__21_0() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__CreateThemeButtons_b__21_0
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeSelection____c__DisplayClass23_0___ShowThemeRemovalWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSelection____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_will_remove_the_current_the);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_u000A_1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Are_you_sure_you_want_to_do_this);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemeSelection____c__DisplayClass23_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
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
  arg0 = TM::TM__(StringLiteral_This_will_remove_the_current_the,(MethodInfo *)0x0);
  arg1 = TM::TM__(StringLiteral_Are_you_sure_you_want_to_do_this,(MethodInfo *)0x0);
  format = StringLiteral__0_u000A_1_;
  PStack_7._arg0 = (Object *)0x0;
  PStack_7._arg1 = (Object *)0x0;
  PStack_7._arg2 = (Object *)0x0;
  PStack_7._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_7,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0);
  pOStack_8 = PStack_7._arg0;
  pOVar9 = (Object__Class *)
           mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,format,(ParamsArray *)&pOStack_8,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  object[1].klass = pOVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__ThemeSelection____c__DisplayClass23_0___ShowThemeRemovalWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar11 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar11);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar10,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar12->fields)._size;
    uVar3 = 0;
    if (0 < lVar4) {
      lVar13 = 0;
      lVar14 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar12->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar15 = (pLVar12->fields)._items;
        if (pTVar15 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar15->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar15->vector + lVar14 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar10,(BaseEventData *)0x0,this_01,
                           (pMVar11->field7_0x38).rgctx_data[1].method);
        if (bVar16 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar13 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <CreateThemeButtons>b__21_1() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__CreateThemeButtons_b__21_1
               (ThemeSelection *this,MethodInfo *method)

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
                  MethodInfo__ThemeSelection____c___GoBackToSettings_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSelection____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ThemeSelection____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ThemeSelection____c);
  }
  this_01 = TypeInfo__ThemeSelection____c->static_fields->__9__25_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ThemeSelection____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemeSelection____c);
    }
    object = TypeInfo__ThemeSelection____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ThemeSelection____c___GoBackToSettings_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ThemeSelection____c->static_fields->__9__25_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ThemeSelection____c->static_fields->__9__25_0 >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
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
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* ThemeSelection() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__ctor
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral____Hover_over_a_theme_to_know_mo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).currentDescription = StringLiteral____Hover_over_a_theme_to_know_mo;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentDescription >> 0xc);
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


/* Void set_PreviewTheme(Theme) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_set_PreviewTheme
               (ThemeSelection *this,Theme *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewTheme;
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
  if (pTVar1 != (Theme *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).previewTheme;
      if (pTVar1 == (Theme *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
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
    }
  }
  bVar3 = iRam_? != 0;
  (this->fields).previewTheme = value;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).previewTheme >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* Void set_ThemeDescription(String) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_set_ThemeDescription
               (ThemeSelection *this,String *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).currentDescription = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentDescription >> 0xc);
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
  pTVar6 = (this->fields).themeDescription;
  pSVar7 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
  if (pTVar6 == (Text *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pTVar6,pSVar7,(pTVar6->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
  return;
}

