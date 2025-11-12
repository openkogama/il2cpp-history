
/* Void <CreateThemeButtons>b__2() */

void Assembly-CSharp.dll::ThemeSelection+<>c__DisplayClass21_0::
     ThemeSelection_c_DisplayClass21_0__CreateThemeButtons_b__2
               (ThemeSelection_c_DisplayClass21_0 *this,MethodInfo *method)

{
  pTVar1 = (this->fields).b;
  if (pTVar1 != (ThemeSelectionButton *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral____Hover_over_a_theme_to_know_mo);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pTVar2 = (pTVar1->fields).selectionMenu;
    if (pTVar2 != (ThemeSelection *)0x0) {
      ThemeSelection::ThemeSelection_set_ThemeDescription
                (pTVar2,StringLiteral____Hover_over_a_theme_to_know_mo,(MethodInfo *)0x0);
      if ((pTVar1->fields).themeInUse == 0) {
        pGVar3 = (pTVar1->fields).nameLabel;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pRVar4 = (pTVar1->fields).background;
        if (pRVar4 == (RawImage *)0x0) goto code_?;
        (*(pRVar4->klass->vtable).set_color.methodPtr)
                  (pRVar4,&stack0xffffffffffffffe8,(pRVar4->klass->vtable).set_color.method);
      }
      pTVar2 = (this->fields).__4__this;
      if (pTVar2 != (ThemeSelection *)0x0) {
        data = (this->fields).copy;
        this_00 = (pTVar2->fields).themeRepo;
        if (this_00 != (ThemeRepository *)0x0) {
          pTVar5 = ThemeRepository::ThemeRepository_CreateTemporaryThemeVisualization
                              (this_00,(this->fields).identifier,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pTVar6 = (pTVar2->fields).previewTheme;
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
          if (pTVar6 != (Theme *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pTVar6->fields)._._._._.m_CachedPtr != (void *)0x0) {
              pTVar6 = (pTVar2->fields).previewTheme;
              if (pTVar6 == (Theme *)0x0) goto code_?;
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pTVar6,(MethodInfo *)0x0);
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
          bVar7 = iRam_? != 0;
          (pTVar2->fields).previewTheme = pTVar5;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(pTVar2->fields).previewTheme >> 0xc);
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
          menuController = (pTVar2->fields).menuController;
          if (menuController != (ThemeMenuController *)0x0) {
            pTVar5 = (pTVar2->fields).previewTheme;
            if (cRam_? == '\0') {
              FUN_?(&
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            ,pTVar5,data,0);
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
              bVar7 = iRam_? != 0;
              object[1].monitor = (MonitorData *)pTVar5;
              if (bVar7) {
                uVar8 = (uint)((ulonglong)&object[1].monitor >> 0xc);
                lVar12 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                do {
                  uVar9 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar11 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar7 = uVar9 == *puVar11;
                  if (bVar7) {
                    *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              original = (menuController->fields).previewSettingsPrefab;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pOVar13 = (Object__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original,
                                   ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                                  );
              bVar7 = iRam_? != 0;
              object[1].klass = pOVar13;
              if (bVar7) {
                uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
                lVar12 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                do {
                  uVar9 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar11 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar7 = uVar9 == *puVar11;
                  if (bVar7) {
                    *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              if (object[1].klass != (Object__Class *)0x0) {
                ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_Initialize
                          ((ThemePreviewSettingsMenu *)object[1].klass,(Theme *)object[1].monitor,
                           data,menuController,(MethodInfo *)0x0);
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)menuController,(MethodInfo *)0x0);
                this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (this_02,object,
                           MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pMVar14 = 
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
                  if ((pMVar14->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(pMVar14);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_GetEventChain
                          (pGVar3,(IList_1_UnityEngine_Transform_ *)
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields
                                   ->s_InternalTransformList,(MethodInfo *)0x0);
                pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
                  lVar12 = (longlong)(pLVar15->fields)._size;
                  uVar8 = 0;
                  if (0 < lVar12) {
                    lVar16 = 0;
                    lVar17 = 0x20;
                    do {
                      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                               s_InternalTransformList;
                      if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                      if ((uint)(pLVar15->fields)._size <= uVar8) {
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                        pcVar18 = (code *)swi(3);
                        (*pcVar18)();
                        return;
                      }
                      pTVar19 = (pLVar15->fields)._items;
                      if (pTVar19 == (Transform__Array *)0x0) goto code_?;
                      if ((uint)pTVar19->max_length <= uVar8) {
                        FUN_?();
                        pcVar18 = (code *)swi(3);
                        (*pcVar18)();
                        return;
                      }
                      this_01 = *(Component **)((longlong)pTVar19->vector + lVar17 + -0x20);
                      if (this_01 == (Component *)0x0) goto code_?;
                      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject(this_01,(MethodInfo *)0x0);
                      bVar20 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                               ExecuteEvents_Execute_18
                                         (pGVar3,(BaseEventData *)0x0,this_02,
                                          (pMVar14->field7_0x38).rgctx_data[1].method);
                      if (bVar20 != 0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
                        return;
                      }
                      uVar8 = uVar8 + 1;
                      lVar16 = lVar16 + 1;
                      lVar17 = lVar17 + 8;
                    } while (lVar16 < lVar12);
                  }
                  return;
                }
code_?:
                FUN_?();
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
            }
            FUN_?();
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
        }
code_?:
        FUN_?();
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

