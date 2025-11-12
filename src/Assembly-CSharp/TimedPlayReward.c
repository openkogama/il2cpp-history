
/* Void ClaimReward() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_ClaimReward
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__TimedPlayReward__RewardTracker->static_fields;
  if ((pTVar1->IsCollected == 0) && (pTVar1->CollectedChanged != (Action *)0x0)) {
    pAVar2 = pTVar1->CollectedChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
    return;
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_Initialize
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimedPlayReward__OnCollectedChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                   &TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged >> 0xc
                  );
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  (this->fields)._RewardAvailable_k__BackingField = 0;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 == (GameObject *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,0,(MethodInfo *)0x0);
  (this->fields)._IsClaimable_k__BackingField = 0;
  TimedPlayReward_RequestRewardPermission(this,(MethodInfo *)0x0);
  return;
}


/* Void OnCollectedChanged() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnCollectedChanged
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WWWForm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Thank_you_for_playing_this_NEW_g);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__XP_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profile_id);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planet_id);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,0,(MethodInfo *)0x0);
    value = (this->fields)._RewardXP_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    auStack_1 = (undefined1  [8])0x0;
    puStack_2 = (undefined *)0x0;
    pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                        (value,(ReadOnlySpan_1_Char_ *)auStack_1,(IFormatProvider *)0x0,
                         (MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_Thank_you_for_playing_this_NEW_g,pSVar3,StringLiteral__XP_,
                         (MethodInfo *)0x0);
    pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    NotificationController::NotificationController_PushNotification
              (pSVar3,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
       (pGVar6 = (pMVar5->fields).GameEventManager, pGVar6 != (GameEventManager *)0x0)) {
      if ((pGVar6->fields).OnXPRewarded != (Action_1_Int32_ *)0x0) {
        pAVar7 = (pGVar6->fields).OnXPRewarded;
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,(this->fields)._RewardXP_k__BackingField,
                   (pAVar7->fields)._._.method);
      }
      bVar8 = cRam_? == '\0';
      (this->fields)._IsClaimable_k__BackingField = 0;
      if (bVar8) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      this_02 = (WWWForm *)FUN_?(TypeInfo__UnityEngine__WWWForm);
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                (this_02,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_token;
      if ((pGVar9 != (GameSessionData *)0x0) && (this_02 != (WWWForm *)0x0)) {
        pSVar10 = (pGVar9->fields).token;
        pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
                  (this_02,pSVar3,pSVar10,pEVar11,(MethodInfo *)0x0);
        pSVar3 = StringLiteral_profile_id;
        aIStackX_18[0].m_value = (pGVar9->fields).profileID;
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
        pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
                  (this_02,pSVar3,pSVar10,pEVar11,(MethodInfo *)0x0);
        pSVar3 = StringLiteral_planet_id;
        aIStackX_18[0].m_value = (pGVar9->fields).planetID;
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
        pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
                  (this_02,pSVar3,pSVar10,pEVar11,(MethodInfo *)0x0);
        pSVar3 = (pGVar9->fields).gameRewardURL;
        this_03 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_04 = (PostRequest *)FUN_?(TypeInfo__PostRequest);
        PostRequest::PostRequest__ctor
                  (this_04,pSVar3,this_02,
                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__AsyncWWWManager,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__CachedGetRequest);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
          if (this_04 != (PostRequest *)0x0) {
            bVar12 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if ((bVar12 <= (this_04->klass->_1).naturalAligment) &&
               ((this_04->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] ==
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AsyncWWWManager);
              }
              pPVar13 = this_04->klass;
              bVar12 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
              if (((pPVar13->_1).naturalAligment < bVar12) ||
                 ((pPVar13->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
                  (Il2CppClass *)TypeInfo__CachedGetRequest)) {
                FUN_?(this_04,TypeInfo__CachedGetRequest);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              cVar15 = (*(code *)pPVar13[1]._0.image)
                                 (this_04,TypeInfo__AsyncWWWManager->static_fields->cache,
                                  pPVar13[1]._0.gc_desc);
              if (cVar15 != '\0') {
                return;
              }
            }
          }
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__AsyncWWWManager);
          }
          this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
          if ((this_04 != (PostRequest *)0x0) &&
             (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) {
            pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                 (this_04->fields)._.requestPriority,
                                 MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                );
            if (pOVar16 != (Object *)0x0) {
              if (pOVar16[1].klass != (Object__Class *)0x0) {
                if (*(int *)&pOVar16[2].klass == *(int *)&((pOVar16[1].klass)->_0).namespaze) {
                  pOVar17 = pOVar16[1].klass;
                  iVar18 = *(int *)&(pOVar17->_0).namespaze * 2;
                  if (iVar18 < *(int *)&(pOVar17->_0).namespaze + 4) {
                    iVar18 = *(int *)&(pOVar17->_0).namespaze + 4;
                  }
                  FUN_?(pOVar16,iVar18,
                                MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                                ->klass->rgctx_data[5].rgctxDataDummy);
                }
                if (pOVar16[1].klass != (Object__Class *)0x0) {
                  FUN_?(pOVar16[1].klass,
                                (longlong)*(int *)((longlong)&pOVar16[1].monitor + 4),this_04);
                  if (pOVar16[1].klass != (Object__Class *)0x0) {
                    iVar19 = *(int *)((longlong)&pOVar16[1].monitor + 4) + 1;
                    iVar18 = 0;
                    if (iVar19 != *(int *)&((pOVar16[1].klass)->_0).namespaze) {
                      iVar18 = iVar19;
                    }
                    *(int *)((longlong)&pOVar16[1].monitor + 4) = iVar18;
                    *(int *)&pOVar16[2].klass = *(int *)&pOVar16[2].klass + 1;
                    piVar20 = (int *)((longlong)&pOVar16[2].klass + 4);
                    *piVar20 = *piVar20 + 1;
                    return;
                  }
                }
              }
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnDestroy
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimedPlayReward__OnCollectedChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_1_System_Object_ *)
           FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar1,(Object *)this,
             MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_1_System_Object_ *)
           FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar1,(Object *)this,
             MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  pAVar2 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar2 == (Action *)0x0) {
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar2,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar2,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)
                   &TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged >> 0xc
                  );
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
  return;
}


/* Void OnFinishedRewardCollecting(UnityWebRequest) */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnFinishedRewardCollecting
               (TimedPlayReward *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__profile_id__0__planet_id__1__to);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    aiStackX_18[0] = (pGVar1->fields).profileID;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_18);
    aiStackX_18[0] = (pGVar1->fields).planetID;
    arg1 = (Object *)FUN_?(uRam_?,aiStackX_18);
    pSVar3 = StringLiteral__profile_id__0__planet_id__1__to;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
              (&PStack_4,pOVar2,arg1,(Object *)(pGVar1->fields).token,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       ((pGVar1->fields).gameRewardDataURL,pSVar3,(MethodInfo *)0x0);
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    this_02 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
    AsyncWebRequest::AsyncWebRequest__ctor
              (this_02,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&TypeInfo__AsyncWWWManager,0);
      LOCK();
      UNLOCK();
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&TypeInfo__CachedGetRequest);
      LOCK();
      UNLOCK();
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                   );
      LOCK();
      UNLOCK();
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
      if (this_02 != (AsyncWebRequest *)0x0) {
        bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
        if ((bVar6 <= (this_02->klass->_1).naturalAligment) &&
           ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
            (Il2CppClass *)TypeInfo__CachedGetRequest)) {
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            PStack_4._args = (Object__Array *)&UNK_?;
            FUN_?(TypeInfo__AsyncWWWManager);
          }
          pAVar7 = this_02->klass;
          bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if (((pAVar7->_1).naturalAligment < bVar6) ||
             ((pAVar7->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            PStack_4._args = (Object__Array *)&UNK_?;
            FUN_?(this_02,TypeInfo__CachedGetRequest);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          PStack_4._args = (Object__Array *)&UNK_?;
          cVar9 = (*(code *)pAVar7[1]._0.image)
                            (this_02,TypeInfo__AsyncWWWManager->static_fields->cache,
                             pAVar7[1]._0.gc_desc);
          if (cVar9 != '\0') {
            return;
          }
        }
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        PStack_4._args = (Object__Array *)&UNK_?;
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if ((this_02 != (AsyncWebRequest *)0x0) &&
         (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) {
        PStack_4._args = (Object__Array *)&UNK_?;
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                            (this_02->fields).requestPriority,
                            MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                           );
        if (pOVar2 != (Object *)0x0) {
          if (pOVar2[1].klass != (Object__Class *)0x0) {
            if (*(int *)&pOVar2[2].klass == *(int *)&((pOVar2[1].klass)->_0).namespaze) {
              pOVar10 = pOVar2[1].klass;
              iVar11 = *(int *)&(pOVar10->_0).namespaze * 2;
              if (iVar11 < *(int *)&(pOVar10->_0).namespaze + 4) {
                iVar11 = *(int *)&(pOVar10->_0).namespaze + 4;
              }
              PStack_4._args = (Object__Array *)&UNK_?;
              FUN_?(pOVar2,iVar11,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                            ->klass->rgctx_data[5].rgctxDataDummy);
            }
            if (pOVar2[1].klass != (Object__Class *)0x0) {
              PStack_4._args = (Object__Array *)&UNK_?;
              FUN_?(pOVar2[1].klass,(longlong)*(int *)((longlong)&pOVar2[1].monitor + 4),
                            this_02);
              if (pOVar2[1].klass != (Object__Class *)0x0) {
                iVar12 = *(int *)((longlong)&pOVar2[1].monitor + 4) + 1;
                iVar11 = 0;
                if (iVar12 != *(int *)&((pOVar2[1].klass)->_0).namespaze) {
                  iVar11 = iVar12;
                }
                *(int *)((longlong)&pOVar2[1].monitor + 4) = iVar11;
                *(int *)&pOVar2[2].klass = *(int *)&pOVar2[2].klass + 1;
                piVar13 = (int *)((longlong)&pOVar2[2].klass + 4);
                *piVar13 = *piVar13 + 1;
                return;
              }
            }
          }
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnFinishedViewingAd() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnFinishedViewingAd
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WWWForm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Thank_you_for_playing_this_NEW_g);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__XP_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profile_id);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planet_id);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,0,(MethodInfo *)0x0);
    value = (this->fields)._RewardXP_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    auStack_1 = (undefined1  [8])0x0;
    uStack_2._0_4_ = 0;
    uStack_2._4_4_ = 0;
    pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                        (value,(ReadOnlySpan_1_Char_ *)auStack_1,(IFormatProvider *)0x0,
                         (MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_Thank_you_for_playing_this_NEW_g,pSVar3,StringLiteral__XP_,
                         (MethodInfo *)0x0);
    pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    NotificationController::NotificationController_PushNotification
              (pSVar3,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
       (pGVar6 = (pMVar5->fields).GameEventManager, pGVar6 != (GameEventManager *)0x0)) {
      if ((pGVar6->fields).OnXPRewarded != (Action_1_Int32_ *)0x0) {
        pAVar7 = (pGVar6->fields).OnXPRewarded;
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,(this->fields)._RewardXP_k__BackingField,
                   (pAVar7->fields)._._.method);
      }
      bVar8 = cRam_? == '\0';
      (this->fields)._IsClaimable_k__BackingField = 0;
      if (bVar8) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      this_02 = (WWWForm *)FUN_?(TypeInfo__UnityEngine__WWWForm);
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                (this_02,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_token;
      if ((pGVar9 != (GameSessionData *)0x0) && (this_02 != (WWWForm *)0x0)) {
        pSVar10 = (pGVar9->fields).token;
        pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
                  (this_02,pSVar3,pSVar10,pEVar11,(MethodInfo *)0x0);
        pSVar3 = StringLiteral_profile_id;
        aIStackX_18[0].m_value = (pGVar9->fields).profileID;
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
        pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
                  (this_02,pSVar3,pSVar10,pEVar11,(MethodInfo *)0x0);
        pSVar3 = StringLiteral_planet_id;
        aIStackX_18[0].m_value = (pGVar9->fields).planetID;
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
        pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_1
                  (this_02,pSVar3,pSVar10,pEVar11,(MethodInfo *)0x0);
        pSVar3 = (pGVar9->fields).gameRewardURL;
        this_03 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__TimedPlayReward__OnFinishedRewardCollecting_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        this_04 = (PostRequest *)FUN_?(TypeInfo__PostRequest);
        PostRequest::PostRequest__ctor
                  (this_04,pSVar3,this_02,
                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__AsyncWWWManager,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__CachedGetRequest);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
          if (this_04 != (PostRequest *)0x0) {
            bVar12 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if ((bVar12 <= (this_04->klass->_1).naturalAligment) &&
               ((this_04->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] ==
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AsyncWWWManager);
              }
              pPVar13 = this_04->klass;
              bVar12 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
              if (((pPVar13->_1).naturalAligment < bVar12) ||
                 ((pPVar13->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
                  (Il2CppClass *)TypeInfo__CachedGetRequest)) {
                FUN_?(this_04,TypeInfo__CachedGetRequest);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              cVar15 = (*(code *)pPVar13[1]._0.image)
                                 (this_04,TypeInfo__AsyncWWWManager->static_fields->cache,
                                  pPVar13[1]._0.gc_desc);
              if (cVar15 != '\0') {
                return;
              }
            }
          }
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__AsyncWWWManager);
          }
          this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
          if ((this_04 != (PostRequest *)0x0) &&
             (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) {
            pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                 (this_04->fields)._.requestPriority,
                                 MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                );
            if (pOVar16 != (Object *)0x0) {
              if (pOVar16[1].klass != (Object__Class *)0x0) {
                if (*(int *)&pOVar16[2].klass == *(int *)&((pOVar16[1].klass)->_0).namespaze) {
                  pOVar17 = pOVar16[1].klass;
                  iVar18 = *(int *)&(pOVar17->_0).namespaze * 2;
                  if (iVar18 < *(int *)&(pOVar17->_0).namespaze + 4) {
                    iVar18 = *(int *)&(pOVar17->_0).namespaze + 4;
                  }
                  FUN_?(pOVar16,iVar18,
                                MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                                ->klass->rgctx_data[5].rgctxDataDummy);
                }
                if (pOVar16[1].klass != (Object__Class *)0x0) {
                  FUN_?(pOVar16[1].klass,
                                (longlong)*(int *)((longlong)&pOVar16[1].monitor + 4),this_04);
                  if (pOVar16[1].klass != (Object__Class *)0x0) {
                    iVar19 = *(int *)((longlong)&pOVar16[1].monitor + 4) + 1;
                    iVar18 = 0;
                    if (iVar19 != *(int *)&((pOVar16[1].klass)->_0).namespaze) {
                      iVar18 = iVar19;
                    }
                    *(int *)((longlong)&pOVar16[1].monitor + 4) = iVar18;
                    *(int *)&pOVar16[2].klass = *(int *)&pOVar16[2].klass + 1;
                    piVar20 = (int *)((longlong)&pOVar16[2].klass + 4);
                    *piVar20 = *piVar20 + 1;
                    return;
                  }
                }
              }
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnRewardData(UnityWebRequest) */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_OnRewardData
               (TimedPlayReward *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimedPlayReward__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimedPlayReward::RewardData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WaitForTicks);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_no_gold_reward_available);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (www->fields).m_DownloadHandler;
    if (pDVar2 != (DownloadHandler *)0x0) {
      pSVar1 = (String *)
               (*(pDVar2->klass->vtable).GetText.methodPtr)
                         (pDVar2,(pDVar2->klass->vtable).GetText.method);
      if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar3 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                         (pSVar1,
                          TimedPlayReward__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimedPlayReward::RewardData>_System__String_
                         );
      if (pOVar3 != (Object *)0x0) {
        (this->fields)._RewardXP_k__BackingField = *(int32_t *)&pOVar3[1].monitor;
        (this->fields)._RewardAvailable_k__BackingField = *(bool *)&pOVar3[1].klass;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,(this->fields)._RewardAvailable_k__BackingField,(MethodInfo *)0x0);
          TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected =
               (this->fields)._RewardAvailable_k__BackingField == 0;
          if ((this->fields)._RewardAvailable_k__BackingField != 0) {
            iVar4 = (this->fields).timeInSeconds;
            this_01 = (WaitForTicks *)FUN_?(TypeInfo__WaitForTicks);
            WaitForTicks::WaitForTicks__ctor(this_01,iVar4 * 1000,(MethodInfo *)0x0);
            bVar5 = iRam_? == 0;
            (this->fields).waitForTicks = this_01;
            if (bVar5) {
              return;
            }
            uVar6 = (uint)((ulonglong)&(this->fields).waitForTicks >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar1 = StringLiteral_no_gold_reward_available;
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
          pIVar10 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar10 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar10,3,pSVar1);
            return;
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void RequestRewardPermission() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_RequestRewardPermission
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__profile_id__0__planet_id__1__to);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    aiStackX_18[0] = (pGVar1->fields).profileID;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_18);
    aiStackX_18[0] = (pGVar1->fields).planetID;
    arg1 = (Object *)FUN_?(uRam_?,aiStackX_18);
    pSVar3 = StringLiteral__profile_id__0__planet_id__1__to;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
              (&PStack_4,pOVar2,arg1,(Object *)(pGVar1->fields).token,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       ((pGVar1->fields).gameRewardDataURL,pSVar3,(MethodInfo *)0x0);
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__TimedPlayReward__OnRewardData_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    this_02 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
    AsyncWebRequest::AsyncWebRequest__ctor
              (this_02,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&TypeInfo__AsyncWWWManager,0);
      LOCK();
      UNLOCK();
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&TypeInfo__CachedGetRequest);
      LOCK();
      UNLOCK();
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                   );
      LOCK();
      UNLOCK();
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
      if (this_02 != (AsyncWebRequest *)0x0) {
        bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
        if ((bVar6 <= (this_02->klass->_1).naturalAligment) &&
           ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
            (Il2CppClass *)TypeInfo__CachedGetRequest)) {
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            PStack_4._args = (Object__Array *)&UNK_?;
            FUN_?(TypeInfo__AsyncWWWManager);
          }
          pAVar7 = this_02->klass;
          bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if (((pAVar7->_1).naturalAligment < bVar6) ||
             ((pAVar7->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            PStack_4._args = (Object__Array *)&UNK_?;
            FUN_?(this_02,TypeInfo__CachedGetRequest);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          PStack_4._args = (Object__Array *)&UNK_?;
          cVar9 = (*(code *)pAVar7[1]._0.image)
                            (this_02,TypeInfo__AsyncWWWManager->static_fields->cache,
                             pAVar7[1]._0.gc_desc);
          if (cVar9 != '\0') {
            return;
          }
        }
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        PStack_4._args = (Object__Array *)&UNK_?;
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if ((this_02 != (AsyncWebRequest *)0x0) &&
         (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) {
        PStack_4._args = (Object__Array *)&UNK_?;
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                            (this_02->fields).requestPriority,
                            MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                           );
        if (pOVar2 != (Object *)0x0) {
          if (pOVar2[1].klass != (Object__Class *)0x0) {
            if (*(int *)&pOVar2[2].klass == *(int *)&((pOVar2[1].klass)->_0).namespaze) {
              pOVar10 = pOVar2[1].klass;
              iVar11 = *(int *)&(pOVar10->_0).namespaze * 2;
              if (iVar11 < *(int *)&(pOVar10->_0).namespaze + 4) {
                iVar11 = *(int *)&(pOVar10->_0).namespaze + 4;
              }
              PStack_4._args = (Object__Array *)&UNK_?;
              FUN_?(pOVar2,iVar11,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                            ->klass->rgctx_data[5].rgctxDataDummy);
            }
            if (pOVar2[1].klass != (Object__Class *)0x0) {
              PStack_4._args = (Object__Array *)&UNK_?;
              FUN_?(pOVar2[1].klass,(longlong)*(int *)((longlong)&pOVar2[1].monitor + 4),
                            this_02);
              if (pOVar2[1].klass != (Object__Class *)0x0) {
                iVar12 = *(int *)((longlong)&pOVar2[1].monitor + 4) + 1;
                iVar11 = 0;
                if (iVar12 != *(int *)&((pOVar2[1].klass)->_0).namespaze) {
                  iVar11 = iVar12;
                }
                *(int *)((longlong)&pOVar2[1].monitor + 4) = iVar11;
                *(int *)&pOVar2[2].klass = *(int *)&pOVar2[2].klass + 1;
                piVar13 = (int *)((longlong)&pOVar2[2].klass + 4);
                *piVar13 = *piVar13 + 1;
                return;
              }
            }
          }
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::TimedPlayReward::TimedPlayReward_UpdateControllerUpdate
               (TimedPlayReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._RewardAvailable_k__BackingField == 0) {
    return;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pWVar1 = (this->fields).waitForTicks;
    if (pWVar1 != (WaitForTicks *)0x0) {
      bVar2 = WaitForTicks::WaitForTicks_get_TimeIsUp(pWVar1,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        iVar3 = (this->fields).timeInSeconds;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame *)0x0) {
          iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                            (this_01,(MethodInfo *)0x0);
          pWVar1 = (this->fields).waitForTicks;
          if (pWVar1 != (WaitForTicks *)0x0) {
            iVar5 = (pWVar1->fields).startTicks;
            pTVar6 = this->klass;
            (this->fields)._IsClaimable_k__BackingField = 0;
            (*(pTVar6->vtable).DisableEffects.methodPtr)
                      (this,(pTVar6->vtable).DisableEffects.method);
            fVar7 = (float)((this->fields).timeInSeconds * 1000);
            (*(this->klass->vtable).UpdateOutline.methodPtr)
                      (this,(fVar7 - (float)((iVar3 * 1000 + iVar5) - iVar4)) / fVar7,
                       (this->klass->vtable).UpdateOutline.method);
            return;
          }
        }
      }
      else {
        (this->fields)._IsClaimable_k__BackingField = 1;
        (this->fields)._RewardAvailable_k__BackingField = 0;
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,2);
        key = (Object *)FUN_?(uRam_?,auStackX_8);
        auStackX_8[0] = 8;
        value = (Object *)FUN_?(uRam_?,auStackX_8);
        if (this_02 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,key,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationController);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_03 = NotificationController::NotificationController_get_NotificationsManager
                                ((MethodInfo *)0x0);
            if (this_03 == (NotificationsManager *)0x0) goto DAT_?;
            NotificationsManager::NotificationsManager_InstantiateNotification
                      (this_03,NotificationType__Enum_GoldRewardReady,
                       (Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0);
          }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(this->klass->vtable).EnableEffects.methodPtr)
                    (this,(this->klass->vtable).EnableEffects.method);
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

