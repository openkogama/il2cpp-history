
/* Void AnimationChangeHandler(Object) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_AnimationChangeHandler
               (BoneAnimation *this,Object *animData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeStamp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (animData == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((animData->klass->_1).naturalAligment < bVar2) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (animData->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    FUN_?(animData);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar3 = (Object__Class *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)animData,
                       (Object *)StringLiteral_state,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  pOVar4 = (Object__Class *)0x0;
  if (pOVar3 != (Object__Class *)0x0) {
    if ((Object__Class *)(pOVar3->_0).image == pORam0000000182db2520) {
      pOVar4 = pOVar3;
    }
    if (pOVar4 == (Object__Class *)0x0) {
      FUN_?(pOVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)animData,
                       (Object *)StringLiteral_timeStamp,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar5 == (Object *)0x0) goto code_?;
  if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = *(int32_t *)&pOVar5[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AnimationData,pOVar4,iVar6,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).OnAnimationChange != (Action_1_String_ *)0x0) {
    pAVar7 = (this->fields).OnAnimationChange;
    (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code,pOVar4);
  }
  if ((this->fields).isLocal == 0) {
    pQVar8 = (this->fields).animationQueue;
    pOVar5 = (Object *)FUN_?(TypeInfo__AnimationData);
    bVar9 = iRam_? != 0;
    pOVar5[1].klass = pOVar4;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
      lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (ulonglong)(uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    *(int32_t *)&pOVar5[1].monitor = iVar6;
    if (pQVar8 == (Queue_1_AnimationData_ *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar8,pOVar5,
               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
              );
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar8 = (this->fields).animationQueue;
    iVar14 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField + 0x14;
    if (pQVar8 == (Queue_1_AnimationData_ *)0x0) goto code_?;
    pAVar15 = (this->fields).nextAnim;
    if ((pQVar8->fields)._size < 1) {
      if ((pAVar15 != (AnimationData *)0x0) && ((pAVar15->fields).timeStamp <= iVar14)) {
        (this->fields).currentAnim = pAVar15;
        func_?(&(this->fields).currentAnim);
        (this->fields).nextAnim = (AnimationData *)0x0;
        func_?(&(this->fields).nextAnim);
      }
    }
    else {
      if (pAVar15 == (AnimationData *)0x0) {
        if (pQVar8 == (Queue_1_AnimationData_ *)0x0) goto code_?;
        pAVar15 = (AnimationData *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar8,
                             MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                            );
        bVar9 = iRam_? != 0;
        (this->fields).nextAnim = pAVar15;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)&(this->fields).nextAnim >> 0xc);
          uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar16 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar16 | 1L << (ulonglong)(uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
      if ((this->fields).nextAnim != (AnimationData *)0x0) {
        if (((this->fields).currentAnim == (AnimationData *)0x0) &&
           (pAVar15 = (this->fields).nextAnim, (pAVar15->fields).timeStamp <= iVar14)) {
          (this->fields).currentAnim = pAVar15;
          func_?(&(this->fields).currentAnim);
          (this->fields).nextAnim = (AnimationData *)0x0;
          func_?(&(this->fields).nextAnim);
        }
        pAVar15 = (this->fields).nextAnim;
        while (pAVar15 != (AnimationData *)0x0) {
          pAVar15 = (this->fields).nextAnim;
          if (pAVar15 == (AnimationData *)0x0) goto code_?;
          if (iVar14 < (pAVar15->fields).timeStamp) break;
          pQVar8 = (this->fields).animationQueue;
          if (pQVar8 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          if ((pQVar8->fields)._size < 1) break;
          bVar9 = iRam_? != 0;
          (this->fields).currentAnim = (this->fields).nextAnim;
          if (bVar9) {
            uVar10 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
            uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
            do {
              uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar9 = uVar16 == *puVar13;
              if (bVar9) {
                *puVar13 = uVar16 | 1L << (ulonglong)(uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          pQVar8 = (this->fields).animationQueue;
          if (pQVar8 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          pAVar15 = (AnimationData *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Dequeue
                              ((Queue_1_System_Object_ *)pQVar8,
                               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                              );
          bVar9 = iRam_? != 0;
          (this->fields).nextAnim = pAVar15;
          if (bVar9) {
            uVar10 = (uint)((ulonglong)&(this->fields).nextAnim >> 0xc);
            uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
            do {
              uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar9 = uVar16 == *puVar13;
              if (bVar9) {
                *puVar13 = uVar16 | 1L << (ulonglong)(uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          pAVar15 = (this->fields).nextAnim;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Jump);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).currentAnim != (AnimationData *)0x0) {
      if ((this->fields).prevAnim != (AnimationData *)0x0) {
        pSVar17 = (((this->fields).currentAnim)->fields).state;
        pSVar18 = (((this->fields).prevAnim)->fields).state;
        if (pSVar17 == pSVar18) {
          return;
        }
        if ((((pSVar17 != (String *)0x0) && (pSVar18 != (String *)0x0)) &&
            ((pSVar17->fields)._stringLength == (pSVar18->fields)._stringLength)) &&
           (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar17->fields)._firstChar,
                                (uint8_t *)&(pSVar18->fields)._firstChar,
                                (longlong)(pSVar17->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar19 != 0)) {
          return;
        }
      }
      pSVar17 = StringLiteral_Jump;
      pAVar15 = (this->fields).currentAnim;
      if (pAVar15 == (AnimationData *)0x0) goto code_?;
      pSVar18 = (pAVar15->fields).state;
      if ((pSVar18 == StringLiteral_Jump) ||
         (((pSVar18 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
          (((pSVar18->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength &&
           (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar18->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                                (longlong)(pSVar18->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar19 != 0)))))) {
        pAVar20 = (this->fields).avatarAnimation;
        if (pAVar20 == (Animation *)0x0) goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                  (pAVar20,pSVar17,(MethodInfo *)0x0);
        pAVar15 = (this->fields).currentAnim;
        if ((pAVar15 == (AnimationData *)0x0) ||
           (pAVar20 = (this->fields).avatarAnimation, pAVar20 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar20,(pAVar15->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
      }
      else {
        pAVar15 = (this->fields).currentAnim;
        if ((pAVar15 == (AnimationData *)0x0) ||
           (pAVar20 = (this->fields).avatarAnimation, pAVar20 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                  (pAVar20,(pAVar15->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                   (MethodInfo *)0x0);
      }
      pAVar15 = (this->fields).currentAnim;
      if (pAVar15 == (AnimationData *)0x0) goto code_?;
      iVar14 = (pAVar15->fields).timeStamp;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__TransformNetworkManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar14 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
        iVar14 = FUN_?();
        pAVar15 = (this->fields).currentAnim;
        if (pAVar15 == (AnimationData *)0x0) {
code_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar21 = (pAVar15->fields).timeStamp;
        pAVar20 = (this->fields).avatarAnimation;
        if ((pAVar20 == (Animation *)0x0) ||
           (pAVar22 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar20,(pAVar15->fields).state,(MethodInfo *)0x0),
           pAVar22 == (AnimationState *)0x0)) goto code_?;
        pvVar23 = (pAVar22->fields)._.m_Ptr;
        if (pvVar23 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar22,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar24 = func_?(&UNK_?);
          FUN_?(uVar24,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        fVar25 = (float)(iVar14 - iVar21) * _UNK_?;
        fVar26 = (float)(*pcRam_?)(pvVar23);
        pAVar15 = (this->fields).currentAnim;
        if (((pAVar15 == (AnimationData *)0x0) ||
            (pAVar20 = (this->fields).avatarAnimation, pAVar20 == (Animation *)0x0)) ||
           (pAVar22 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar20,(pAVar15->fields).state,(MethodInfo *)0x0),
           pAVar22 == (AnimationState *)0x0)) goto code_?;
        pvVar23 = (pAVar22->fields)._.m_Ptr;
        if (pvVar23 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar22,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar24 = func_?(&UNK_?);
          FUN_?(uVar24,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar23,fVar25 / fVar26);
      }
      (this->fields).prevAnim = (this->fields).currentAnim;
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
        uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar16 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar16 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      iVar14 = iRam_?;
      (this->fields).currentAnim = (AnimationData *)0x0;
      if (iVar14 != 0) {
        uVar10 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
        uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar16 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar16 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
    return;
  }
  pAVar15 = (AnimationData *)FUN_?(TypeInfo__AnimationData);
  iVar14 = iRam_?;
  (pAVar15->fields).state = (String *)pOVar4;
  if (iVar14 != 0) {
    uVar10 = (uint)((ulonglong)&pAVar15->fields >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
      iVar14 = iRam_?;
    } while (!bVar9);
  }
  (pAVar15->fields).timeStamp = iVar6;
  (this->fields).currentAnim = pAVar15;
  if (iVar14 != 0) {
    uVar10 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Jump,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentAnim != (AnimationData *)0x0) {
    if ((this->fields).prevAnim != (AnimationData *)0x0) {
      pSVar17 = (((this->fields).currentAnim)->fields).state;
      pSVar18 = (((this->fields).prevAnim)->fields).state;
      if (pSVar17 == pSVar18) {
        return;
      }
      if (((pSVar17 != (String *)0x0) && (pSVar18 != (String *)0x0)) &&
         (((pSVar17->fields)._stringLength == (pSVar18->fields)._stringLength &&
          (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar17->fields)._firstChar,
                               (uint8_t *)&(pSVar18->fields)._firstChar,
                               (longlong)(pSVar17->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar19 != 0)))) {
        return;
      }
    }
    pSVar17 = StringLiteral_Jump;
    pAVar15 = (this->fields).currentAnim;
    if (pAVar15 == (AnimationData *)0x0) goto DAT_?;
    pSVar18 = (pAVar15->fields).state;
    if ((pSVar18 == StringLiteral_Jump) ||
       ((((pSVar18 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
         ((pSVar18->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength)) &&
        (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar18->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                             (longlong)(pSVar18->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar19 != 0)))) {
      pAVar20 = (this->fields).avatarAnimation;
      if (pAVar20 == (Animation *)0x0) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar20,pSVar17,(MethodInfo *)0x0);
      pAVar15 = (this->fields).currentAnim;
      if ((pAVar15 == (AnimationData *)0x0) ||
         (pAVar20 = (this->fields).avatarAnimation, pAVar20 == (Animation *)0x0))
      goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar20,(pAVar15->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar15 = (this->fields).currentAnim;
      if ((pAVar15 == (AnimationData *)0x0) ||
         (pAVar20 = (this->fields).avatarAnimation, pAVar20 == (Animation *)0x0))
      goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar20,(pAVar15->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                 (MethodInfo *)0x0);
    }
    pAVar15 = (this->fields).currentAnim;
    if (pAVar15 == (AnimationData *)0x0) goto DAT_?;
    iVar14 = (pAVar15->fields).timeStamp;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (iVar14 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      iVar14 = FUN_?();
      pAVar15 = (this->fields).currentAnim;
      if (pAVar15 == (AnimationData *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar21 = (pAVar15->fields).timeStamp;
      pAVar20 = (this->fields).avatarAnimation;
      if ((pAVar20 == (Animation *)0x0) ||
         (pAVar22 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar20,(pAVar15->fields).state,(MethodInfo *)0x0),
         pAVar22 == (AnimationState *)0x0)) goto DAT_?;
      pvVar23 = (pAVar22->fields)._.m_Ptr;
      if (pvVar23 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar22,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar24 = func_?(&UNK_?);
        FUN_?(uVar24,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar25 = (float)(iVar14 - iVar21) * _UNK_?;
      fVar26 = (float)(*pcRam_?)(pvVar23);
      pAVar15 = (this->fields).currentAnim;
      if (((pAVar15 == (AnimationData *)0x0) ||
          (pAVar20 = (this->fields).avatarAnimation, pAVar20 == (Animation *)0x0)) ||
         (pAVar22 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar20,(pAVar15->fields).state,(MethodInfo *)0x0),
         pAVar22 == (AnimationState *)0x0)) goto DAT_?;
      pvVar23 = (pAVar22->fields)._.m_Ptr;
      if (pvVar23 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar22,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar24 = func_?(&UNK_?);
        FUN_?(uVar24,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar23,fVar25 / fVar26);
    }
    (this->fields).prevAnim = (this->fields).currentAnim;
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
      uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar16 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar16 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    iVar14 = iRam_?;
    (this->fields).currentAnim = (AnimationData *)0x0;
    if (iVar14 != 0) {
      uVar10 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
      uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar16 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar16 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  return;
}


/* Void Attach(MVAvatar, Boolean) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Attach
               (BoneAnimation *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).mvAvatar = mvAvatar;
  if (bVar1) {
    (this->fields).isLocal = isLocal;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).mvAvatar >> 0xc);
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
  (this->fields).isLocal = isLocal;
  return;
}


/* Void ComputeAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeAnimation
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Jump);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentAnim != (AnimationData *)0x0) {
    if ((this->fields).prevAnim != (AnimationData *)0x0) {
      pSVar1 = (((this->fields).currentAnim)->fields).state;
      pSVar2 = (((this->fields).prevAnim)->fields).state;
      if (pSVar1 == pSVar2) {
        return;
      }
      if ((((pSVar1 != (String *)0x0) && (pSVar2 != (String *)0x0)) &&
          ((pSVar1->fields)._stringLength == (pSVar2->fields)._stringLength)) &&
         (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar1->fields)._firstChar,
                             (uint8_t *)&(pSVar2->fields)._firstChar,
                             (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar3 != 0)) {
        return;
      }
    }
    pSVar1 = StringLiteral_Jump;
    pAVar4 = (this->fields).currentAnim;
    if (pAVar4 == (AnimationData *)0x0) goto DAT_?;
    pSVar2 = (pAVar4->fields).state;
    if ((pSVar2 == StringLiteral_Jump) ||
       (((pSVar2 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
        (((pSVar2->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength &&
         (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar2->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                             (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar3 != 0)))))) {
      pAVar5 = (this->fields).avatarAnimation;
      if (pAVar5 == (Animation *)0x0) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar5,pSVar1,(MethodInfo *)0x0);
      pAVar4 = (this->fields).currentAnim;
      if ((pAVar4 == (AnimationData *)0x0) ||
         (pAVar5 = (this->fields).avatarAnimation, pAVar5 == (Animation *)0x0)) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar5,(pAVar4->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar4 = (this->fields).currentAnim;
      if ((pAVar4 == (AnimationData *)0x0) ||
         (pAVar5 = (this->fields).avatarAnimation, pAVar5 == (Animation *)0x0)) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar5,(pAVar4->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                 (MethodInfo *)0x0);
    }
    pAVar4 = (this->fields).currentAnim;
    if (pAVar4 == (AnimationData *)0x0) goto DAT_?;
    iVar6 = (pAVar4->fields).timeStamp;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (iVar6 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      iVar6 = FUN_?();
      pAVar4 = (this->fields).currentAnim;
      if (pAVar4 == (AnimationData *)0x0) {
DAT_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar8 = (pAVar4->fields).timeStamp;
      pAVar5 = (this->fields).avatarAnimation;
      if ((pAVar5 == (Animation *)0x0) ||
         (pAVar9 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar5,(pAVar4->fields).state,(MethodInfo *)0x0),
         pAVar9 == (AnimationState *)0x0)) goto DAT_?;
      pvVar10 = (pAVar9->fields)._.m_Ptr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar9,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      fVar12 = (float)(iVar6 - iVar8) * _UNK_?;
      fVar13 = (float)(*pcRam_?)(pvVar10);
      pAVar4 = (this->fields).currentAnim;
      if (((pAVar4 == (AnimationData *)0x0) ||
          (pAVar5 = (this->fields).avatarAnimation, pAVar5 == (Animation *)0x0)) ||
         (pAVar9 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar5,(pAVar4->fields).state,(MethodInfo *)0x0),
         pAVar9 == (AnimationState *)0x0)) goto DAT_?;
      pvVar10 = (pAVar9->fields)._.m_Ptr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar9,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar10,fVar12 / fVar13);
    }
    (this->fields).prevAnim = (this->fields).currentAnim;
    if (iRam_? != 0) {
      uVar14 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
      uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
        puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
        LOCK();
        bVar18 = uVar16 == *puVar17;
        if (bVar18) {
          *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
        }
        UNLOCK();
      } while (!bVar18);
    }
    iVar6 = iRam_?;
    (this->fields).currentAnim = (AnimationData *)0x0;
    if (iVar6 != 0) {
      uVar14 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
      uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
        puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
        LOCK();
        bVar18 = uVar16 == *puVar17;
        if (bVar18) {
          *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
        }
        UNLOCK();
      } while (!bVar18);
    }
  }
  return;
}


/* Void ComputeBlendAnimation(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeBlendAnimation
               (BoneAnimation *this,Dictionary_2_System_Object_System_Object_ *animData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AnimationData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeStamp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (animData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (animData,(Object *)StringLiteral_state,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pSVar2 = (String *)0x0;
    if (pSVar1 != (String *)0x0) {
      if (pSVar1->klass == pSRam0000000182db2520) {
        pSVar2 = pSVar1;
      }
      if (pSVar2 == (String *)0x0) {
        FUN_?(pSVar1);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (animData,(Object *)StringLiteral_timeStamp,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int32_t *)&pOVar4[1].klass;
      pAVar6 = (AnimationData *)FUN_?(TypeInfo__AnimationData);
      iVar7 = iRam_?;
      (pAVar6->fields).state = pSVar2;
      if (iVar7 != 0) {
        uVar8 = (uint)((ulonglong)&pAVar6->fields >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
          iVar7 = iRam_?;
        } while (!bVar12);
      }
      (pAVar6->fields).timeStamp = iVar5;
      (this->fields).currentAnim = pAVar6;
      if (iVar7 != 0) {
        uVar8 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      if ((this->fields).prevAnim != (AnimationData *)0x0) {
        pAVar6 = (this->fields).currentAnim;
        if (pAVar6 == (AnimationData *)0x0) goto code_?;
        pSVar2 = (pAVar6->fields).state;
        pSVar1 = (((this->fields).prevAnim)->fields).state;
        if (pSVar2 == pSVar1) {
          return;
        }
        if ((((pSVar2 != (String *)0x0) && (pSVar1 != (String *)0x0)) &&
            ((pSVar2->fields)._stringLength == (pSVar1->fields)._stringLength)) &&
           (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar2->fields)._firstChar,
                               (uint8_t *)&(pSVar1->fields)._firstChar,
                               (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar13 != 0)) {
          return;
        }
      }
      pAVar6 = (this->fields).currentAnim;
      if ((pAVar6 != (AnimationData *)0x0) &&
         (this_00 = (this->fields).avatarAnimation, this_00 != (Animation *)0x0)) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                  (this_00,(pAVar6->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                   (MethodInfo *)0x0);
        (this->fields).prevAnim = (this->fields).currentAnim;
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        iVar7 = iRam_?;
        (this->fields).currentAnim = (AnimationData *)0x0;
        if (iVar7 != 0) {
          uVar8 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ComputeRemoteAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeRemoteAnimation
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TransformNetworkManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).animationQueue;
  iVar2 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField + 0x14;
  if (pQVar1 == (Queue_1_AnimationData_ *)0x0) goto code_?;
  pAVar3 = (this->fields).nextAnim;
  if ((pQVar1->fields)._size < 1) {
    if ((pAVar3 != (AnimationData *)0x0) && ((pAVar3->fields).timeStamp <= iVar2)) {
      (this->fields).currentAnim = pAVar3;
      func_?(&(this->fields).currentAnim);
      (this->fields).nextAnim = (AnimationData *)0x0;
      func_?(&(this->fields).nextAnim);
    }
  }
  else {
    if (pAVar3 == (AnimationData *)0x0) {
      if (pQVar1 == (Queue_1_AnimationData_ *)0x0) goto code_?;
      pAVar3 = (AnimationData *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar1,
                           MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                          );
      bVar4 = iRam_? != 0;
      (this->fields).nextAnim = pAVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).nextAnim >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
    }
    if ((this->fields).nextAnim != (AnimationData *)0x0) {
      if (((this->fields).currentAnim == (AnimationData *)0x0) &&
         (pAVar3 = (this->fields).nextAnim, (pAVar3->fields).timeStamp <= iVar2)) {
        (this->fields).currentAnim = pAVar3;
        func_?(&(this->fields).currentAnim);
        (this->fields).nextAnim = (AnimationData *)0x0;
        func_?(&(this->fields).nextAnim);
      }
      pAVar3 = (this->fields).nextAnim;
      while (pAVar3 != (AnimationData *)0x0) {
        pAVar3 = (this->fields).nextAnim;
        if (pAVar3 == (AnimationData *)0x0) goto code_?;
        if (iVar2 < (pAVar3->fields).timeStamp) break;
        pQVar1 = (this->fields).animationQueue;
        if (pQVar1 == (Queue_1_AnimationData_ *)0x0) goto code_?;
        if ((pQVar1->fields)._size < 1) break;
        bVar4 = iRam_? != 0;
        (this->fields).currentAnim = (this->fields).nextAnim;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pQVar1 = (this->fields).animationQueue;
        if (pQVar1 == (Queue_1_AnimationData_ *)0x0) goto code_?;
        pAVar3 = (AnimationData *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar1,
                             MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                            );
        bVar4 = iRam_? != 0;
        (this->fields).nextAnim = pAVar3;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields).nextAnim >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pAVar3 = (this->fields).nextAnim;
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Jump);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentAnim != (AnimationData *)0x0) {
    if ((this->fields).prevAnim != (AnimationData *)0x0) {
      pSVar9 = (((this->fields).currentAnim)->fields).state;
      pSVar10 = (((this->fields).prevAnim)->fields).state;
      if (pSVar9 == pSVar10) {
        return;
      }
      if ((((pSVar9 != (String *)0x0) && (pSVar10 != (String *)0x0)) &&
          ((pSVar9->fields)._stringLength == (pSVar10->fields)._stringLength)) &&
         (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar9->fields)._firstChar,
                             (uint8_t *)&(pSVar10->fields)._firstChar,
                             (longlong)(pSVar9->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar11 != 0)) {
        return;
      }
    }
    pSVar9 = StringLiteral_Jump;
    pAVar3 = (this->fields).currentAnim;
    if (pAVar3 == (AnimationData *)0x0) goto code_?;
    pSVar10 = (pAVar3->fields).state;
    if ((pSVar10 == StringLiteral_Jump) ||
       (((pSVar10 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
        (((pSVar10->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength &&
         (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar10->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                             (longlong)(pSVar10->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar11 != 0)))))) {
      pAVar12 = (this->fields).avatarAnimation;
      if (pAVar12 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar12,pSVar9,(MethodInfo *)0x0);
      pAVar3 = (this->fields).currentAnim;
      if ((pAVar3 == (AnimationData *)0x0) ||
         (pAVar12 = (this->fields).avatarAnimation, pAVar12 == (Animation *)0x0))
      goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar12,(pAVar3->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar3 = (this->fields).currentAnim;
      if ((pAVar3 == (AnimationData *)0x0) ||
         (pAVar12 = (this->fields).avatarAnimation, pAVar12 == (Animation *)0x0))
      goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar12,(pAVar3->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                 (MethodInfo *)0x0);
    }
    pAVar3 = (this->fields).currentAnim;
    if (pAVar3 == (AnimationData *)0x0) goto code_?;
    iVar2 = (pAVar3->fields).timeStamp;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (iVar2 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      iVar2 = FUN_?();
      pAVar3 = (this->fields).currentAnim;
      if (pAVar3 == (AnimationData *)0x0) {
code_?:
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar14 = (pAVar3->fields).timeStamp;
      pAVar12 = (this->fields).avatarAnimation;
      if ((pAVar12 == (Animation *)0x0) ||
         (pAVar15 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar12,(pAVar3->fields).state,(MethodInfo *)0x0),
         pAVar15 == (AnimationState *)0x0)) goto code_?;
      pvVar16 = (pAVar15->fields)._.m_Ptr;
      if (pvVar16 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar15,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      fVar18 = (float)(iVar2 - iVar14) * _UNK_?;
      fVar19 = (float)(*pcRam_?)(pvVar16);
      pAVar3 = (this->fields).currentAnim;
      if (((pAVar3 == (AnimationData *)0x0) ||
          (pAVar12 = (this->fields).avatarAnimation, pAVar12 == (Animation *)0x0)) ||
         (pAVar15 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar12,(pAVar3->fields).state,(MethodInfo *)0x0),
         pAVar15 == (AnimationState *)0x0)) goto code_?;
      pvVar16 = (pAVar15->fields)._.m_Ptr;
      if (pvVar16 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar15,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar16,fVar18 / fVar19);
    }
    (this->fields).prevAnim = (this->fields).currentAnim;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
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
    iVar2 = iRam_?;
    (this->fields).currentAnim = (AnimationData *)0x0;
    if (iVar2 != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
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
  }
  return;
}


/* Void Detach() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Detach
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Detach_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)this_01,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Detach_,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    obj = (this->fields).avatarAnimation;
    if (obj != (Animation *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (obj->fields)._._._.m_CachedPtr;
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
      (*pcRam_?)(pvVar2);
      this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                (this->fields).animationQueue;
      if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::
        Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
        Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                  (this_00,MethodInfo__System__Collections__Generic__Queue<AnimationData>__Clear__);
        iVar5 = iRam_?;
        (this->fields).nextAnim = (AnimationData *)0x0;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)&(this->fields).nextAnim >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        (this->fields).currentAnim = (AnimationData *)0x0;
        iVar11 = 0;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar11 = iRam_?;
          } while (!bVar10);
        }
        (this->fields).prevAnim = (AnimationData *)0x0;
        if (iVar11 != 0) {
          uVar6 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single GetAnimationTime(String) */

