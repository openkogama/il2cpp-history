
/* Void CreateBriefing(WinningConditionType) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateBriefing
               (LobbyStateButton *this,WinningConditionType__Enum winCon,MethodInfo *method)

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
                  WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c___CreateBriefing_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass36_0___CreateBriefing_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass36_0);
  if ((this->fields).shouldPop != 0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LobbyStateButton____c);
    }
    this_01 = TypeInfo__LobbyStateButton____c->static_fields->__9__36_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__LobbyStateButton____c);
      }
      object = TypeInfo__LobbyStateButton____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__LobbyStateButton____c___CreateBriefing_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__LobbyStateButton____c->static_fields->__9__36_0 = this_01;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__LobbyStateButton____c->static_fields->__9__36_0 >> 0xc
                       );
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  original = (this->fields).winningConditionBriefingMenu;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar8 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                      );
  if (pOVar1 != (Object *)0x0) {
    bVar7 = iRam_? != 0;
    pOVar1[1].klass = pOVar8;
    if (bVar7) {
      uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,pOVar1,
               MethodInfo__LobbyStateButton____c__DisplayClass36_0___CreateBriefing_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar8 = pOVar1[1].klass;
    if (pOVar8 != (Object__Class *)0x0) {
      p_Var5 = (pOVar8->_1).genericContainerHandle;
      *(WinningConditionType__Enum *)&(pOVar8->_1).cctor_thread = winCon;
      *(undefined1 *)((longlong)&(pOVar8->_1).cctor_thread + 4) = 1;
      if (p_Var5 != (Il2CppMetadataGenericContainerHandle)0x0) {
        p_Var5 = (pOVar8->_1).genericContainerHandle;
        (**(code **)(p_Var5 + 0x18))(*(undefined8 *)(p_Var5 + 0x40),*(undefined8 *)(p_Var5 + 0x28));
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__RectTransform);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__WinningConditionBriefing__OnPlayPressed__);
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
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
        pOVar1 = (pOVar8->_1).unity_user_data;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            (pOVar1,
                             PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_
                            );
        bVar7 = iRam_? != 0;
        *(Object **)&(pOVar8->_1).static_fields_size = pOVar1;
        if (bVar7) {
          uVar3 = (uint)((ulonglong)&(pOVar8->_1).static_fields_size >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        lVar4 = *(longlong *)&(pOVar8->_1).static_fields_size;
        if (lVar4 != 0) {
          pDVar9 = *(Delegate **)(lVar4 + 0x60);
          pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar10,(Object *)pOVar8,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
                     (MethodInfo *)0x0);
          pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
          if (pDVar9 == (Delegate *)0x0) {
            *(undefined8 *)(lVar4 + 0x60) = 0;
          }
          else {
            pDVar11 = (Delegate *)0x0;
            if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
              pDVar11 = pDVar9;
            }
            if (pDVar11 == (Delegate *)0x0) {
              FUN_?(pDVar9);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            *(Delegate **)(lVar4 + 0x60) = pDVar11;
            pDVar11 = (Delegate *)0x0;
            if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
              pDVar11 = pDVar9;
            }
            if (pDVar11 == (Delegate *)0x0) {
              FUN_?(pDVar9);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)(lVar4 + 0x60U >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          pCVar13 = *(Component **)&(pOVar8->_1).static_fields_size;
          if (pCVar13 != (Component *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (pCVar13,(MethodInfo *)0x0);
            bVar7 = iRam_? != 0;
            *(GameObject **)&(pOVar8->_1).element_size = pGVar2;
            if (bVar7) {
              uVar3 = (uint)((ulonglong)&(pOVar8->_1).element_size >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            pGVar2 = *(GameObject **)&(pOVar8->_1).element_size;
            if (pGVar2 != (GameObject *)0x0) {
              this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pOVar8,(MethodInfo *)0x0);
              if (this_00 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_00,parent,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        pOVar1 = *(Object **)&(pOVar8->_1).initializationExceptionGCHandle;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            (pOVar1,
                             PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_
                            );
        bVar7 = iRam_? != 0;
        *(Object **)&(pOVar8->_1).thread_static_fields_offset = pOVar1;
        if (bVar7) {
          uVar3 = (uint)((ulonglong)&(pOVar8->_1).thread_static_fields_offset >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        lVar4 = *(longlong *)&(pOVar8->_1).thread_static_fields_offset;
        if (lVar4 != 0) {
          pDVar9 = *(Delegate **)(lVar4 + 0x40);
          pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar10,(Object *)pOVar8,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
                     (MethodInfo *)0x0);
          pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
          pDVar9 = (Delegate *)0x0;
          if (pDVar11 == (Delegate *)0x0) {
            *(undefined8 *)(lVar4 + 0x40) = 0;
          }
          else {
            pDVar14 = pDVar9;
            if ((Action__Class *)pDVar11->klass == TypeInfo__System__Action) {
              pDVar14 = pDVar11;
            }
            if (pDVar14 == (Delegate *)0x0) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            *(Delegate **)(lVar4 + 0x40) = pDVar14;
            pDVar14 = pDVar9;
            if ((Action__Class *)pDVar11->klass == TypeInfo__System__Action) {
              pDVar14 = pDVar11;
            }
            if (pDVar14 == (Delegate *)0x0) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)(lVar4 + 0x40U >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          pCVar13 = *(Component **)&(pOVar8->_1).thread_static_fields_offset;
          if (pCVar13 != (Component *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (pCVar13,(MethodInfo *)0x0);
            bVar7 = iRam_? != 0;
            *(GameObject **)&(pOVar8->_1).element_size = pGVar2;
            if (bVar7) {
              uVar3 = (uint)((ulonglong)&(pOVar8->_1).element_size >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            pGVar2 = *(GameObject **)&(pOVar8->_1).element_size;
            if ((pGVar2 != (GameObject *)0x0) &&
               (pDVar11 = (Delegate *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
               pDVar11 != (Delegate *)0x0)) {
              if (pDVar11->klass == (Delegate__Class *)TypeInfo__UnityEngine__RectTransform) {
                pDVar9 = pDVar11;
              }
              if (pDVar9 != (Delegate *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          ((Transform *)pDVar9,
                           *(Transform **)&(pOVar8->_1).cctor_finished_or_no_cctor,0,
                           (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                          ((Transform *)pDVar9,(MethodInfo *)0x0);
                return;
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
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void CreateSpawnRoleSelectionMenu() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateSpawnRoleSelectionMenu
               (LobbyStateButton *this,MethodInfo *method)

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
                  SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass35_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass35_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass35_0);
  if ((this->fields).shouldPop != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LobbyStateButton____c);
    }
    in_R8 = TypeInfo__LobbyStateButton____c->static_fields->__9__35_0;
    if (in_R8 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__LobbyStateButton____c);
      }
      object = TypeInfo__LobbyStateButton____c->static_fields->__9;
      in_R8 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)in_R8,(Object *)object,
                 MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__LobbyStateButton____c->static_fields->__9__35_0 = in_R8;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__LobbyStateButton____c->static_fields->__9__35_0 >> 0xc
                       );
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
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)in_R8,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  original = (this->fields).spawnRoleMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  player = (MVPlayer *)
           SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_;
  pOVar7 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (object_00 != (Object *)0x0) {
    bVar6 = iRam_? != 0;
    object_00[1].klass = pOVar7;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      in_R8 = (ExecuteEvents_EventFunction_1_IUIStack_ *)(ulonglong)(uVar2 & 0x3f);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      player = (MVPlayer *)(lVar3 + 0xADDR);
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *(ulonglong *)(lVar3 + 0xADDR);
        if (bVar6) {
          *(ulonglong *)(lVar3 + 0xADDR) = uVar4 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar6);
    }
    pOVar7 = object_00[1].klass;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)in_R8);
    if ((extraout_RAX != 0) && (pOVar7 != (Object__Class *)0x0)) {
      SpawnRoleMenu::SpawnRoleMenu_Initialize
                ((SpawnRoleMenu *)pOVar7,*(MVTeam__Enum *)(extraout_RAX + 0x84),(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object_00,
                 MethodInfo__LobbyStateButton____c__DisplayClass35_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                (pGVar1,(IList_1_UnityEngine_Transform_ *)
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
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar1,(BaseEventData *)0x0,this_01,
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


/* Void CreateTeamMenu() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateTeamMenu
               (LobbyStateButton *this,MethodInfo *method)

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
    FUN_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass34_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass34_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass34_0);
  if ((this->fields).isInAd == 0) {
    if ((this->fields).shouldPop != 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__LobbyStateButton____c);
      }
      this_00 = TypeInfo__LobbyStateButton____c->static_fields->__9__34_0;
      if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__LobbyStateButton____c);
        }
        object = TypeInfo__LobbyStateButton____c->static_fields->__9;
        this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__LobbyStateButton____c->static_fields->__9__34_0 = this_00;
        func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__34_0);
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    original = (this->fields).teamMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    if (object_00 == (Object *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = iRam_? != 0;
    object_00[1].klass = pOVar2;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_01,object_00,
               MethodInfo__LobbyStateButton____c__DisplayClass34_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void DoLockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_DoLockCursor
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar3->fields).currentGameState == 2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__IPlayModeUI);
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
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0 &&
          (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0)
          , pMVar4 != (MVLocalPlayer *)0x0)))) {
        if (0 < (pMVar4->fields)._._ProfileID_k__BackingField) {
          pUVar5 = (pMVar4->fields)._._UserProfileData_k__BackingField;
          if (pUVar5 == (UserProfileData *)0x0) goto code_?;
          if ((pUVar5->fields).IsAdmin != 0) {
            this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&::StringLiteral__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                      (this_02,3,0,-1,::StringLiteral__,(MethodInfo *)0x0);
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__FirstTimePressPlayController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
          FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                    ((MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          bVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
                             ((MethodInfo *)0x0);
          if (bVar6 == 0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__ILockCursorManager);
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
            if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0)
            {
              return;
            }
            pMVar7 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                                ((MethodInfo *)0x0);
            if ((pMVar7 == (MVGameControllerDesktop *)0x0) ||
               (pIVar8 = (IPlayModeUI *)(pMVar7->fields).lockCursorManager,
               pIVar8 == (IPlayModeUI *)0x0)) goto code_?;
            uVar9 = 1;
            pIVar10 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
            pIVar11 = (Il2CppClass *)TypeInfo__ILockCursorManager;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
            if (pIVar8 == (IPlayModeUI *)0x0) goto code_?;
            uVar9 = 8;
            pIVar10 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
            pIVar11 = (Il2CppClass *)TypeInfo__IPlayModeUI;
          }
code_?:
          uVar12 = 0;
          pIVar13 = pIVar8->klass;
          uVar14._0_1_ = (pIVar13->_1).rank;
          uVar14._1_1_ = (pIVar13->_1).minimumAlignment;
          pIVar15 = pIVar10;
          if (uVar14 != 0) {
            pIVar15 = pIVar13->interfaceOffsets;
            do {
              if (pIVar15[uVar12].interfaceType == pIVar11) {
                pVVar16 = &(pIVar13->vtable).ShowEUseIcon +
                          (int)(pIVar15[uVar12].offset + (uint)uVar9);
                goto code_?;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar14);
          }
          pVVar16 = (VirtualInvokeData *)FUN_?(pIVar8,pIVar11,uVar9,pIVar15);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar16->methodPtr)(pIVar8,pIVar10,pVVar16->method,pVVar16->methodPtr);
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar8 != (IPlayModeUI *)0x0) {
          FUN_?(8,TypeInfo__IPlayModeUI,pIVar8,0);
          pSVar17 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((pSVar17 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar18 = (pSVar17->fields).SpawnRoleModeTypeWrapper,
             pSVar18 != (SpawnRoleModeTypeWrapper *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar19 = (pSVar18->fields).spawnRoleType;
            if ((pSVar19 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
               (pSVar20 = (pSVar19->fields).subscribableVariable,
               pSVar20 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
              if (((pSVar20->fields)._.value & 4) != 0) {
                pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if ((pGVar21 == (GameEventManager *)0x0) ||
                   (pGVar22 = (pGVar21->fields).AvatarCommandsPlayMode,
                   pGVar22 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
                goto code_?;
                if ((pGVar22->fields).OnEnterPlaymode != (Action *)0x0) {
                  pAVar23 = (pGVar22->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pAVar23->fields)._._.invoke_impl)
                            ((pAVar23->fields)._._.method_code,(pAVar23->fields)._._.method);
                  return;
                }
              }
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar24 = (code *)swi(3);
      (*pcVar24)();
      return;
    }
    this_00 = (this->fields).lobbyStateButton;
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ILockCursorManager);
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
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        return;
      }
      pMVar7 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar7 != (MVGameControllerDesktop *)0x0) &&
         (pIVar8 = (IPlayModeUI *)(pMVar7->fields).lockCursorManager,
         pIVar8 != (IPlayModeUI *)0x0)) {
        uVar9 = 2;
        pIVar10 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
        pIVar11 = (Il2CppClass *)TypeInfo__ILockCursorManager;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void LockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_LockCursor
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
     (pIVar2 = (pMVar1->fields).lockCursorManager, pIVar2 == (ILockCursorManager *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
  uVar5 = 0;
  pIVar6 = pIVar2->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    pIVar4 = pIVar6->interfaceOffsets;
    do {
      if (pIVar4[uVar5].interfaceType == (Il2CppClass *)TypeInfo__ILockCursorManager) {
        pVVar8 = &(pIVar6->vtable).get_CursorLock + (pIVar4[uVar5].offset + 2);
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  pVVar8 = (VirtualInvokeData *)FUN_?(pIVar2,TypeInfo__ILockCursorManager,2,pIVar4);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar8->methodPtr)(pIVar2,1,pVVar8->method,pVVar8->methodPtr);
  return;
}


/* Void OnCountDownEnd() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnCountDownEnd
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lobbyStateButton;
  if (this_00 != (Button *)0x0) {
    if ((this_00->fields)._.m_Interactable != 0) {
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        ((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0)) &&
       (this_01 = (MVWorldObjectClientManager *)
                  (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
       this_01 != (MVWorldObjectClientManager *)0x0)) {
      pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0;
      pLVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                          (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
      if (pLVar4 != (List_1_MVWorldObjectClient_ *)0x0) {
        iVar5 = (pLVar4->fields)._size;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (pMVar6 = (pMVar2->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar7 = (pMVar6->fields).teams;
          if (pDVar7 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
            if (1 < (pDVar7->fields)._count - (pDVar7->fields)._freeCount) {
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
                              TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__LobbyStateButton____c__DisplayClass34_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass34_0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__LobbyStateButton____c);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar8 = (Object *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass34_0);
              if ((this->fields).isInAd == 0) {
                if ((this->fields).shouldPop != 0) {
                  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__LobbyStateButton____c);
                  }
                  pEVar3 = TypeInfo__LobbyStateButton____c->static_fields->__9__34_0;
                  if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                    if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__LobbyStateButton____c);
                    }
                    pLVar10 = TypeInfo__LobbyStateButton____c->static_fields->__9;
                    pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                               (Object *)pLVar10,
                               MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    TypeInfo__LobbyStateButton____c->static_fields->__9__34_0 = pEVar3;
                    func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__34_0);
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar9,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                }
                original = (this->fields).teamMenuPrefab;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pOVar11 = (Object__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)original,
                                     TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_
                                    );
                if (pOVar8 == (Object *)0x0) {
                  FUN_?();
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                bVar13 = iRam_? != 0;
                pOVar8[1].klass = pOVar11;
                if (bVar13) {
                  uVar14 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
                  puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar16 = *puVar15;
                    LOCK();
                    uVar17 = *puVar15;
                    if (uVar16 == uVar17) {
                      *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar16 != uVar17);
                }
                pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                pEVar18 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (pEVar18,pOVar8,
                           MethodInfo__LobbyStateButton____c__DisplayClass34_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar9,(BaseEventData *)0x0,pEVar18,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
              }
              return;
            }
            if (iVar5 < 1) {
              LobbyStateButton_StartPlaying(this,(MethodInfo *)0x0);
              return;
            }
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
                            SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__LobbyStateButton____c__DisplayClass35_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass35_0);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__LobbyStateButton____c);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar8 = (Object *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass35_0);
            if ((this->fields).shouldPop != 0) {
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__LobbyStateButton____c);
              }
              pEVar3 = TypeInfo__LobbyStateButton____c->static_fields->__9__35_0;
              if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__LobbyStateButton____c);
                }
                pLVar10 = TypeInfo__LobbyStateButton____c->static_fields->__9;
                pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,(Object *)pLVar10,
                           MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__LobbyStateButton____c->static_fields->__9__35_0 = pEVar3;
                if (iRam_? != 0) {
                  uVar14 = (uint)((ulonglong)
                                  &TypeInfo__LobbyStateButton____c->static_fields->__9__35_0 >> 0xc)
                  ;
                  lVar19 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar17 = *(ulonglong *)(lVar19 + 0xADDR);
                    puVar15 = (ulonglong *)(lVar19 + 0xADDR);
                    LOCK();
                    bVar13 = uVar17 == *puVar15;
                    if (bVar13) {
                      *puVar15 = uVar17 | 1L << (uVar14 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar9,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
            }
            original_00 = (this->fields).spawnRoleMenuPrefab;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            player = (MVPlayer *)
                     SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
            ;
            pOVar11 = (Object__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original_00,
                                 SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                                );
            if (pOVar8 != (Object *)0x0) {
              bVar13 = iRam_? != 0;
              pOVar8[1].klass = pOVar11;
              if (bVar13) {
                uVar14 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
                pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)(ulonglong)(uVar14 & 0x3f);
                lVar19 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
                player = (MVPlayer *)(lVar19 + 0xADDR);
                do {
                  uVar17 = *(ulonglong *)(lVar19 + 0xADDR);
                  LOCK();
                  bVar13 = uVar17 == *(ulonglong *)(lVar19 + 0xADDR);
                  if (bVar13) {
                    *(ulonglong *)(lVar19 + 0xADDR) = uVar17 | 1L << (longlong)pEVar3;
                  }
                  UNLOCK();
                } while (!bVar13);
              }
              pOVar11 = pOVar8[1].klass;
              MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)pEVar3);
              if ((extraout_RAX != 0) && (pOVar11 != (Object__Class *)0x0)) {
                SpawnRoleMenu::SpawnRoleMenu_Initialize
                          ((SpawnRoleMenu *)pOVar11,*(MVTeam__Enum *)(extraout_RAX + 0x84),
                           (MethodInfo *)0x0);
                pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                pEVar18 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (pEVar18,pOVar8,
                           MethodInfo__LobbyStateButton____c__DisplayClass35_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pMVar20 = 
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
                  if ((pMVar20->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(pMVar20);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_GetEventChain
                          (pGVar9,(IList_1_UnityEngine_Transform_ *)
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields
                                   ->s_InternalTransformList,(MethodInfo *)0x0);
                pLVar21 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                          s_InternalTransformList;
                if (pLVar21 != (List_1_UnityEngine_Transform_ *)0x0) {
                  lVar19 = (longlong)(pLVar21->fields)._size;
                  uVar14 = 0;
                  if (0 < lVar19) {
                    lVar22 = 0;
                    lVar23 = 0x20;
                    do {
                      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      pLVar21 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                                s_InternalTransformList;
                      if (pLVar21 == (List_1_UnityEngine_Transform_ *)0x0)
                      goto code_?;
                      if ((uint)(pLVar21->fields)._size <= uVar14) {
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      pTVar24 = (pLVar21->fields)._items;
                      if (pTVar24 == (Transform__Array *)0x0) goto code_?;
                      if ((uint)pTVar24->max_length <= uVar14) {
                        FUN_?();
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      this_02 = *(Component **)((longlong)pTVar24->vector + lVar23 + -0x20);
                      if (this_02 == (Component *)0x0) goto code_?;
                      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject(this_02,(MethodInfo *)0x0);
                      bVar25 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                               ExecuteEvents_Execute_18
                                         (pGVar9,(BaseEventData *)0x0,pEVar18,
                                          (pMVar20->field7_0x38).rgctx_data[1].method);
                      if (bVar25 != 0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_02,(MethodInfo *)0x0);
                        return;
                      }
                      uVar14 = uVar14 + 1;
                      lVar22 = lVar22 + 1;
                      lVar23 = lVar23 + 8;
                    } while (lVar22 < lVar19);
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
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnEnable
               (LobbyStateButton *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyStateButton;
  if (this_00 == (Button *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar2 = FUN_?(&(this_00->fields)._.m_Interactable);
  if (cVar2 == '\0') {
    return;
  }
  if ((this_00->fields)._.m_Interactable == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                       ((MethodInfo *)0x0);
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
    if (pEVar3 != (EventSystem *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pEVar3->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
        if (pEVar3 != (EventSystem *)0x0) {
          pGVar4 = (pEVar3->fields).m_CurrentSelected;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
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
          if (pGVar5 != (GameObject *)0x0 || pGVar4 != (GameObject *)0x0) {
            if (pGVar5 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pGVar4 == (GameObject *)0x0) goto DAT_?;
              bVar6 = (pGVar4->fields)._.m_CachedPtr == (void *)0x0;
            }
            else if (pGVar4 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar6 = (pGVar5->fields)._.m_CachedPtr == (void *)0x0;
            }
            else {
              bVar6 = pGVar4 == pGVar5;
            }
            if (!bVar6) goto code_?;
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
            FUN_?();
          }
          pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                   EventSystem_get_current((MethodInfo *)0x0);
          if (pEVar3 != (EventSystem *)0x0) {
            UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_SetSelectedGameObject_1(pEVar3,(GameObject *)0x0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
code_?:
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
            ((Selectable *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerDown
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData == (PointerEventData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((eventData->fields)._button_k__BackingField != 0) || ((this->fields).isMoveOverButton == 0))
  {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton__OnShowAdFinishedEnterPlaymode_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton__OnShowAdFinishedSpawnRolesPresent_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (LobbyStateButton *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass23_0);
  if (object == (LobbyStateButton *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (object->fields)._._._._.m_CachedPtr = this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&object->fields >> 0xc);
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
  bVar7 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                     ((WinningConditionType__Enum *)
                      ((longlong)&(object->fields)._.m_CancellationTokenSource + 4),
                      (MethodInfo *)0x0);
  bVar2 = cRam_? == '\0';
  *(bool *)&(object->fields)._.m_CancellationTokenSource = bVar7;
  if (bVar2) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 == (MVGameControllerBase *)0x0) ||
       (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
      ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0)) ||
     ((this_00 = (MVWorldObjectClientManager *)
                 (((pMVar9->fields).worldNetwork)->fields)._.worldObjectClientManager,
      this_00 == (MVWorldObjectClientManager *)0x0 ||
      (pLVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
      pLVar10 == (List_1_MVWorldObjectClient_ *)0x0)))) goto code_?;
  iVar11 = (pLVar10->fields)._size;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar8 == (MVGameControllerBase *)0x0) ||
      (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
     ((pMVar12 = (pMVar9->fields).playerContainer, pMVar12 == (MVPlayerContainer *)0x0 ||
      (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
      pMVar13 == (MVLocalPlayer *)0x0)))) goto code_?;
  if (0 < (pMVar13->fields)._._ProfileID_k__BackingField) {
    pUVar14 = (pMVar13->fields)._._UserProfileData_k__BackingField;
    if (pUVar14 == (UserProfileData *)0x0) goto code_?;
    if ((pUVar14->fields).IsAdmin != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar8 == (MVGameControllerBase *)0x0) ||
           (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
          (pMVar12 = (pMVar9->fields).playerContainer, pMVar12 == (MVPlayerContainer *)0x0)) ||
         (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
         pMVar13 == (MVLocalPlayer *)0x0)) goto code_?;
      if ((pMVar13->fields)._.playerState == 3) {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                  (this_02,3,0,-1,::StringLiteral__,(MethodInfo *)0x0);
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar8 == (MVGameControllerBase *)0x0) ||
      (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
     (pMVar15 = (pMVar9->fields).teamManager, pMVar15 == (MVTeamManager *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar16 = (pMVar15->fields).teams;
  if (pDVar16 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
  goto code_?;
  if ((pDVar16->fields)._count - (pDVar16->fields)._freeCount < 2) {
    if (*(char *)&(object->fields)._.m_CancellationTokenSource == '\0') {
      pUVar17 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      object = this;
      method_1 = 
      MethodInfo__LobbyStateButton__OnShowAdFinishedSpawnRolesPresent_Assets__Scripts__AdIntegration__InterstitialAdResult_
      ;
      if (iVar11 < 1) {
        method_1 = 
        MethodInfo__LobbyStateButton__OnShowAdFinishedEnterPlaymode_Assets__Scripts__AdIntegration__InterstitialAdResult_
        ;
      }
    }
    else {
      pUVar17 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      method_1 = 
      MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
      ;
    }
  }
  else {
    pUVar17 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
    method_1 = 
    MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
    ;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor(pUVar17,(Object *)object,method_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass24_0___PressPlayWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?();
  if (object_00 == (Object *)0x0) goto code_?;
  object_00[1].klass = (Object__Class *)this;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
    lVar18 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar18 + 0xADDR);
      puVar4 = (ulonglong *)(lVar18 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar11 = iRam_?;
  object_00[1].monitor = (MonitorData *)pUVar17;
  if (iVar11 != 0) {
    uVar3 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
    lVar18 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar18 + 0xADDR);
      puVar4 = (ulonglong *)(lVar18 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar7 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
  if (bVar7 == 0) {
code_?:
    (this->fields).isInAd = 0;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) goto code_?;
    this_01 = (this->fields).embeddedPlayerConfig;
    if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar19 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        ((EmbeddedSiteConfigData *)&stack0xffffffffffffffe0,this_01,
                         (MethodInfo *)0x0);
    uVar20 = pEVar19->showPlayButtonAd;
    (this->fields).isInAd = uVar20 != '\0';
    if (uVar20 != '\0') {
      pIVar21 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      pUVar17 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar17,object_00,
                 MethodInfo__LobbyStateButton____c__DisplayClass24_0___PressPlayWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar21 != (IAdManager *)0x0) {
        FUN_?();
        return;
      }
      goto code_?;
    }
  }
  pMVar22 = object_00[1].monitor;
  if (pMVar22 != (MonitorData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pMVar22 + 0x18))(*(undefined8 *)(pMVar22 + 0x40),3,*(undefined8 *)(pMVar22 + 0x28))
    ;
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerEnter
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMoveOverButton = 1;
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerExit
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMoveOverButton = 0;
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPressPlay
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton__OnShowAdFinishedEnterPlaymode_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton__OnShowAdFinishedSpawnRolesPresent_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (LobbyStateButton *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass23_0);
  if (object == (LobbyStateButton *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (object->fields)._._._._.m_CachedPtr = this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&object->fields >> 0xc);
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
  bVar7 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                     ((WinningConditionType__Enum *)
                      ((longlong)&(object->fields)._.m_CancellationTokenSource + 4),
                      (MethodInfo *)0x0);
  bVar2 = cRam_? == '\0';
  *(bool *)&(object->fields)._.m_CancellationTokenSource = bVar7;
  if (bVar2) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 == (MVGameControllerBase *)0x0) ||
       (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
      ((pMVar9->fields).worldNetwork == (WorldNetwork *)0x0)) ||
     ((this_00 = (MVWorldObjectClientManager *)
                 (((pMVar9->fields).worldNetwork)->fields)._.worldObjectClientManager,
      this_00 == (MVWorldObjectClientManager *)0x0 ||
      (pLVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
      pLVar10 == (List_1_MVWorldObjectClient_ *)0x0)))) goto code_?;
  iVar11 = (pLVar10->fields)._size;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar8 == (MVGameControllerBase *)0x0) ||
      (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
     ((pMVar12 = (pMVar9->fields).playerContainer, pMVar12 == (MVPlayerContainer *)0x0 ||
      (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
      pMVar13 == (MVLocalPlayer *)0x0)))) goto code_?;
  if (0 < (pMVar13->fields)._._ProfileID_k__BackingField) {
    pUVar14 = (pMVar13->fields)._._UserProfileData_k__BackingField;
    if (pUVar14 == (UserProfileData *)0x0) goto code_?;
    if ((pUVar14->fields).IsAdmin != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar8 == (MVGameControllerBase *)0x0) ||
           (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
          (pMVar12 = (pMVar9->fields).playerContainer, pMVar12 == (MVPlayerContainer *)0x0)) ||
         (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
         pMVar13 == (MVLocalPlayer *)0x0)) goto code_?;
      if ((pMVar13->fields)._.playerState == 3) {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                  (this_02,3,0,-1,::StringLiteral__,(MethodInfo *)0x0);
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar8 == (MVGameControllerBase *)0x0) ||
      (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
     (pMVar15 = (pMVar9->fields).teamManager, pMVar15 == (MVTeamManager *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar16 = (pMVar15->fields).teams;
  if (pDVar16 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
  goto code_?;
  if ((pDVar16->fields)._count - (pDVar16->fields)._freeCount < 2) {
    if (*(char *)&(object->fields)._.m_CancellationTokenSource == '\0') {
      pUVar17 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      object = this;
      method_1 = 
      MethodInfo__LobbyStateButton__OnShowAdFinishedSpawnRolesPresent_Assets__Scripts__AdIntegration__InterstitialAdResult_
      ;
      if (iVar11 < 1) {
        method_1 = 
        MethodInfo__LobbyStateButton__OnShowAdFinishedEnterPlaymode_Assets__Scripts__AdIntegration__InterstitialAdResult_
        ;
      }
    }
    else {
      pUVar17 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      method_1 = 
      MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
      ;
    }
  }
  else {
    pUVar17 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
    method_1 = 
    MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
    ;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor(pUVar17,(Object *)object,method_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass24_0___PressPlayWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?();
  if (object_00 == (Object *)0x0) goto code_?;
  object_00[1].klass = (Object__Class *)this;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
    lVar18 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar18 + 0xADDR);
      puVar4 = (ulonglong *)(lVar18 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar11 = iRam_?;
  object_00[1].monitor = (MonitorData *)pUVar17;
  if (iVar11 != 0) {
    uVar3 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
    lVar18 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar18 + 0xADDR);
      puVar4 = (ulonglong *)(lVar18 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar7 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
  if (bVar7 == 0) {
code_?:
    (this->fields).isInAd = 0;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) goto code_?;
    this_01 = (this->fields).embeddedPlayerConfig;
    if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar19 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        ((EmbeddedSiteConfigData *)&stack0xffffffffffffffe0,this_01,
                         (MethodInfo *)0x0);
    uVar20 = pEVar19->showPlayButtonAd;
    (this->fields).isInAd = uVar20 != '\0';
    if (uVar20 != '\0') {
      pIVar21 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      pUVar17 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar17,object_00,
                 MethodInfo__LobbyStateButton____c__DisplayClass24_0___PressPlayWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar21 != (IAdManager *)0x0) {
        FUN_?();
        return;
      }
      goto code_?;
    }
  }
  pMVar22 = object_00[1].monitor;
  if (pMVar22 != (MonitorData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pMVar22 + 0x18))(*(undefined8 *)(pMVar22 + 0x40),3,*(undefined8 *)(pMVar22 + 0x28))
    ;
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnShowAdFinishedEnterPlaymode(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnShowAdFinishedEnterPlaymode
               (LobbyStateButton *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar3->fields).currentGameState == 2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__IPlayModeUI);
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
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0 &&
          (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0)
          , pMVar4 != (MVLocalPlayer *)0x0)))) {
        if (0 < (pMVar4->fields)._._ProfileID_k__BackingField) {
          pUVar5 = (pMVar4->fields)._._UserProfileData_k__BackingField;
          if (pUVar5 == (UserProfileData *)0x0) goto code_?;
          if ((pUVar5->fields).IsAdmin != 0) {
            this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&::StringLiteral__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                      (this_02,3,0,-1,::StringLiteral__,(MethodInfo *)0x0);
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__FirstTimePressPlayController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
          FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                    ((MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          bVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
                             ((MethodInfo *)0x0);
          if (bVar6 == 0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__ILockCursorManager);
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
            if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0)
            {
              return;
            }
            pMVar7 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                                ((MethodInfo *)0x0);
            if ((pMVar7 == (MVGameControllerDesktop *)0x0) ||
               (pIVar8 = (IPlayModeUI *)(pMVar7->fields).lockCursorManager,
               pIVar8 == (IPlayModeUI *)0x0)) goto code_?;
            uVar9 = 1;
            pIVar10 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
            pIVar11 = (Il2CppClass *)TypeInfo__ILockCursorManager;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
            if (pIVar8 == (IPlayModeUI *)0x0) goto code_?;
            uVar9 = 8;
            pIVar10 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
            pIVar11 = (Il2CppClass *)TypeInfo__IPlayModeUI;
          }
code_?:
          uVar12 = 0;
          pIVar13 = pIVar8->klass;
          uVar14._0_1_ = (pIVar13->_1).rank;
          uVar14._1_1_ = (pIVar13->_1).minimumAlignment;
          pIVar15 = pIVar10;
          if (uVar14 != 0) {
            pIVar15 = pIVar13->interfaceOffsets;
            do {
              if (pIVar15[uVar12].interfaceType == pIVar11) {
                pVVar16 = &(pIVar13->vtable).ShowEUseIcon +
                          (int)(pIVar15[uVar12].offset + (uint)uVar9);
                goto code_?;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar14);
          }
          pVVar16 = (VirtualInvokeData *)FUN_?(pIVar8,pIVar11,uVar9,pIVar15);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar16->methodPtr)(pIVar8,pIVar10,pVVar16->method,pVVar16->methodPtr);
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar8 != (IPlayModeUI *)0x0) {
          FUN_?(8,TypeInfo__IPlayModeUI,pIVar8,0);
          pSVar17 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((pSVar17 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar18 = (pSVar17->fields).SpawnRoleModeTypeWrapper,
             pSVar18 != (SpawnRoleModeTypeWrapper *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar19 = (pSVar18->fields).spawnRoleType;
            if ((pSVar19 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
               (pSVar20 = (pSVar19->fields).subscribableVariable,
               pSVar20 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
              if (((pSVar20->fields)._.value & 4) != 0) {
                pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if ((pGVar21 == (GameEventManager *)0x0) ||
                   (pGVar22 = (pGVar21->fields).AvatarCommandsPlayMode,
                   pGVar22 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
                goto code_?;
                if ((pGVar22->fields).OnEnterPlaymode != (Action *)0x0) {
                  pAVar23 = (pGVar22->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pAVar23->fields)._._.invoke_impl)
                            ((pAVar23->fields)._._.method_code,(pAVar23->fields)._._.method);
                  return;
                }
              }
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar24 = (code *)swi(3);
      (*pcVar24)();
      return;
    }
    this_00 = (this->fields).lobbyStateButton;
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ILockCursorManager);
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
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        return;
      }
      pMVar7 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar7 != (MVGameControllerDesktop *)0x0) &&
         (pIVar8 = (IPlayModeUI *)(pMVar7->fields).lockCursorManager,
         pIVar8 != (IPlayModeUI *)0x0)) {
        uVar9 = 2;
        pIVar10 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
        pIVar11 = (Il2CppClass *)TypeInfo__ILockCursorManager;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnShowAdFinishedSpawnRolesPresent(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnShowAdFinishedSpawnRolesPresent
               (LobbyStateButton *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,CONCAT44(in_register_00000014,result));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar3->fields).currentGameState != 2) {
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
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__LobbyStateButton____c__DisplayClass35_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass35_0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__LobbyStateButton____c);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      object_00 = (Object *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass35_0);
      if ((this->fields).shouldPop != 0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__LobbyStateButton____c);
        }
        method = (MethodInfo *)TypeInfo__LobbyStateButton____c->static_fields->__9__35_0;
        if ((ExecuteEvents_EventFunction_1_IUIStack_ *)method ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__LobbyStateButton____c);
          }
          object = TypeInfo__LobbyStateButton____c->static_fields->__9;
          method = (MethodInfo *)
                   FUN_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)method,(Object *)object,
                     MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__LobbyStateButton____c->static_fields->__9__35_0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)method;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&TypeInfo__LobbyStateButton____c->static_fields->__9__35_0 >>
                           0xc);
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
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)method,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      original = (this->fields).spawnRoleMenuPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      player = (MVPlayer *)
               SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
      ;
      pOVar10 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                          );
      if (object_00 != (Object *)0x0) {
        bVar9 = iRam_? != 0;
        object_00[1].klass = pOVar10;
        if (bVar9) {
          uVar5 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          method = (MethodInfo *)(ulonglong)(uVar5 & 0x3f);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          player = (MVPlayer *)(lVar6 + 0xADDR);
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *(ulonglong *)(lVar6 + 0xADDR);
            if (bVar9) {
              *(ulonglong *)(lVar6 + 0xADDR) = uVar7 | 1L << (longlong)method;
            }
            UNLOCK();
          } while (!bVar9);
        }
        pOVar10 = object_00[1].klass;
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method);
        if ((extraout_RAX != 0) && (pOVar10 != (Object__Class *)0x0)) {
          SpawnRoleMenu::SpawnRoleMenu_Initialize
                    ((SpawnRoleMenu *)pOVar10,*(MVTeam__Enum *)(extraout_RAX + 0x84),
                     (MethodInfo *)0x0);
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object_00,
                     MethodInfo__LobbyStateButton____c__DisplayClass35_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                    (pGVar4,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar6 = (longlong)(pLVar12->fields)._size;
            uVar5 = 0;
            if (0 < lVar6) {
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
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_01,(MethodInfo *)0x0);
                bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                         ExecuteEvents_Execute_18
                                   (pGVar4,(BaseEventData *)0x0,this_02,
                                    (pMVar11->field7_0x38).rgctx_data[1].method);
                if (bVar17 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
                uVar5 = uVar5 + 1;
                lVar13 = lVar13 + 1;
                lVar14 = lVar14 + 8;
              } while (lVar13 < lVar6);
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
    this_00 = (this->fields).lobbyStateButton;
    if (this_00 != (Button *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&
                      bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      cVar18 = FUN_?(&(this_00->fields)._.m_Interactable);
      if (cVar18 == '\0') {
        return;
      }
      if ((this_00->fields)._.m_Interactable == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                  EventSystem_get_current((MethodInfo *)0x0);
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
        if (pEVar19 != (EventSystem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pEVar19->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
              FUN_?();
            }
            pEVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                      EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar19 != (EventSystem *)0x0) {
              pGVar4 = (pEVar19->fields).m_CurrentSelected;
              pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0);
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
              if (pGVar20 != (GameObject *)0x0 || pGVar4 != (GameObject *)0x0) {
                if (pGVar20 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pGVar4 == (GameObject *)0x0) goto DAT_?;
                  bVar9 = (pGVar4->fields)._.m_CachedPtr == (void *)0x0;
                }
                else if (pGVar4 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar9 = (pGVar20->fields)._.m_CachedPtr == (void *)0x0;
                }
                else {
                  bVar9 = pGVar4 == pGVar20;
                }
                if (!bVar9) goto code_?;
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
                FUN_?();
              }
              pEVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                        EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar19 != (EventSystem *)0x0) {
                UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                EventSystem_SetSelectedGameObject_1(pEVar19,(GameObject *)0x0,(MethodInfo *)0x0);
                goto code_?;
              }
            }
DAT_?:
            FUN_?();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
        }
      }
code_?:
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                ((Selectable *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void PopThenLockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_PopThenLockCursor
               (LobbyStateButton *this,MethodInfo *method)

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
                  MethodInfo__LobbyStateButton____c___PopThenLockCursor_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LobbyStateButton____c);
  }
  this_02 = TypeInfo__LobbyStateButton____c->static_fields->__9__27_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LobbyStateButton____c);
    }
    object = TypeInfo__LobbyStateButton____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__LobbyStateButton____c___PopThenLockCursor_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyStateButton____c->static_fields->__9__27_0 = this_02;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__LobbyStateButton____c->static_fields->__9__27_0 >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 != (MVGameControllerBase *)0x0) &&
      (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
     (pMVar7 = (pMVar6->fields)._NetworkGameStateListener_k__BackingField,
     pMVar7 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar7->fields).currentGameState == 2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__IPlayModeUI);
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
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar5 != (MVGameControllerBase *)0x0) &&
          (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
         ((this_01 = (pMVar6->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0 &&
          (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0)
          , pMVar8 != (MVLocalPlayer *)0x0)))) {
        if (0 < (pMVar8->fields)._._ProfileID_k__BackingField) {
          pUVar9 = (pMVar8->fields)._._UserProfileData_k__BackingField;
          if (pUVar9 == (UserProfileData *)0x0) goto code_?;
          if ((pUVar9->fields).IsAdmin != 0) {
            this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&::StringLiteral__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                      (this_03,3,0,-1,::StringLiteral__,(MethodInfo *)0x0);
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__FirstTimePressPlayController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
          FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                    ((MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          bVar10 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
                             ((MethodInfo *)0x0);
          if (bVar10 == 0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__ILockCursorManager);
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
            if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0)
            {
              return;
            }
            pMVar11 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                                ((MethodInfo *)0x0);
            if ((pMVar11 == (MVGameControllerDesktop *)0x0) ||
               (pIVar12 = (IPlayModeUI *)(pMVar11->fields).lockCursorManager,
               pIVar12 == (IPlayModeUI *)0x0)) goto code_?;
            uVar13 = 1;
            pIVar14 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
            pIVar15 = (Il2CppClass *)TypeInfo__ILockCursorManager;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pIVar12 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
            if (pIVar12 == (IPlayModeUI *)0x0) goto code_?;
            uVar13 = 8;
            pIVar14 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
            pIVar15 = (Il2CppClass *)TypeInfo__IPlayModeUI;
          }
code_?:
          uVar16 = 0;
          pIVar17 = pIVar12->klass;
          uVar18._0_1_ = (pIVar17->_1).rank;
          uVar18._1_1_ = (pIVar17->_1).minimumAlignment;
          pIVar19 = pIVar14;
          if (uVar18 != 0) {
            pIVar19 = pIVar17->interfaceOffsets;
            do {
              if (pIVar19[uVar16].interfaceType == pIVar15) {
                pVVar20 = &(pIVar17->vtable).ShowEUseIcon +
                          (int)(pIVar19[uVar16].offset + (uint)uVar13);
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar18);
          }
          pVVar20 = (VirtualInvokeData *)FUN_?(pIVar12,pIVar15,uVar13,pIVar19,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar20->methodPtr)(pIVar12,pIVar14,pVVar20->method,pVVar20->methodPtr);
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar12 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar12 != (IPlayModeUI *)0x0) {
          FUN_?(8,TypeInfo__IPlayModeUI,pIVar12,0);
          pSVar21 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((pSVar21 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar22 = (pSVar21->fields).SpawnRoleModeTypeWrapper,
             pSVar22 != (SpawnRoleModeTypeWrapper *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar23 = (pSVar22->fields).spawnRoleType;
            if ((pSVar23 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
               (pSVar24 = (pSVar23->fields).subscribableVariable,
               pSVar24 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
              if (((pSVar24->fields)._.value & 4) != 0) {
                pGVar25 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if ((pGVar25 == (GameEventManager *)0x0) ||
                   (pGVar26 = (pGVar25->fields).AvatarCommandsPlayMode,
                   pGVar26 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
                goto code_?;
                if ((pGVar26->fields).OnEnterPlaymode != (Action *)0x0) {
                  pAVar27 = (pGVar26->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pAVar27->fields)._._.invoke_impl)
                            ((pAVar27->fields)._._.method_code,(pAVar27->fields)._._.method);
                  return;
                }
              }
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
    this_00 = (this->fields).lobbyStateButton;
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ILockCursorManager);
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
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        return;
      }
      pMVar11 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar11 != (MVGameControllerDesktop *)0x0) &&
         (pIVar12 = (IPlayModeUI *)(pMVar11->fields).lockCursorManager,
         pIVar12 != (IPlayModeUI *)0x0)) {
        uVar13 = 2;
        pIVar14 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
        pIVar15 = (Il2CppClass *)TypeInfo__ILockCursorManager;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void PressPlayWithCallback(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_PressPlayWithCallback
               (LobbyStateButton *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateButton____c__DisplayClass24_0___PressPlayWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateButton____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?();
  if (object == (Object *)0x0) goto code_?;
  object[1].klass = (Object__Class *)this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)(object + 1) >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  object[1].monitor = (MonitorData *)callback;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&object[1].monitor >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  bVar7 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
  if (bVar7 == 0) {
code_?:
    (this->fields).isInAd = 0;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) goto code_?;
    this_00 = (this->fields).embeddedPlayerConfig;
    if (this_00 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar8 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       (&EStack_9,this_00,(MethodInfo *)0x0);
    uVar10 = pEVar8->showPlayButtonAd;
    (this->fields).isInAd = uVar10 != '\0';
    if (uVar10 != '\0') {
      pIVar11 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,object,
                 MethodInfo__LobbyStateButton____c__DisplayClass24_0___PressPlayWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar11 != (IAdManager *)0x0) {
        FUN_?();
        return;
      }
      goto code_?;
    }
  }
  pMVar12 = object[1].monitor;
  if (pMVar12 != (MonitorData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pMVar12 + 0x18))(*(undefined8 *)(pMVar12 + 0x40),3,*(undefined8 *)(pMVar12 + 0x28));
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_Start
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Lobby_state_button_interstitial_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aWStackX_18[0] = WinningConditionType__Enum_Collectible;
  bVar1 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                    (aWStackX_18,(MethodInfo *)0x0);
  pIVar2 = (this->fields).countdownFill;
  if (pIVar2 == (Image *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (bVar1 == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar2,1,(MethodInfo *)0x0);
    (this->fields).shouldUpdateFillImage = 1;
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar2,0,(MethodInfo *)0x0);
  }
  bVar1 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      pEVar4 = (this->fields).embeddedPlayerConfig;
      if (pEVar4 != (EmbeddedPlayerConfig *)0x0) {
        pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                           (&EStack_6,pEVar4,(MethodInfo *)0x0);
        uVar7 = pEVar5->showPlayButtonAd;
        if (uVar7 == '\0') {
          return;
        }
        pIVar8 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        if (pIVar8 != (IAdManager *)0x0) {
          cVar9 = FUN_?(5);
          if (cVar9 == '\0') {
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Lobby_state_button_interstitial_,(MethodInfo *)0x0);
          pIVar2 = (this->fields).countdownFill;
          if (pIVar2 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar2,0,(MethodInfo *)0x0);
            pEVar4 = (this->fields).embeddedPlayerConfig;
            (this->fields).shouldUpdateFillImage = 0;
            if (pEVar4 != (EmbeddedPlayerConfig *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((pEVar4->fields).initialized == 0) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Embedded_site_data_not_initializ,
                           (MethodInfo *)0x0);
                uVar10 = (pEVar4->fields).kogamaDefaultData.noPlayButtonVideoIcon;
                cVar9 = uVar10;
              }
              else {
                cVar9 = (pEVar4->fields).currentSite.noPlayButtonVideoIcon;
              }
              if (cVar9 != '\0') {
                return;
              }
              (this->fields).showingAdSprite = 1;
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_StartPlaying
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if (0 < (pMVar3->fields)._._ProfileID_k__BackingField) {
      pUVar4 = (pMVar3->fields)._._UserProfileData_k__BackingField;
      if (pUVar4 == (UserProfileData *)0x0) goto code_?;
      if ((pUVar4->fields).IsAdmin != 0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                  (this_01,3,0,-1,::StringLiteral__,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FirstTimePressPlayController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
      FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                ((MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      bVar5 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
      if (bVar5 == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__ILockCursorManager);
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
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
          return;
        }
        pMVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
        if ((pMVar6 != (MVGameControllerDesktop *)0x0) &&
           (pIVar7 = (IPlayModeUI *)(pMVar6->fields).lockCursorManager,
           pIVar7 != (IPlayModeUI *)0x0)) {
          uVar8 = 1;
          uVar9 = 1;
          pIVar10 = (Il2CppClass *)TypeInfo__ILockCursorManager;
          goto code_?;
        }
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar7 != (IPlayModeUI *)0x0) {
          uVar8 = 8;
          uVar9 = 0;
          pIVar10 = (Il2CppClass *)TypeInfo__IPlayModeUI;
code_?:
          pIVar11 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)uVar9;
          uVar12 = 0;
          pIVar13 = pIVar7->klass;
          uVar14._0_1_ = (pIVar13->_1).rank;
          uVar14._1_1_ = (pIVar13->_1).minimumAlignment;
          if (uVar14 != 0) {
            pIVar11 = pIVar13->interfaceOffsets;
            do {
              if (pIVar11[uVar12].interfaceType == pIVar10) {
                pVVar15 = &(pIVar13->vtable).ShowEUseIcon +
                          (int)(pIVar11[uVar12].offset + (uint)uVar8);
                goto code_?;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar14);
          }
          pVVar15 = (VirtualInvokeData *)FUN_?(pIVar7,pIVar10,uVar8,pIVar11);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar15->methodPtr)(pIVar7,(ulonglong)(byte)uVar9,pVVar15->method,pVVar15->methodPtr);
          return;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar7 != (IPlayModeUI *)0x0) {
        FUN_?(8,TypeInfo__IPlayModeUI,pIVar7,0);
        pSVar16 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((pSVar16 != (SpawnRoleDataMediator *)0x0) &&
           (pSVar17 = (pSVar16->fields).SpawnRoleModeTypeWrapper,
           pSVar17 != (SpawnRoleModeTypeWrapper *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar18 = (pSVar17->fields).spawnRoleType;
          if ((pSVar18 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
             (pSVar19 = (pSVar18->fields).subscribableVariable,
             pSVar19 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
            if (((pSVar19->fields)._.value & 4) != 0) {
              pGVar20 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if ((pGVar20 == (GameEventManager *)0x0) ||
                 (pGVar21 = (pGVar20->fields).AvatarCommandsPlayMode,
                 pGVar21 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
              goto code_?;
              if ((pGVar21->fields).OnEnterPlaymode != (Action *)0x0) {
                pAVar22 = (pGVar21->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pAVar22->fields)._._.invoke_impl)
                          ((pAVar22->fields)._._.method_code,(pAVar22->fields)._._.method);
                return;
              }
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_Update
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
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
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 == (MVNetworkGameStateListener *)0x0)) goto code_?;
  iVar4 = (pMVar3->fields).currentGameState;
  bVar5 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
  bVar6 = false;
  if (bVar5 == 0) {
    bVar7 = false;
  }
  else {
    pIVar8 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar8 == (IAdManager *)0x0) goto code_?;
    cVar9 = FUN_?(5);
    if (cVar9 != '\0') {
      pEVar10 = (this->fields).embeddedPlayerConfig;
      if (pEVar10 == (EmbeddedPlayerConfig *)0x0) goto code_?;
      pEVar11 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                          (&EStack_12,pEVar10,(MethodInfo *)0x0);
      uVar13 = pEVar11->showPlayButtonAd;
      if (uVar13 != '\0') {
        pEVar10 = (this->fields).embeddedPlayerConfig;
        if (pEVar10 == (EmbeddedPlayerConfig *)0x0) goto code_?;
        pEVar11 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                            (&EStack_12,pEVar10,(MethodInfo *)0x0);
        uVar14 = pEVar11->noPlayButtonVideoIcon;
        bVar7 = uVar14 == '\0';
        goto code_?;
      }
    }
    bVar7 = false;
  }
code_?:
  if (bVar7 != (bool)(this->fields).showingAdSprite) {
    (this->fields).showingAdSprite = bVar7;
  }
  if (iVar4 == 2) {
    if ((this->fields).shouldUpdateFillImage != 0) {
      pIVar15 = (this->fields).countdownFill;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 != (MVNetworkGame *)0x0) &&
          (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
          pMVar3 != (MVNetworkGameStateListener *)0x0)) && (pIVar15 != (Image *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar15,(float)(pMVar3->fields).timeLeft / (float)(pMVar3->fields).duration,
                   (MethodInfo *)0x0);
        pIVar15 = (this->fields).countdownFill;
        if ((pIVar15 != (Image *)0x0) &&
           (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar15,(MethodInfo *)0x0),
           pGVar16 != (GameObject *)0x0)) {
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                             (pGVar16,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return;
          }
          pIVar15 = (this->fields).countdownFill;
          if ((pIVar15 != (Image *)0x0) &&
             (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pIVar15,(MethodInfo *)0x0),
             pGVar16 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar16,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    bVar6 = true;
  }
  pIVar15 = (this->fields).countdownFill;
  if ((pIVar15 != (Image *)0x0) &&
     (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pIVar15,(MethodInfo *)0x0), pGVar16 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar17 = (pGVar16->fields)._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar16,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar19 = func_?(&UNK_?);
      FUN_?(uVar19,0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcRam_? = pcVar18;
    cVar9 = (*pcRam_?)(pvVar17);
    if (cVar9 != '\0') {
      LobbyStateButton_OnCountDownEnd(this,(MethodInfo *)0x0);
      pIVar15 = (this->fields).countdownFill;
      if ((pIVar15 == (Image *)0x0) ||
         (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar15,(MethodInfo *)0x0), pGVar16 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar16,0,(MethodInfo *)0x0);
    }
    if (!bVar6) {
      LobbyStateButton_OnCountDownEnd(this,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean get_IsRoundEnded() */

bool Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_get_IsRoundEnded
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    return (pMVar3->fields).currentGameState == 2;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

