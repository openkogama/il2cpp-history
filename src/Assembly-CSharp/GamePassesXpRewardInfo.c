
/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_ChangeBackground
               (GamePassesXpRewardInfo *this,GamePassTier__Enum tier,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  cVar2 = (char)tier;
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
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
    cVar6 = (*pcRam_?)(pvVar3);
    if ((bool)cVar6 != (cVar2 == '\x01')) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,cVar2 == '\x01',(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
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
      cVar6 = (*pcRam_?)(pvVar3);
      if ((bool)cVar6 != (cVar2 == '\x02')) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,cVar2 == '\x02',(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
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
        cVar6 = (*pcRam_?)(pvVar3);
        if ((bool)cVar6 != (cVar2 == '\x03')) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,cVar2 == '\x03',(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
               (GamePassesXpRewardInfo *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).tier = (uint8_t)tier;
  GamePassesXpRewardInfo_ChangeBackground(this,tier & 0xff,(MethodInfo *)0x0);
  pIVar1 = (this->fields).TeamRequirementImage;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar2 = Styles::Styles_GetTeamColor(&CStack_3,MVTeam__Enum_None,1,(MethodInfo *)0x0);
  if (pIVar1 == (Image *)0x0) goto code_?;
  CStack_3.r = pCVar2->r;
  CStack_3.g = pCVar2->g;
  CStack_3.b = pCVar2->b;
  CStack_3.a = pCVar2->a;
  (*(pIVar1->klass->vtable).set_color.methodPtr)
            (pIVar1,&CStack_3,(pIVar1->klass->vtable).set_color.method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar4->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    cVar5 = FUN_?(1);
    if (cVar5 == '\0') goto code_?;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar4->fields).gameMode == 4) goto code_?;
  }
  this_00 = (this->fields).optionsButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
code_?:
    GamePassesXpRewardInfo_UpdateXPText(this,(MethodInfo *)0x0);
    GamePassesXpRewardInfo_UpdateXPTextVisibility(this,(MethodInfo *)0x0);
    pAVar6 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__,(MethodInfo *)0x0);
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar6 == (Action *)0x0) {
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           (Action *)0x0;
    }
    else {
      pAVar7 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action *)0x0) {
        FUN_?(pAVar6,TypeInfo__System__Action);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           pAVar7;
      pAVar7 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action *)0x0) {
        FUN_?(pAVar6,TypeInfo__System__Action);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)
                      &TypeInfo__GamePassProgressionController->static_fields->
                       OnGamePassesProgressionUpdate >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnDestroy
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesXpRewardInfo__OnGameProgressionDataUpdate__,(MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                   &TypeInfo__GamePassProgressionController->static_fields->
                    OnGamePassesProgressionUpdate >> 0xc);
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


