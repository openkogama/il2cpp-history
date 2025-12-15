
/* Void DestroyNotification() */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_DestroyNotification
               (WinningWarningNotification *this,MethodInfo *method)

{
  iVar1 = (*(this->klass->vtable).get_Lifetime.methodPtr)
                    (this,(this->klass->vtable).get_Lifetime.method);
  (this->fields)._.timeSinceStart = (float)iVar1;
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_Initialize
               (WinningWarningNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningWarningNotification__DestroyNotification__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)0x0;
  pOStackX_20 = (Object *)0x0;
  auStackX_10[0] = 9;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    key = *(int32_t *)&pOVar2[1].klass;
    auStackX_10[0] = 5;
    pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__GameStatCounterType->_0).element_class) {
        FUN_?(pOVar2);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = *(char *)&pOVar2[1].klass;
      auStackX_10[0] = 4;
      pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar2);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)&pOVar2[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar6 != (MVGameControllerBase *)0x0) &&
            (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
           (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pMVar8->fields).players;
          if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
            bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                               ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_20
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                               );
            if (bVar9 == 0) {
              return;
            }
            pTVar10 = (this->fields).scoreText;
            (this->fields)._.timeSinceStart = 0.0;
            auStackX_10[0] = 1;
            pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
            pAVar11 = (Action *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (data,pOVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pTVar10 != (Text *)0x0) {
              pAVar12 = pAVar1;
              if (pAVar11 != (Action *)0x0) {
                if (pAVar11->klass == pARam0000000182dbdde0) {
                  pAVar12 = pAVar11;
                }
                if (pAVar12 == (Action *)0x0) {
                  FUN_?(pAVar11,pARam0000000182dbdde0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              (*(pTVar10->klass->vtable).set_text.methodPtr)
                        (pTVar10,pAVar12,(pTVar10->klass->vtable).set_text.method);
              if (((pOStackX_20 != (Object *)0x0) && (pOStackX_20[7].klass != (Object__Class *)0x0))
                 && (pTVar10 = (this->fields).userNameText, pTVar10 != (Text *)0x0)) {
                (*(pTVar10->klass->vtable).set_text.methodPtr)
                          (pTVar10,((pOStackX_20[7].klass)->_0).namespaze);
                pNVar13 = (this->fields).fader;
                if (pNVar13 != (NotificationFade *)0x0) {
                  this_01 = (pNVar13->fields).group;
                  (pNVar13->fields).playing = 1;
                  (pNVar13->fields).pauseAt = (pNVar13->fields).duration;
                  if (this_01 != (CanvasGroup *)0x0) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                              (this_01,0.0,(MethodInfo *)0x0);
                    bVar14 = cRam_? == '\0';
                    (pNVar13->fields).currentTime = 0.0;
                    if (bVar14) {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Count__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pLVar15 = (this->fields).winningConditionImages;
                    if (pLVar15 != (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) {
                      lVar16 = 0x20;
                      pAVar11 = pAVar1;
                      while (uVar17 = (uint)pAVar11, (int)uVar17 < (pLVar15->fields)._size) {
                        pLVar15 = (this->fields).winningConditionImages;
                        if (pLVar15 ==
                            (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0)
                        goto code_?;
                        if ((uint)(pLVar15->fields)._size <= uVar17) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        pWVar18 = (pLVar15->fields)._items;
                        if (pWVar18 == (WinningWarningNotification_WinninConditionImage__Array *)0x0)
                        goto code_?;
                        if ((uint)pWVar18->max_length <= uVar17) {
                          FUN_?();
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        lVar19 = *(longlong *)((longlong)pWVar18->vector + lVar16 + -0x20);
                        if (lVar19 == 0) goto code_?;
                        pLVar15 = (this->fields).winningConditionImages;
                        if (*(char *)(lVar19 + 0x10) == cVar4) {
                          lVar19 = FUN_?(pLVar15);
                          if (((lVar19 == 0) || (*(Component **)(lVar19 + 0x18) == (Component *)0x0)
                              ) || (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_gameObject
                                                        (*(Component **)(lVar19 + 0x18),
                                                         (MethodInfo *)0x0),
                                   this_02 == (GameObject *)0x0)) goto code_?;
                          bVar9 = 1;
                        }
                        else {
                          lVar19 = FUN_?(pLVar15);
                          if (((lVar19 == 0) || (*(Component **)(lVar19 + 0x18) == (Component *)0x0)
                              ) || (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_gameObject
                                                        (*(Component **)(lVar19 + 0x18),
                                                         (MethodInfo *)0x0),
                                   this_02 == (GameObject *)0x0)) goto code_?;
                          bVar9 = 0;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (this_02,bVar9,(MethodInfo *)0x0);
                        pLVar15 = (this->fields).winningConditionImages;
                        pAVar11 = (Action *)(ulonglong)(uVar17 + 1);
                        lVar16 = lVar16 + 8;
                        if (pLVar15 ==
                            (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0)
                        goto code_?;
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&StringLiteral_S);
                        LOCK();
                        UNLOCK();
                        FUN_?(&StringLiteral_KILL);
                        LOCK();
                        UNLOCK();
                        FUN_?(&StringLiteral_STAR);
                        LOCK();
                        UNLOCK();
                        FUN_?(&StringLiteral__LEFT_);
                        LOCK();
                        UNLOCK();
                        FUN_?(&::StringLiteral__);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((cVar4 == '\x01') ||
                         ((pSVar20 = StringLiteral_STAR, cVar4 != '\x03' &&
                          (pSVar20 = ::StringLiteral__, cVar4 == '\x06')))) {
                        pSVar20 = StringLiteral_KILL;
                      }
                      if (1 < iVar5) {
                        pSVar20 = mscorlib.dll::System::String::String_Concat_4
                                            (pSVar20,StringLiteral_S,(MethodInfo *)0x0);
                      }
                      pSVar20 = mscorlib.dll::System::String::String_Concat_4
                                          (pSVar20,StringLiteral__LEFT_,(MethodInfo *)0x0);
                      pTVar10 = (this->fields).warningText;
                      if (pTVar10 != (Text *)0x0) {
                        (*(pTVar10->klass->vtable).set_text.methodPtr)
                                  (pTVar10,pSVar20,(pTVar10->klass->vtable).set_text.method);
                        pNVar13 = (this->fields).fader;
                        if (pNVar13 != (NotificationFade *)0x0) {
                          pAVar11 = (pNVar13->fields).OnFinished;
                          this_03 = (NavMesh_OnNavMeshPreUpdate *)
                                    FUN_?(TypeInfo__System__Action);
                          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                          NavMesh_OnNavMeshPreUpdate__ctor
                                    (this_03,(Object *)this,
                                     MethodInfo__WinningWarningNotification__DestroyNotification__,
                                     (MethodInfo *)0x0);
                          pAVar11 = (Action *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pAVar11,(Delegate *)this_03,
                                               (MethodInfo *)0x0);
                          if (pAVar11 == (Action *)0x0) {
                            (pNVar13->fields).OnFinished = (Action *)0x0;
                          }
                          else {
                            pAVar12 = pAVar1;
                            if (pAVar11->klass == TypeInfo__System__Action) {
                              pAVar12 = pAVar11;
                            }
                            if (pAVar12 == (Action *)0x0) {
                              FUN_?(pAVar11);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            (pNVar13->fields).OnFinished = pAVar12;
                            if (pAVar11->klass == TypeInfo__System__Action) {
                              pAVar1 = pAVar11;
                            }
                            if (pAVar1 == (Action *)0x0) {
                              FUN_?(pAVar11);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                          }
                          if (iRam_? == 0) {
                            return;
                          }
                          uVar17 = (uint)((ulonglong)&(pNVar13->fields).OnFinished >> 0xc);
                          uVar21 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
                          do {
                            uVar22 = *(ulonglong *)(uVar21 * 8 + 0xADDR);
                            puVar23 = (ulonglong *)(uVar21 * 8 + 0xADDR);
                            LOCK();
                            bVar14 = uVar22 == *puVar23;
                            if (bVar14) {
                              *puVar23 = uVar22 | 1L << (uVar17 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar14);
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
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SelectWinningConditionImage(GameStatCounterType, MVPlayer) */

void Assembly-CSharp.dll::WinningWarningNotification::
     WinningWarningNotification_SelectWinningConditionImage
               (WinningWarningNotification *this,GameStatCounterType__Enum winningConditionType,
               MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).winningConditionImages;
  uVar2 = 0;
  if (pLVar1 != (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).winningConditionImages;
      if (pLVar1 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pWVar5 = (pLVar1->fields)._items;
      if (pWVar5 == (WinningWarningNotification_WinninConditionImage__Array *)0x0) break;
      if ((uint)pWVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pWVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      pLVar1 = (this->fields).winningConditionImages;
      if (*(char *)(lVar6 + 0x10) == (char)winningConditionType) {
        lVar6 = FUN_?(pLVar1);
        if (((lVar6 == 0) || (*(Component **)(lVar6 + 0x18) == (Component *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)(lVar6 + 0x18),(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        value = 1;
      }
      else {
        lVar6 = FUN_?(pLVar1);
        if (((lVar6 == 0) || (*(Component **)(lVar6 + 0x18) == (Component *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)(lVar6 + 0x18),(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        value = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).winningConditionImages;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (pLVar1 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetWarningText(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_SetWarningText
               (WinningWarningNotification *this,GameStatCounterType__Enum winningConditionType,
               int32_t scoreLeft,MethodInfo *method)

{
  cVar1 = (char)winningConditionType;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_S);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_KILL);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_STAR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__LEFT_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cVar1 == '\x01') ||
     ((pSVar2 = StringLiteral_STAR, cVar1 != '\x03' && (pSVar2 = ::StringLiteral__, cVar1 == '\x06')
      ))) {
    pSVar2 = StringLiteral_KILL;
  }
  if (1 < scoreLeft) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,StringLiteral_S,(MethodInfo *)0x0)
    ;
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar2,StringLiteral__LEFT_,(MethodInfo *)0x0);
  pTVar3 = (this->fields).warningText;
  if (pTVar3 == (Text *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (pTVar3->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pTVar3,pSVar2,(pTVar3->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
  return;
}

