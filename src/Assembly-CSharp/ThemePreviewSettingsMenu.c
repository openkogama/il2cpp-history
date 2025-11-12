
/* Void DisplayInsufficientGoldNotification(Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_DisplayInsufficientGoldNotification
               (ThemePreviewSettingsMenu *this,int32_t price,MethodInfo *method)

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
                  MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass15_0___DisplayInsufficientGoldNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1___2__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_don_t_have_enough_gold__In_o);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gold);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass15_0);
  arg0 = TM::TM__(StringLiteral_You_don_t_have_enough_gold__In_o,(MethodInfo *)0x0);
  arg1 = (Object *)FUN_?(uRam_?);
  arg2 = TM::TM__(StringLiteral_gold,(MethodInfo *)0x0);
  format = StringLiteral__0___1___2__;
  PStack_1._arg0 = (Object *)0x0;
  PStack_1._arg1 = (Object *)0x0;
  PStack_1._arg2 = (Object *)0x0;
  PStack_1._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_1,(Object *)arg0,arg1,(Object *)arg2,(MethodInfo *)0x0);
  pOStack_2 = PStack_1._arg0;
  pOStack_3 = PStack_1._arg1;
  pOStack_4 = PStack_1._arg2;
  pOVar5 = (Object__Class *)
           mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,format,(ParamsArray *)&pOStack_2,(MethodInfo *)0x0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = iRam_? != 0;
  object[1].klass = pOVar5;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass15_0___DisplayInsufficientGoldNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar13 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      PStack_1._arg1 = (Object *)&UNK_?;
      FUN_?(pMVar13);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  PStack_1._arg1 = (Object *)&UNK_?;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar12,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar15 = (longlong)(pLVar14->fields)._size;
    uVar8 = 0;
    if (0 < lVar15) {
      lVar16 = 0;
      lVar17 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          PStack_1._arg1 = (Object *)&UNK_?;
          FUN_?();
        }
        pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar14->fields)._size <= uVar8) {
          PStack_1._arg1 = (Object *)&UNK_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar18 = (pLVar14->fields)._items;
        if (pTVar18 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar18->max_length <= uVar8) {
          PStack_1._arg1 = (Object *)&UNK_?;
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar18->vector + lVar17 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        PStack_1._arg1 = (Object *)&UNK_?;
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        PStack_1._arg1 = (Object *)&UNK_?;
        bVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar12,(BaseEventData *)0x0,this_01,
                           (pMVar13->field7_0x38).rgctx_data[1].method);
        if (bVar19 != 0) {
          PStack_1._arg1 = (Object *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar16 = lVar16 + 1;
        lVar17 = lVar17 + 8;
      } while (lVar16 < lVar15);
    }
    return;
  }
code_?:
  PStack_1._arg1 = (Object *)&UNK_?;
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DisplayInsufficientLevelNotification(Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_DisplayInsufficientLevelNotification
               (ThemePreviewSettingsMenu *this,int32_t levelReq,MethodInfo *method)

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
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0___DisplayInsufficientLevelNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1___2___3__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_In_order_to_buy_this_theme_you_l);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_re_currently_level);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0);
  args = (Object__Array *)FUN_?(TypeInfo__System__Object);
  pSVar1 = TM::TM__(StringLiteral_In_order_to_buy_this_theme_you_l,(MethodInfo *)0x0);
  if (args != (Object__Array *)0x0) {
    if ((pSVar1 != (String *)0x0) &&
       (lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class), lVar2 == 0)) {
      uVar3 = FUN_?();
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?(args,0,pSVar1);
    aiStackX_20[0] = levelReq;
    lVar2 = FUN_?(uRam_?,aiStackX_20);
    if ((lVar2 != 0) &&
       (lVar5 = FUN_?(lVar2,(args->klass->_0).element_class), lVar5 == 0)) {
      uVar3 = FUN_?();
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?(args,1,lVar2);
    pSVar1 = TM::TM__(StringLiteral_You_re_currently_level,(MethodInfo *)0x0);
    if ((pSVar1 != (String *)0x0) &&
       (lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class), lVar2 == 0)) {
      uVar3 = FUN_?();
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?(args,2,pSVar1);
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
       (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar8 != (MVLocalPlayer *)0x0)) {
      aiStackX_20[0] = (pMVar8->fields)._.level;
      lVar2 = FUN_?(uRam_?,aiStackX_20);
      if ((lVar2 != 0) &&
         (lVar2 = FUN_?(lVar2,(args->klass->_0).element_class), lVar2 == 0)) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_?(args,3);
      pSVar1 = StringLiteral__0___1___2___3__;
      PStack_9._arg0 = (Object *)0x0;
      PStack_9._arg1 = (Object *)0x0;
      PStack_9._arg2 = (Object *)0x0;
      PStack_9._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_9,args,(MethodInfo *)0x0);
      pOStack_10 = PStack_9._arg0;
      pOStack_11 = PStack_9._arg1;
      pOStack_12 = PStack_9._arg2;
      pOVar13 = (Object__Class *)
                mscorlib.dll::System::String::String_FormatHelper
                          ((IFormatProvider *)0x0,pSVar1,(ParamsArray *)&pOStack_10,
                           (MethodInfo *)0x0);
      if (object != (Object *)0x0) {
        bVar14 = iRam_? != 0;
        object[1].klass = pOVar13;
        if (bVar14) {
          uVar15 = (uint)((ulonglong)(object + 1) >> 0xc);
          puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar17 = *puVar16;
            LOCK();
            uVar18 = *puVar16;
            if (uVar17 == uVar18) {
              *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
            }
            UNLOCK();
          } while (uVar17 != uVar18);
        }
        pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,object,
                   MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0___DisplayInsufficientLevelNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar20 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          PStack_9._arg1 = (Object *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          PStack_9._arg1 = (Object *)&UNK_?;
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          PStack_9._arg1 = (Object *)&UNK_?;
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar20->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            PStack_9._arg1 = (Object *)&UNK_?;
            FUN_?(pMVar20);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          PStack_9._arg1 = (Object *)&UNK_?;
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        PStack_9._arg1 = (Object *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar19,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar21 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar21 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar2 = (longlong)(pLVar21->fields)._size;
          uVar15 = 0;
          if (0 < lVar2) {
            lVar22 = 0;
            lVar5 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                PStack_9._arg1 = (Object *)&UNK_?;
                FUN_?();
              }
              pLVar21 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar21 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar21->fields)._size <= uVar15) {
                PStack_9._arg1 = (Object *)&UNK_?;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar23 = (pLVar21->fields)._items;
              if (pTVar23 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar23->max_length <= uVar15) {
                PStack_9._arg1 = (Object *)&UNK_?;
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar23->vector + lVar5 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              PStack_9._arg1 = (Object *)&UNK_?;
              pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              PStack_9._arg1 = (Object *)&UNK_?;
              bVar24 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar19,(BaseEventData *)0x0,this_02,
                                  (pMVar20->field7_0x38).rgctx_data[1].method);
              if (bVar24 != 0) {
                PStack_9._arg1 = (Object *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar15 = uVar15 + 1;
              lVar22 = lVar22 + 1;
              lVar5 = lVar5 + 8;
            } while (lVar22 < lVar2);
          }
          return;
        }
code_?:
        PStack_9._arg1 = (Object *)&UNK_?;
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DisplaySkyboxWarning() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_DisplaySkyboxWarning
               (ThemePreviewSettingsMenu *this,MethodInfo *method)

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
                  MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_will_not_be_able_to_use_skyb);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
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
  pOVar7 = (Object__Class *)
           TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  object[1].klass = pOVar7;
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
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
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
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar10->fields)._size;
    uVar3 = 0;
    if (0 < lVar4) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DisplayThemeSwitchWarning() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_DisplayThemeSwitchWarning
               (ThemePreviewSettingsMenu *this,MethodInfo *method)

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
                  MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0___DisplayThemeSwitchWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_By_purchasing_a_new_theme__you_a);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0);
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
  pOVar7 = (Object__Class *)
           TM::TM__(StringLiteral_By_purchasing_a_new_theme__you_a,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  object[1].klass = pOVar7;
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
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0___DisplayThemeSwitchWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
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
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar10->fields)._size;
    uVar3 = 0;
    if (0 < lVar4) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Theme, ThemeData, ThemeMenuController) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_Initialize
               (ThemePreviewSettingsMenu *this,Theme *theme,ThemeData *data,
               ThemeMenuController *menuController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SwitchThemeButton_MethodInfo__UnityEngine__Object__Instantiate<SwitchThemeButton>_SwitchThemeButton__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ThemeSettingsSideBar_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsSideBar>_ThemeSettingsSideBar__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass12_0___Initialize_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass12_0);
  iVar1 = iRam_?;
  if (object != (Object *)0x0) {
    object[1].klass = (Object__Class *)this;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
        iVar1 = iRam_?;
      } while (!bVar6);
    }
    object[1].monitor = (MonitorData *)data;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
    pTVar7 = (this->fields)._.sideBarPrefab;
    pTVar8 = (Transform *)(this->fields)._.settingsArea;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pTVar7 = (ThemeSettingsSideBar *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)pTVar7,pTVar8,0,
                         ThemeSettingsSideBar_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsSideBar>_ThemeSettingsSideBar__UnityEngine__Transform__bool_
                        );
    bVar6 = iRam_? != 0;
    (this->fields).sideBar = pTVar7;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields).sideBar >> 0xc);
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
    pTVar7 = (this->fields).sideBar;
    if (((pTVar7 != (ThemeSettingsSideBar *)0x0) &&
        (pIVar9 = (pTVar7->fields).closeImage, pIVar9 != (Image *)0x0)) &&
       (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar9,(MethodInfo *)0x0), pGVar10 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar10,0,(MethodInfo *)0x0);
      pIVar9 = (pTVar7->fields).backImage;
      if ((pIVar9 != (Image *)0x0) &&
         (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar9,(MethodInfo *)0x0), pGVar10 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar10,1,(MethodInfo *)0x0);
        pTVar7 = (this->fields).sideBar;
        if (pTVar7 != (ThemeSettingsSideBar *)0x0) {
          ThemeSettingsMenuBase::ThemeSettingsMenuBase_Initialize
                    ((ThemeSettingsMenuBase *)this,theme,(pTVar7->fields).content,(MethodInfo *)0x0
                    );
          iVar1 = iRam_?;
          (this->fields).previewTheme = theme;
          if (iVar1 != 0) {
            uVar2 = (uint)((ulonglong)&(this->fields).previewTheme >> 0xc);
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
              iVar1 = iRam_?;
            } while (!bVar6);
          }
          (this->fields)._ThemeData_k__BackingField = (ThemeData *)object[1].monitor;
          iVar11 = 0;
          if (iVar1 != 0) {
            uVar2 = (uint)((ulonglong)&(this->fields)._ThemeData_k__BackingField >> 0xc);
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
              iVar11 = iRam_?;
            } while (!bVar6);
          }
          (this->fields).menuController = menuController;
          if (iVar11 != 0) {
            uVar2 = (uint)((ulonglong)&(this->fields).menuController >> 0xc);
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
          if (object[1].monitor != (MonitorData *)0x0) {
            pTVar8 = (Transform *)(this->fields)._.settingsArea;
            (this->fields).previewID = *(int32_t *)(object[1].monitor + 0x10);
            this_00 = (SwitchThemeButton *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                ((Object *)(this->fields).switchThemeButtonPrefab,pTVar8,0,
                                 SwitchThemeButton_MethodInfo__UnityEngine__Object__Instantiate<SwitchThemeButton>_SwitchThemeButton__UnityEngine__Transform__bool_
                                );
            pMVar12 = object[1].monitor;
            if ((pMVar12 != (MonitorData *)0x0) && (this_00 != (SwitchThemeButton *)0x0)) {
              SwitchThemeButton::SwitchThemeButton_Initialize
                        (this_00,*(int32_t *)(pMVar12 + 0x24),*(int32_t *)(pMVar12 + 0x20),
                         (MethodInfo *)0x0);
              pBVar13 = (this_00->fields).button;
              if (pBVar13 != (Button *)0x0) {
                pBVar14 = (pBVar13->fields).m_OnClick;
                this_01 = (NavMesh_OnNavMeshPreUpdate *)
                          FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,object,
                           MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass12_0___Initialize_b__0__
                           ,(MethodInfo *)0x0);
                if (pBVar14 != (Button_ButtonClickedEvent *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this_02 = (InvokableCall *)
                            FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::
                  InvokableCall_add_Delegate(this_02,(UnityAction *)this_01,(MethodInfo *)0x0);
                  pIVar15 = (pBVar14->fields)._._.m_Calls;
                  if (pIVar15 != (InvokableCallList *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pLVar16 = (pIVar15->fields).m_RuntimeCalls;
                    if (pLVar16 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                      FUN_?(pLVar16,this_02);
                      (pIVar15->fields).m_NeedsUpdate = 1;
                      return;
                    }
                  }
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
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnPurchaseResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_OnPurchaseResponse
               (ThemePreviewSettingsMenu *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_b__20_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unexpected_purchase_response_);
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
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar4 = (pMVar2->fields).PurchaseProductResponseHandler;
  this_03 = (Action_2_Int32Enum_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar4,(Delegate *)this_03,(MethodInfo *)0x0);
  pAVar6 = 
  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
  ;
  theme = (Theme *)0x0;
  if (pDVar5 == (Delegate *)0x0) {
    (pMVar2->fields).PurchaseProductResponseHandler =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  else {
    pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
              )FUN_?(pDVar5,
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
    if (pAVar4 ==
        (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0)
    {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar2->fields).PurchaseProductResponseHandler = pAVar4;
    pAVar6 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    lVar7 = FUN_?();
    if (lVar7 == 0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(pMVar2->fields).PurchaseProductResponseHandler >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  this_00 = (this->fields).openPopup;
  if (this_00 == (ConfirmationPopup *)0x0) goto code_?;
  ConfirmationPopup::ConfirmationPopup_Pop(this_00,(MethodInfo *)0x0);
  switch(returnCode) {
  case 0:
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ThemePreviewSettingsMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
    }
    this_04 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_0;
    if (this_04 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__ThemePreviewSettingsMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
      }
      pTVar13 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9;
      this_04 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)pTVar13,
                 MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_0 = this_04;
      func_?(&TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_0);
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar12,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_01 = (this->fields).menuController;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ThemeRepository);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_02 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
    if (this_02 == (ThemeRepository *)0x0) goto code_?;
    pTVar14 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_02,(MethodInfo *)0x0);
    if (pTVar14 != (ThemeWorldObject *)0x0) {
      theme = (pTVar14->fields)._Visualization_k__BackingField;
    }
    if (this_01 == (ThemeMenuController *)0x0) goto code_?;
    ThemeMenuController::ThemeMenuController_OpenSettings(this_01,theme,(MethodInfo *)0x0);
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ThemePreviewSettingsMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
    }
    this_05 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_1;
    if (this_05 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__ThemePreviewSettingsMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
      }
      pTVar13 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9;
      this_05 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,(Object *)pTVar13,
                 MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_1 = this_05;
      func_?(&TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_1);
    }
    iVar15 = *(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c;
    goto code_?;
  case 1:
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_05 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,(Object *)this,
               MethodInfo__ThemePreviewSettingsMenu___OnPurchaseResponse_b__20_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    goto code_?;
  case 2:
  case 3:
  case 4:
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ThemePreviewSettingsMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
    }
    this_05 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_4;
    if (this_05 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__ThemePreviewSettingsMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
      }
      pTVar13 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9;
      this_05 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,(Object *)pTVar13,
                 MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_4 = this_05;
      ppEVar16 = &TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_4;
code_?:
      func_?(ppEVar16);
    }
    break;
  default:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unexpected_purchase_response_,(MethodInfo *)0x0);
    return;
  case 6:
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ThemePreviewSettingsMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
    }
    this_05 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_3;
    if (this_05 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__ThemePreviewSettingsMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
      }
      pTVar13 = TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9;
      this_05 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,(Object *)pTVar13,
                 MethodInfo__ThemePreviewSettingsMenu____c___OnPurchaseResponse_b__20_3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_3 = this_05;
      ppEVar16 = &TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9__20_3;
      goto code_?;
    }
  }
  iVar15 = *(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c;
code_?:
  if (iVar15 == 0) {
    FUN_?();
  }
code_?:
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar12,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_05,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void OnSkyboxWarningResolved(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_OnSkyboxWarningResolved
               (ThemePreviewSettingsMenu *this,bool b,ConfirmationPopup *popup,MethodInfo *method)

{
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    if (b != 0) {
      ThemePreviewSettingsMenu_DisplayThemeSwitchWarning(this,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnThemeSwitchWarningResolved(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_OnThemeSwitchWarningResolved
               (ThemePreviewSettingsMenu *this,bool b,ConfirmationPopup *popup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (b == 0) {
    if (popup != (ConfirmationPopup *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar1 = iRam_? != 0;
    (this->fields).openPopup = popup;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).openPopup >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
      pAVar8 = (pMVar7->fields).PurchaseProductResponseHandler;
      this_01 = (Action_2_Int32Enum_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      uVar9 = 0;
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ThemePreviewSettingsMenu__OnPurchaseResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar11 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar10 == (Delegate *)0x0) {
        (pMVar7->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pAVar8 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)FUN_?(pDVar10,
                                   TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                  );
        if (pAVar8 ==
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0) {
          FUN_?(pDVar10,pAVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (pMVar7->fields).PurchaseProductResponseHandler = pAVar8;
        pAVar11 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar3 = FUN_?(pDVar10,
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                              );
        if (lVar3 == 0) {
          FUN_?(pDVar10,pAVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar7->fields).PurchaseProductResponseHandler >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pTVar13 = (this->fields).previewTheme;
      iVar14 = (this->fields).previewID;
      if (pTVar13 != (Theme *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar6 != (MVGameControllerBase *)0x0) &&
            (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
           (pSVar15 = (pTVar13->fields)._Settings_k__BackingField, pSVar15 != (SettingsWrapper *)0x0))
        {
          this_00 = (pMVar7->fields).operationRequests;
          value = (pSVar15->fields).settingsData;
          if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0xbf);
            pOVar16 = (Object *)FUN_?(uRam_?,aiStackX_10);
            aiStackX_10[0] = iVar14;
            value_00 = (Object *)FUN_?(uRam_?,aiStackX_10);
            if (this_02 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar16,value_00,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0xcf);
              pOVar16 = (Object *)FUN_?(uRam_?,aiStackX_10);
              method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          ->klass->rgctx_data[0x22].method;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar16,
                         (Object *)value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),
                         method_00);
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseProduct
                        (this_00,MVProductType__Enum_Theme,
                         (Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SwitchThemeButtonClicked(Int32, Int32) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu_SwitchThemeButtonClicked
               (ThemePreviewSettingsMenu *this,int32_t themeID,int32_t levelReq,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,CONCAT44(in_register_00000014,themeID));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      if ((pMVar4->fields)._.level < levelReq) {
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        ,levelReq,0);
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
          FUN_?(&TypeInfo__System__Object);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0___DisplayInsufficientLevelNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__0___1___2___3__);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_In_order_to_buy_this_theme_you_l);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_You_re_currently_level);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = (Object *)FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0)
        ;
        args = (Object__Array *)FUN_?(TypeInfo__System__Object);
        pSVar6 = TM::TM__(StringLiteral_In_order_to_buy_this_theme_you_l,(MethodInfo *)0x0);
        if (args != (Object__Array *)0x0) {
          if ((pSVar6 != (String *)0x0) &&
             (lVar7 = FUN_?(pSVar6,(args->klass->_0).element_class), lVar7 == 0)) {
            uVar8 = FUN_?();
            FUN_?(uVar8,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FUN_?(args,0,pSVar6);
          aiStackX_20[0] = levelReq;
          lVar7 = FUN_?(uRam_?,aiStackX_20);
          if ((lVar7 != 0) &&
             (lVar10 = FUN_?(lVar7,(args->klass->_0).element_class), lVar10 == 0)) {
            uVar8 = FUN_?();
            FUN_?(uVar8,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FUN_?(args,1,lVar7);
          pSVar6 = TM::TM__(StringLiteral_You_re_currently_level,(MethodInfo *)0x0);
          if ((pSVar6 != (String *)0x0) &&
             (lVar7 = FUN_?(pSVar6,(args->klass->_0).element_class), lVar7 == 0)) {
            uVar8 = FUN_?();
            FUN_?(uVar8,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FUN_?(args,2,pSVar6);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
               (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
              (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
             (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar3,(MethodInfo *)0x0), pMVar4 != (MVLocalPlayer *)0x0)) {
            aiStackX_20[0] = (pMVar4->fields)._.level;
            lVar7 = FUN_?(uRam_?,aiStackX_20);
            if ((lVar7 != 0) &&
               (lVar7 = FUN_?(lVar7,(args->klass->_0).element_class), lVar7 == 0)) {
              uVar8 = FUN_?();
              FUN_?(uVar8,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FUN_?(args,3);
            pSVar6 = StringLiteral__0___1___2___3__;
            PStack_11._arg0 = (Object *)0x0;
            PStack_11._arg1 = (Object *)0x0;
            PStack_11._arg2 = (Object *)0x0;
            PStack_11._args = (Object__Array *)0x0;
            mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                      (&PStack_11,args,(MethodInfo *)0x0);
            pOStack_12 = PStack_11._arg0;
            pOStack_13 = PStack_11._arg1;
            pOStack_14 = PStack_11._arg2;
            pOVar15 = (Object__Class *)
                      mscorlib.dll::System::String::String_FormatHelper
                                ((IFormatProvider *)0x0,pSVar6,(ParamsArray *)&pOStack_12,
                                 (MethodInfo *)0x0);
            if (pOVar5 != (Object *)0x0) {
              bVar16 = iRam_? != 0;
              pOVar5[1].klass = pOVar15;
              if (bVar16) {
                uVar17 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
                puVar18 = (ulonglong *)((ulonglong)((uVar17 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar19 = *puVar18;
                  LOCK();
                  uVar20 = *puVar18;
                  if (uVar19 == uVar20) {
                    *puVar18 = uVar19 | 1L << (uVar17 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar19 != uVar20);
              }
              pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        (this_01,pOVar5,
                         MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0___DisplayInsufficientLevelNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              goto 
              UnityEngine_UI_dll_UnityEngine_EventSystems_ExecuteEvents_ExecuteEvents_ExecuteHierarchy
              ;
            }
          }
        }
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar22 = (this->fields).previewTheme;
      if (pTVar22 != (Theme *)0x0) {
        if ((pTVar22->fields).overrideSkyboxManager == 0) {
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
                          MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0___DisplayThemeSwitchWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_By_purchasing_a_new_theme__you_a);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar5 = (Object *)
                    FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0);
          if (pOVar5 == (Object *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar16 = iRam_? != 0;
          pOVar5[1].monitor = (MonitorData *)this;
          if (bVar16) {
            uVar17 = (uint)((ulonglong)&pOVar5[1].monitor >> 0xc);
            lVar7 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
            do {
              uVar20 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar18 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar16 = uVar20 == *puVar18;
              if (bVar16) {
                *puVar18 = uVar20 | 1L << (uVar17 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          pOVar15 = (Object__Class *)
                    TM::TM__(StringLiteral_By_purchasing_a_new_theme__you_a,(MethodInfo *)0x0);
          bVar16 = iRam_? != 0;
          pOVar5[1].klass = pOVar15;
          if (bVar16) {
            uVar17 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
            lVar7 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
            do {
              uVar20 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar18 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar16 = uVar20 == *puVar18;
              if (bVar16) {
                *puVar18 = uVar20 | 1L << (uVar17 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_01,pOVar5,
                     MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0___DisplayThemeSwitchWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
        }
        else {
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
                          MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_You_will_not_be_able_to_use_skyb);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar5 = (Object *)
                    FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
          if (pOVar5 == (Object *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar16 = iRam_? != 0;
          pOVar5[1].monitor = (MonitorData *)this;
          if (bVar16) {
            uVar17 = (uint)((ulonglong)&pOVar5[1].monitor >> 0xc);
            lVar7 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
            do {
              uVar20 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar18 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar16 = uVar20 == *puVar18;
              if (bVar16) {
                *puVar18 = uVar20 | 1L << (uVar17 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          pOVar15 = (Object__Class *)
                    TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
          bVar16 = iRam_? != 0;
          pOVar5[1].klass = pOVar15;
          if (bVar16) {
            uVar17 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
            lVar7 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
            do {
              uVar20 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar18 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar16 = uVar20 == *puVar18;
              if (bVar16) {
                *puVar18 = uVar20 | 1L << (uVar17 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_01,pOVar5,
                     MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
        }
UnityEngine_UI_dll_UnityEngine_EventSystems_ExecuteEvents_ExecuteEvents_ExecuteHierarchy:
        pMVar23 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          PStack_11._arg1 = (Object *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          PStack_11._arg1 = (Object *)&UNK_?;
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          PStack_11._arg1 = (Object *)&UNK_?;
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar23->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            PStack_11._arg1 = (Object *)&UNK_?;
            FUN_?(pMVar23);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          PStack_11._arg1 = (Object *)&UNK_?;
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        PStack_11._arg1 = (Object *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar21,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar24 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar24 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar7 = (longlong)(pLVar24->fields)._size;
          uVar17 = 0;
          if (0 < lVar7) {
            lVar25 = 0;
            lVar10 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                PStack_11._arg1 = (Object *)&UNK_?;
                FUN_?();
              }
              pLVar24 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar24 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar24->fields)._size <= uVar17) {
                PStack_11._arg1 = (Object *)&UNK_?;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar26 = (pLVar24->fields)._items;
              if (pTVar26 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar26->max_length <= uVar17) {
                PStack_11._arg1 = (Object *)&UNK_?;
                FUN_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar26->vector + lVar10 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              PStack_11._arg1 = (Object *)&UNK_?;
              pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              PStack_11._arg1 = (Object *)&UNK_?;
              bVar27 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar21,(BaseEventData *)0x0,this_01,
                                  (pMVar23->field7_0x38).rgctx_data[1].method);
              if (bVar27 != 0) {
                PStack_11._arg1 = (Object *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar17 = uVar17 + 1;
              lVar25 = lVar25 + 1;
              lVar10 = lVar10 + 8;
            } while (lVar25 < lVar7);
          }
          return;
        }
code_?:
        PStack_11._arg1 = (Object *)&UNK_?;
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <OnPurchaseResponse>b__20_2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu::
     ThemePreviewSettingsMenu__OnPurchaseResponse_b__20_2
               (ThemePreviewSettingsMenu *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._ThemeData_k__BackingField;
  if ((pTVar1 != (ThemeData *)0x0) && (x != (IModalPopupCreator *)0x0)) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,1,
                  (pTVar1->fields).priceGold);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

