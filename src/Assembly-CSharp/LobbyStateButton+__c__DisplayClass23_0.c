
/* Void <OnPressPlay>b__0(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton+<>c__DisplayClass23_0::
     LobbyStateButton_c_DisplayClass23_0__OnPressPlay_b__0
               (LobbyStateButton_c_DisplayClass23_0 *this,InterstitialAdResult__Enum result,
               MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (this_00 == (LobbyStateButton *)0x0) {
    FUN_?(this,CONCAT44(in_register_00000014,result));
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (this->fields).winCon;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,iVar2,0);
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
  pOVar3 = (Object *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass36_0);
  if ((this_00->fields).shouldPop != 0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LobbyStateButton____c);
    }
    this_02 = TypeInfo__LobbyStateButton____c->static_fields->__9__36_0;
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
                 MethodInfo__LobbyStateButton____c___CreateBriefing_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__LobbyStateButton____c->static_fields->__9__36_0 = this_02;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&TypeInfo__LobbyStateButton____c->static_fields->__9__36_0 >> 0xc
                       );
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
              (pGVar4,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  original = (this_00->fields).winningConditionBriefingMenu;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar10 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                      );
  if (pOVar3 != (Object *)0x0) {
    bVar9 = iRam_? != 0;
    pOVar3[1].klass = pOVar10;
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
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_03,pOVar3,
               MethodInfo__LobbyStateButton____c__DisplayClass36_0___CreateBriefing_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar4,(BaseEventData *)0x0,this_03,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar10 = pOVar3[1].klass;
    if (pOVar10 != (Object__Class *)0x0) {
      p_Var6 = (pOVar10->_1).genericContainerHandle;
      *(int32_t *)&(pOVar10->_1).cctor_thread = iVar2;
      *(undefined1 *)((longlong)&(pOVar10->_1).cctor_thread + 4) = 1;
      if (p_Var6 != (Il2CppMetadataGenericContainerHandle)0x0) {
        p_Var6 = (pOVar10->_1).genericContainerHandle;
        (**(code **)(p_Var6 + 0x18))(*(undefined8 *)(p_Var6 + 0x40),*(undefined8 *)(p_Var6 + 0x28));
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
        pOVar3 = (pOVar10->_1).unity_user_data;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            (pOVar3,
                             PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_
                            );
        bVar9 = iRam_? != 0;
        *(Object **)&(pOVar10->_1).static_fields_size = pOVar3;
        if (bVar9) {
          uVar5 = (uint)((ulonglong)&(pOVar10->_1).static_fields_size >> 0xc);
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
        lVar6 = *(longlong *)&(pOVar10->_1).static_fields_size;
        if (lVar6 != 0) {
          pDVar11 = *(Delegate **)(lVar6 + 0x60);
          pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar12,(Object *)pOVar10,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
                     (MethodInfo *)0x0);
          pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
          if (pDVar11 == (Delegate *)0x0) {
            *(undefined8 *)(lVar6 + 0x60) = 0;
          }
          else {
            pDVar13 = (Delegate *)0x0;
            if ((Action__Class *)pDVar11->klass == TypeInfo__System__Action) {
              pDVar13 = pDVar11;
            }
            if (pDVar13 == (Delegate *)0x0) {
              FUN_?(pDVar11);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(Delegate **)(lVar6 + 0x60) = pDVar13;
            pDVar13 = (Delegate *)0x0;
            if ((Action__Class *)pDVar11->klass == TypeInfo__System__Action) {
              pDVar13 = pDVar11;
            }
            if (pDVar13 == (Delegate *)0x0) {
              FUN_?(pDVar11);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar5 = (uint)(lVar6 + 0x60U >> 0xc);
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
          pCVar14 = *(Component **)&(pOVar10->_1).static_fields_size;
          if (pCVar14 != (Component *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (pCVar14,(MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            *(GameObject **)&(pOVar10->_1).element_size = pGVar4;
            if (bVar9) {
              uVar5 = (uint)((ulonglong)&(pOVar10->_1).element_size >> 0xc);
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
            pGVar4 = *(GameObject **)&(pOVar10->_1).element_size;
            if (pGVar4 != (GameObject *)0x0) {
              this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pOVar10,(MethodInfo *)0x0);
              if (this_01 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_01,parent,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        pOVar3 = *(Object **)&(pOVar10->_1).initializationExceptionGCHandle;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            (pOVar3,
                             PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_
                            );
        bVar9 = iRam_? != 0;
        *(Object **)&(pOVar10->_1).thread_static_fields_offset = pOVar3;
        if (bVar9) {
          uVar5 = (uint)((ulonglong)&(pOVar10->_1).thread_static_fields_offset >> 0xc);
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
        lVar6 = *(longlong *)&(pOVar10->_1).thread_static_fields_offset;
        if (lVar6 != 0) {
          pDVar11 = *(Delegate **)(lVar6 + 0x40);
          pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar12,(Object *)pOVar10,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
                     (MethodInfo *)0x0);
          pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
          pDVar11 = (Delegate *)0x0;
          if (pDVar13 == (Delegate *)0x0) {
            *(undefined8 *)(lVar6 + 0x40) = 0;
          }
          else {
            pDVar15 = pDVar11;
            if ((Action__Class *)pDVar13->klass == TypeInfo__System__Action) {
              pDVar15 = pDVar13;
            }
            if (pDVar15 == (Delegate *)0x0) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(Delegate **)(lVar6 + 0x40) = pDVar15;
            pDVar15 = pDVar11;
            if ((Action__Class *)pDVar13->klass == TypeInfo__System__Action) {
              pDVar15 = pDVar13;
            }
            if (pDVar15 == (Delegate *)0x0) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar5 = (uint)(lVar6 + 0x40U >> 0xc);
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
          pCVar14 = *(Component **)&(pOVar10->_1).thread_static_fields_offset;
          if (pCVar14 != (Component *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (pCVar14,(MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            *(GameObject **)&(pOVar10->_1).element_size = pGVar4;
            if (bVar9) {
              uVar5 = (uint)((ulonglong)&(pOVar10->_1).element_size >> 0xc);
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
            pGVar4 = *(GameObject **)&(pOVar10->_1).element_size;
            if ((pGVar4 != (GameObject *)0x0) &&
               (pDVar13 = (Delegate *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
               pDVar13 != (Delegate *)0x0)) {
              if (pDVar13->klass == (Delegate__Class *)TypeInfo__UnityEngine__RectTransform) {
                pDVar11 = pDVar13;
              }
              if (pDVar11 != (Delegate *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          ((Transform *)pDVar11,
                           *(Transform **)&(pOVar10->_1).cctor_finished_or_no_cctor,0,
                           (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                          ((Transform *)pDVar11,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPressPlay>b__1(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton+<>c__DisplayClass23_0::
     LobbyStateButton_c_DisplayClass23_0__OnPressPlay_b__1
               (LobbyStateButton_c_DisplayClass23_0 *this,InterstitialAdResult__Enum result,
               MethodInfo *method)

{
  if ((this->fields).__4__this != (LobbyStateButton *)0x0) {
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
      if (((pMVar3->fields).currentGameState == 2) && ((this->fields).hasGameWinningCondition == 0))
      {
        pLVar4 = (this->fields).__4__this;
        if ((pLVar4 != (LobbyStateButton *)0x0) &&
           (this_00 = (pLVar4->fields).lobbyStateButton, this_00 != (Button *)0x0)) {
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
          cVar5 = FUN_?(&(this_00->fields)._.m_Interactable);
          if (cVar5 == '\0') {
            return;
          }
          if ((this_00->fields)._.m_Interactable == 0) {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
              FUN_?();
            }
            pEVar6 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
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
            if (pEVar6 != (EventSystem *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pEVar6->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0)
                {
                  FUN_?();
                }
                pEVar6 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                          EventSystem_get_current((MethodInfo *)0x0);
                if (pEVar6 != (EventSystem *)0x0) {
                  pGVar7 = (pEVar6->fields).m_CurrentSelected;
                  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
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
                  if (pGVar8 != (GameObject *)0x0 || pGVar7 != (GameObject *)0x0) {
                    if (pGVar8 == (GameObject *)0x0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if (pGVar7 == (GameObject *)0x0) goto DAT_?;
                      bVar9 = (pGVar7->fields)._.m_CachedPtr == (void *)0x0;
                    }
                    else if (pGVar7 == (GameObject *)0x0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      bVar9 = (pGVar8->fields)._.m_CachedPtr == (void *)0x0;
                    }
                    else {
                      bVar9 = pGVar7 == pGVar8;
                    }
                    if (!bVar9) goto code_?;
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c ==
                      0) {
                    FUN_?();
                  }
                  pEVar6 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                            EventSystem_get_current((MethodInfo *)0x0);
                  if (pEVar6 != (EventSystem *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                    EventSystem_SetSelectedGameObject_1(pEVar6,(GameObject *)0x0,(MethodInfo *)0x0)
                    ;
                    goto code_?;
                  }
                }
DAT_?:
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
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
      else if ((this->fields).__4__this != (LobbyStateButton *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (((pMVar2->fields)._NetworkGameStateListener_k__BackingField !=
             (MVNetworkGameStateListener *)0x0 &&
            (pLVar4 = (this->fields).__4__this, pLVar4 != (LobbyStateButton *)0x0)))) {
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
            FUN_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_
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
          object_00 = (Object *)FUN_?(TypeInfo__LobbyStateButton____c__DisplayClass34_0);
          if ((pLVar4->fields).isInAd == 0) {
            if ((pLVar4->fields).shouldPop != 0) {
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pLVar4,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__LobbyStateButton____c);
              }
              this_01 = TypeInfo__LobbyStateButton____c->static_fields->__9__34_0;
              if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                if (*(int *)&(TypeInfo__LobbyStateButton____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__LobbyStateButton____c);
                }
                object = TypeInfo__LobbyStateButton____c->static_fields->__9;
                this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                           MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__LobbyStateButton____c->static_fields->__9__34_0 = this_01;
                func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__34_0);
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar7,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
            }
            original = (pLVar4->fields).teamMenuPrefab;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pOVar11 = (Object__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_
                                );
            if (object_00 == (Object *)0x0) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            bVar9 = iRam_? != 0;
            object_00[1].klass = pOVar11;
            if (bVar9) {
              uVar12 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pLVar4,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,object_00,
                       MethodInfo__LobbyStateButton____c__DisplayClass34_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar7,(BaseEventData *)0x0,this_02,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
          }
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

