
/* Void ChangeState(XPBoostNotification+XPBoostStateType) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_ChangeState
               (XPBoostNotification *this,XPBoostNotification_XPBoostStateType__Enum newState,
               MethodInfo *method)

{
  (this->fields).currentState = (undefined1)newState;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stateStartTime = fVar1;
  return;
}


/* Void CloseNotification() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_CloseNotification
               (XPBoostNotification *this,MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._.pool;
    if (this_00 != (NotificationObjectPool *)0x0) {
      NotificationObjectPool::NotificationObjectPool_Return
                (this_00,(Notification *)this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CloseNotification(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_CloseNotification_1
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  pAVar1 = (this->fields).closeShrinkXEffectCurve;
  if (pAVar1 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar1,stateProgress,(MethodInfo *)0x0);
    fVar3 = (this->fields).backgroundOriginalWidth;
    pAVar1 = (this->fields).closeShrinkYEffectCurve;
    fVar4 = (this->fields).backgroundOriginalWidth;
    if (pAVar1 != (AnimationCurve *)0x0) {
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar1,stateProgress,(MethodInfo *)0x0);
      this_00 = (this->fields).backGround;
      if (this_00 != (RectTransform *)0x0) {
        value.y = ((this->fields).backgroundOriginalHeigt * fVar5 -
                  (this->fields).backgroundOriginalHeigt) +
                  (this->fields).backgroundOriginalSizeDelta.y;
        value.x = (fVar3 * fVar2 - fVar4) + (this->fields).backgroundOriginalSizeDelta.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void FadeOut(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_FadeOut
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  this_00 = (this->fields).backgroundCanvasGroup;
  this_01 = (this->fields).fadeOutCurve;
  if (this_01 != (AnimationCurve *)0x0) {
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_01,stateProgress,(MethodInfo *)0x0);
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleClosingDownState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleClosingDownState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  XPBoostNotification_UpdateBoostTextEffect(this,currentStateTime,(MethodInfo *)0x0);
  this_00 = (this->fields).fadeOutCurve;
  this_01 = (this->fields).backgroundCanvasGroup;
  if (this_00 != (AnimationCurve *)0x0) {
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,currentStateTime,(MethodInfo *)0x0);
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,value,(MethodInfo *)0x0);
      XPBoostNotification_CloseNotification_1(this,0.0,(MethodInfo *)0x0);
      if (_UNK_? < 3.9194113e-29) {
        XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleHighlightState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleHighlightState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  if (0 < (this->fields).currentMemberBeingHighlighted) {
    XPBoostNotification_UpdateBoostTextEffect(this,currentStateTime,(MethodInfo *)0x0);
    XPBoostNotification_SwapMemberName(this,currentStateTime,(MethodInfo *)0x0);
  }
  if (_UNK_? < currentStateTime) {
    XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleStartState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleStartState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  XPBoostNotification_UpdateBoostTextEffect(this,currentStateTime - _UNK_?,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields).fadeOutCurve;
  this_01 = (this->fields).backgroundCanvasGroup;
  if (this_00 != (AnimationCurve *)0x0) {
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,_UNK_? - currentStateTime,
                       (MethodInfo *)(_UNK_? - currentStateTime));
    if (this_01 != (CanvasGroup *)0x0) {
      stateProgress = &UNK_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,value,(MethodInfo *)0x0);
      XPBoostNotification_CloseNotification_1(this,(float)stateProgress,(MethodInfo *)0x0);
      if (_UNK_? < (float)this) {
        XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleState() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleState
               (XPBoostNotification *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).stateStartTime;
  switch((this->fields).currentState) {
  case 0:
  case 5:
    break;
  case 1:
    pGVar2 = (this->fields).content;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      bVar3 = 0;
      func_?();
      pbVar4 = (byte *)(unaff_EBX + -0x42);
      bVar5 = (byte)unaff_EBX;
      bVar6 = CARRY1(*pbVar4,bVar5) || CARRY1(*pbVar4 + bVar5,bVar3);
      *pbVar4 = *pbVar4 + bVar5 + bVar3;
      bVar7 = (byte)((uint)unaff_EBX >> 8);
      bVar3 = bVar7 + bVar5;
      *(char *)(extraout_EDX + -0x4befb941) =
           *(char *)(extraout_EDX + -0x4befb941) + bVar3 + bVar6 +
           (CARRY1(bVar7,bVar5) || CARRY1(bVar3,bVar6));
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      pGVar2 = (this->fields).content;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
    if (_UNK_? < fVar1) {
      (this->fields).currentState = 2;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar2 = (this->fields).content;
      (this->fields).stateStartTime = fVar1;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).Update.method)();
        return;
      }
      goto code_?;
    }
    break;
  case 2:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar1 - _UNK_?,(MethodInfo *)0x0);
    pAVar10 = (this->fields).fadeOutCurve;
    pCVar11 = (this->fields).backgroundCanvasGroup;
    if (pAVar10 == (AnimationCurve *)0x0) goto code_?;
    fVar1 = _UNK_? - fVar1;
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar10,fVar1,(MethodInfo *)0x0);
    if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar11,value,(MethodInfo *)0x0);
    XPBoostNotification_CloseNotification_1(this,fVar1,(MethodInfo *)0x0);
    bVar6 = _UNK_? == 3.9196036e-29;
    bVar12 = 3.9196036e-29 < _UNK_?;
    goto code_?;
  case 3:
    if (0 < (this->fields).currentMemberBeingHighlighted) {
      XPBoostNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
      XPBoostNotification_SwapMemberName(this,fVar1,(MethodInfo *)0x0);
    }
    bVar6 = fVar1 == _UNK_?;
    bVar12 = fVar1 < _UNK_?;
code_?:
    if (!bVar12 && !bVar6) {
      XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
    }
    break;
  case 4:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
    pAVar10 = (this->fields).fadeOutCurve;
    pCVar11 = (this->fields).backgroundCanvasGroup;
    if ((pAVar10 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar10,fVar1,(MethodInfo *)0x0), pCVar11 == (CanvasGroup *)0x0))
    goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar11,fVar1,(MethodInfo *)0x0);
    XPBoostNotification_CloseNotification_1(this,0.0,(MethodInfo *)0x0);
    if (_UNK_? < 3.9196607e-29) {
      XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  return;
}


/* Void HandleWaitBeforeStart(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleWaitBeforeStart
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  pGVar1 = (this->fields).content;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = (this->fields).content;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    if (_UNK_? < currentStateTime) {
      (this->fields).currentState = 2;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar1 = (this->fields).content;
      (this->fields).stateStartTime = fVar3;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).Update.method)(this);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_Initialize
               (XPBoostNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)0x0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      pOVar4 = (Object__Class *)(pMVar3->fields)._._ActorNr_k__BackingField;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) {
        this_03 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               (pMVar5,(MethodInfo *)0x0);
        if (this_03 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar6 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)&stack0xffffffcc,this_03,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                             );
          player = pDVar6->_currentValue;
          while( true ) {
            bVar7 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffbc,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                              );
            if (bVar7 == 0) break;
            if ((player != (Object *)0x0) && (player[6].klass != pOVar4)) {
              pOVar8 = player;
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
              pMVar5 = (pMVar2->fields).playerContainer;
              if (pMVar5 == (MVPlayerContainer *)0x0) goto code_?;
              in_stack_9 = (MethodInfo *)0x0;
              player = (Object *)&stack0xffffffe8;
              bVar7 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                                (pMVar5,(int32_t)pOVar8[6].klass,(MVPlayer **)player,
                                 (MethodInfo *)0x0);
              if (bVar7 != 0) {
                if ((pOVar1 == (Object__Class *)0x0) ||
                   (this_00 = (pOVar1->_0).fields, this_00 == (FieldInfo *)0x0))
                goto code_?;
                bVar7 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_HasBenefit
                                  ((SubscriptionRulesWrapper *)this_00,
                                   SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  pLVar10 = (this->fields).memberList;
                  if (pLVar10 == (List_1_MVPlayer_ *)0x0) goto code_?;
                  pOVar4 = (Object__Class *)
                            MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_;
                  pOVar1 = (Object__Class *)
                            MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLVar10,
                             (Object *)
                             MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_
                             ,
                             MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_
                            );
                }
              }
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffbc,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_9);
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).memberList;
          if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            if ((this_01->fields)._size < 1) {
              pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pGVar11 != (GameObject *)0x0) {
                bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar11,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (pGVar11 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,0,(MethodInfo *)0x0);
                }
                this_02 = (this->fields)._.pool;
                if (this_02 != (NotificationObjectPool *)0x0) {
                  NotificationObjectPool::NotificationObjectPool_Return
                            (this_02,(Notification *)this,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = this;
                  return;
                }
              }
            }
            else {
              pTVar12 = (this->fields).UserNameText1;
              (this->fields).currentMemberBeingHighlighted = 0;
              if (this_01 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_01,0,
                                    MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                                   );
                if (((RVar13 != (RegexCharClass_SingleRange)0x0) &&
                    (*(int *)((int)RVar13 + 0x3c) != 0)) && (pTVar12 != (Text *)0x0)) {
                  (*(code *)(pTVar12->klass->vtable).set_text.method)();
                  pLVar10 = (this->fields).memberList;
                  if (pLVar10 != (List_1_MVPlayer_ *)0x0) {
                    pRVar14 = (this->fields).backGround;
                    fVar15 = (float)(pLVar10->fields)._size;
                    (this->fields)._.timeSinceStart =
                         (this->fields)._.timeSinceStart -
                         (fVar15 + fVar15 + _UNK_? + _UNK_?);
                    if (pRVar14 != (RectTransform *)0x0) {
                      __return_storage_ptr__ = (Rect *)&stack0xffffffcc;
                      pRVar16 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                RectTransform_get_rect
                                          (__return_storage_ptr__,pRVar14,(MethodInfo *)0x0);
                      pRVar14 = (this->fields).backGround;
                      (this->fields).backgroundOriginalWidth = pRVar16->m_Width;
                      if (pRVar14 != (RectTransform *)0x0) {
                        pRVar16 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                  RectTransform_get_rect
                                            ((Rect *)&stack0xffffffac,pRVar14,(MethodInfo *)0x0);
                        pRVar14 = (this->fields).backGround;
                        (this->fields).backgroundOriginalHeigt = pRVar16->m_Height;
                        if (pRVar14 != (RectTransform *)0x0) {
                          VVar17 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                   RectTransform_get_sizeDelta(pRVar14,(MethodInfo *)0x0);
                          (this->fields).backgroundOriginalSizeDelta.x =
                               (float)__return_storage_ptr__;
                          (this->fields).backgroundOriginalSizeDelta.y = (float)VVar17.y;
                          XPBoostNotification_UpdateBoostAmount(this,(MethodInfo *)0x0);
                          (this->fields).currentState = 1;
                          puVar18 = &UNK_?;
                          fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                             ((MethodInfo *)0x0);
                          (this->fields).stateStartTime = fVar15;
                          *unaff_FS_OFFSET = puVar18;
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
  func_?();
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Boolean IsMemberHighlightingDone() */

