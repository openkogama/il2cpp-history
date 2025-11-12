
/* MVPlayer GetPlayer(String) */

MVPlayer *
Assembly-CSharp.dll::OwnerToolController::OwnerToolController_GetPlayer
          (String *userName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
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
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (pMVar3->fields).players;
    if ((this != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) &&
       (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Values__
                            ),
       pDVar4 !=
       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
        *)0x0)) {
      pDStack_5 = (pDVar4->fields)._dictionary;
      ppDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)0x0;
      uStack_7 = 0;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      if (pDStack_5 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_9 = pDStack_5;
        FUN_?();
        pcVar13 = (code *)swi(3);
        pMVar14 = (MVPlayer *)(*pcVar13)();
        return pMVar14;
      }
      ppDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)((ulonglong)(uint)(pDStack_5->fields)._version << 0x20);
      uStack_7 = 0;
      uStack_15 = (ulonglong)ppDStack_6;
      pMStack_16 = (MVPlayer *)0x0;
      pDStack_9 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0;
      ppDStack_6 = &pDStack_5;
      while (pDStack_5 !=
             (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0) {
        if (uStack_15._4_4_ != (pDStack_5->fields)._version) goto code_?;
        uVar12 = uStack_15 & 0xffffffff;
        do {
          if (pDStack_5 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          uVar8 = (uint)uVar12;
          if ((uint)(pDStack_5->fields)._count <= uVar8) {
            return (MVPlayer *)0x0;
          }
          pDVar17 = (pDStack_5->fields)._entries;
          uVar12 = (ulonglong)(uVar8 + 1);
          uStack_15 = CONCAT44(uStack_15._4_4_,uVar8 + 1);
          if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0) goto code_?;
          if ((uint)pDVar17->max_length <= uVar8) goto code_?;
        } while ((&pDVar17->vector[0].hashCode)[(longlong)(int)uVar8 * 6] < 0);
        pMStack_16 = *(MVPlayer **)
                      ((longlong)&pDVar17->vector[0].key + (longlong)(int)uVar8 * 0x18 + 8);
        func_?();
        pMVar14 = pMStack_16;
        if (pMStack_16 == (MVPlayer *)0x0) goto code_?;
        pUVar18 = (pMStack_16->fields)._UserProfileData_k__BackingField;
        if (pUVar18 == (UserProfileData *)0x0) goto code_?;
        pSVar19 = (pUVar18->fields).UserName;
        if ((pSVar19 == userName) ||
           (((pSVar19 != (String *)0x0 && (userName != (String *)0x0)) &&
            (((pSVar19->fields)._stringLength == (userName->fields)._stringLength &&
             (bVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar19->fields)._firstChar,
                                  (uint8_t *)&(userName->fields)._firstChar,
                                  (longlong)(pSVar19->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar20 != 0)))))) {
          return pMVar14;
        }
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  pMVar14 = (MVPlayer *)(*pcVar13)();
  return pMVar14;
}


/* Void Initialize(String) */

void Assembly-CSharp.dll::OwnerToolController::OwnerToolController_Initialize
               (OwnerToolController *this,String *playerNameString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_will_be_kicked_and_unable_to_rej);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,playerNameString,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).text;
    pSVar2 = TM::TM__(StringLiteral_will_be_kicked_and_unable_to_rej,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_5
                       (playerNameString,::StringLiteral__,pSVar2,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnKickClicked() */

void Assembly-CSharp.dll::OwnerToolController::OwnerToolController_OnKickClicked
               (OwnerToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player_is_not_present_in_session);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 == (Text *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (String *)(*(pTVar1->klass->vtable).get_text.methodPtr)();
  target = OwnerToolController_GetPlayer(pSVar3,(MethodInfo *)0x0);
  if (target == (MVPlayer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = StringLiteral_Player_is_not_present_in_session;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
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
                  MethodInfo__OwnerOps____c___RevokeEditRightsAndKick_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OwnerOps____c);
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
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 == (MVGameControllerBase *)0x0) ||
      (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar7->fields).operationRequests,
     this_00 == (MVNetworkGame_OperationRequests *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RevokeEditRights
            (this_00,target,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__OwnerOps____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_02 = TypeInfo__OwnerOps____c->static_fields->__9__1_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__OwnerOps____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__OwnerOps____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__OwnerOps____c___RevokeEditRightsAndKick_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__OwnerOps____c->static_fields->__9__1_0 = this_02;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&TypeInfo__OwnerOps____c->static_fields->__9__1_0 >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
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
            (pGVar5,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar14 = (longlong)(pLVar13->fields)._size;
    uVar8 = 0;
    if (0 < lVar14) {
      lVar15 = 0;
      lVar16 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar13->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar17 = (pLVar13->fields)._items;
        if (pTVar17 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar17->max_length <= uVar8) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
        bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar5,(BaseEventData *)0x0,
                            (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                            (pMVar12->field7_0x38).rgctx_data[1].method);
        if (bVar18 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 8;
      } while (lVar15 < lVar14);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

