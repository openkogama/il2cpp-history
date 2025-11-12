
/* Void Awake() */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Awake(MoveAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<KeyFrameCallback>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__Sort_System__Comparison<KeyFrameCallback>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MoveAnimation____c___Awake_b__8_0_KeyFrameCallback__KeyFrameCallback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveAnimation____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Target_not_set);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).keyFrameCallbacks;
  if (*(int *)&(TypeInfo__MoveAnimation____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__MoveAnimation____c->static_fields->__9__8_0;
  if (this_01 == (Comparison_1_KeyFrameCallback_ *)0x0) {
    if (*(int *)&(TypeInfo__MoveAnimation____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__MoveAnimation____c->static_fields->__9;
    this_01 = (Comparison_1_KeyFrameCallback_ *)
              FUN_?(TypeInfo__System__Comparison<KeyFrameCallback>);
    mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
              ((Func_3_Object_Object_Int32_ *)this_01,(Object *)object,
               MethodInfo__MoveAnimation____c___Awake_b__8_0_KeyFrameCallback__KeyFrameCallback_,
               (MethodInfo *)0x0);
    TypeInfo__MoveAnimation____c->static_fields->__9__8_0 = this_01;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__MoveAnimation____c->static_fields->__9__8_0 >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (this_00 == (List_1_KeyFrameCallback_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort_1
            ((List_1_System_Object_ *)this_00,(Comparison_1_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__Sort_System__Comparison<KeyFrameCallback>_
            );
  pTVar6 = (this->fields)._.target;
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
  if (pTVar6 == (Transform *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Target_not_set,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar6->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
    pTVar6 = (this->fields)._.target;
    if (pTVar6 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pTVar6->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7);
    (this->fields)._.originalLocalPos.x = 0.0;
    (this->fields)._.originalLocalPos.y = 0.0;
    (this->fields)._.originalLocalPos.z = 0.0;
  }
  pAVar10 = (this->fields).animationCurve;
  if (pAVar10 != (AnimationCurve *)0x0) {
    pKVar11 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                       (pAVar10,(MethodInfo *)0x0);
    pAVar10 = (this->fields).animationCurve;
    if (pAVar10 != (AnimationCurve *)0x0) {
      pvVar7 = (pAVar10->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar10,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      iVar12 = (*pcRam_?)(pvVar7);
      if (pKVar11 != (Keyframe__Array *)0x0) {
        if ((uint)pKVar11->max_length <= iVar12 - 1U) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->fields).doneTime = pKVar11->vector[(longlong)iVar12 + -1].m_Time;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void EvaluateKeyFrameCallbacks(Single) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_EvaluateKeyFrameCallbacks
               (MoveAnimation *this,float timePassedSincePlay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aLStack_1[0]._list = (List_1_System_Object_ *)(this->fields).keyFrameCallbacks;
  if ((List_1_KeyFrameCallback_ *)aLStack_1[0]._list == (List_1_KeyFrameCallback_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_KeyFrameCallback_ *)aLStack_1[0]._list)->fields)._version << 0x20);
  uStack_10 = 0;
  aLStack_1[0]._8_8_ = pLStack_9;
  aLStack_1[0]._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_9 = aLStack_1;
code_?:
  do {
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (aLStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                      );
    pOVar12 = aLStack_1[0]._current;
    if (bVar11 == 0) {
      return;
    }
    this_00 = (this->fields).animationCurve;
    if (aLStack_1[0]._current == (Object *)0x0) goto code_?;
  } while (*(char *)&aLStack_1[0]._current[3].monitor != '\0');
  if (this_00 != (AnimationCurve *)0x0) {
    pKVar13 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                       (this_00,(MethodInfo *)0x0);
    if (pKVar13 != (Keyframe__Array *)0x0) {
      if (*(uint *)&pOVar12[2].monitor < (uint)pKVar13->max_length) {
        if ((pKVar13->vector[(int)*(uint *)&pOVar12[2].monitor].m_Time <= timePassedSincePlay) &&
           (*(undefined1 *)&pOVar12[3].monitor = 1, pOVar12[3].klass != (Object__Class *)0x0)) {
          pOVar14 = pOVar12[3].klass;
          uVar15._0_2_ = (pOVar14->_0).byval_arg.attrs;
          uVar15._2_1_ = (pOVar14->_0).byval_arg.type;
          uVar15._3_5_ = *(undefined5 *)&(pOVar14->_0).byval_arg.field_0xb;
          (*(code *)(pOVar14->_0).namespaze)((pOVar14->_0).element_class,uVar15);
        }
        goto code_?;
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Play
               (MoveAnimation *this,float offsetTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).beginTime = fVar3 - offsetTime;
  (this->fields)._.state = 2;
  pTVar4 = (this->fields)._.target;
  if (pTVar4 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_5._0_4_ = (this->fields)._.originalLocalPos.x;
  uStack_5._4_4_ = (this->fields)._.originalLocalPos.y;
  pLStack_6 = (List_1_T_Enumerator_System_Object_ *)
               CONCAT44(pLStack_6._4_4_,(this->fields)._.originalLocalPos.z);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
  }
  else {
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar7,&uStack_5);
    uStack_8 = (this->fields).keyFrameCallbacks;
    if (uStack_8 == (List_1_KeyFrameCallback_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&uStack_8 >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    uStack_14 = (ulonglong)(uint)(uStack_8->fields)._version << 0x20;
    uStack_15 = 0;
    aLStack_16[0]._index = (int32_t)(float)uStack_14;
    aLStack_16[0]._version = uStack_14._4_4_;
    aLStack_16[0]._current = (Object *)0x0;
    uStack_5 = 0;
    pLStack_6 = aLStack_16;
    aLStack_16[0]._list = (List_1_System_Object_ *)uStack_8;
    while( true ) {
      bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (aLStack_16,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                        );
      if (bVar17 == 0) {
        pTVar4 = (this->fields)._.target;
        if (pTVar4 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_18 = 0;
          uStack_19 = 0;
          uStack_20 = 0;
          uStack_21 = 0;
          uStack_22 = 0;
          uStack_23 = 0;
          uStack_24 = 0;
          uStack_25 = 0;
          pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          (*pcRam_?)(pvVar7);
          pTVar4 = (this->fields).moveTo;
          if (pTVar4 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_8 = (List_1_KeyFrameCallback_ *)0x0;
            uStack_14 = uStack_14 & 0xffffffff00000000;
            pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pvVar7);
            fVar3 = _UNK_? /
                     ((float)uStack_8 * uStack_19._4_4_ + uStack_8._4_4_ * uStack_21._4_4_ +
                      (float)uStack_14 * uStack_23._4_4_ + uStack_25._4_4_);
            fVar26 = (float)uStack_8 * (float)uStack_18 + uStack_8._4_4_ * (float)uStack_20 +
                     (float)uStack_14 * (float)uStack_22 + (float)uStack_24;
            fVar27 = (float)uStack_8 * uStack_18._4_4_ + uStack_8._4_4_ * uStack_20._4_4_ +
                     (float)uStack_14 * uStack_22._4_4_ + uStack_24._4_4_;
            fVar28 = (float)uStack_8 * (float)uStack_19 + uStack_8._4_4_ * (float)uStack_21 +
                     (float)uStack_14 * (float)uStack_23 + (float)uStack_25;
            pTVar4 = (this->fields)._.target;
            if (pTVar4 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_5 = 0;
              pLStack_6 = (List_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)pLStack_6 & 0xffffffff00000000);
              pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar2 = func_?(&UNK_?);
                FUN_?(uVar2,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              (*pcRam_?)(pvVar7,&uStack_5);
              (this->fields).direction.x = fVar26 * fVar3 - (float)uStack_5;
              (this->fields).direction.y = fVar27 * fVar3 - uStack_5._4_4_;
              (this->fields).direction.z = fVar28 * fVar3 - pLStack_6._0_4_;
              return;
            }
          }
        }
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (aLStack_16[0]._current == (Object *)0x0) break;
      *(undefined1 *)&aLStack_16[0]._current[3].monitor = 0;
    }
  }
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Stopped(Single) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Stopped
               (MoveAnimation *this,float extraTime,MethodInfo *method)

{
  pMVar1 = (this->fields)._.OnMoveAnimationStopped;
  (this->fields)._.state = 1;
  if (pMVar1 != (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
    pMVar1 = (this->fields)._.OnMoveAnimationStopped;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,extraTime,(pMVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void SubscribeToKeyFrame(String, Action) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_SubscribeToKeyFrame
               (MoveAnimation *this,String *keyFrameName,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_find_keyFrame);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).keyFrameCallbacks;
  if (pLVar1 == (List_1_KeyFrameCallback_ *)0x0) {
    pOVar2 = (Object__Class *)FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar1;
    do {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                        );
      pOVar12 = LStack_10._current;
      if (bVar11 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_find_keyFrame,(MethodInfo *)0x0);
        return;
      }
      if (LStack_10._current == (Object *)0x0) goto code_?;
      pOVar2 = LStack_10._current[2].klass;
    } while ((pOVar2 != (Object__Class *)keyFrameName) &&
            ((((pOVar2 == (Object__Class *)0x0 || (keyFrameName == (String *)0x0)) ||
              (((String__Fields *)&(pOVar2->_0).name)->_stringLength !=
               (keyFrameName->fields)._stringLength)) ||
             (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&((String__Fields *)&(pOVar2->_0).name)->_firstChar,
                                 (uint8_t *)&(keyFrameName->fields)._firstChar,
                                 (longlong)((String__Fields *)&(pOVar2->_0).name)->_stringLength * 2
                                 ,(MethodInfo *)0x0), bVar11 == 0))));
    pOVar2 = (Object__Class *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pOVar12[3].klass,(Delegate *)callback,(MethodInfo *)0x0);
    if (pOVar2 == (Object__Class *)0x0) {
      pOVar12[3].klass = (Object__Class *)0x0;
code_?:
      func_?(pOVar12 + 3);
      return;
    }
    pOVar13 = (Object__Class *)0x0;
    if ((Action__Class *)(pOVar2->_0).image == TypeInfo__System__Action) {
      pOVar13 = pOVar2;
    }
    if (pOVar13 != (Object__Class *)0x0) {
      pOVar12[3].klass = pOVar13;
      pOVar13 = (Object__Class *)0x0;
      if ((Action__Class *)(pOVar2->_0).image == TypeInfo__System__Action) {
        pOVar13 = pOVar2;
      }
      if (pOVar13 != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
  }
  pOVar2 = (Object__Class *)FUN_?(pOVar2);
code_?:
  FUN_?(pOVar2);
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Update
               (MoveAnimation *this,MethodInfo *method)

{
  if ((this->fields)._.testState == 2) {
    (*(this->klass->vtable).Play.methodPtr)(this,0);
    (this->fields)._.testState = 0;
  }
  if ((this->fields)._.state == 2) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    obj = (this->fields)._.target;
    fVar3 = fVar3 - (this->fields).beginTime;
    obj_00 = (this->fields).animationCurve;
    pfVar4 = &(this->fields).doneTime;
    fVar5 = (this->fields).direction.z;
    uStack_6._0_4_ = (this->fields).direction.x;
    uStack_6._4_4_ = (this->fields).direction.y;
    if (*pfVar4 <= fVar3 && fVar3 != *pfVar4) {
      if (obj_00 == (AnimationCurve *)0x0) goto DAT_?;
      pvVar7 = (obj_00->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar8 = (this->fields).doneTime;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar8 = (float)(*pcRam_?)(pvVar7,fVar8);
      fStack_9 = fVar5 * fVar8;
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_6 = CONCAT44(uStack_6._4_4_ * fVar8,(float)uStack_6 * fVar8);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (obj->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar7,&uStack_6);
      pMVar10 = (this->fields)._.OnMoveAnimationStopped;
      (this->fields)._.state = 1;
      if (pMVar10 != (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
        pMVar10 = (this->fields)._.OnMoveAnimationStopped;
        (*(pMVar10->fields)._._.invoke_impl)
                  ((pMVar10->fields)._._.method_code,fVar3 - (this->fields).doneTime);
      }
    }
    else {
      if (obj_00 == (AnimationCurve *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar7 = (obj_00->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar8 = (float)(*pcRam_?)(pvVar7,fVar3);
      fStack_9 = fVar5 * fVar8;
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_6 = CONCAT44(uStack_6._4_4_ * fVar8,(float)uStack_6 * fVar8);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (obj->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar7,&uStack_6);
    }
    MoveAnimation_EvaluateKeyFrameCallbacks(this,fVar3,(MethodInfo *)0x0);
  }
  return;
}