bool Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_IsMemberHighlightingDone
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).memberList;
  if (pLVar2 != (List_1_MVPlayer_ *)0x0) {
    return (pLVar2->fields)._size == (this->fields).currentMemberBeingHighlighted + 1;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void SlideInName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SlideInName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText1;
  }
  else {
    pTVar1 = (this->fields).UserNameText2;
  }
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      this_00 = (this->fields).slideUserNameInCurve;
      if (this_00 != (AnimationCurve *)0x0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (this_00,stateProgress,(MethodInfo *)0x0);
        uVar6._4_4_ = stateProgress;
        uVar6._0_4_ = fVar5;
        if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
          pTVar1 = (this->fields).UserNameText1;
        }
        else {
          pTVar1 = (this->fields).UserNameText2;
        }
        if (pTVar1 != (Text *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            value.z = fVar4;
            value.x = (float)uVar6;
            value.y = SUB84(uVar6,4);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SlideOutName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SlideOutName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText2;
  }
  else {
    pTVar1 = (this->fields).UserNameText1;
  }
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      this_00 = (this->fields).slideUserNameOutCurve;
      if (this_00 != (AnimationCurve *)0x0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (this_00,stateProgress,(MethodInfo *)0x0);
        uVar6._4_4_ = stateProgress;
        uVar6._0_4_ = fVar5;
        if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
          pTVar1 = (this->fields).UserNameText2;
        }
        else {
          pTVar1 = (this->fields).UserNameText1;
        }
        if (pTVar1 != (Text *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            value.z = fVar4;
            value.x = (float)uVar6;
            value.y = SUB84(uVar6,4);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartNewMemberHighlight() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_StartNewMemberHighlight
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    cRam_? = '\x01';
  }
  piVar1 = &(this->fields).currentMemberBeingHighlighted;
  *piVar1 = *piVar1 + 1;
  index = (this->fields).currentMemberBeingHighlighted;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).memberList;
  if ((index & 1) == 0) {
    pTVar2 = (this->fields).UserNameText1;
  }
  else {
    pTVar2 = (this->fields).UserNameText2;
  }
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    if (((RVar3 != (RegexCharClass_SingleRange)0x0) && (*(int *)((int)RVar3 + 0x3c) != 0)) &&
       (pTVar2 != (Text *)0x0)) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,*(undefined4 *)(*(int *)((int)RVar3 + 0x3c) + 0xc),
                 (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      XPBoostNotification_UpdateBoostAmount(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartNextState() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_StartNextState
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).memberList;
  if (pLVar1 != (List_1_MVPlayer_ *)0x0) {
    if ((pLVar1->fields)._size == (this->fields).currentMemberBeingHighlighted + 1) {
      (this->fields).currentState = 4;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar2;
      return;
    }
    (this->fields).currentState = 3;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    bVar3 = cRam_? == '\0';
    (this->fields).stateStartTime = fVar2;
    if (bVar3) {
      func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
      cRam_? = '\x01';
    }
    piVar4 = &(this->fields).currentMemberBeingHighlighted;
    *piVar4 = *piVar4 + 1;
    index = (this->fields).currentMemberBeingHighlighted;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).memberList;
    if ((index & 1) == 0) {
      pTVar5 = (this->fields).UserNameText1;
    }
    else {
      pTVar5 = (this->fields).UserNameText2;
    }
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
      if (((RVar6 != (RegexCharClass_SingleRange)0x0) && (*(int *)((int)RVar6 + 0x3c) != 0)) &&
         (pTVar5 != (Text *)0x0)) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)
                  (pTVar5,*(undefined4 *)(*(int *)((int)RVar6 + 0x3c) + 0xc));
        XPBoostNotification_UpdateBoostAmount(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SwapMemberName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SwapMemberName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText2;
  }
  else {
    pTVar1 = (this->fields).UserNameText1;
  }
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      pAVar5 = (this->fields).slideUserNameOutCurve;
      if (pAVar5 != (AnimationCurve *)0x0) {
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar5,stateProgress,(MethodInfo *)0x0);
        uVar7._4_4_ = stateProgress;
        uVar7._0_4_ = fVar6;
        if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
          pTVar1 = (this->fields).UserNameText2;
        }
        else {
          pTVar1 = (this->fields).UserNameText1;
        }
        if (pTVar1 != (Text *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            value.z = fVar4;
            value.x = (float)uVar7;
            value.y = SUB84(uVar7,4);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,value,(MethodInfo *)0x0);
            if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
              pTVar1 = (this->fields).UserNameText1;
            }
            else {
              pTVar1 = (this->fields).UserNameText2;
            }
            if (pTVar1 != (Text *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar1,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
                fVar8 = pVVar3->z;
                fVar6 = pVVar3->y;
                pAVar5 = (this->fields).slideUserNameInCurve;
                if (pAVar5 != (AnimationCurve *)0x0) {
                  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                          AnimationCurve_Evaluate(pAVar5,fVar4,(MethodInfo *)0x0);
                  uVar9._4_4_ = fVar6;
                  uVar9._0_4_ = fVar4;
                  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
                    pTVar1 = (this->fields).UserNameText1;
                  }
                  else {
                    pTVar1 = (this->fields).UserNameText2;
                  }
                  if (pTVar1 != (Text *)0x0) {
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pTVar1,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      value_00.z = fVar8;
                      value_00.x = (float)uVar9;
                      value_00.y = SUB84(uVar9,4);
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(pTVar2,value_00,(MethodInfo *)0x0);
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_Update
               (XPBoostNotification *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).stateStartTime;
  switch((this->fields).currentState) {
  case 0:
  case 5:
    break;
  case 1:
    pGVar2 = (this->fields).content;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      bVar3 = 0;
      func_?();
      pbVar4 = (byte *)(unaff_EBX + -0x42);
      bVar5 = (byte)unaff_EBX;
      bVar6 = CARRY1(*pbVar4,bVar5) || CARRY1(*pbVar4 + bVar5,bVar3);
      *pbVar4 = *pbVar4 + bVar5 + bVar3;
      bVar7 = (byte)((uint)unaff_EBX >> 8);
      bVar3 = bVar7 + bVar5;
      *(char *)(extraout_EDX + -0x4befb941) =
           *(char *)(extraout_EDX + -0x4befb941) + bVar3 + bVar6 +
           (CARRY1(bVar7,bVar5) || CARRY1(bVar3,bVar6));
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      pGVar2 = (this->fields).content;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
    if (_UNK_? < fVar1) {
      (this->fields).currentState = 2;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar2 = (this->fields).content;
      (this->fields).stateStartTime = fVar1;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).Update.method)();
        return;
      }
      goto code_?;
    }
    break;
  case 2:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar1 - _UNK_?,(MethodInfo *)0x0);
    pAVar10 = (this->fields).fadeOutCurve;
    pCVar11 = (this->fields).backgroundCanvasGroup;
    if (pAVar10 == (AnimationCurve *)0x0) goto code_?;
    fVar1 = _UNK_? - fVar1;
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar10,fVar1,(MethodInfo *)0x0);
    if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar11,value,(MethodInfo *)0x0);
    XPBoostNotification_CloseNotification_1(this,fVar1,(MethodInfo *)0x0);
    bVar6 = _UNK_? == 3.9196036e-29;
    bVar12 = 3.9196036e-29 < _UNK_?;
    goto code_?;
  case 3:
    if (0 < (this->fields).currentMemberBeingHighlighted) {
      XPBoostNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
      XPBoostNotification_SwapMemberName(this,fVar1,(MethodInfo *)0x0);
    }
    bVar6 = fVar1 == _UNK_?;
    bVar12 = fVar1 < _UNK_?;
