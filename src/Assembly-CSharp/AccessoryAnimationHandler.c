
/* Void ApplyAnimationSpeed(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_ApplyAnimationSpeed
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 == (Animation *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                     (pAVar1,animationName,(MethodInfo *)0x0);
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
  if (pAVar3 != (AnimationClip *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar3->fields)._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).animations;
      if (pAVar1 != (Animation *)0x0) {
        obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                        (pAVar1,animationName,(MethodInfo *)0x0);
        fVar4 = AccessoryAnimationHandler_GetAnimationSpeed(this,animationName,(MethodInfo *)0x0);
        if (obj != (AnimationState *)0x0) {
          pvVar5 = (obj->fields)._.m_Ptr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar5,fVar4);
          return;
        }
      }
      goto code_?;
    }
  }
  return;
}


/* Single GetAnimationSpeed(String) */

float Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_GetAnimationSpeed
                (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animationData;
  uVar2 = 0;
  if (pLVar1 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  iVar5 = (pLVar1->fields)._size;
  lVar6 = 0;
  fVar4 = _UNK_?;
code_?:
  do {
    if (iVar5 <= (int)uVar2) {
      return fVar4;
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
    pAVar7 = (pLVar1->fields)._items;
    if (pAVar7 == (AccessoryAnimationHandler_AnimationData__Array *)0x0) goto code_?;
    if ((uint)pAVar7->max_length <= uVar2) goto code_?;
    pSVar8 = *(String **)((longlong)&pAVar7->vector[0].animationName + lVar6);
    if (pSVar8 == animationName) {
code_?:
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        fVar4 = (float)(*pcVar3)();
        return fVar4;
      }
      pAVar7 = (pLVar1->fields)._items;
      if (pAVar7 == (AccessoryAnimationHandler_AnimationData__Array *)0x0)
      goto code_?;
      if ((uint)pAVar7->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        fVar4 = (float)(*pcVar3)();
        return fVar4;
      }
      fVar4 = *(float *)((longlong)&pAVar7->vector[0].animationSpeed + lVar6);
    }
    else if (((pSVar8 != (String *)0x0) && (animationName != (String *)0x0)) &&
            ((pSVar8->fields)._stringLength == (animationName->fields)._stringLength)) {
      bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar8->fields)._firstChar,
                         (uint8_t *)&(animationName->fields)._firstChar,
                         (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar9 != 0) goto code_?;
      uVar2 = uVar2 + 1;
      lVar6 = lVar6 + 0x18;
      goto code_?;
    }
    uVar2 = uVar2 + 1;
    lVar6 = lVar6 + 0x18;
  } while( true );
}


/* Avatar GetAvatar() */

Avatar * Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_GetAvatar
                   (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Avatar *)0x0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 == (Transform *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pAVar1 = (Avatar *)(*pcVar3)();
    return pAVar1;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (pTVar2,(MethodInfo *)0x0);
  while( true ) {
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
    if (pTVar2 == (Transform *)0x0) break;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
      return pAVar1;
    }
    pAVar1 = (Avatar *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)pTVar2,
                        Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
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
    if (pAVar1 != (Avatar *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
        return pAVar1;
      }
    }
  }
  return pAVar1;
}


/* Void HandleNoIdleAnimation() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_HandleNoIdleAnimation
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currentCrossFadedAnimation;
  if ((pSVar1 == ::StringLiteral__) ||
     ((((pSVar1 != (String *)0x0 && (::StringLiteral__ != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 != 0)))) {
    return;
  }
  this_00 = (this->fields).animations;
  if (this_00 == (Animation *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
            (this_00,(this->fields).currentCrossFadedAnimation,PlayMode__Enum_StopSameLayer,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar4 = FUN_?(TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19);
  bVar5 = iRam_? != 0;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(AccessoryAnimationHandler **)(lVar4 + 0x20) = this;
  if (bVar5) {
    uVar6 = (uint)(lVar4 + 0x20U >> 0xc);
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
  }
  if (lVar4 == 0) {
    uVar10 = func_?(&TypeInfo__System__NullReferenceException);
    this_01 = (NullReferenceException *)func_?(uVar10);
    pSVar1 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_01,pSVar1,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar10);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentException);
    this_02 = (InvalidEnumArgumentException *)func_?(uVar10);
    pSVar1 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_02,pSVar1,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_02,uVar10);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
  if (this == (AccessoryAnimationHandler *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar11 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,lVar4);
  return;
}


/* Boolean HaveAnimationData(String) */

