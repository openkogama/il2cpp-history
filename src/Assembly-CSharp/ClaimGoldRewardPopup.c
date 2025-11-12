
/* Void ClaimGold() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_ClaimGold
               (ClaimGoldRewardPopup *this,MethodInfo *method)

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
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar4 = (pMVar3->fields).peer;
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    pMVar5 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)pMVar5 >> 8),0x57),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
      }
      this_02 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0;
      if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
        }
        object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
        this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                   MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0 = this_02;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0
                         >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = (this->fields).goldRewardUnlockedPopupPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar12 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar6,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      if (object_00 != (Object *)0x0) {
        bVar11 = iRam_? != 0;
        object_00[1].klass = pOVar12;
        if (bVar11) {
          uVar7 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_03,object_00,
                   MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        pMVar5 = 
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
          if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar5);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar6,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar8 = (longlong)(pLVar13->fields)._size;
          uVar7 = 0;
          if (0 < lVar8) {
            lVar14 = 0;
            lVar15 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar13->fields)._size <= uVar7) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pTVar17 = (pLVar13->fields)._items;
              if (pTVar17 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar17->max_length <= uVar7) {
                FUN_?();
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar17->vector + lVar15 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar6,(BaseEventData *)0x0,this_03,
                                  (pMVar5->field7_0x38).rgctx_data[1].method);
              if (bVar18 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar7 = uVar7 + 1;
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 8;
            } while (lVar14 < lVar8);
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
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void CreateErrorMessage() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_CreateErrorMessage
               (ClaimGoldRewardPopup *this,MethodInfo *method)

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
                  MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
  }
  this_01 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
    }
    object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0 >>
                     0xc);
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


/* Void OnAdFinished(Boolean) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_OnAdFinished
               (ClaimGoldRewardPopup *this,bool adWasSuccessful,MethodInfo *method)

{
  if (adWasSuccessful == 0) {
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
                    MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
    }
    this_01 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
      }
      pCVar2 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pCVar2,
                 MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0 = this_01;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0 >>
                       0xc);
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
    }
    pMVar7 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
    ;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
    }
code_?:
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
      if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar1,(IList_1_UnityEngine_Transform_ *)
                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList,(MethodInfo *)0x0);
    pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList;
    if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar9 = (longlong)(pLVar8->fields)._size;
      uVar3 = 0;
      if (0 < lVar9) {
        lVar10 = 0;
        lVar11 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar8->fields)._size <= uVar3) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar13 = (pLVar8->fields)._items;
          if (pTVar13 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar13->max_length <= uVar3) {
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
                             (pGVar1,(BaseEventData *)0x0,
                              (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                              (pMVar7->field7_0x38).rgctx_data[1].method);
          if (bVar14 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          uVar3 = uVar3 + 1;
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 8;
        } while (lVar10 < lVar9);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,0);
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
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar15 != (MVGameControllerBase *)0x0) &&
      (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
     (pMVar17 = (pMVar16->fields).operationRequests, pMVar17 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar18 = (pMVar17->fields).peer;
    this_02 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    pMVar7 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar18 != (PhotonPeer *)0x0) {
      (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                (pPVar18,CONCAT71((int7)((ulonglong)pMVar7 >> 8),0x57),this_02,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar18->klass->vtable).SendOperation.method);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
      }
      this_03 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0;
      if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
        }
        pCVar2 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
        this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)pCVar2,
                   MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0 = this_03;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0
                         >> 0xc);
          lVar9 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar4 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar19 = uVar6 == *puVar4;
            if (bVar19) {
              *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar19);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar1 = (this->fields).goldRewardUnlockedPopupPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar20 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar1,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      if (object != (Object *)0x0) {
        bVar19 = iRam_? != 0;
        object[1].klass = pOVar20;
        if (bVar19) {
          uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar9 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar4 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar19 = uVar6 == *puVar4;
            if (bVar19) {
              *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar19);
        }
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,object,
                   MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        pMVar7 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnClickClaimGoldAd() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_OnClickClaimGoldAd
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
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
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (lVar2 = (*(pMVar1->klass->vtable).__unknown.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable).__unknown.method), lVar2 != 0)) {
    cVar3 = FUN_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,lVar2);
    if (cVar3 == '\0') {
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
                      MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
      }
      this_02 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0;
      if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
        }
        object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
        this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                   MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0 = this_02;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0
                         >> 0xc);
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
      }
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
                (pGVar4,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar2 = (longlong)(pLVar10->fields)._size;
        uVar5 = 0;
        if (0 < lVar2) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar10->fields)._size <= uVar5) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar14 = (pLVar10->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar5) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                     ExecuteEvents_Execute_18
                               (pGVar4,(BaseEventData *)0x0,
                                (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                                (pMVar9->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar5 = uVar5 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar2);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pGVar16 = (pMVar1->fields).goldRewardManager, pGVar16 != (GoldRewardManager *)0x0)) {
      (pGVar16->fields).isCountingDownGoldReward = 0;
      (pGVar16->fields).isGoldRewardDone = 1;
      pIVar17 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__ClaimGoldRewardPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar17 != (IAdManager *)0x0) {
        FUN_?();
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnClickClaimGoldSubscriber() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_OnClickClaimGoldSubscriber
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,0);
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
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar4 = (pMVar3->fields).peer;
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    pMVar5 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)pMVar5 >> 8),0x57),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
      }
      this_02 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0;
      if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
        }
        object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
        this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                   MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0 = this_02;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0
                         >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = (this->fields).goldRewardUnlockedPopupPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar12 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar6,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      if (object_00 != (Object *)0x0) {
        bVar11 = iRam_? != 0;
        object_00[1].klass = pOVar12;
        if (bVar11) {
          uVar7 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_03,object_00,
                   MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        pMVar5 = 
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
          if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar5);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar6,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar8 = (longlong)(pLVar13->fields)._size;
          uVar7 = 0;
          if (0 < lVar8) {
            lVar14 = 0;
            lVar15 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar13->fields)._size <= uVar7) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pTVar17 = (pLVar13->fields)._items;
              if (pTVar17 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar17->max_length <= uVar7) {
                FUN_?();
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar17->vector + lVar15 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar6,(BaseEventData *)0x0,this_03,
                                  (pMVar5->field7_0x38).rgctx_data[1].method);
              if (bVar18 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar7 = uVar7 + 1;
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 8;
            } while (lVar14 < lVar8);
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
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_OnDestroy
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
    (pGVar2->fields).isCountingDownGoldReward = 0;
    (pGVar2->fields).isGoldRewardDone = 1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_RewardedAdCallback
               (ClaimGoldRewardPopup *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (obj != RewardedAdResult__Enum_RewardUnlocked) {
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
                    MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
    }
    this_01 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
      }
      pCVar2 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pCVar2,
                 MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0 = this_01;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0 >>
                       0xc);
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
    }
    pMVar7 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
    ;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
    }
code_?:
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
      if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar1,(IList_1_UnityEngine_Transform_ *)
                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList,(MethodInfo *)0x0);
    pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList;
    if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar9 = (longlong)(pLVar8->fields)._size;
      uVar3 = 0;
      if (0 < lVar9) {
        lVar10 = 0;
        lVar11 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar8->fields)._size <= uVar3) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar13 = (pLVar8->fields)._items;
          if (pTVar13 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar13->max_length <= uVar3) {
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
                             (pGVar1,(BaseEventData *)0x0,
                              (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                              (pMVar7->field7_0x38).rgctx_data[1].method);
          if (bVar14 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          uVar3 = uVar3 + 1;
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 8;
        } while (lVar10 < lVar9);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,0);
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
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar15 != (MVGameControllerBase *)0x0) &&
      (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
     (pMVar17 = (pMVar16->fields).operationRequests, pMVar17 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar18 = (pMVar17->fields).peer;
    this_02 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    pMVar7 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar18 != (PhotonPeer *)0x0) {
      (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                (pPVar18,CONCAT71((int7)((ulonglong)pMVar7 >> 8),0x57),this_02,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar18->klass->vtable).SendOperation.method);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
      }
      this_03 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0;
      if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
        }
        pCVar2 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
        this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)pCVar2,
                   MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0 = this_03;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0
                         >> 0xc);
          lVar9 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar4 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar19 = uVar6 == *puVar4;
            if (bVar19) {
              *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar19);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar1 = (this->fields).goldRewardUnlockedPopupPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar20 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar1,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      if (object != (Object *)0x0) {
        bVar19 = iRam_? != 0;
        object[1].klass = pOVar20;
        if (bVar19) {
          uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar9 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar4 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar19 = uVar6 == *puVar4;
            if (bVar19) {
              *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar19);
        }
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,object,
                   MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        pMVar7 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_Update
               (ClaimGoldRewardPopup *this,MethodInfo *method)

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
                  MethodInfo__ClaimGoldRewardPopup____c___Update_b__4_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClaimGoldRewardPopup____c__DisplayClass4_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClaimGoldRewardPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__ClaimGoldRewardPopup____c__DisplayClass4_0);
  if (object_00 != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object_00[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
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
    *(undefined1 *)&object_00[1].klass = 0;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object_00,
               MethodInfo__ClaimGoldRewardPopup____c__DisplayClass4_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar6,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar7 != (MVGameControllerBase *)0x0) &&
       (pGVar8 = (pMVar7->fields).goldRewardManager, pGVar8 != (GoldRewardManager *)0x0)) {
      if (((pGVar8->fields).isGoldRewardDone != 0) && (*(char *)&object_00[1].klass == '\0')) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
        }
        this_01 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__4_1;
        if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__ClaimGoldRewardPopup____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ClaimGoldRewardPopup____c);
          }
          object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
          this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                     MethodInfo__ClaimGoldRewardPopup____c___Update_b__4_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__4_1 = this_01;
          func_?(&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__4_1);
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar6,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

