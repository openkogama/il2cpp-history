
/* Void <Initialize>b__0() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c__DisplayClass12_0::
     ThemePreviewSettingsMenu_c_DisplayClass12_0__Initialize_b__0
               (ThemePreviewSettingsMenu_c_DisplayClass12_0 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (((this->fields).data != (ThemeData *)0x0) &&
     (iVar1 = (((this->fields).data)->fields).levelRequirement,
     this_00 != (ThemePreviewSettingsMenu *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
      pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
      if (pMVar5 != (MVLocalPlayer *)0x0) {
        if ((pMVar5->fields)._.level < iVar1) {
          if (cRam_? == '\0') {
            FUN_?(&
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          ,iVar1,0);
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
          pOVar6 = (Object *)
                    FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0);
          args = (Object__Array *)FUN_?(TypeInfo__System__Object);
          pSVar7 = TM::TM__(StringLiteral_In_order_to_buy_this_theme_you_l,(MethodInfo *)0x0);
          if (args != (Object__Array *)0x0) {
            if ((pSVar7 != (String *)0x0) &&
               (lVar8 = FUN_?(pSVar7,(args->klass->_0).element_class), lVar8 == 0)) {
              uVar9 = FUN_?();
              FUN_?(uVar9,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FUN_?(args,0,pSVar7);
            aiStackX_20[0] = iVar1;
            lVar8 = FUN_?(uRam_?,aiStackX_20);
            if ((lVar8 != 0) &&
               (lVar11 = FUN_?(lVar8,(args->klass->_0).element_class), lVar11 == 0)) {
              uVar9 = FUN_?();
              FUN_?(uVar9,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FUN_?(args,1,lVar8);
            pSVar7 = TM::TM__(StringLiteral_You_re_currently_level,(MethodInfo *)0x0);
            if ((pSVar7 != (String *)0x0) &&
               (lVar8 = FUN_?(pSVar7,(args->klass->_0).element_class), lVar8 == 0)) {
              uVar9 = FUN_?();
              FUN_?(uVar9,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FUN_?(args,2,pSVar7);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
                 (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
               (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0)) {
              aiStackX_20[0] = (pMVar5->fields)._.level;
              lVar8 = FUN_?(uRam_?,aiStackX_20);
              if ((lVar8 != 0) &&
                 (lVar8 = FUN_?(lVar8,(args->klass->_0).element_class), lVar8 == 0)) {
                uVar9 = FUN_?();
                FUN_?(uVar9,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FUN_?(args,3);
              pSVar7 = StringLiteral__0___1___2___3__;
              PStack_12._arg0 = (Object *)0x0;
              PStack_12._arg1 = (Object *)0x0;
              PStack_12._arg2 = (Object *)0x0;
              PStack_12._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                        (&PStack_12,args,(MethodInfo *)0x0);
              pOStack_13 = PStack_12._arg0;
              pOStack_14 = PStack_12._arg1;
              pOStack_15 = PStack_12._arg2;
              pOVar16 = (Object__Class *)
                        mscorlib.dll::System::String::String_FormatHelper
                                  ((IFormatProvider *)0x0,pSVar7,(ParamsArray *)&pOStack_13,
                                   (MethodInfo *)0x0);
              if (pOVar6 != (Object *)0x0) {
                bVar17 = iRam_? != 0;
                pOVar6[1].klass = pOVar16;
                if (bVar17) {
                  uVar18 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
                  puVar19 = (ulonglong *)((ulonglong)((uVar18 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar20 = *puVar19;
                    LOCK();
                    uVar21 = *puVar19;
                    if (uVar20 == uVar21) {
                      *puVar19 = uVar20 | 1L << (uVar18 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar20 != uVar21);
                }
                pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (this_02,pOVar6,
                           MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass14_0___DisplayInsufficientLevelNotification_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                goto 
                UnityEngine_UI_dll_UnityEngine_EventSystems_ExecuteEvents_ExecuteEvents_ExecuteHierarchy
                ;
              }
            }
          }
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar23 = (this_00->fields).previewTheme;
        if (pTVar23 != (Theme *)0x0) {
          if ((pTVar23->fields).overrideSkyboxManager == 0) {
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
            pOVar6 = (Object *)
                      FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass18_0);
            if (pOVar6 == (Object *)0x0) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            bVar17 = iRam_? != 0;
            pOVar6[1].monitor = (MonitorData *)this_00;
            if (bVar17) {
              uVar18 = (uint)((ulonglong)&pOVar6[1].monitor >> 0xc);
              lVar8 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
              do {
                uVar21 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar19 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar17 = uVar21 == *puVar19;
                if (bVar17) {
                  *puVar19 = uVar21 | 1L << (uVar18 & 0x3f);
                }
                UNLOCK();
              } while (!bVar17);
            }
            pOVar16 = (Object__Class *)
                      TM::TM__(StringLiteral_By_purchasing_a_new_theme__you_a,(MethodInfo *)0x0);
            bVar17 = iRam_? != 0;
            pOVar6[1].klass = pOVar16;
            if (bVar17) {
              uVar18 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
              lVar8 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
              do {
                uVar21 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar19 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar17 = uVar21 == *puVar19;
                if (bVar17) {
                  *puVar19 = uVar21 | 1L << (uVar18 & 0x3f);
                }
                UNLOCK();
              } while (!bVar17);
            }
            pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,pOVar6,
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
            pOVar6 = (Object *)
                      FUN_?(TypeInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0);
            if (pOVar6 == (Object *)0x0) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            bVar17 = iRam_? != 0;
            pOVar6[1].monitor = (MonitorData *)this_00;
            if (bVar17) {
              uVar18 = (uint)((ulonglong)&pOVar6[1].monitor >> 0xc);
              lVar8 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
              do {
                uVar21 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar19 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar17 = uVar21 == *puVar19;
                if (bVar17) {
                  *puVar19 = uVar21 | 1L << (uVar18 & 0x3f);
                }
                UNLOCK();
              } while (!bVar17);
            }
            pOVar16 = (Object__Class *)
                      TM::TM__(StringLiteral_You_will_not_be_able_to_use_skyb,(MethodInfo *)0x0);
            bVar17 = iRam_? != 0;
            pOVar6[1].klass = pOVar16;
            if (bVar17) {
              uVar18 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
              lVar8 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
              do {
                uVar21 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar19 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar17 = uVar21 == *puVar19;
                if (bVar17) {
                  *puVar19 = uVar21 | 1L << (uVar18 & 0x3f);
                }
                UNLOCK();
              } while (!bVar17);
            }
            pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,pOVar6,
                       MethodInfo__ThemePreviewSettingsMenu____c__DisplayClass16_0___DisplaySkyboxWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
          }
UnityEngine_UI_dll_UnityEngine_EventSystems_ExecuteEvents_ExecuteEvents_ExecuteHierarchy:
          pMVar24 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
          ;
          if ((
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            PStack_12._arg1 = (Object *)&UNK_?;
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            PStack_12._arg1 = (Object *)&UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                         );
            LOCK();
            UNLOCK();
            PStack_12._arg1 = (Object *)&UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            if ((pMVar24->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              PStack_12._arg1 = (Object *)&UNK_?;
              FUN_?(pMVar24);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            PStack_12._arg1 = (Object *)&UNK_?;
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          PStack_12._arg1 = (Object *)&UNK_?;
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar22,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar25 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar25 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar8 = (longlong)(pLVar25->fields)._size;
            uVar18 = 0;
            if (0 < lVar8) {
              lVar26 = 0;
              lVar11 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  PStack_12._arg1 = (Object *)&UNK_?;
                  FUN_?();
                }
                pLVar25 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar25 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar25->fields)._size <= uVar18) {
                  PStack_12._arg1 = (Object *)&UNK_?;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pTVar27 = (pLVar25->fields)._items;
                if (pTVar27 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar27->max_length <= uVar18) {
                  PStack_12._arg1 = (Object *)&UNK_?;
                  FUN_?();
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                this_01 = *(Component **)((longlong)pTVar27->vector + lVar11 + -0x20);
                if (this_01 == (Component *)0x0) goto code_?;
                PStack_12._arg1 = (Object *)&UNK_?;
                pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_01,(MethodInfo *)0x0);
                PStack_12._arg1 = (Object *)&UNK_?;
                bVar28 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                         ExecuteEvents_Execute_18
                                   (pGVar22,(BaseEventData *)0x0,this_02,
                                    (pMVar24->field7_0x38).rgctx_data[1].method);
                if (bVar28 != 0) {
                  PStack_12._arg1 = (Object *)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
                uVar18 = uVar18 + 1;
                lVar26 = lVar26 + 1;
                lVar11 = lVar11 + 8;
              } while (lVar26 < lVar8);
            }
            return;
          }
code_?:
          PStack_12._arg1 = (Object *)&UNK_?;
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