code_?:
    if (!bVar12 && !bVar6) {
      XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
    }
    break;
  case 4:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
    pAVar10 = (this->fields).fadeOutCurve;
    pCVar11 = (this->fields).backgroundCanvasGroup;
    if ((pAVar10 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar10,fVar1,(MethodInfo *)0x0), pCVar11 == (CanvasGroup *)0x0))
    goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar11,fVar1,(MethodInfo *)0x0);
    XPBoostNotification_CloseNotification_1(this,0.0,(MethodInfo *)0x0);
    if (_UNK_? < 3.9196607e-29) {
      XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  return;
}


/* Void UpdateBoostAmount() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_UpdateBoostAmount
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                   );
    func_?(&::StringLiteral__);
    func_?(&StringLiteral____XP);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields)._._SubscriptionRules_k__BackingField,
       this_00 != (SubscriptionRulesWrapper *)0x0)) {
      this_02 = (XpBooster *)
                MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_GetRule
                          (this_00,SubscriptionBenefit__Enum_XPBoost,
                           MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                          );
      if (this_02 != (XpBooster *)0x0) {
        MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
        XpBooster_GetTotalXPBoost
                  (this_02,(this->fields).currentMemberBeingHighlighted + 1,(MethodInfo *)0x0);
        pTVar2 = (this->fields).boostAmountText;
        str1 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSStack3 =
             mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,str1,StringLiteral____XP,(MethodInfo *)0x0);
        if (pTVar2 != (Text *)0x0) {
          pIStack4 = (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          pTStack5 = pTVar2;
          (*(code *)(pTVar2->klass->vtable).set_text.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateBoostTextEffect(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_UpdateBoostTextEffect
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  this_00 = (this->fields).updateBoostTextEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    method_00 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (this_00,stateProgress,(MethodInfo *)0x0);
    pTVar1 = (this->fields).boostAmountText;
    if (pTVar1 != (Text *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                  ((Vector3 *)&stack0xffffffe4,pTVar2,method_00);
        pTVar1 = (this->fields).boostAmountText;
        if (pTVar1 != (Text *)0x0) {
          puVar3 = &UNK_?;
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            value.y = (float)puVar3;
            value.x = (float)method_00;
            value.z = (float)pTVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar2,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* XPBoostNotification() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification__ctor
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVPlayer_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  ppLVar1 = &(this->fields).memberList;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  (this->fields).currentMemberBeingHighlighted = -1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

