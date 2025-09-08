
/* Void OnBoostCountChanged() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_OnBoostCountChanged
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pBVar2 = (pMVar1->fields).boostController, pBVar2 != (BoostController *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(pBVar2->fields).activeBoosts;
      if (this_00 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                            );
        if (this_02 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          iVar3 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                  StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                            (this_02,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                            );
          pTVar4 = (this->fields).boostsActive;
          if (iVar3 < 1) {
            if (pTVar4 != (Text *)0x0) {
              pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar4,(MethodInfo *)0x0);
              if (pGVar5 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,0,(MethodInfo *)0x0);
                pIVar6 = (this->fields).backgroundColor;
                if (pIVar6 != (Image *)0x0) {
                  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pIVar6,(MethodInfo *)0x0);
                  if (pGVar5 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar5,0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else if (pTVar4 != (Text *)0x0) {
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar4,(MethodInfo *)0x0);
            if (pGVar5 != (GameObject *)0x0) {
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar5,(MethodInfo *)0x0);
              if (bVar7 == 0) {
                pTVar4 = (this->fields).boostsActive;
                if (pTVar4 == (Text *)0x0) goto code_?;
                pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar4,(MethodInfo *)0x0);
                if (pGVar5 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,1,(MethodInfo *)0x0);
              }
              pIVar6 = (this->fields).backgroundColor;
              if (pIVar6 != (Image *)0x0) {
                pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pIVar6,(MethodInfo *)0x0);
                if (pGVar5 != (GameObject *)0x0) {
                  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar5,(MethodInfo *)0x0);
                  if (bVar7 == 0) {
                    pIVar6 = (this->fields).backgroundColor;
                    if (pIVar6 == (Image *)0x0) goto code_?;
                    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pIVar6,(MethodInfo *)0x0);
                    if (pGVar5 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar5,1,(MethodInfo *)0x0);
                  }
                  pTVar4 = (this->fields).boostsActive;
                  pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                                     ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                  if (pTVar4 != (Text *)0x0) {
                    (*(code *)(pTVar4->klass->vtable).set_text.method)(pTVar4,pSVar8);
                    pIVar6 = (this->fields).backgroundColor;
                    if (pIVar6 != (Image *)0x0) {
                      (*(code *)(pIVar6->klass->vtable).set_color.method)
                                (pIVar6,(this->fields).boostActiveColor.r,
                                 (this->fields).boostActiveColor.g,(this->fields).boostActiveColor.b
                                 ,(this->fields).boostActiveColor.a);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_OnDestroy
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 == (MVNetworkGame *)0x0) ||
      (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar2 == (MVLocalPlayer *)0x0)) ||
     (pBVar3 = (pMVar2->fields).boostController, pBVar3 == (BoostController *)0x0)) {
    uVar4 = func_?();
  }
  else {
    pAVar5 = (pBVar3->fields).BoostCountChanged;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,unaff_ESI,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
    if (pAVar5 == (Action *)0x0) {
      (pBVar3->fields).BoostCountChanged = (Action *)0x0;
      pBStack6 = &pBVar3->fields;
      pAStack7 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 != (Action *)0x0) {
      (pBVar3->fields).BoostCountChanged = pAVar8;
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
      pAStack7 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAStack7 = pAVar5;
      }
      if (pAStack7 != (Action *)0x0) {
        pBStack6 = &pBVar3->fields;
        func_?();
        return;
      }
    }
  }
  _pBStack0000001c = uVar4;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_Start
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pBVar3 = (pMVar2->fields).boostController;
      if (pBVar3 != (BoostController *)0x0) {
        pAVar4 = (pBVar3->fields).BoostCountChanged;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,unaff_EBX,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
                   (MethodInfo *)0x0);
        pAVar4 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pAVar4 == (Action *)0x0) {
          (pBVar3->fields).BoostCountChanged = (Action *)0x0;
        }
        else {
          pAVar5 = (Action *)0x0;
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar5 = pAVar4;
          }
          if (pAVar5 == (Action *)0x0) goto code_?;
          (pBVar3->fields).BoostCountChanged = pAVar5;
          pAVar5 = (Action *)0x0;
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar5 = pAVar4;
          }
          if (pAVar5 == (Action *)0x0) goto code_?;
        }
        func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if ((pMVar2 != (MVLocalPlayer *)0x0) &&
             (pBVar3 = (pMVar2->fields).boostController, pBVar3 != (BoostController *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)(pBVar3->fields).activeBoosts;
            if (this_00 !=
                (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
              pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                       UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                                 );
              if (pDVar6 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)0x0) {
                in_stack_7 =
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                ;
                in_stack_8 = pDVar6;
                iVar9 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
                        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                                  (pDVar6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                                  );
                pCVar10 = in_stack_11;
                pCVar12 = (Component *)in_stack_11[1].monitor;
                if (iVar9 < 1) {
                  if (pCVar12 != (Component *)0x0) {
                    in_stack_13 = (GameObject *)0x0;
                    in_stack_7 = (MethodInfo *)&UNK_?;
                    in_stack_11 = pCVar12;
                    pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject(pCVar12,(MethodInfo *)0x0);
                    if (pGVar14 != (GameObject *)0x0) {
                      in_stack_15 = (undefined *)0x0;
                      in_stack_16 = (GameObject *)0x0;
                      in_stack_11 = (Component *)&UNK_?;
                      in_stack_13 = pGVar14;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar14,0,(MethodInfo *)0x0);
                      pCVar12 = pCVar10[1].fields._.m_CachedPtr;
                      if (pCVar12 != (Component *)0x0) {
                        in_stack_17 = (GameObject *)0x0;
                        in_stack_18 = (Component *)&UNK_?;
                        in_stack_19 = pCVar12;
                        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject(pCVar12,(MethodInfo *)0x0);
                        if (pGVar14 != (GameObject *)0x0) {
                          in_stack_20 = 0;
                          in_stack_19 = (Component *)&UNK_?;
                          in_stack_17 = pGVar14;
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar14,0,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
                else if (pCVar12 != (Component *)0x0) {
                  in_stack_13 = (GameObject *)0x0;
                  in_stack_7 = (MethodInfo *)&UNK_?;
                  in_stack_11 = pCVar12;
                  pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject(pCVar12,(MethodInfo *)0x0);
                  if (pGVar14 != (GameObject *)0x0) {
                    in_stack_15 = (undefined *)0x0;
                    in_stack_13 = (GameObject *)&UNK_?;
                    in_stack_16 = pGVar14;
                    bVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_activeSelf(pGVar14,(MethodInfo *)0x0);
                    if (bVar21 == 0) {
                      pCVar12 = (Component *)pCVar10[1].monitor;
                      if (pCVar12 == (Component *)0x0) goto code_?;
                      in_stack_19 = (Component *)0x0;
                      in_stack_15 = &UNK_?;
                      in_stack_18 = pCVar12;
                      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject(pCVar12,(MethodInfo *)0x0);
                      if (pGVar14 == (GameObject *)0x0) goto code_?;
                      in_stack_20 = 0;
                      in_stack_17 = (GameObject *)0x1;
                      in_stack_18 = (Component *)&UNK_?;
                      in_stack_19 = (Component *)pGVar14;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar14,1,(MethodInfo *)0x0);
                    }
                    pCVar12 = pCVar10[1].fields._.m_CachedPtr;
                    if (pCVar12 != (Component *)0x0) {
                      pDVar6 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject(pCVar12,(MethodInfo *)0x0);
                      if (pDVar6 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                     *)0x0) {
                        in_stack_7 = (MethodInfo *)0x0;
                        in_stack_8 = pDVar6;
                        bVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_activeSelf((GameObject *)pDVar6,(MethodInfo *)0x0);
                        if (bVar21 == 0) {
                          pCVar12 = pCVar10[1].fields._.m_CachedPtr;
                          if (pCVar12 == (Component *)0x0) goto code_?;
                          in_stack_13 = (GameObject *)0x0;
                          in_stack_7 = (MethodInfo *)&UNK_?;
                          in_stack_11 = pCVar12;
                          pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject(pCVar12,(MethodInfo *)0x0);
                          if (pGVar14 == (GameObject *)0x0) goto code_?;
                          in_stack_15 = (undefined *)0x0;
                          in_stack_16 = (GameObject *)0x1;
                          in_stack_11 = (Component *)&UNK_?;
                          in_stack_13 = pGVar14;
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar14,1,(MethodInfo *)0x0);
                        }
                        pMVar22 = pCVar10[1].monitor;
                        mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&stack0x00000020,(MethodInfo *)0x0);
                        if (pMVar22 != (MonitorData *)0x0) {
                          (**(code **)(*(int *)pMVar22 + 0x318))();
                          piStack23 = pCVar10[1].fields._.m_CachedPtr;
                          if (piStack23 != (int *)0x0) {
                            pCStack24 = pCVar10[2].klass;
                            (**(code **)(*piStack23 + 0x178))();
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
code_?:
        func_?();
        pcVar25 = (code *)swi(3);
        (*pcVar25)();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

