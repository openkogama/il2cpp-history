
/* Void Awake() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_Awake
               (ThemeMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (pTVar1 != (ThemeRepository *)0x0) {
    if ((pTVar1->fields)._ThemesEnabled_k__BackingField == 0) {
      pBVar2 = (this->fields).button;
      if ((pBVar2 != (Button *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar2,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (obj->fields)._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,0);
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
           (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
          (this_00 = (pMVar7->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
         (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         this_01 != (MVLocalPlayer *)0x0)) {
        PVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__ThemeMenuButton);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar2 = (this->fields).button;
        if (pBVar2 != (Button *)0x0) {
          if ((char)PVar8 == '\x02') {
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                      ((Selectable *)pBVar2,1,(MethodInfo *)0x0);
            object = (this->fields).toolTip;
            if (*(int *)&(TypeInfo__ThemeMenuButton->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ThemeMenuButton);
            }
            if (object != (ToolTip *)0x0) {
              pSVar9 = TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled;
              goto Assembly_CSharp_dll_ToolTip_ToolTip_SetText;
            }
          }
          else {
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                      ((Selectable *)pBVar2,0,(MethodInfo *)0x0);
            object = (this->fields).toolTip;
            if (*(int *)&(TypeInfo__ThemeMenuButton->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ThemeMenuButton);
            }
            if (object != (ToolTip *)0x0) {
              pSVar9 = TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled;
Assembly_CSharp_dll_ToolTip_ToolTip_SetText:
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action,pSVar9,0);
                LOCK();
                UNLOCK();
                FUN_?(&MethodInfo__ToolTip__LanguageLoadedCallback__);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pSVar9 = TM::TM__(pSVar9,(MethodInfo *)0x0);
              bVar10 = iRam_? != 0;
              (object->fields).toolTipText = pSVar9;
              if (bVar10) {
                uVar11 = (uint)((ulonglong)&(object->fields).toolTipText >> 0xc);
                puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar13 = *puVar12;
                  LOCK();
                  uVar14 = *puVar12;
                  if (uVar13 == uVar14) {
                    *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar13 != uVar14);
              }
              this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_02,(Object *)object,MethodInfo__ToolTip__LanguageLoadedCallback__,
                         (MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                              ,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pTVar15 = TM::TM_get_Instance((MethodInfo *)0x0);
              if (pTVar15 != (TM *)0x0) {
                if ((pTVar15->fields).languageLoadingDone != 0) {
                  return;
                }
                pTVar15 = TM::TM_get_Instance((MethodInfo *)0x0);
                pMVar16 = 
                MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
                if ((pTVar15 != (TM *)0x0) &&
                   (pLVar17 = (pTVar15->fields).languageChangedCallback,
                   pLVar17 != (List_1_System_Action_ *)0x0)) {
                  pAVar18 = (pLVar17->fields)._items;
                  piVar19 = &(pLVar17->fields)._version;
                  *piVar19 = *piVar19 + 1;
                  if (pAVar18 == (Action__Array *)0x0) {
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar11 = (pLVar17->fields)._size;
                  if (uVar11 < (uint)pAVar18->max_length) {
                    (pLVar17->fields)._size = uVar11 + 1;
                  }
                  else {
                    uVar11 = (pLVar17->fields)._size;
                    FUN_?(pLVar17,uVar11 + 1,
                                  (pMVar16->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                                  rgctxDataDummy,pAVar18,unaff_RDI);
                    pAVar18 = (pLVar17->fields)._items;
                    (pLVar17->fields)._size = uVar11 + 1;
                    if (pAVar18 == (Action__Array *)0x0) {
                      FUN_?();
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  if ((uint)pAVar18->max_length <= uVar11) {
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  bVar10 = iRam_? != 0;
                  pAVar18->vector[(int)uVar11] = (Action *)this_02;
                  if (bVar10) {
                    uVar11 = (uint)((ulonglong)(pAVar18->vector + (int)uVar11) >> 0xc);
                    puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar13 = *puVar12;
                      LOCK();
                      uVar14 = *puVar12;
                      if (uVar13 == uVar14) {
                        *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar13 != uVar14);
                  }
                  return;
                }
              }
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_OnClick
               (ThemeMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ThemeMenuButton::IClickHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeMenuButton____c___OnClick_b__6_0_ThemeMenuButton__IClickHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeMenuButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ThemeMenuButton____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ThemeMenuButton____c);
  }
  this_01 = TypeInfo__ThemeMenuButton____c->static_fields->__9__6_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_ThemeMenuButton_IClickHandler_ *)0x0) {
    if (*(int *)&(TypeInfo__ThemeMenuButton____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemeMenuButton____c);
    }
    object = TypeInfo__ThemeMenuButton____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_ThemeMenuButton_IClickHandler_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ThemeMenuButton____c___OnClick_b__6_0_ThemeMenuButton__IClickHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ThemeMenuButton____c->static_fields->__9__6_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ThemeMenuButton____c->static_fields->__9__6_0 >> 0xc);
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
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ThemeMenuButton::IClickHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ThemeMenuButton::IClickHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ThemeMenuButton::IClickHandler>_
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


/* Void SetButtonAvailability(PlanetOwnershipType) */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_SetButtonAvailability
               (ThemeMenuButton *this,PlanetOwnershipType__Enum planetOwnership,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeMenuButton);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    if ((char)planetOwnership == '\x02') {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,1,(MethodInfo *)0x0);
      object = (this->fields).toolTip;
      if (*(int *)&(TypeInfo__ThemeMenuButton->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemeMenuButton);
      }
      if (object != (ToolTip *)0x0) {
        pSVar1 = TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled;
        goto Assembly_CSharp_dll_ToolTip_ToolTip_SetText;
      }
    }
    else {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      object = (this->fields).toolTip;
      if (*(int *)&(TypeInfo__ThemeMenuButton->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemeMenuButton);
      }
      if (object != (ToolTip *)0x0) {
        pSVar1 = TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled;
Assembly_CSharp_dll_ToolTip_ToolTip_SetText:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action,pSVar1,0);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__ToolTip__LanguageLoadedCallback__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar1 = TM::TM__(pSVar1,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (object->fields).toolTipText = pSVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(object->fields).toolTipText >> 0xc);
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
        this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)object,MethodInfo__ToolTip__LanguageLoadedCallback__,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                        ,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar7 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar7 != (TM *)0x0) {
          if ((pTVar7->fields).languageLoadingDone != 0) {
            return;
          }
          pTVar7 = TM::TM_get_Instance((MethodInfo *)0x0);
          pMVar8 = 
          MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
          if ((pTVar7 != (TM *)0x0) &&
             (pLVar9 = (pTVar7->fields).languageChangedCallback,
             pLVar9 != (List_1_System_Action_ *)0x0)) {
            pAVar10 = (pLVar9->fields)._items;
            piVar11 = &(pLVar9->fields)._version;
            *piVar11 = *piVar11 + 1;
            if (pAVar10 == (Action__Array *)0x0) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar3 = (pLVar9->fields)._size;
            if (uVar3 < (uint)pAVar10->max_length) {
              (pLVar9->fields)._size = uVar3 + 1;
            }
            else {
              uVar3 = (pLVar9->fields)._size;
              FUN_?(pLVar9,uVar3 + 1,
                            (pMVar8->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                            rgctxDataDummy,pAVar10,unaff_RDI);
              pAVar10 = (pLVar9->fields)._items;
              (pLVar9->fields)._size = uVar3 + 1;
              if (pAVar10 == (Action__Array *)0x0) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            if ((uint)pAVar10->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            bVar2 = iRam_? != 0;
            pAVar10->vector[(int)uVar3] = (Action *)this_01;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)(pAVar10->vector + (int)uVar3) >> 0xc);
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
        }
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* ThemeMenuButton() */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeMenuButton);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Themes_can_only_be_changed_by_th);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Theme_options);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Themes_can_only_be_changed_by_th,(MethodInfo *)0x0);
  TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled = pSVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__ThemeMenuButton->static_fields >> 0xc);
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
  pSVar1 = TM::TM__(StringLiteral_Theme_options,(MethodInfo *)0x0);
  TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled = pSVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled >>
                  0xc);
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
  return;
}

