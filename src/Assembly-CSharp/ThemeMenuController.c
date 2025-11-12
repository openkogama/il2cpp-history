
/* Void OpenSelection() */

void Assembly-CSharp.dll::ThemeMenuController::ThemeMenuController_OpenSelection
               (ThemeMenuController *this,MethodInfo *method)

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
                  ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeMenuController____c__DisplayClass4_0___OpenSelection_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeMenuController____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemeMenuController____c__DisplayClass4_0);
  original = (this->fields).selectionPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
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
    pOVar1 = object[1].klass;
    if (((pOVar1 != (Object__Class *)0x0) &&
        (pIVar7 = (pOVar1->_0).castClass, pIVar7 != (Il2CppClass *)0x0)) &&
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,0,(MethodInfo *)0x0);
      pIVar7 = (pOVar1->_0).declaringType;
      if ((pIVar7 != (Il2CppClass *)0x0) &&
         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,1,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (pOVar1->_0).generic_class = (Il2CppGenericClass *)this;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(pOVar1->_0).generic_class >> 0xc);
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
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__ThemeMenuController____c__DisplayClass4_0___OpenSelection_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar9 = 
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
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar10->fields)._size <= uVar3) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar14 = (pLVar10->fields)._items;
              if (pTVar14 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar14->max_length <= uVar3) {
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar8,(BaseEventData *)0x0,this_01,
                                 (pMVar9->field7_0x38).rgctx_data[1].method);
              if (bVar15 != 0) {
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
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OpenSettings(Theme) */

void Assembly-CSharp.dll::ThemeMenuController::ThemeMenuController_OpenSettings
               (ThemeMenuController *this,Theme *theme,MethodInfo *method)

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
                  ThemeSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsMenu>_ThemeSettingsMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeMenuController____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ThemeMenuController____c__DisplayClass5_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)theme;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    original = (this->fields).settingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ThemeSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsMenu>_ThemeSettingsMenu_
                       );
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
    if ((ThemeSettingsMenu *)object[1].monitor != (ThemeSettingsMenu *)0x0) {
      ThemeSettingsMenu::ThemeSettingsMenu_Initialize
                ((ThemeSettingsMenu *)object[1].monitor,this,(Theme *)object[1].klass,
                 (MethodInfo *)0x0);
      this_01 = (Object__Class *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)this_01,object,
                 MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__0__,
                 (MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      object[2].klass = this_01;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)(object + 2) >> 0xc);
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
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
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
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar3 = (longlong)(pLVar9->fields)._size;
        uVar2 = 0;
        if (0 < lVar3) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar9->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar2) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_02,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar3);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OpenSettingsForPreview(Theme, ThemeData) */

