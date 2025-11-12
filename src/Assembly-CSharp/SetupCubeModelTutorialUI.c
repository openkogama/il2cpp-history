
/* Void PushCubeEditCubeTutorialTools(UnityAction) */

void Assembly-CSharp.dll::SetupCubeModelTutorialUI::
     SetupCubeModelTutorialUI_PushCubeEditCubeTutorialTools
               (SetupCubeModelTutorialUI *this,UnityAction *closeAction,MethodInfo *method)

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
                  DesktopCubeModelingControllerCubeTutorial_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingControllerCubeTutorial>_DesktopCubeModelingControllerCubeTutorial_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SetupCubeModelTutorialUI____c___PushCubeEditCubeTutorialTools_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SetupCubeModelTutorialUI____c__DisplayClass4_0___PushCubeEditCubeTutorialTools_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SetupCubeModelTutorialUI____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SetupCubeModelTutorialUI____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__SetupCubeModelTutorialUI____c__DisplayClass4_0);
  if (object_00 != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object_00[1].monitor = (MonitorData *)closeAction;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
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
    original = (this->fields).desktopCubeModelTutorialControllerPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         DesktopCubeModelingControllerCubeTutorial_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingControllerCubeTutorial>_DesktopCubeModelingControllerCubeTutorial_
                        );
    bVar1 = iRam_? != 0;
    object_00[1].klass = pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
    if (object_00[1].klass != (Object__Class *)0x0) {
      DesktopCubeModelingControllerCubeTutorial::
      DesktopCubeModelingControllerCubeTutorial_Initialize
                ((DesktopCubeModelingControllerCubeTutorial *)object_00[1].klass,
                 (this->fields).cubeModelingStateMachine,(this->fields).materialsController,
                 (MethodInfo *)0x0);
      pCVar7 = (this->fields).cubeModelingStateMachine;
      if (pCVar7 != (CubeModelingStateMachine *)0x0) {
        uVar8 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                          (pCVar7,(MethodInfo *)0x0);
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (pCVar7,uVar8,(MethodInfo *)0x0);
        pCVar7 = (this->fields).cubeModelingStateMachine;
        pOVar6 = object_00[1].klass;
        if (((pCVar7 != (CubeModelingStateMachine *)0x0) &&
            (CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                       (pCVar7,(MethodInfo *)0x0), pOVar6 != (Object__Class *)0x0)) &&
           (pCVar7 = (CubeModelingStateMachine *)(pOVar6->_0).generic_class,
           pCVar7 != (CubeModelingStateMachine *)0x0)) {
          uVar8 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                            (pCVar7,(MethodInfo *)0x0);
          TerrainCubeModelingControllerTutorial::TerrainCubeModelingControllerTutorial_SetMaterial
                    ((TerrainCubeModelingControllerTutorial *)pOVar6,uVar8,(MethodInfo *)0x0);
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__SetupCubeModelTutorialUI____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__SetupCubeModelTutorialUI____c);
          }
          this_01 = TypeInfo__SetupCubeModelTutorialUI____c->static_fields->__9__4_0;
          if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__SetupCubeModelTutorialUI____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__SetupCubeModelTutorialUI____c);
            }
            object = TypeInfo__SetupCubeModelTutorialUI____c->static_fields->__9;
            this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                       MethodInfo__SetupCubeModelTutorialUI____c___PushCubeEditCubeTutorialTools_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__SetupCubeModelTutorialUI____c->static_fields->__9__4_0 = this_01;
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)
                              &TypeInfo__SetupCubeModelTutorialUI____c->static_fields->__9__4_0 >>
                             0xc);
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
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar9,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object_00,
                     MethodInfo__SetupCubeModelTutorialUI____c__DisplayClass4_0___PushCubeEditCubeTutorialTools_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          pMVar10 = 
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
            if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar10);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar9,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar3 = (longlong)(pLVar11->fields)._size;
            uVar2 = 0;
            if (0 < lVar3) {
              lVar12 = 0;
              lVar13 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar11->fields)._size <= uVar2) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pTVar15 = (pLVar11->fields)._items;
                if (pTVar15 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar15->max_length <= uVar2) {
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                this_00 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
                if (this_00 == (Component *)0x0) goto code_?;
                pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_00,(MethodInfo *)0x0);
                bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_Execute_18
                                  (pGVar9,(BaseEventData *)0x0,this_02,
                                   (pMVar10->field7_0x38).rgctx_data[1].method);
                if (bVar16 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
                uVar2 = uVar2 + 1;
                lVar12 = lVar12 + 1;
                lVar13 = lVar13 + 8;
              } while (lVar12 < lVar3);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

