
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_Initialize
               (HurryUpNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HurryUpNotification__DestroyNotification__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 0x11;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).timeStamp = *(int32_t *)&pOVar1[1].klass;
    auStackX_8[0] = 4;
    pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = cRam_? == '\0';
      (this->fields).timeLeftFromTimeStamp = *(int32_t *)&pOVar1[1].klass;
      if (bVar3) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 != (MVGameControllerBase *)0x0) &&
         (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) {
        iVar6 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar5,(MethodInfo *)0x0);
        iVar7 = (int)((float)(((this->fields).timeLeftFromTimeStamp + (this->fields).timeStamp) -
                              iVar6) / _UNK_?);
        if (iVar7 < 0xb) {
          pNVar8 = (this->fields).countdownFader;
          if (pNVar8 == (NotificationFade *)0x0) goto code_?;
          pCVar9 = (pNVar8->fields).group;
          (pNVar8->fields).playing = 1;
          (pNVar8->fields).pauseAt = (pNVar8->fields).duration;
          if (pCVar9 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar9,0.0,(MethodInfo *)0x0);
          (pNVar8->fields).currentTime = 0.0;
          iVar10 = (*(this->klass->vtable).get_Lifetime.methodPtr)
                             (this,(this->klass->vtable).get_Lifetime.method);
          (this->fields)._.timeSinceStart =
               (float)(iVar10 - iVar7) - TypeRef__System__Activator__T._0_4_;
        }
        else {
          pNVar8 = (this->fields).fader;
          if (pNVar8 == (NotificationFade *)0x0) goto code_?;
          pCVar9 = (pNVar8->fields).group;
          (pNVar8->fields).playing = 1;
          (pNVar8->fields).pauseAt = (pNVar8->fields).duration;
          if (pCVar9 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar9,0.0,(MethodInfo *)0x0);
          (pNVar8->fields).currentTime = 0.0;
        }
        pNVar8 = (this->fields).fader;
        if (pNVar8 != (NotificationFade *)0x0) {
          pAVar11 = (pNVar8->fields).OnFinished;
          this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_00,(Object *)this,MethodInfo__HurryUpNotification__DestroyNotification__,
                     (MethodInfo *)0x0);
          pAVar11 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar11,(Delegate *)this_00,(MethodInfo *)0x0);
          if (pAVar11 == (Action *)0x0) {
            (pNVar8->fields).OnFinished = (Action *)0x0;
          }
          else {
            pAVar12 = (Action *)0x0;
            if (pAVar11->klass == TypeInfo__System__Action) {
              pAVar12 = pAVar11;
            }
            if (pAVar12 == (Action *)0x0) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (pNVar8->fields).OnFinished = pAVar12;
            pAVar12 = (Action *)0x0;
            if (pAVar11->klass == TypeInfo__System__Action) {
              pAVar12 = pAVar11;
            }
            if (pAVar12 == (Action *)0x0) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar13 = (uint)((ulonglong)&(pNVar8->fields).OnFinished >> 0xc);
            uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar15 == *puVar16;
              if (bVar3) {
                *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar4 != (MVGameControllerBase *)0x0) &&
             (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) {
            pAVar17 = (pMVar5->fields).OnWinningConditionFulfilled;
            this_01 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<IWinningCondition>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,
                       (MethodInfo *)0x0);
            pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar17,(Delegate *)this_01,(MethodInfo *)0x0);
            pAVar19 = TypeInfo__System__Action<IWinningCondition>;
            if (pDVar18 == (Delegate *)0x0) {
              (pMVar5->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
            }
            else {
              pAVar17 = (Action_1_IWinningCondition_ *)
                        FUN_?(pDVar18,TypeInfo__System__Action<IWinningCondition>);
              if (pAVar17 == (Action_1_IWinningCondition_ *)0x0) {
                FUN_?(pDVar18,pAVar19);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (pMVar5->fields).OnWinningConditionFulfilled = pAVar17;
              pAVar19 = TypeInfo__System__Action<IWinningCondition>;
              lVar20 = FUN_?(pDVar18,TypeInfo__System__Action<IWinningCondition>);
              if (lVar20 == 0) {
                FUN_?(pDVar18,pAVar19);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar13 = (uint)((ulonglong)&(pMVar5->fields).OnWinningConditionFulfilled >> 0xc);
              uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
              do {
                uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
                puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
                LOCK();
                bVar3 = uVar15 == *puVar16;
                if (bVar3) {
                  *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
                }
                UNLOCK();
              } while (!bVar3);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_OnDestroy
               (HurryUpNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 == (MVNetworkGame *)0x0) goto DAT_?;
      pAVar5 = (pMVar4->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__HurryUpNotification__OnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar7 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar6 == (Delegate *)0x0) {
        (pMVar4->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar5 = (Action_1_IWinningCondition_ *)
                  FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
        if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) {
          FUN_?(pDVar6,pAVar7);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pMVar4->fields).OnWinningConditionFulfilled = pAVar5;
        pAVar7 = TypeInfo__System__Action<IWinningCondition>;
        lVar8 = FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
        if (lVar8 == 0) {
          FUN_?(pDVar6,pAVar7);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar4->fields).OnWinningConditionFulfilled >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HurryUpNotification::HurryUpNotification_Update
               (HurryUpNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Sound___CountDown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__00_00_00);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    uVar2 = 0;
    iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    score = ((this->fields).timeLeftFromTimeStamp + (this->fields).timeStamp) - iVar3;
    pSVar4 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (score,(GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                        (MethodInfo *)0x0);
    if (score < 1) {
      pSVar4 = StringLiteral__00_00_00;
    }
    iVar5 = FUN_?((float)score / _UNK_?);
    pTVar6 = (this->fields).timeText;
    if (pTVar6 != (Text *)0x0) {
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,pSVar4,(pTVar6->klass->vtable).set_text.method);
      if ((((float)score <= _UNK_?) && (iVar5 != (this->fields).previousSecondCount)) &&
         (900 < score + iVar5 * -1000)) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        audioSource = (this->fields).countDownSound;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
        if (obj == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_7.x = 0.0;
        VStack_7.y = 0.0;
        VStack_7.z = 0.0;
        pvVar8 = (obj->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8,&VStack_7);
        if (this_01 == (AudioManager *)0x0) goto code_?;
        VStack_10.x = VStack_7.x;
        VStack_10.y = VStack_7.y;
        VStack_10.z = VStack_7.z;
        AudioManager::AudioManager_Play_2
                  (this_01,StringLiteral_Sound___CountDown,audioSource,&VStack_10,(MethodInfo *)0x0)
        ;
      }
      if (-1 < score) {
code_?:
        (this->fields).previousSecondCount = iVar5;
        return;
      }
      pNVar11 = (this->fields).fader;
      if (pNVar11 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_OnDisable(pNVar11,(MethodInfo *)0x0);
        pNVar11 = (this->fields).countdownFader;
        if (pNVar11 != (NotificationFade *)0x0) {
          NotificationFade::NotificationFade_OnDisable(pNVar11,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