bool Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_HaveAnimationData
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animationData;
  uVar2 = 0;
  if (pLVar1 != (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) {
    iVar3 = (pLVar1->fields)._size;
    lVar4 = 0;
    while( true ) {
      if (iVar3 <= (int)uVar2) {
        return 0;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pAVar7 = (pLVar1->fields)._items;
      if (pAVar7 == (AccessoryAnimationHandler_AnimationData__Array *)0x0) break;
      if ((uint)pAVar7->max_length <= uVar2) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pSVar8 = *(String **)((longlong)&pAVar7->vector[0].animationName + lVar4);
      if (pSVar8 == animationName) {
        return 1;
      }
      if (((pSVar8 == (String *)0x0) || (animationName == (String *)0x0)) ||
         ((pSVar8->fields)._stringLength != (animationName->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x18;
      }
      else {
        bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar8->fields)._firstChar,
                           (uint8_t *)&(animationName->fields)._firstChar,
                           (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x18;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_Initialize
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                       (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
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
    if (pAVar2 != (AnimationClip *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar2->fields)._._.m_CachedPtr != (void *)0x0) {
        AccessoryAnimationHandler_ApplyAnimationSpeed(this,StringLiteral_Idle,(MethodInfo *)0x0);
        pAVar1 = (this->fields).animations;
        if (pAVar1 == (Animation *)0x0) goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar1,StringLiteral_Idle,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::
     AccessoryAnimationHandler_OnAvatarAnimationChange
               (AccessoryAnimationHandler *this,String *newAnimation,MethodInfo *method)

{
  pSVar1 = (this->fields).currentCrossFadedAnimation;
  if (pSVar1 != newAnimation) {
    if ((((pSVar1 != (String *)0x0) && (newAnimation != (String *)0x0)) &&
        ((pSVar1->fields)._stringLength == (newAnimation->fields)._stringLength)) &&
       (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(newAnimation->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar2 != 0)) {
      return;
    }
    AccessoryAnimationHandler_PlayAnimation(this,newAnimation,(MethodInfo *)0x0);
  }
  return;
}


/* Void PlayAnimation(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_PlayAnimation
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  uVar1 = 0;
  do {
    pSVar2 = animationName;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Idle);
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if (obj == (GameObject *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((obj->fields)._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)();
    if (cVar5 == '\0') {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar6 = (this->fields).animationData;
    uVar7 = uVar1;
    uVar8 = uVar1;
    if (pLVar6 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) goto code_?;
    while (animationName = StringLiteral_Idle, uVar9 = (uint)uVar7,
          (int)uVar9 < (pLVar6->fields)._size) {
      if (pLVar6 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0)
      goto code_?;
      if ((uint)(pLVar6->fields)._size <= uVar9) goto code_?;
      pAVar10 = (pLVar6->fields)._items;
      if (pAVar10 == (AccessoryAnimationHandler_AnimationData__Array *)0x0)
      goto code_?;
      if ((uint)pAVar10->max_length <= uVar9) goto code_?;
      pSVar11 = *(String **)((longlong)&pAVar10->vector[0].animationName + uVar8);
      if ((pSVar11 == pSVar2) ||
         ((((pSVar11 != (String *)0x0 && (pSVar2 != (String *)0x0)) &&
           ((pSVar11->fields)._stringLength == (pSVar2->fields)._stringLength)) &&
          (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar11->fields)._firstChar,
                              (uint8_t *)&(pSVar2->fields)._firstChar,
                              (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar12 != 0)))) goto code_?;
      uVar8 = uVar8 + 0x18;
      uVar7 = (ulonglong)(uVar9 + 1);
    }
    if (pSVar2 == StringLiteral_Idle) goto code_?;
  } while (((pSVar2 == (String *)0x0) || (StringLiteral_Idle == (String *)0x0)) ||
          (((pSVar2->fields)._stringLength != (StringLiteral_Idle->fields)._stringLength ||
           (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar2->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_Idle->fields)._firstChar,
                               (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar12 == 0))));
  if ((pSVar2 != animationName) &&
     (((pSVar2 == (String *)0x0 || (animationName == (String *)0x0)) ||
      (((pSVar2->fields)._stringLength != (animationName->fields)._stringLength ||
       (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar2->fields)._firstChar,
                           (uint8_t *)&(animationName->fields)._firstChar,
                           (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar12 == 0)))))) {
code_?:
    (this->fields).shouldTransitionToNewAnimation = 0;
    AccessoryAnimationHandler_ApplyAnimationSpeed(this,pSVar2,(MethodInfo *)0x0);
    bVar13 = iRam_? != 0;
    (this->fields).currentCrossFadedAnimation = pSVar2;
    if (bVar13) {
      uVar9 = (uint)((ulonglong)&(this->fields).currentCrossFadedAnimation >> 0xc);
      uVar7 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar8 == *puVar14;
        if (bVar13) {
          *puVar14 = uVar8 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    pAVar15 = (this->fields).animations;
    if (pAVar15 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFadeQueued_1
                (pAVar15,pSVar2,_UNK_?,QueueMode__Enum_PlayNow,PlayMode__Enum_StopSameLayer,
                 (MethodInfo *)0x0);
      pAVar15 = (this->fields).animations;
      if ((pAVar15 != (Animation *)0x0) &&
         (this_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar15,pSVar2,(MethodInfo *)0x0), this_00 != (AnimationState *)0x0))
      {
        pvVar16 = (this_00->fields)._.m_Ptr;
        if (pvVar16 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        iVar17 = (*pcRam_?)(pvVar16);
        if (iVar17 != 1) {
          return;
        }
        pLVar6 = (this->fields).animationData;
        uVar7 = uVar1;
        while (pLVar6 != (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) {
          uVar9 = (uint)uVar7;
          if ((pLVar6->fields)._size <= (int)uVar9) {
            return;
          }
          pLVar6 = (this->fields).animationData;
          if (pLVar6 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
          if ((uint)(pLVar6->fields)._size <= uVar9) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pAVar10 = (pLVar6->fields)._items;
          if (pAVar10 == (AccessoryAnimationHandler_AnimationData__Array *)0x0) break;
          if ((uint)pAVar10->max_length <= uVar9) {
code_?:
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pSVar11 = *(String **)((longlong)&pAVar10->vector[0].animationName + uVar1);
          if ((pSVar11 == pSVar2) ||
             ((((pSVar11 != (String *)0x0 && (pSVar2 != (String *)0x0)) &&
               ((pSVar11->fields)._stringLength == (pSVar2->fields)._stringLength)) &&
              (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar11->fields)._firstChar,
                                  (uint8_t *)&(pSVar2->fields)._firstChar,
                                  (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar12 != 0)))) {
            pLVar6 = (this->fields).animationData;
            if (pLVar6 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
            if ((uint)(pLVar6->fields)._size <= uVar9) goto code_?;
            pAVar10 = (pLVar6->fields)._items;
            if (pAVar10 == (AccessoryAnimationHandler_AnimationData__Array *)0x0) break;
            if ((uint)pAVar10->max_length <= uVar9) goto code_?;
            pSVar11 = *(String **)((longlong)&pAVar10->vector[0].TransitionToAnimationName + uVar1);
            if ((pSVar11 != ::StringLiteral__) &&
               (((pSVar11 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
                (((pSVar11->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
                 (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar11->fields)._firstChar,
                                     (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                     (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0)
                 , bVar12 == 0)))))) {
              fVar18 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                       AnimationState_get_length(this_00,(MethodInfo *)0x0);
              fVar19 = AccessoryAnimationHandler_GetAnimationSpeed(this,pSVar2,(MethodInfo *)0x0);
              pLVar6 = (this->fields).animationData;
              if (pLVar6 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
              if ((uint)(pLVar6->fields)._size <= uVar9) goto code_?;
              pAVar10 = (pLVar6->fields)._items;
              if (pAVar10 == (AccessoryAnimationHandler_AnimationData__Array *)0x0) break;
              if ((uint)pAVar10->max_length <= uVar9) goto code_?;
              pIVar20 = AccessoryAnimationHandler_TransitionToNewAnimation
                                  (this,fVar18 / fVar19,
                                   *(String **)
                                    ((longlong)&pAVar10->vector[0].TransitionToAnimationName + uVar1
                                    ),(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                        ((MonoBehaviour *)this,pIVar20,(MethodInfo *)0x0);
            }
          }
          uVar7 = (ulonglong)(uVar9 + 1);
          uVar1 = uVar1 + 0x18;
          pLVar6 = (this->fields).animationData;
        }
      }
    }
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = (this->fields).currentCrossFadedAnimation;
  if ((pSVar2 != ::StringLiteral__) &&
     (((pSVar2 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
      (((pSVar2->fields)._stringLength != (::StringLiteral__->fields)._stringLength ||
       (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar2->fields)._firstChar,
                           (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                           (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar12 == 0)))))) {
    pAVar15 = (this->fields).animations;
    if (pAVar15 == (Animation *)0x0) goto code_?;
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
              (pAVar15,(this->fields).currentCrossFadedAnimation,PlayMode__Enum_StopSameLayer,
               (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar20 = (IEnumerator *)
              FUN_?(TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19);
    bVar13 = iRam_? != 0;
    *(undefined4 *)&pIVar20[1].klass = 0;
    pIVar20[2].klass = (IEnumerator__Class *)this;
    if (bVar13) {
      uVar9 = (uint)((ulonglong)(pIVar20 + 2) >> 0xc);
      uVar1 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar1 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar1 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar7 == *puVar14;
        if (bVar13) {
          *puVar14 = uVar7 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this,pIVar20,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetAllAnimationToLooping() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::
     AccessoryAnimationHandler_SetAllAnimationToLooping
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).animations;
  if (this_00 == (Animation *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetEnumerator
                     (this_00,(MethodInfo *)0x0);
  do {
    if (pIVar2 == (IEnumerator *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar3 == '\0') {
      lVar4 = FUN_?(pIVar2,TypeInfo__System__IDisposable);
      if (lVar4 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar4);
      }
      return;
    }
    if (pIVar2 == (IEnumerator *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pIVar5 = pIVar2->klass;
    uVar6 = 0;
    uVar7._0_1_ = (pIVar5->_1).rank;
    uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar7 != 0) {
      do {
        if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
          pVVar8 = &(pIVar5->vtable).MoveNext + (pIVar5->interfaceOffsets[uVar6].offset + 1);
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    pVVar8 = (VirtualInvokeData *)FUN_?(pIVar2,TypeInfo__System__Collections__IEnumerator,1)
    ;
code_?:
    pOVar9 = (Object *)(*pVVar8->methodPtr)(pIVar2,pVVar8->method);
    if (pOVar9 == (Object *)0x0) {
      FUN_?();
code_?:
      uVar10 = func_?(&UNK_?);
      pOVar11 = (Object *)FUN_?(uVar10);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar11 = (Object *)0x0;
    if ((AnimationState__Class *)pOVar9->klass == TypeInfo__UnityEngine__AnimationState) {
      pOVar11 = pOVar9;
    }
    if (pOVar11 == (Object *)0x0) goto code_?;
    pOVar11 = (Object *)0x0;
    if ((AnimationState__Class *)pOVar9->klass == TypeInfo__UnityEngine__AnimationState) {
      pOVar11 = pOVar9;
    }
    pOVar12 = pOVar11[1].klass;
    if (pOVar12 == (Object__Class *)0x0) goto code_?;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar1;
    (*pcRam_?)(pOVar12,2);
  } while( true );
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_Start
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  ActivateOnAnimationBase::ActivateOnAnimationBase_Start
            ((ActivateOnAnimationBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                       (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
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
    if (pAVar2 != (AnimationClip *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar2->fields)._._.m_CachedPtr != (void *)0x0) {
        AccessoryAnimationHandler_ApplyAnimationSpeed(this,StringLiteral_Idle,(MethodInfo *)0x0);
        pAVar1 = (this->fields).animations;
        if (pAVar1 == (Animation *)0x0) goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar1,StringLiteral_Idle,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartCrossfading(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_StartCrossfading
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).currentCrossFadedAnimation = animationName;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentCrossFadedAnimation >> 0xc);
    method = (MethodInfo *)(ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)((longlong)method * 8 + 0xADDR);
      puVar4 = (ulonglong *)((longlong)method * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar3 == *puVar4;
      if (bVar1) {
        *puVar4 = uVar3 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (this->fields).animations;
  if (this_00 == (Animation *)0x0) {
    FUN_?(0,animationName,method);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFadeQueued_1
            (this_00,animationName,_UNK_?,QueueMode__Enum_PlayNow,
             PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
  return;
}


/* Void StartTransitioning(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_StartTransitioning
               (AccessoryAnimationHandler *this,String *transitionToAnimationName,MethodInfo *method
               )

{
  AccessoryAnimationHandler_ApplyAnimationSpeed(this,transitionToAnimationName,(MethodInfo *)0x0);
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
              (pAVar1,transitionToAnimationName,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
    pAVar1 = (this->fields).animations;
    if (pAVar1 != (Animation *)0x0) {
      obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                      (pAVar1,transitionToAnimationName,(MethodInfo *)0x0);
      pAVar1 = (this->fields).animations;
      if ((pAVar1 != (Animation *)0x0) &&
         (obj_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                             (pAVar1,transitionToAnimationName,(MethodInfo *)0x0),
         obj_00 != (AnimationState *)0x0)) {
        pvVar2 = (obj_00->fields)._.m_Ptr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        fVar5 = (float)(*pcRam_?)(pvVar2);
        fVar6 = AccessoryAnimationHandler_GetAnimationSpeed
                          (this,transitionToAnimationName,(MethodInfo *)0x0);
        if (obj != (AnimationState *)0x0) {
          pvVar2 = (obj->fields)._.m_Ptr;
          if (pvVar2 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar2,fVar5 / fVar6);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator StopAnimationNextFrame() */

IEnumerator *
Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_StopAnimationNextFrame
          (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19);
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


/* IEnumerator TransitionToNewAnimation(Single, String) */

IEnumerator *
Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_TransitionToNewAnimation
          (AccessoryAnimationHandler *this,float resetDelay,String *transitionToAnimationName,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryAnimationHandler___TransitionToNewAnimation_d__15);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__AccessoryAnimationHandler___TransitionToNewAnimation_d__15);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  *(float *)&pIVar1[2].monitor = resetDelay;
  pIVar1[3].klass = (IEnumerator__Class *)transitionToAnimationName;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 3) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* AccessoryAnimationHandler() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler__ctor
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).currentCrossFadedAnimation = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentCrossFadedAnimation >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar9;
      LOCK();
      bVar1 = uVar2 != uRam_?;
      uVar10 = uVar2;
      uVar11 = uVar2 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar10, uVar2 = uVar10, uVar10 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar12 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar14 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar2 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar16 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar9 = pIVar16->methods;
            pMVar17 = *ppMVar9;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar7;
                while (ppMVar19 = ppMVar18 + 0x3052aacd,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar5 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_23 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar5;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar8 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar15 + 0x28U >> 0xc);
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
      FUN_?(pOVar6,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar20 = _UNK_?;
      uVar5 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar6->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