/* Void OnGameProgressionDataUpdate() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnGameProgressionDataUpdate
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  GamePassesXpRewardInfo_UpdateXPText(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode == 4) {
        return;
      }
      bVar2 = (this->fields).tier;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar3->fields).gamePassTier;
        pTVar5 = (this->fields).xPAmountText;
        value = bVar2 <= bVar4;
        if ((pTVar5 != (Text *)0x0) &&
           (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)
           ) {
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar6,(MethodInfo *)0x0);
          if ((bool)bVar7 == value) {
            pTVar5 = (this->fields).xPAmountText;
            if ((pTVar5 == (Text *)0x0) ||
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar5,(MethodInfo *)0x0),
               pGVar6 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,bVar4 < bVar2,(MethodInfo *)0x0);
          }
          pGVar6 = (this->fields).subscriberUI;
          if (pGVar6 != (GameObject *)0x0) {
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar6,(MethodInfo *)0x0);
            if ((bool)bVar7 == value) {
              pGVar6 = (this->fields).subscriberUI;
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,bVar4 < bVar2,(MethodInfo *)0x0);
            }
            pGVar6 = (this->fields).claimedText;
            if (pGVar6 != (GameObject *)0x0) {
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar6,(MethodInfo *)0x0);
              if ((bool)bVar7 != value) {
                pGVar6 = (this->fields).claimedText;
                if (pGVar6 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,value,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnOptionsButtonPress() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_OnOptionsButtonPress
               (GamePassesXpRewardInfo *this,MethodInfo *method)

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
                  GamePassesXPRewardOption_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXPRewardOption>_GamePassesXPRewardOption_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesXpRewardInfo____c__DisplayClass12_0___OnOptionsButtonPress_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesXpRewardInfo____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesXpRewardInfo____c__DisplayClass12_0);
  original = (this->fields).xPRewardOption;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       GamePassesXPRewardOption_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXPRewardOption>_GamePassesXPRewardOption_
                      );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pOVar1 = object[1].klass;
    bVar7 = (this->fields).tier;
    if (pOVar1 != (Object__Class *)0x0) {
      *(byte *)&(pOVar1->_0).this_arg.attrs = bVar7;
      pRVar8 = GamePassProgressionController::
                GamePassProgressionController_GetXPRewardRangeValidator
                          ((uint)bVar7,(MethodInfo *)0x0);
      if ((pRVar8 != (RangeValidator_1_System_Int32_ *)0x0) &&
         (pSVar9 = (Slider *)(pOVar1->_0).byval_arg.data.typeHandle, pSVar9 != (Slider *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                  (pSVar9,(float)(pRVar8->fields).min,(MethodInfo *)0x0);
        pSVar9 = (Slider *)(pOVar1->_0).byval_arg.data.typeHandle;
        if (pSVar9 != (Slider *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                    (pSVar9,(float)(pRVar8->fields).max,(MethodInfo *)0x0);
          value = GamePassProgressionController::GamePassProgressionController_GetXPReward
                            ((uint)bVar7,(MethodInfo *)0x0);
          pSVar9 = (Slider *)(pOVar1->_0).byval_arg.data.array;
          if (pSVar9 != (Slider *)0x0) {
            (*(pSVar9->klass->vtable).set_value.methodPtr)();
            this_00 = *(InputField **)&(pOVar1->_0).byval_arg.attrs;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            BStack_10._value = (void *)0x0;
            value_00 = mscorlib.dll::System::Number::Number_FormatInt32
                                 (value,(ReadOnlySpan_1_Char_ *)&BStack_10,(IFormatProvider *)0x0,
                                  (MethodInfo *)0x0);
            if (this_00 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                        (this_00,value_00,1,(MethodInfo *)0x0);
              GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateBonusXpAmountText
                        ((GamePassesXPRewardOption *)pOVar1,value,(MethodInfo *)0x0);
              pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        (this_02,object,
                         MethodInfo__GamePassesXpRewardInfo____c__DisplayClass12_0___OnOptionsButtonPress_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pMVar12 = 
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
                if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?(pMVar12);
                }
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_GetEventChain
                        (pGVar11,(IList_1_UnityEngine_Transform_ *)
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                                 s_InternalTransformList,(MethodInfo *)0x0);
              pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
                lVar14 = (longlong)(pLVar13->fields)._size;
                uVar3 = 0;
                if (0 < lVar14) {
                  lVar15 = 0;
                  lVar16 = 0x20;
                  do {
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList;
                    if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                    if ((uint)(pLVar13->fields)._size <= uVar3) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    pTVar18 = (pLVar13->fields)._items;
                    if (pTVar18 == (Transform__Array *)0x0) goto code_?;
                    if ((uint)pTVar18->max_length <= uVar3) {
                      FUN_?();
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    this_01 = *(Component **)((longlong)pTVar18->vector + lVar16 + -0x20);
                    if (this_01 == (Component *)0x0) goto code_?;
                    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject(this_01,(MethodInfo *)0x0);
                    bVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                            ExecuteEvents_Execute_18
                                      (pGVar11,(BaseEventData *)0x0,this_02,
                                       (pMVar12->field7_0x38).rgctx_data[1].method);
                    if (bVar19 != 0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_01,(MethodInfo *)0x0);
                      return;
                    }
                    uVar3 = uVar3 + 1;
                    lVar15 = lVar15 + 1;
                    lVar16 = lVar16 + 8;
                  } while (lVar15 < lVar14);
                }
                return;
              }
code_?:
              FUN_?();
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateXPText() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_UpdateXPText
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SubscriberRewardDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__XP_for_Elites);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__XP);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = GamePassProgressionController::GamePassProgressionController_GetXPReward
                    ((uint)(this->fields).tier,(MethodInfo *)0x0);
  pTVar2 = (this->fields).xPAmountText;
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
  aRStack_3[0]._pointer._value = (void *)0x0;
  aRStack_3[0]._length = 0;
  aRStack_3[0]._12_4_ = 0;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar1,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar4,StringLiteral__XP,(MethodInfo *)0x0)
  ;
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar4);
    if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SubscriberRewardDataManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pTVar2 = (this->fields).bonusXPAmountText;
    iVar1 = FUN_?(((float)(TypeInfo__SubscriberRewardDataManager->static_fields->
                                  subscriberRewardData).baseXPBonus / _UNK_? +
                          _UNK_?) * (float)iVar1);
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
    aRStack_3[0]._pointer._value = (void *)0x0;
    aRStack_3[0]._length = 0;
    aRStack_3[0]._12_4_ = 0;
    pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                       (iVar1,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar4,StringLiteral__XP_for_Elites,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar2->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateXPTextVisibility() */

void Assembly-CSharp.dll::GamePassesXpRewardInfo::GamePassesXpRewardInfo_UpdateXPTextVisibility
               (GamePassesXpRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode == 4) {
        return;
      }
      bVar2 = (this->fields).tier;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar3->fields).gamePassTier;
        pTVar5 = (this->fields).xPAmountText;
        value = bVar2 <= bVar4;
        if ((pTVar5 != (Text *)0x0) &&
           (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)
           ) {
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar6,(MethodInfo *)0x0);
          if ((bool)bVar7 == value) {
            pTVar5 = (this->fields).xPAmountText;
            if ((pTVar5 == (Text *)0x0) ||
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar5,(MethodInfo *)0x0),
               pGVar6 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,bVar4 < bVar2,(MethodInfo *)0x0);
          }
          pGVar6 = (this->fields).subscriberUI;
          if (pGVar6 != (GameObject *)0x0) {
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar6,(MethodInfo *)0x0);
            if ((bool)bVar7 == value) {
              pGVar6 = (this->fields).subscriberUI;
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,bVar4 < bVar2,(MethodInfo *)0x0);
            }
            pGVar6 = (this->fields).claimedText;
            if (pGVar6 != (GameObject *)0x0) {
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar6,(MethodInfo *)0x0);
              if ((bool)bVar7 != value) {
                pGVar6 = (this->fields).claimedText;
                if (pGVar6 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,value,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