float Assembly-CSharp.dll::BoneAnimation::BoneAnimation_GetAnimationTime
                (BoneAnimation *this,String *animation,MethodInfo *method)

{
  this_00 = (this->fields).avatarAnimation;
  if ((this_00 == (Animation *)0x0) ||
     (obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                      (this_00,animation,(MethodInfo *)0x0), obj == (AnimationState *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pvVar3 = (obj->fields)._.m_Ptr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(*pcRam_?)(pvVar3);
  return fVar2;
}


/* Single GetFootstepPitch() */

float Assembly-CSharp.dll::BoneAnimation::BoneAnimation_GetFootstepPitch
                (BoneAnimation *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar3 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
  return fVar3;
}


/* Boolean IsPlaying(String) */

bool Assembly-CSharp.dll::BoneAnimation::BoneAnimation_IsPlaying
               (BoneAnimation *this,String *animationName,MethodInfo *method)

{
  obj = (this->fields).avatarAnimation;
  if (obj == (Animation *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                  ,animationName,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_20 = (uint16_t *)0x0;
  puStack_3 = (uint16_t *)0x0;
  puStack_4 = (undefined *)0x0;
  uStack_5 = 0;
  ppuStack_6 = &puStackX_20;
  if (obj != (Animation *)0x0) {
    pvVar7 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar7 != (void *)0x0) {
      if (animationName != (String *)0x0) {
        if ((animationName->fields)._stringLength == 0) {
          puStack_3 = (uint16_t *)0x1;
          puStack_4 = (undefined *)0x0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar8 = (animationName->fields)._stringLength;
          puStackX_20 = &(animationName->fields)._firstChar;
          if (iVar8 == 0) {
            puStackX_20 = (uint16_t *)0x0;
          }
          puStack_4 = (undefined *)CONCAT44(puStack_4._4_4_,iVar8);
          puStack_3 = puStackX_20;
        }
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? != (code *)0x0) ||
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0)) {
        pcRam_? = pcVar1;
        bVar2 = (*pcRam_?)(pvVar7,&puStack_3);
        return bVar2;
      }
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_OnEnable
               (BoneAnimation *this,MethodInfo *method)

{
  (this->fields).currentAnim = (this->fields).prevAnim;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).prevAnim = (AnimationData *)0x0;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Void Play(String) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Play
               (BoneAnimation *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).playingAnimations;
  if (this_00 != (HashSet_1_System_String_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__AddIfNotPresent
              ((HashSet_1_System_Object_ *)this_00,(Object *)animationName,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
               ->klass->rgctx_data[0x15].method);
    pAVar1 = (this->fields).avatarAnimation;
    if (pAVar1 != (Animation *)0x0) {
      pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                         (pAVar1,animationName,(MethodInfo *)0x0);
      if (pAVar2 != (AnimationState *)0x0) {
        pvVar3 = (pAVar2->fields)._.m_Ptr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          pcVar4 = (code *)FUN_?(&UNK_?);
          if (pcVar4 == (code *)0x0) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3,_UNK_?);
        pAVar1 = (this->fields).avatarAnimation;
        if (pAVar1 != (Animation *)0x0) {
          pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                             (pAVar1,animationName,(MethodInfo *)0x0);
          if (pAVar2 != (AnimationState *)0x0) {
            pvVar3 = (pAVar2->fields)._.m_Ptr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar4 = (code *)FUN_?(&UNK_?);
              if (pcVar4 == (code *)0x0) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar3,0);
            pAVar1 = (this->fields).avatarAnimation;
            if (pAVar1 != (Animation *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                              ,animationName,4,0);
                LOCK();
                UNLOCK();
                FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
                LOCK();
                UNLOCK();
                FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              apuStack_6[0] = (uint16_t *)0x0;
              puStack_7 = (uint16_t *)0x0;
              puStack_8 = (undefined *)0x0;
              uStack_9 = 0;
              ppuStack_10 = apuStack_6;
              if (pAVar1 != (Animation *)0x0) {
                pvVar3 = (pAVar1->fields)._._._.m_CachedPtr;
                if (pvVar3 != (void *)0x0) {
                  if (animationName != (String *)0x0) {
                    if ((animationName->fields)._stringLength == 0) {
                      puStack_7 = (uint16_t *)0x1;
                      puStack_8 = (undefined *)0x0;
                    }
                    else {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      iVar11 = (animationName->fields)._stringLength;
                      apuStack_6[0] = &(animationName->fields)._firstChar;
                      if (iVar11 == 0) {
                        apuStack_6[0] = (uint16_t *)0x0;
                      }
                      puStack_8 = (undefined *)CONCAT44(puStack_8._4_4_,iVar11);
                      puStack_7 = apuStack_6[0];
                    }
                  }
                  pcVar4 = pcRam_?;
                  if ((pcRam_? != (code *)0x0) ||
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 != (code *)0x0)) {
                    pcRam_? = pcVar4;
                    (*pcRam_?)(pvVar3,&puStack_7,4);
                    return;
                  }
                  uVar5 = func_?(&UNK_?);
                  FUN_?(uVar5);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
              }
              FUN_?();
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PlayAndPauseAt(String, Single) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_PlayAndPauseAt
               (BoneAnimation *this,String *animationName,float time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).playingAnimations;
  if (this_00 != (HashSet_1_System_String_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__AddIfNotPresent
              ((HashSet_1_System_Object_ *)this_00,(Object *)animationName,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
               ->klass->rgctx_data[0x15].method);
    pAVar1 = (this->fields).avatarAnimation;
    if (pAVar1 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar1,animationName,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
      pAVar1 = (this->fields).avatarAnimation;
      if ((pAVar1 != (Animation *)0x0) &&
         (pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                             (pAVar1,animationName,(MethodInfo *)0x0),
         pAVar2 != (AnimationState *)0x0)) {
        pvVar3 = (pAVar2->fields)._.m_Ptr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3,time);
        pAVar1 = (this->fields).avatarAnimation;
        if ((pAVar1 != (Animation *)0x0) &&
           (pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                               (pAVar1,animationName,(MethodInfo *)0x0),
           pAVar2 != (AnimationState *)0x0)) {
          pvVar3 = (pAVar2->fields)._.m_Ptr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3,0);
          pcVar4 = pcRam_?;
          (this->fields).pauseNextFrame = 1;
          pcVar6 = pcRam_?;
          if ((pcVar4 == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar4, pcVar4 == (code *)0x0
             )) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar6;
          iVar7 = (*pcVar4)();
          (this->fields).playStartFrame = iVar7;
          pAVar1 = (this->fields).avatarAnimation;
          if (pAVar1 != (Animation *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pAVar1->fields)._._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar3);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PlayFootstepAudio() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_PlayFootstepAudio
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Footstep);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).mvAvatar != (MVAvatar *)0x0) {
    if ((this->fields).isLocal == 0) {
      pAVar1 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
      fVar2 = BoneAnimation_GetFootstepPitch(this,(MethodInfo *)0x0);
      if (pAVar1 == (AudioSource *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar1,fVar2,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar1 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
      pMVar4 = (this->fields).mvAvatar;
      if (((pMVar4 == (MVAvatar *)0x0) || (pMVar5 = (pMVar4->fields).body, pMVar5 == (MVBody *)0x0))
         || (pTVar6 = (pMVar5->fields)._._._.transform, pTVar6 == (Transform *)0x0))
      goto code_?;
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
      pvVar8 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar8,&VStack_7);
      if (this_01 == (AudioManager *)0x0) goto code_?;
      VStack_10.x = VStack_7.x;
      VStack_10.y = VStack_7.y;
      VStack_10.z = VStack_7.z;
    }
    else {
      this_00 = (MVAvatarLocal *)(this->fields).mvAvatar;
      if (this_00 == (MVAvatarLocal *)0x0) goto code_?;
      bVar11 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar11) ||
         ((MVAvatarLocal__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
          TypeInfo__MVAvatarLocal)) {
        FUN_?(this_00);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pAVar12 = (this_00->fields).avatarMotor;
      if (pAVar12 == (AvatarMotor *)0x0) goto code_?;
      cVar13 = (*(pAVar12->klass->vtable).get_Grounded.methodPtr)();
      if (cVar13 == '\0') {
        return;
      }
      bVar14 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(this_00,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        return;
      }
      pAVar1 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
      fVar2 = BoneAnimation_GetFootstepPitch(this,(MethodInfo *)0x0);
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar1,fVar2,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar1 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
      pCVar15 = (this->fields).mainCamera;
      if ((pCVar15 == (Camera *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar15,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
      goto code_?;
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_7,pTVar6,(MethodInfo *)0x0);
      pCVar15 = (this->fields).mainCamera;
      VStack_10.x = pVVar16->x;
      VStack_10.y = pVVar16->y;
      fVar2 = pVVar16->z;
      if ((pCVar15 == (Camera *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar15,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
      goto code_?;
      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_7,pTVar6,(MethodInfo *)0x0);
      uVar9._0_4_ = pVVar16->x;
      uVar9._4_4_ = pVVar16->y;
      fVar17 = VStack_10.x + (float)uVar9;
      fVar18 = VStack_10.y + uVar9._4_4_;
      VStack_10.z = fVar2 + pVVar16->z;
      VStack_10._0_8_ = uVar9;
      if (this_01 == (AudioManager *)0x0) goto code_?;
      VStack_10.y = fVar18;
      VStack_10.x = fVar17;
    }
    AudioManager::AudioManager_Play_2
              (this_01,StringLiteral_Footstep,pAVar1,&VStack_10,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Start(BoneAnimation *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).mainCamera = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
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
  return;
}


/* Void StartAnimation(String, Int32) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_StartAnimation
               (BoneAnimation *this,String *newAnimation,int32_t timeStamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AnimationData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).OnAnimationChange != (Action_1_String_ *)0x0) {
    pAVar1 = (this->fields).OnAnimationChange;
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code,newAnimation);
  }
  if ((this->fields).isLocal == 0) {
    pQVar2 = (this->fields).animationQueue;
    item = (Object *)FUN_?(TypeInfo__AnimationData);
    bVar3 = iRam_? != 0;
    item[1].klass = (Object__Class *)newAnimation;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)(item + 1) >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    *(int32_t *)&item[1].monitor = timeStamp;
    if (pQVar2 == (Queue_1_AnimationData_ *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar2,item,
               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
              );
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar2 = (this->fields).animationQueue;
    iVar9 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField + 0x14;
    if (pQVar2 == (Queue_1_AnimationData_ *)0x0) goto code_?;
    pAVar10 = (this->fields).nextAnim;
    if ((pQVar2->fields)._size < 1) {
      if ((pAVar10 != (AnimationData *)0x0) && ((pAVar10->fields).timeStamp <= iVar9)) {
        (this->fields).currentAnim = pAVar10;
        func_?(&(this->fields).currentAnim);
        (this->fields).nextAnim = (AnimationData *)0x0;
        func_?(&(this->fields).nextAnim);
      }
    }
    else {
      if (pAVar10 == (AnimationData *)0x0) {
        if (pQVar2 == (Queue_1_AnimationData_ *)0x0) goto code_?;
        pAVar10 = (AnimationData *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar2,
                             MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                            );
        bVar3 = iRam_? != 0;
        (this->fields).nextAnim = pAVar10;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).nextAnim >> 0xc);
          uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar11 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar11 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
      }
      if ((this->fields).nextAnim != (AnimationData *)0x0) {
        if (((this->fields).currentAnim == (AnimationData *)0x0) &&
           (pAVar10 = (this->fields).nextAnim, (pAVar10->fields).timeStamp <= iVar9)) {
          (this->fields).currentAnim = pAVar10;
          func_?(&(this->fields).currentAnim);
          (this->fields).nextAnim = (AnimationData *)0x0;
          func_?(&(this->fields).nextAnim);
        }
        pAVar10 = (this->fields).nextAnim;
        while (pAVar10 != (AnimationData *)0x0) {
          pAVar10 = (this->fields).nextAnim;
          if (pAVar10 == (AnimationData *)0x0) goto code_?;
          if (iVar9 < (pAVar10->fields).timeStamp) break;
          pQVar2 = (this->fields).animationQueue;
          if (pQVar2 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          if ((pQVar2->fields)._size < 1) break;
          bVar3 = iRam_? != 0;
          (this->fields).currentAnim = (this->fields).nextAnim;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
            uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar11 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar11 | 1L << (ulonglong)(uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pQVar2 = (this->fields).animationQueue;
          if (pQVar2 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          pAVar10 = (AnimationData *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Dequeue
                              ((Queue_1_System_Object_ *)pQVar2,
                               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                              );
          bVar3 = iRam_? != 0;
          (this->fields).nextAnim = pAVar10;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).nextAnim >> 0xc);
            uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar11 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar11 | 1L << (ulonglong)(uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pAVar10 = (this->fields).nextAnim;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Jump);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).currentAnim != (AnimationData *)0x0) {
      if ((this->fields).prevAnim != (AnimationData *)0x0) {
        pSVar12 = (((this->fields).currentAnim)->fields).state;
        pSVar13 = (((this->fields).prevAnim)->fields).state;
        if (pSVar12 == pSVar13) {
          return;
        }
        if ((((pSVar12 != (String *)0x0) && (pSVar13 != (String *)0x0)) &&
            ((pSVar12->fields)._stringLength == (pSVar13->fields)._stringLength)) &&
           (bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar12->fields)._firstChar,
                                (uint8_t *)&(pSVar13->fields)._firstChar,
                                (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar14 != 0)) {
          return;
        }
      }
      pSVar12 = StringLiteral_Jump;
      pAVar10 = (this->fields).currentAnim;
      if (pAVar10 == (AnimationData *)0x0) goto code_?;
      pSVar13 = (pAVar10->fields).state;
      if ((pSVar13 == StringLiteral_Jump) ||
         (((pSVar13 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
          (((pSVar13->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength &&
           (bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar13->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                                (longlong)(pSVar13->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar14 != 0)))))) {
        pAVar15 = (this->fields).avatarAnimation;
        if (pAVar15 == (Animation *)0x0) goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                  (pAVar15,pSVar12,(MethodInfo *)0x0);
        pAVar10 = (this->fields).currentAnim;
        if ((pAVar10 == (AnimationData *)0x0) ||
           (pAVar15 = (this->fields).avatarAnimation, pAVar15 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar15,(pAVar10->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
      }
      else {
        pAVar10 = (this->fields).currentAnim;
        if ((pAVar10 == (AnimationData *)0x0) ||
           (pAVar15 = (this->fields).avatarAnimation, pAVar15 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                  (pAVar15,(pAVar10->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                   (MethodInfo *)0x0);
      }
      pAVar10 = (this->fields).currentAnim;
      if (pAVar10 == (AnimationData *)0x0) goto code_?;
      iVar9 = (pAVar10->fields).timeStamp;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__TransformNetworkManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar9 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
        iVar9 = FUN_?();
        pAVar10 = (this->fields).currentAnim;
        if (pAVar10 == (AnimationData *)0x0) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = (pAVar10->fields).timeStamp;
        pAVar15 = (this->fields).avatarAnimation;
        if ((pAVar15 == (Animation *)0x0) ||
           (pAVar17 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar15,(pAVar10->fields).state,(MethodInfo *)0x0),
           pAVar17 == (AnimationState *)0x0)) goto code_?;
        pvVar18 = (pAVar17->fields)._.m_Ptr;
        if (pvVar18 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar17,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar19 = func_?(&UNK_?);
          FUN_?(uVar19,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        fVar20 = (float)(iVar9 - iVar16) * _UNK_?;
        fVar21 = (float)(*pcRam_?)(pvVar18);
        pAVar10 = (this->fields).currentAnim;
        if (((pAVar10 == (AnimationData *)0x0) ||
            (pAVar15 = (this->fields).avatarAnimation, pAVar15 == (Animation *)0x0)) ||
           (pAVar17 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar15,(pAVar10->fields).state,(MethodInfo *)0x0),
           pAVar17 == (AnimationState *)0x0)) goto code_?;
        pvVar18 = (pAVar17->fields)._.m_Ptr;
        if (pvVar18 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar17,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar19 = func_?(&UNK_?);
          FUN_?(uVar19,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar18,fVar20 / fVar21);
      }
      (this->fields).prevAnim = (this->fields).currentAnim;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
        uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar11 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar11 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      iVar9 = iRam_?;
      (this->fields).currentAnim = (AnimationData *)0x0;
      if (iVar9 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
        uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar11 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar11 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
    }
    return;
  }
  pAVar10 = (AnimationData *)FUN_?(TypeInfo__AnimationData);
  iVar9 = iRam_?;
  (pAVar10->fields).state = newAnimation;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&pAVar10->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar3);
  }
  (pAVar10->fields).timeStamp = timeStamp;
  (this->fields).currentAnim = pAVar10;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Jump,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentAnim != (AnimationData *)0x0) {
    if ((this->fields).prevAnim != (AnimationData *)0x0) {
      pSVar12 = (((this->fields).currentAnim)->fields).state;
      pSVar13 = (((this->fields).prevAnim)->fields).state;
      if (pSVar12 == pSVar13) {
        return;
      }
      if (((pSVar12 != (String *)0x0) && (pSVar13 != (String *)0x0)) &&
         (((pSVar12->fields)._stringLength == (pSVar13->fields)._stringLength &&
          (bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar12->fields)._firstChar,
                               (uint8_t *)&(pSVar13->fields)._firstChar,
                               (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar14 != 0)))) {
        return;
      }
    }
    pSVar12 = StringLiteral_Jump;
    pAVar10 = (this->fields).currentAnim;
    if (pAVar10 == (AnimationData *)0x0) goto DAT_?;
    pSVar13 = (pAVar10->fields).state;
    if ((pSVar13 == StringLiteral_Jump) ||
       ((((pSVar13 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
         ((pSVar13->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength)) &&
        (bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar13->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                             (longlong)(pSVar13->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar14 != 0)))) {
      pAVar15 = (this->fields).avatarAnimation;
      if (pAVar15 == (Animation *)0x0) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar15,pSVar12,(MethodInfo *)0x0);
      pAVar10 = (this->fields).currentAnim;
      if ((pAVar10 == (AnimationData *)0x0) ||
         (pAVar15 = (this->fields).avatarAnimation, pAVar15 == (Animation *)0x0)) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar15,(pAVar10->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar10 = (this->fields).currentAnim;
      if ((pAVar10 == (AnimationData *)0x0) ||
         (pAVar15 = (this->fields).avatarAnimation, pAVar15 == (Animation *)0x0)) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar15,(pAVar10->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                 (MethodInfo *)0x0);
    }
    pAVar10 = (this->fields).currentAnim;
    if (pAVar10 == (AnimationData *)0x0) goto DAT_?;
    iVar9 = (pAVar10->fields).timeStamp;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (iVar9 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      iVar9 = FUN_?();
      pAVar10 = (this->fields).currentAnim;
      if (pAVar10 == (AnimationData *)0x0) {
DAT_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (pAVar10->fields).timeStamp;
      pAVar15 = (this->fields).avatarAnimation;
      if ((pAVar15 == (Animation *)0x0) ||
         (pAVar17 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar15,(pAVar10->fields).state,(MethodInfo *)0x0),
         pAVar17 == (AnimationState *)0x0)) goto DAT_?;
      pvVar18 = (pAVar17->fields)._.m_Ptr;
      if (pvVar18 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar17,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar19 = func_?(&UNK_?);
        FUN_?(uVar19,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      fVar20 = (float)(iVar9 - iVar16) * _UNK_?;
      fVar21 = (float)(*pcRam_?)(pvVar18);
      pAVar10 = (this->fields).currentAnim;
      if (((pAVar10 == (AnimationData *)0x0) ||
          (pAVar15 = (this->fields).avatarAnimation, pAVar15 == (Animation *)0x0)) ||
         (pAVar17 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar15,(pAVar10->fields).state,(MethodInfo *)0x0),
         pAVar17 == (AnimationState *)0x0)) goto DAT_?;
      pvVar18 = (pAVar17->fields)._.m_Ptr;
      if (pvVar18 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar17,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar19 = func_?(&UNK_?);
        FUN_?(uVar19,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar18,fVar20 / fVar21);
    }
    (this->fields).prevAnim = (this->fields).currentAnim;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).prevAnim >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar11 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar11 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    iVar9 = iRam_?;
    (this->fields).currentAnim = (AnimationData *)0x0;
    if (iVar9 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).currentAnim >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar11 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar11 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  return;
}


/* Void Stop() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Stop(BoneAnimation *this,MethodInfo *method)

{
  obj = (this->fields).avatarAnimation;
  if (obj == (Animation *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Update
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<System::String>__Remove_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Walk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AnimationState *)0x0;
  pIStackX_18 = (IEnumerator *)0x0;
  lStackX_20 = 0;
  if ((this->fields).isLocal == 0) {
    BoneAnimation_ComputeRemoteAnimation(this,(MethodInfo *)0x0);
  }
  if ((this->fields).pauseNextFrame == 0) {
code_?:
    pAVar2 = (this->fields).avatarAnimation;
    if (pAVar2 == (Animation *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIStackX_18 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetEnumerator
                            (pAVar2,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    fVar5 = _UNK_?;
    fVar6 = _UNK_?;
    uStack_7 = 0;
    ppIStack_8 = &pIStackX_18;
    plStack_9 = &lStackX_20;
    while (pIVar10 = pIStackX_18, pIStackX_18 != (IEnumerator *)0x0) {
      pIVar11 = pIStackX_18->klass;
      uVar12 = 0;
      uVar13._0_1_ = (pIVar11->_1).rank;
      uVar13._1_1_ = (pIVar11->_1).minimumAlignment;
      if (uVar13 != 0) {
        do {
          if (pIVar11->interfaceOffsets[uVar12].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar14 = &(pIVar11->vtable).MoveNext + pIVar11->interfaceOffsets[uVar12].offset;
            goto code_?;
          }
          uVar15 = (short)uVar12 + 1;
          uVar12 = (ulonglong)uVar15;
        } while (uVar15 < uVar13);
      }
      pVVar14 = (VirtualInvokeData *)
                FUN_?(pIStackX_18,TypeInfo__System__Collections__IEnumerator,0);
code_?:
      cVar16 = (*pVVar14->methodPtr)(pIVar10,pVVar14->method);
      pIVar10 = pIStackX_18;
      if (cVar16 == '\0') {
        lStackX_20 = FUN_?(pIStackX_18,TypeInfo__System__IDisposable);
        if (lStackX_20 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
        }
        return;
      }
      if (pIStackX_18 == (IEnumerator *)0x0) goto code_?;
      pIVar11 = pIStackX_18->klass;
      uVar15._0_1_ = (pIVar11->_1).rank;
      uVar15._1_1_ = (pIVar11->_1).minimumAlignment;
      if (uVar15 != 0) {
        uVar13 = 0;
        do {
          if (pIVar11->interfaceOffsets[uVar13].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar14 = &(pIVar11->vtable).MoveNext + (pIVar11->interfaceOffsets[uVar13].offset + 1);
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar15);
      }
      pVVar14 = (VirtualInvokeData *)
                FUN_?(pIStackX_18,TypeInfo__System__Collections__IEnumerator);
code_?:
      pAVar17 = (AnimationState *)(*pVVar14->methodPtr)(pIVar10,pVVar14->method);
      if (pAVar17 == (AnimationState *)0x0) goto code_?;
      pAVar18 = pAVar1;
      if (pAVar17->klass == TypeInfo__UnityEngine__AnimationState) {
        pAVar18 = pAVar17;
      }
      if (pAVar18 == (AnimationState *)0x0) goto code_?;
      pSVar19 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                AnimationState_get_name(pAVar18,(MethodInfo *)0x0);
      if (((pSVar19 == StringLiteral_Walk) ||
          ((((pSVar19 != (String *)0x0 && (StringLiteral_Walk != (String *)0x0)) &&
            ((pSVar19->fields)._stringLength == (StringLiteral_Walk->fields)._stringLength)) &&
           (bVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar19->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_Walk->fields)._firstChar,
                                (longlong)(pSVar19->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar20 != 0)))) &&
         ((bVar20 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_enabled(pAVar18,(MethodInfo *)0x0), bVar20 != 0 &&
          (MVar21 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
          MVar21 != MVGameMode__Enum_CharacterEditor)))) {
        if ((this->fields).mvAvatar == (MVAvatar *)0x0) {
          fVar22 = (this->fields).fallbackWalkSpeed;
        }
        else {
          puVar23 = (undefined8 *)
                    (*(((this->fields).mvAvatar)->klass->vtable).__unknown.methodPtr)(&uStack_24);
          uStack_25 = *puVar23;
          uStack_26 = *(undefined4 *)(puVar23 + 1);
          fVar22 = (float)FUN_?(&uStack_25);
        }
        fVar22 = fVar22 * fVar6;
        value = fVar5;
        if ((fVar5 <= fVar22) && (value = fVar22, fVar4 < fVar22)) {
          value = fVar4;
        }
        UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                  (pAVar18,value,(MethodInfo *)0x0);
      }
      pHVar27 = (this->fields).playingAnimations;
      pSVar19 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                AnimationState_get_name(pAVar18,(MethodInfo *)0x0);
      if (pHVar27 == (HashSet_1_System_String_ *)0x0) goto code_?;
      bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
               HashSet_1_System_Object__Contains
                         ((HashSet_1_System_Object_ *)pHVar27,(Object *)pSVar19,
                          MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                         );
      if ((bVar20 != 0) &&
         (bVar20 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                   AnimationState_get_enabled(pAVar18,(MethodInfo *)0x0), bVar20 == 0)) {
        pHVar27 = (this->fields).playingAnimations;
        pSVar19 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                  AnimationState_get_name(pAVar18,(MethodInfo *)0x0);
        if (pHVar27 == (HashSet_1_System_String_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Remove
                  ((HashSet_1_System_Object_ *)pHVar27,(Object *)pSVar19,
                   MethodInfo__System__Collections__Generic__HashSet<System::String>__Remove_System__String_
                  );
      }
    }
  }
  else {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar28 = func_?(&UNK_?);
      FUN_?(uVar28);
code_?:
      FUN_?();
code_?:
      uVar28 = func_?(&UNK_?);
      pAVar18 = (AnimationState *)FUN_?(uVar28);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar18,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar3;
      iVar29 = (*pcRam_?)();
      if (iVar29 != (this->fields).playStartFrame + 1) goto code_?;
      pAVar2 = (this->fields).avatarAnimation;
      if (pAVar2 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Stop
                (pAVar2,(MethodInfo *)0x0);
      pAVar2 = (this->fields).avatarAnimation;
      if (pAVar2 == (Animation *)0x0) goto code_?;
      pIStackX_18 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetEnumerator
                              (pAVar2,(MethodInfo *)0x0);
      uVar30 = _UNK_?;
      uStack_24 = 0;
      ppIStack_31 = &pIStackX_18;
      plStack_32 = &lStackX_20;
      while (pIStackX_18 != (IEnumerator *)0x0) {
        cVar16 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        pIVar10 = pIStackX_18;
        if (cVar16 == '\0') {
          lStackX_20 = FUN_?(pIStackX_18);
          if (lStackX_20 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
          }
          (this->fields).pauseNextFrame = 0;
          goto code_?;
        }
        if (pIStackX_18 == (IEnumerator *)0x0) goto code_?;
        pIVar11 = pIStackX_18->klass;
        uVar33._0_1_ = (pIVar11->_1).rank;
        uVar33._1_1_ = (pIVar11->_1).minimumAlignment;
        if (uVar33 != 0) {
          uVar13 = 0;
          do {
            if (pIVar11->interfaceOffsets[uVar13].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar14 = &(pIVar11->vtable).MoveNext + (pIVar11->interfaceOffsets[uVar13].offset + 1);
              goto code_?;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar33);
        }
        pVVar14 = (VirtualInvokeData *)
                  FUN_?(pIStackX_18,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pAVar17 = (AnimationState *)(*pVVar14->methodPtr)(pIVar10,pVVar14->method);
        if (pAVar17 == (AnimationState *)0x0) goto code_?;
        pAVar18 = pAVar1;
        if (pAVar17->klass == TypeInfo__UnityEngine__AnimationState) {
          pAVar18 = pAVar17;
        }
        if (pAVar18 == (AnimationState *)0x0) goto code_?;
        pAVar18 = pAVar1;
        if (pAVar17->klass == TypeInfo__UnityEngine__AnimationState) {
          pAVar18 = pAVar17;
        }
        pvVar34 = (pAVar18->fields)._.m_Ptr;
        if (pvVar34 == (void *)0x0) goto code_?;
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
        goto code_?;
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar34,uVar30);
      }
    }
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    pAVar17 = (AnimationState *)FUN_?();
code_?:
    FUN_?(pAVar17);
code_?:
    FUN_?();
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* BoneAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation__ctor(BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<AnimationData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).fallbackWalkSpeed = 8.0;
  this_00 = (Queue_1_AnimationData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Queue<AnimationData>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<AnimationData>__Queue__);
  bVar1 = iRam_? != 0;
  (this->fields).animationQueue = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).animationQueue >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (HashSet_1_System_String_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields).playingAnimations = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).playingAnimations >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}


/* AudioSource get_AudioSource() */

AudioSource *
Assembly-CSharp.dll::BoneAnimation::BoneAnimation_get_AudioSource
          (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
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
  if (pAVar1 != (AudioSource *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pAVar1 = (AudioSource *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                     );
  bVar2 = iRam_? == 0;
  (this->fields).audioSource = pAVar1;
  if (bVar2) {
    return pAVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields).audioSource >> 0xc);
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
code_?:
  return (this->fields).audioSource;
}


/* Void set_FallBackWalkSpeed(Single) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_set_FallBackWalkSpeed
               (BoneAnimation *this,float value,MethodInfo *method)

{
  (this->fields).fallbackWalkSpeed = value * _UNK_?;
  return;
}

