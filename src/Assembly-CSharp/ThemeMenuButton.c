
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
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar6 == (MVGameControllerBase *)0x0) ||
         (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar7->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       this_01 == (MVLocalPlayer *)0x0)) goto code_?;
    pLVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ThemeMenuButton);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pLVar8 == (List_1_MV_Common_PlanetPermissionType_ *)0x0) goto code_?;
    if ((pLVar8->fields)._size == 0) {
      pBVar2 = (this->fields).button;
    }
    else {
      iVar9 = FUN_?(pLVar8);
      pBVar2 = (this->fields).button;
      if (iVar9 != -1) {
        if (pBVar2 == (Button *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)pBVar2,1,(MethodInfo *)0x0);
        object = (this->fields).toolTip;
        if (*(int *)&(TypeInfo__ThemeMenuButton->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ThemeMenuButton);
        }
        if (object == (ToolTip *)0x0) goto code_?;
        pSVar10 = TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled;
        goto Assembly_CSharp_dll_ToolTip_ToolTip_SetText;
      }
    }
    if (pBVar2 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)pBVar2,0,(MethodInfo *)0x0);
      object = (this->fields).toolTip;
      if (*(int *)&(TypeInfo__ThemeMenuButton->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemeMenuButton);
      }
      if (object != (ToolTip *)0x0) {
        pSVar10 = TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled;
Assembly_CSharp_dll_ToolTip_ToolTip_SetText:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action,pSVar10,0);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__ToolTip__LanguageLoadedCallback__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar10 = TM::TM__(pSVar10,(MethodInfo *)0x0);
        bVar11 = iRam_? != 0;
        (object->fields).toolTipText = pSVar10;
        if (bVar11) {
          uVar12 = (uint)((ulonglong)&(object->fields).toolTipText >> 0xc);
          puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar14 = *puVar13;
            LOCK();
            uVar15 = *puVar13;
            if (uVar14 == uVar15) {
              *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (uVar14 != uVar15);
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
        pTVar16 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar16 != (TM *)0x0) {
          if ((pTVar16->fields).languageLoadingDone != 0) {
            return;
          }
          pTVar16 = TM::TM_get_Instance((MethodInfo *)0x0);
          pMVar17 = 
          MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
          if ((pTVar16 != (TM *)0x0) &&
             (pLVar18 = (pTVar16->fields).languageChangedCallback,
             pLVar18 != (List_1_System_Action_ *)0x0)) {
            pAVar19 = (pLVar18->fields)._items;
            piVar20 = &(pLVar18->fields)._version;
            *piVar20 = *piVar20 + 1;
            if (pAVar19 == (Action__Array *)0x0) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar12 = (pLVar18->fields)._size;
            if (uVar12 < (uint)pAVar19->max_length) {
              (pLVar18->fields)._size = uVar12 + 1;
            }
            else {
              uVar12 = (pLVar18->fields)._size;
              FUN_?(pLVar18,uVar12 + 1,
                            (pMVar17->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                            rgctxDataDummy,pAVar19,unaff_RDI);
              pAVar19 = (pLVar18->fields)._items;
              (pLVar18->fields)._size = uVar12 + 1;
              if (pAVar19 == (Action__Array *)0x0) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if ((uint)pAVar19->max_length <= uVar12) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            bVar11 = iRam_? != 0;
            pAVar19->vector[(int)uVar12] = (Action *)this_02;
            if (bVar11) {
              uVar12 = (uint)((ulonglong)(pAVar19->vector + (int)uVar12) >> 0xc);
              puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar14 = *puVar13;
                LOCK();
                uVar15 = *puVar13;
                if (uVar14 == uVar15) {
                  *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (uVar14 != uVar15);
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
code_?:
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


/* Void SetButtonAvailability(List`1[MV.Common.PlanetPermissionType]) */

void Assembly-CSharp.dll::ThemeMenuButton::ThemeMenuButton_SetButtonAvailability
               (ThemeMenuButton *this,List_1_MV_Common_PlanetPermissionType_ *planetPermissions,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeMenuButton);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (planetPermissions == (List_1_MV_Common_PlanetPermissionType_ *)0x0) goto code_?;
  if ((planetPermissions->fields)._size == 0) {
    this_01 = (this->fields).button;
  }
  else {
    iVar1 = FUN_?(planetPermissions);
    this_01 = (this->fields).button;
    if (iVar1 != -1) {
      if (this_01 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_01,1,(MethodInfo *)0x0);
        object = (this->fields).toolTip;
        if (*(int *)&(TypeInfo__ThemeMenuButton->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ThemeMenuButton);
        }
        if (object == (ToolTip *)0x0) goto code_?;
        pSVar2 = TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonEnabled;
        goto Assembly_CSharp_dll_ToolTip_ToolTip_SetText;
      }
      goto code_?;
    }
  }
  if (this_01 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_01,0,(MethodInfo *)0x0);
    object = (this->fields).toolTip;
    if (*(int *)&(TypeInfo__ThemeMenuButton->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemeMenuButton);
    }
    if (object != (ToolTip *)0x0) {
      pSVar2 = TypeInfo__ThemeMenuButton->static_fields->toolTipStr_ButtonDisabled;
Assembly_CSharp_dll_ToolTip_ToolTip_SetText:
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action,pSVar2,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__ToolTip__LanguageLoadedCallback__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (object->fields).toolTipText = pSVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(object->fields).toolTipText >> 0xc);
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
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)object,MethodInfo__ToolTip__LanguageLoadedCallback__,
                 (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                      ,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar8 = TM::TM_get_Instance((MethodInfo *)0x0);
      if (pTVar8 != (TM *)0x0) {
        if ((pTVar8->fields).languageLoadingDone != 0) {
          return;
        }
        pTVar8 = TM::TM_get_Instance((MethodInfo *)0x0);
        pMVar9 = MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
        ;
        if ((pTVar8 != (TM *)0x0) &&
           (pLVar10 = (pTVar8->fields).languageChangedCallback,
           pLVar10 != (List_1_System_Action_ *)0x0)) {
          pAVar11 = (pLVar10->fields)._items;
          piVar12 = &(pLVar10->fields)._version;
          *piVar12 = *piVar12 + 1;
          if (pAVar11 == (Action__Array *)0x0) {
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar4 = (pLVar10->fields)._size;
          if (uVar4 < (uint)pAVar11->max_length) {
            (pLVar10->fields)._size = uVar4 + 1;
          }
          else {
            uVar4 = (pLVar10->fields)._size;
            FUN_?(pLVar10,uVar4 + 1,
                          (pMVar9->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                          rgctxDataDummy,pAVar11,unaff_RDI);
            pAVar11 = (pLVar10->fields)._items;
            (pLVar10->fields)._size = uVar4 + 1;
            if (pAVar11 == (Action__Array *)0x0) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if ((uint)pAVar11->max_length <= uVar4) {
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          bVar3 = iRam_? != 0;
          pAVar11->vector[(int)uVar4] = (Action *)this_00;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)(pAVar11->vector + (int)uVar4) >> 0xc);
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
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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

