
/* Void Awake() */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Awake(MoveAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<KeyFrameCallback>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__Sort_System__Comparison<KeyFrameCallback>_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__MoveAnimation____c___Awake_b__8_0_KeyFrameCallback__KeyFrameCallback_
                   );
    func_?(&TypeInfo__MoveAnimation____c);
    func_?(&StringLiteral_Target_not_set);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).keyFrameCallbacks;
  if ((TypeInfo__MoveAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MoveAnimation____c);
  }
  this_01 = TypeInfo__MoveAnimation____c->static_fields->__9__8_0;
  if (this_01 == (Comparison_1_KeyFrameCallback_ *)0x0) {
    if ((TypeInfo__MoveAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MoveAnimation____c);
    }
    object = TypeInfo__MoveAnimation____c->static_fields->__9;
    this_01 = (Comparison_1_KeyFrameCallback_ *)
              func_?(TypeInfo__System__Comparison<KeyFrameCallback>);
    Newtonsoft.Json.dll::Newtonsoft::Json::Utilities::MethodCall`2[System::Object,System::Object]::
    MethodCall_2_System_Object_System_Object___ctor
              ((MethodCall_2_System_Object_System_Object_ *)this_01,(Object *)object,
               MethodInfo__MoveAnimation____c___Awake_b__8_0_KeyFrameCallback__KeyFrameCallback_,
               (MethodInfo *)0x0);
    TypeInfo__MoveAnimation____c->static_fields->__9__8_0 = this_01;
    func_?(&TypeInfo__MoveAnimation____c->static_fields->__9__8_0,this_01);
  }
  if (this_00 != (List_1_KeyFrameCallback_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort_1
              ((List_1_System_Object_ *)this_00,(Comparison_1_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__Sort_System__Comparison<KeyFrameCallback>_
              );
    pTVar1 = (this->fields)._.target;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Target_not_set,(MethodInfo *)0x0);
    }
    else {
      pTVar1 = (this->fields)._.target;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      (this->fields)._.originalLocalPos.x = pVVar3->x;
      (this->fields)._.originalLocalPos.y = fVar4;
      (this->fields)._.originalLocalPos.z = fVar5;
    }
    pAVar6 = (this->fields).animationCurve;
    if (pAVar6 != (AnimationCurve *)0x0) {
      pKVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (pAVar6,(MethodInfo *)0x0);
      pAVar6 = (this->fields).animationCurve;
      if (pAVar6 != (AnimationCurve *)0x0) {
        iVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                          (pAVar6,(MethodInfo *)0x0);
        if (pKVar7 != (Keyframe__Array *)0x0) {
          if (iVar8 - 1U < pKVar7->max_length) {
            fVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System
                    ::Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                              ((KeyValuePair_2_System_Single_System_Single_ *)
                               (pKVar7->vector + iVar8 + -1),(MethodInfo *)0x0);
            (this->fields).doneTime = fVar5;
            return;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void EvaluateKeyFrameCallbacks(Single) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_EvaluateKeyFrameCallbacks
               (MoveAnimation *this,float timePassedSincePlay,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  method_00 = (MethodInfo *)(this->fields).keyFrameCallbacks;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                          );
        pOVar10 = LStack_6._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_00 = (this->fields).animationCurve;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
      } while (*(char *)((int)LStack_6._current + 0x1c) != '\0');
      if (this_00 == (AnimationCurve *)0x0) goto code_?;
      pKVar11 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (this_00,(MethodInfo *)0x0);
      if (pKVar11 == (Keyframe__Array *)0x0) goto code_?;
      if (pKVar11->max_length <= *(uint *)((int)pOVar10 + 0x14)) break;
      method_00 = (MethodInfo *)(pKVar11->vector + *(uint *)((int)pOVar10 + 0x14));
      fStack_12 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
                  Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                            ((KeyValuePair_2_System_Single_System_Single_ *)method_00,
                             (MethodInfo *)0x0);
      if ((fStack_12 <= timePassedSincePlay) &&
         (*(undefined1 *)((int)pOVar10 + 0x1c) = 1, *(int *)((int)pOVar10 + 0x18) != 0)) {
        (**(code **)(*(int *)((int)pOVar10 + 0x18) + 0xc))();
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Play
               (MoveAnimation *this,float offsetTime,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff24;
  puVar5 = &stack0xffffff24;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  func_?(&fStack_7,0,0x40);
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar9 = (this->fields)._.target;
  (this->fields)._.state = 2;
  (this->fields).beginTime = (float)pLStack_8 - offsetTime;
  if (pTVar9 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar9,(this->fields)._.originalLocalPos,(MethodInfo *)0x0);
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).keyFrameCallbacks;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)auStack_11,this_00,
                          MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                         );
      uStack_12 = uStack_12 & 0xffffffff;
      LStack_6._list = (List_1_System_Object_ *)pLVar10->_list;
      LStack_6._index = pLVar10->_index;
      LStack_6._version = pLVar10->_version;
      LStack_6._current = *(Object **)&pLVar10->_current;
      uStack_1 = 1;
      pLStack_8 = &LStack_6;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                          );
        if (bVar13 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        *(undefined1 *)((int)LStack_6._current + 0x1c) = 0;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                 ,in_stack_14);
      uStack_1 = 0xffffffff;
      pTVar9 = (this->fields)._.target;
      if (pTVar9 != (Transform *)0x0) {
        pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_worldToLocalMatrix
                           ((Matrix4x4 *)&stack0xffffff30,pTVar9,(MethodInfo *)0x0);
        fStack_7 = pMVar15->m00;
        fStack_16 = pMVar15->m10;
        puStack_17 = (undefined *)pMVar15->m20;
        pTVar9 = (this->fields).moveTo;
        if (pTVar9 != (Transform *)0x0) {
          pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_19,pTVar9,(MethodInfo *)0x0);
          pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                              (&VStack_19,(Matrix4x4 *)&fStack_7,*pVVar18,(MethodInfo *)0x0);
          uStack_12._0_4_ = pVVar18->x;
          uStack_12._4_4_ = pVVar18->y;
          pLStack_8 = (List_1_T_Enumerator_System_Object_ *)pVVar18->z;
          pTVar9 = (this->fields)._.target;
          if (pTVar9 != (Transform *)0x0) {
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition
                                ((Vector3 *)(auStack_11 + 4),pTVar9,(MethodInfo *)0x0);
            uVar20 = pVVar18->x;
            uVar21 = pVVar18->y;
            fVar22 = pVVar18->z;
            (this->fields).direction.x = (float)uStack_12 - (float)uVar20;
            (this->fields).direction.y = uStack_12._4_4_ - (float)uVar21;
            (this->fields).direction.z = (float)pLStack_8 - fVar22;
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,extraTime,(pMVar1->fields)._._.method);
  }
  return;
}


/* Void SubscribeToKeyFrame(String, Action) */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_SubscribeToKeyFrame
               (MoveAnimation *this,String *keyFrameName,Action *callback,MethodInfo *method)

{
  _Stack_8 = (_union_155)0xffffffff;
  _Stack_c.rgctx_data = (Il2CppRGCTXData *)&DAT_?;
  ppIStack_1 = (Il2CppType **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppIStack_1;
  pIStack_2 = (Il2CppType *)&stack0xffffffbc;
  pIVar3 = (Il2CppType *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                   );
    func_?(&StringLiteral_Failed_to_find_keyFrame);
    cRam_? = '\x01';
    pIVar3 = pIStack_2;
  }
  pIStack_2 = pIVar3;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).keyFrameCallbacks;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    method_00 = (MethodInfo *)&stack0xffffffd8;
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)method_00,this_00,
                        MethodInfo__System__Collections__Generic__List<KeyFrameCallback>__GetEnumerator__
                       );
    method_01 = (Object__Class *)pLVar4->_list;
    RVar5 = pLVar4->_current;
    pIStack_6 = (InvokerMethod)0x0;
    _Stack_8 = (_union_155)0x1;
    pOStack_7 = (Object *)&stack0xffffffc8;
    do {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__MoveNext__
                        );
      if (bVar8 == 0) {
        _Stack_8 = (_union_155)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                   ,method_00);
        _Stack_8 = (_union_155)0xffffffff;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_find_keyFrame,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = ppIStack_1;
        return;
      }
      if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
      bVar8 = mscorlib.dll::System::String::String_op_Equality
                        (*(String **)((int)RVar5 + 0x10),keyFrameName,(MethodInfo *)0x0);
    } while (bVar8 == 0);
    if (RVar5 != (RegexCharClass_SingleRange)0x0) {
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (*(Delegate **)((int)RVar5 + 0x18),(Delegate *)callback,(MethodInfo *)0x0);
      if (pDVar9 == (Delegate *)0x0) {
        *(undefined4 *)((int)RVar5 + 0x18) = 0;
code_?:
        func_?();
        _Stack_8 = (_union_155)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<KeyFrameCallback>__Dispose__
                   ,(MethodInfo *)method_01);
        *unaff_FS_OFFSET = ppIStack_1;
        return;
      }
      pDVar10 = (Delegate *)0x0;
      if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
        pDVar10 = pDVar9;
      }
      if (pDVar10 != (Delegate *)0x0) {
        *(Delegate **)((int)RVar5 + 0x18) = pDVar10;
        pDVar10 = (Delegate *)0x0;
        if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
          pDVar10 = pDVar9;
        }
        if (pDVar10 != (Delegate *)0x0) goto code_?;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MoveAnimation::MoveAnimation_Update
               (MoveAnimation *this,MethodInfo *method)

{
  if ((this->fields)._.testState == 2) {
    (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
    (this->fields)._.testState = 0;
  }
  if ((this->fields)._.state == 2) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_00 = (this->fields)._.target;
    this_01 = (this->fields).animationCurve;
    fVar1 = fVar1 - (this->fields).beginTime;
    pfVar2 = &(this->fields).doneTime;
    fVar3 = (this->fields).direction.z;
    fVar4 = (this->fields).direction.x;
    fVar5 = (this->fields).direction.y;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      if (this_01 == (AnimationCurve *)0x0) goto code_?;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_01,(this->fields).doneTime,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      value_00.y = fVar5 * fVar6;
      value_00.x = fVar4 * fVar6;
      value_00.z = fVar3 * fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_00,value_00,(MethodInfo *)0x0);
      (this->fields)._.state = 1;
      if ((this->fields)._.OnMoveAnimationStopped !=
          (MoveAnimationBase_OnMoveAnimationStoppedDelegate *)0x0) {
        (*(((this->fields)._.OnMoveAnimationStopped)->fields)._._.invoke_impl)();
      }
    }
    else {
      if (this_01 == (AnimationCurve *)0x0) {
code_?:
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_01,fVar1,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      value.y = fVar5 * fVar6;
      value.x = fVar4 * fVar6;
      value.z = fVar3 * fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_00,value,(MethodInfo *)0x0);
    }
    MoveAnimation_EvaluateKeyFrameCallbacks(this,fVar1,(MethodInfo *)0x0);
  }
  return;
}