void Assembly-CSharp.dll::ThemeMenuController::ThemeMenuController_OpenSettingsForPreview
               (ThemeMenuController *this,Theme *theme,ThemeData *entry,MethodInfo *method)

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
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)theme;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
    original = (this->fields).previewSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                       );
    bVar1 = iRam_? != 0;
    object[1].klass = pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    if (object[1].klass != (Object__Class *)0x0) {
      ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_Initialize
                ((ThemePreviewSettingsMenu *)object[1].klass,(Theme *)object[1].monitor,entry,this,
                 (MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
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
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar3 = (longlong)(pLVar9->fields)._size;
        uVar2 = 0;
        if (0 < lVar3) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar9->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar2) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar3);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OpenThemesMenu() */

void Assembly-CSharp.dll::ThemeMenuController::ThemeMenuController_OpenThemesMenu
               (ThemeMenuController *this,MethodInfo *method)

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
                  ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeMenuController____c__DisplayClass3_0___OpenThemesMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeMenuController____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (pTVar1 != (ThemeRepository *)0x0) {
    pTVar2 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
    if (pTVar2 == (ThemeWorldObject *)0x0) {
      pOVar3 = (Object *)FUN_?(TypeInfo__ThemeMenuController____c__DisplayClass3_0);
      original = (this->fields).selectionPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                          );
      if (pOVar3 != (Object *)0x0) {
        pOVar3[1].klass = pOVar4;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        iVar10 = iRam_?;
        pOVar4 = pOVar3[1].klass;
        if (pOVar4 != (Object__Class *)0x0) {
          (pOVar4->_0).generic_class = (Il2CppGenericClass *)this;
          if (iVar10 != 0) {
            uVar5 = (uint)((ulonglong)&(pOVar4->_0).generic_class >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_01,pOVar3,
                     MethodInfo__ThemeMenuController____c__DisplayClass3_0___OpenThemesMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
UnityEngine_UI_dll_UnityEngine_EventSystems_ExecuteEvents_ExecuteEvents_ExecuteHierarchy:
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
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar11,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar6 = (longlong)(pLVar13->fields)._size;
            uVar5 = 0;
            if (0 < lVar6) {
              lVar14 = 0;
              lVar15 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar13->fields)._size <= uVar5) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pTVar17 = (pLVar13->fields)._items;
                if (pTVar17 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar17->max_length <= uVar5) {
                  FUN_?();
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                this_00 = *(Component **)((longlong)pTVar17->vector + lVar15 + -0x20);
                if (this_00 == (Component *)0x0) goto code_?;
                pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_00,(MethodInfo *)0x0);
                bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_Execute_18
                                  (pGVar11,(BaseEventData *)0x0,this_01,
                                   (pMVar12->field7_0x38).rgctx_data[1].method);
                if (bVar18 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
                uVar5 = uVar5 + 1;
                lVar14 = lVar14 + 1;
                lVar15 = lVar15 + 8;
              } while (lVar14 < lVar6);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ThemeRepository);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar1 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
      if (pTVar1 != (ThemeRepository *)0x0) {
        pTVar2 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
        if (pTVar2 == (ThemeWorldObject *)0x0) {
          pOVar4 = (Object__Class *)0x0;
        }
        else {
          pOVar4 = (Object__Class *)(pTVar2->fields)._Visualization_k__BackingField;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        ,pOVar4,0);
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
                        ThemeSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsMenu>_ThemeSettingsMenu_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__0__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ThemeMenuController____c__DisplayClass5_0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar3 = (Object *)FUN_?(TypeInfo__ThemeMenuController____c__DisplayClass5_0);
        if (pOVar3 != (Object *)0x0) {
          bVar9 = iRam_? != 0;
          pOVar3[1].klass = pOVar4;
          if (bVar9) {
            uVar5 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          original_00 = (this->fields).settingsPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_00,
                               ThemeSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemeSettingsMenu>_ThemeSettingsMenu_
                              );
          bVar9 = iRam_? != 0;
          pOVar3[1].monitor = (MonitorData *)pOVar19;
          if (bVar9) {
            uVar5 = (uint)((ulonglong)&pOVar3[1].monitor >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          if ((ThemeSettingsMenu *)pOVar3[1].monitor != (ThemeSettingsMenu *)0x0) {
            ThemeSettingsMenu::ThemeSettingsMenu_Initialize
                      ((ThemeSettingsMenu *)pOVar3[1].monitor,this,(Theme *)pOVar3[1].klass,
                       (MethodInfo *)0x0);
            pOVar4 = (Object__Class *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      ((NavMesh_OnNavMeshPreUpdate *)pOVar4,pOVar3,
                       MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__0__,
                       (MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            pOVar3[2].klass = pOVar4;
            if (bVar9) {
              uVar5 = (uint)((ulonglong)(pOVar3 + 2) >> 0xc);
              lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                LOCK();
                bVar9 = uVar7 == *puVar8;
                if (bVar9) {
                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_01,pOVar3,
                       MethodInfo__ThemeMenuController____c__DisplayClass5_0___OpenSettings_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            goto 
            UnityEngine_UI_dll_UnityEngine_EventSystems_ExecuteEvents_ExecuteEvents_ExecuteHierarchy
            ;
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

