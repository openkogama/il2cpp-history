
/* IEnumerator FadeInAnimation() */

IEnumerator *
Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_FadeInAnimation
          (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LoadingScreenHandler___FadeInAnimation_d__24);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__LoadingScreenHandler___FadeInAnimation_d__24);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* IEnumerator LoadingBarAnimation() */

IEnumerator *
Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_LoadingBarAnimation
          (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LoadingScreenHandler___LoadingBarAnimation_d__23);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__LoadingScreenHandler___LoadingBarAnimation_d__23);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnDestroy
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVJoinState>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LoadingScreenHandler__OnJoinStateChanged_MVJoinState_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (LoadingScreenHandler *)0x0) {
    pvVar1 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1);
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
    this_00 = (Action_2_Int32Enum_Object_ *)
              FUN_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pMVar4 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pMVar5 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar4 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
           (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    }
    else {
      pMVar6 = pMVar5;
      if (pMVar4->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
        pMVar6 = pMVar4;
      }
      if (pMVar6 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
        FUN_?(pMVar4,TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar6;
      pMVar6 = pMVar5;
      if (pMVar4->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
        pMVar6 = pMVar4;
      }
      if (pMVar6 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
        FUN_?(pMVar4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg
                     >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar11 != (MVGameControllerBase *)0x0) {
      pAVar12 = (pMVar11->fields).onJoinStateChanged;
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__System__Action<MVJoinState>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__LoadingScreenHandler__OnJoinStateChanged_MVJoinState_,(MethodInfo *)0x0
                );
      pDVar13 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar12,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar14 = TypeInfo__System__Action<MVJoinState>;
      if ((pDVar13 != (Delegate *)0x0) &&
         (pMVar5 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
                    FUN_?(pDVar13,TypeInfo__System__Action<MVJoinState>),
         pMVar5 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0)) {
        FUN_?(pDVar13,pAVar14);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar11 != (MVGameControllerBase *)0x0) {
        bVar15 = iRam_? != 0;
        (pMVar11->fields).onJoinStateChanged = (Action_1_MVJoinState_ *)pMVar5;
        if (bVar15) {
          uVar7 = (uint)((ulonglong)&(pMVar11->fields).onJoinStateChanged >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar11 != (MVGameControllerBase *)0x0) {
          pAVar12 = (pMVar11->fields).onJoinStateChanged;
          if (pAVar12 == (Action_1_MVJoinState_ *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar12->fields)._._.invoke_impl)
                    ((pAVar12->fields)._._.method_code,
                     (TypeInfo__MVGameControllerBase->static_fields->instance->fields)._joinState,
                     (pAVar12->fields)._._.method);
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGameMessageReceived(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnGameMessageReceived
               (LoadingScreenHandler *this,MVGameMsgType__Enum gameMsgType,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameMsgType != MVGameMsgType__Enum_JoinFlowStatus) {
    return;
  }
  auStackX_10[0] = 5;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
  if (gameMsgData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (gameMsgData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar2 = (Object *)0x0;
      if (pOVar1->klass == pORam0000000182db2460) {
        pOVar2 = pOVar1;
      }
      if (pOVar2 == (Object *)0x0) {
        FUN_?(pOVar1,pORam0000000182db2460);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar4 = (this->fields).loadingTextMessage;
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)();
      iVar5 = (this->fields).currentEventCount + 1;
      (this->fields).currentEventCount = iVar5;
      fVar6 = (float)iVar5 / (float)(this->fields).eventsCount;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      else if (_UNK_? < fVar6) {
        fVar6 = _UNK_?;
      }
      (this->fields).targetProgress = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_1
                ((MonoBehaviour *)this,(this->fields).loadingBarCoroutine,(MethodInfo *)0x0);
      routine = LoadingScreenHandler_LoadingBarAnimation(this,(MethodInfo *)0x0);
      pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      bVar8 = iRam_? == 0;
      (this->fields).loadingBarCoroutine = pCVar7;
      if (bVar8) {
        return;
      }
      uVar9 = (uint)((ulonglong)&(this->fields).loadingBarCoroutine >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnJoinStateChanged(MVJoinState) */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnJoinStateChanged
               (LoadingScreenHandler *this,MVJoinState__Enum joinState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__get_Item_MV__Common__MVGameMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (joinState == MVJoinState__Enum_Playing) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
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
              ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
         (GameSessionData *)0x0) && ((this->fields).hasCapturedSessionData == 0)) {
      pTVar2 = (this->fields).planetNameText;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if ((pGVar3 != (GameSessionData *)0x0) && (pTVar2 != (Text *)0x0)) {
        (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,(pGVar3->fields).planetName);
        pTVar2 = (this->fields).planetNameText;
        if (pTVar2 != (Text *)0x0) {
          pSVar4 = (String *)
                   (*(pTVar2->klass->vtable).get_text.methodPtr)
                             (pTVar2,(pTVar2->klass->vtable).get_text.method);
          if ((pSVar4 == ::StringLiteral__) ||
             ((((pSVar4 != (String *)0x0 && (::StringLiteral__ != (String *)0x0)) &&
               ((pSVar4->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
              (bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar4->fields)._firstChar,
                                  (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                  (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar5 != 0)))) {
            pTVar2 = (this->fields).planetNameText;
            if ((pTVar2 == (Text *)0x0) ||
               (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
               pGVar1 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
          }
          this_00 = (this->fields).eventCountLookup;
          lVar6 = FUN_?();
          if ((lVar6 != 0) && (this_00 != (Dictionary_2_MV_Common_MVGameMode_System_Int32_ *)0x0))
          {
            IVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Int32Enum]::
                    Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_00,
                               *(Int32Enum__Enum *)(lVar6 + 0x20),
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__get_Item_MV__Common__MVGameMode_
                              );
            (this->fields).eventsCount = IVar7;
            (this->fields).hasCapturedSessionData = 1;
            routine = LoadingScreenHandler_LoadingBarAnimation(this,(MethodInfo *)0x0);
            pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                      MonoBehaviour_StartCoroutine_2
                                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
            (this->fields).loadingBarCoroutine = pCVar8;
            func_?(&(this->fields).loadingBarCoroutine);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__LoadingScreenHandler___FadeInAnimation_d__24);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            lVar6 = FUN_?(TypeInfo__LoadingScreenHandler___FadeInAnimation_d__24);
            bVar9 = iRam_? != 0;
            *(undefined4 *)(lVar6 + 0x10) = 0;
            *(LoadingScreenHandler **)(lVar6 + 0x20) = this;
            if (bVar9) {
              uVar10 = (uint)(lVar6 + 0x20U >> 0xc);
              uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
              do {
                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                LOCK();
                bVar9 = uVar12 == *puVar13;
                if (bVar9) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            if (lVar6 == 0) {
              uVar14 = func_?(&TypeInfo__System__NullReferenceException);
              this_01 = (NullReferenceException *)func_?(uVar14);
              pSVar4 = (String *)func_?(&StringLiteral_routine_is_null);
              mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                        (this_01,pSVar4,(MethodInfo *)0x0);
              uVar14 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              FUN_?(this_01,uVar14);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              uVar14 = func_?(&TypeInfo__System__ArgumentException);
              this_02 = (InvalidEnumArgumentException *)func_?(uVar14);
              pSVar4 = (String *)
                       func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
              System.dll::System::ComponentModel::InvalidEnumArgumentException::
              InvalidEnumArgumentException__ctor_1(this_02,pSVar4,(MethodInfo *)0x0);
              uVar14 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              FUN_?(this_02,uVar14);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this == (LoadingScreenHandler *)0x0) {
              FUN_?();
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pvVar16 = (this->fields)._._._._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcVar15 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcRam_? = pcVar15;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar16,lVar6);
            return;
          }
        }
      }
code_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_Start
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVJoinState>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LoadingScreenHandler__OnJoinStateChanged_MVJoinState_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).planetNameText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).loadingTextMessage;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,::StringLiteral__);
      pRVar2 = (this->fields).centerTransform;
      if (pRVar2 != (RectTransform *)0x0) {
        pCVar3 = (CanvasGroup *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)pRVar2,
                             UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                            );
        bVar4 = iRam_? != 0;
        (this->fields).centerCanvasGroup = pCVar3;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields).centerCanvasGroup >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pPVar9 = (this->fields).loadingBar;
        if (pPVar9 != (ProgressBar *)0x0) {
          this_00 = (pPVar9->fields).progressBar;
          pMVar10 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
          (pPVar9->fields).progress = 0.0;
          if (this_00 != (Scrollbar *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                      (this_00,0.0,(MethodInfo *)0x0);
            pCVar3 = (this->fields).centerCanvasGroup;
            if (pCVar3 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (pCVar3,0.0,(MethodInfo *)0x0);
              pRVar2 = (this->fields).centerTransform;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              fVar11 = (this->fields).startCenterScale;
              pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
              CStack_13.r = (pVVar12->oneVector).x;
              CStack_13.g = (pVVar12->oneVector).y;
              fVar14 = (pVVar12->oneVector).z * fVar11;
              if (pRVar2 != (RectTransform *)0x0) {
                CStack_15.g = CStack_13.g * fVar11;
                CStack_15.r = CStack_13.r * fVar11;
                CStack_15.b = fVar14;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar16 = (pRVar2->fields)._._._.m_CachedPtr;
                if (pvVar16 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pcVar17 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
                  uVar18 = func_?(&UNK_?);
                  FUN_?(uVar18,0);
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pcRam_? = pcVar17;
                (*pcRam_?)(pvVar16);
                this_01 = (this->fields).sceneObjects;
                if (this_01 != (GameObject *)0x0) {
                  obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_01,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  fVar11 = (this->fields).startObjectsScale;
                  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
                  CStack_13.r = (pVVar12->oneVector).x;
                  CStack_13.g = (pVVar12->oneVector).y;
                  if (obj != (Transform *)0x0) {
                    CStack_13.g = CStack_13.g * fVar11;
                    CStack_13.r = CStack_13.r * fVar11;
                    CStack_13.b = (pVVar12->oneVector).z * fVar11;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar16 = (obj->fields)._._.m_CachedPtr;
                    if (pvVar16 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    pcVar17 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
                      uVar18 = func_?(&UNK_?);
                      FUN_?(uVar18,0);
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    pcRam_? = pcVar17;
                    (*pcRam_?)(pvVar16,&CStack_13);
                    pLVar19 = (this->fields).cube;
                    if ((pLVar19 != (LoadingCube *)0x0) &&
                       (pMVar20 = (pLVar19->fields)._CubeMaterial_k__BackingField,
                       pMVar20 != (Material *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Material);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      nameID = UnityEngine.CoreModule.dll::UnityEngine::Material::
                               Material_GetFirstPropertyNameIdByAttribute
                                         (pMVar20,ShaderPropertyFlags__Enum_MainColor,
                                          (MethodInfo *)0x0);
                      if (nameID < 0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                          FUN_?(TypeInfo__UnityEngine__Material);
                        }
                        nameID = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
                      }
                      pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                Material_GetColor_1(&CStack_15,pMVar20,nameID,(MethodInfo *)0x0);
                      uVar18._0_4_ = pCVar21->r;
                      uVar18._4_4_ = pCVar21->g;
                      pLVar19 = (this->fields).cube;
                      if (pLVar19 != (LoadingCube *)0x0) {
                        pMVar20 = (pLVar19->fields)._CubeMaterial_k__BackingField;
                        CStack_13.a = 0.0;
                        CStack_13.b = pCVar21->b;
                        CStack_13._0_8_ = uVar18;
                        if (pMVar20 != (Material *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                                    (pMVar20,&CStack_13,(MethodInfo *)0x0);
                          pMVar22 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg
                          ;
                          this_02 = (Action_2_Int32Enum_Object_ *)
                                    FUN_?(
                                                 TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate
                                                 );
                          mscorlib.dll::System::Action`2[Int32Enum,Object]::
                          Action_2_Int32Enum_Object___ctor
                                    (this_02,(Object *)this,
                                     MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                     ,(MethodInfo *)0x0);
                          pMVar22 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pMVar22,(Delegate *)this_02,
                                               (MethodInfo *)0x0);
                          if (pMVar22 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
                            TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
                                 (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
                          }
                          else {
                            pMVar23 = pMVar10;
                            if (pMVar22->klass ==
                                TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
                              pMVar23 = pMVar22;
                            }
                            if (pMVar23 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
                              FUN_?(pMVar22,
                                            TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate
                                           );
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
                                 pMVar23;
                            pMVar23 = pMVar10;
                            if (pMVar22->klass ==
                                TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
                              pMVar23 = pMVar22;
                            }
                            if (pMVar23 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
                              FUN_?(pMVar22);
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                          }
                          if (iRam_? != 0) {
                            uVar5 = (uint)((ulonglong)
                                            &TypeInfo__MVGameControllerBase->static_fields->
                                             OnReceivedGameMsg >> 0xc);
                            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                            do {
                              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                              LOCK();
                              bVar4 = uVar7 == *puVar8;
                              if (bVar4) {
                                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar4);
                          }
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if (pMVar24 != (MVGameControllerBase *)0x0) {
                            pAVar25 = (pMVar24->fields).onJoinStateChanged;
                            this_03 = (UnityAction_1_System_Int32Enum_ *)
                                      FUN_?(TypeInfo__System__Action<MVJoinState>);
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                      (this_03,(Object *)this,
                                       MethodInfo__LoadingScreenHandler__OnJoinStateChanged_MVJoinState_
                                       ,(MethodInfo *)0x0);
                            pDVar26 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pAVar25,(Delegate *)this_03,
                                                 (MethodInfo *)0x0);
                            pAVar27 = TypeInfo__System__Action<MVJoinState>;
                            if ((pDVar26 != (Delegate *)0x0) &&
                               (pMVar10 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
                                          FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVJoinState>),
                               pMVar10 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0)) {
                              FUN_?(pDVar26,pAVar27);
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase,0);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (pMVar24 != (MVGameControllerBase *)0x0) {
                              bVar4 = iRam_? != 0;
                              (pMVar24->fields).onJoinStateChanged =
                                   (Action_1_MVJoinState_ *)pMVar10;
                              if (bVar4) {
                                uVar5 = (uint)((ulonglong)&(pMVar24->fields).onJoinStateChanged >>
                                               0xc);
                                puVar8 = (ulonglong *)
                                         ((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
                                do {
                                  uVar7 = *puVar8;
                                  LOCK();
                                  uVar6 = *puVar8;
                                  if (uVar7 == uVar6) {
                                    *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (uVar7 != uVar6);
                              }
                              pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
                              if (pMVar24 != (MVGameControllerBase *)0x0) {
                                pAVar25 = (pMVar24->fields).onJoinStateChanged;
                                if (pAVar25 == (Action_1_MVJoinState_ *)0x0) {
                                  return;
                                }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*(pAVar25->fields)._._.invoke_impl)
                                          ((pAVar25->fields)._._.method_code,
                                           (TypeInfo__MVGameControllerBase->static_fields->instance
                                           ->fields)._joinState,(pAVar25->fields)._._.method);
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
                      goto code_?;
                    }
                  }
                  FUN_?();
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
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
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* LoadingScreenHandler() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler__ctor
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Dictionary__
            );
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
  Dictionary_2_System_Int32Enum_System_Int32__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,1,7,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
  Dictionary_2_System_Int32Enum_System_Int32__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,0,0x11,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
             ->klass->rgctx_data[0x22].method);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
  Dictionary_2_System_Int32Enum_System_Int32__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,2,7,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
             ->klass->rgctx_data[0x22].method);
  bVar3 = iRam_? != 0;
  (this->fields).eventCountLookup = (Dictionary_2_MV_Common_MVGameMode_System_Int32_ *)this_00;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).eventCountLookup >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = cRam_? == '\0';
  (this->fields).targetFadeInTime = 2.0;
  (this->fields).startCenterScale = 0.3;
  (this->fields).endCenterScale = 0.75;
  (this->fields).startObjectsScale = 0.5;
  (this->fields).endObjectsScale = 1.0;
  (this->fields).targetLoadingBarTime = 2.0;
  (this->fields).eventsCount = 0xf;
  (this->fields).currentEventCount = 1;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

