
/* Void ApplyAnimationSpeed(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_ApplyAnimationSpeed
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    x = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                  (pAVar1,animationName,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pAVar1 = (this->fields).animations;
    if (pAVar1 != (Animation *)0x0) {
      this_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                          (pAVar1,animationName,(MethodInfo *)0x0);
      value = AccessoryAnimationHandler_GetAnimationSpeed(this,animationName,(MethodInfo *)0x0);
      if (this_00 != (AnimationState *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single GetAnimationSpeed(String) */

float Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_GetAnimationSpeed
                (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  fStack_1 = 1.0;
  pLVar2 = (this->fields).animationData;
  while (pLVar2 != (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) {
    if ((pLVar2->fields)._size <= index) {
      return fStack_1;
    }
    pLVar2 = (this->fields).animationData;
    if (pLVar2 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
    pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                       (&UStack_4,
                        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar2,index,
                        MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                       );
    uStack_5._0_4_ = pUVar3->m_DelagateCallback;
    uStack_5._4_4_ = pUVar3->m_DelagateState;
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)(undefined4)uStack_5,animationName,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pLVar2 = (this->fields).animationData;
      if (pLVar2 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
      UStack_4.m_DelagateCallback =
           (SendOrPostCallback *)
           MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
      ;
      ppppuStack_2c = &ppppuStack_2c;
      pLStack_7 = pLVar2;
      iStack_8 = index;
      iVar9 = func_?();
      fStack_1 = *(float *)(iVar9 + 4);
    }
    index = index + 1;
    pLVar2 = (this->fields).animationData;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  fVar11 = (float10)(*pcVar10)();
  return (float)fVar11;
}


/* Avatar GetAvatar() */

Avatar * Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_GetAvatar
                   (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (Avatar *)0x0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    while( true ) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return pAVar1;
      }
      if (pTVar2 == (Transform *)0x0) break;
      pAVar1 = (Avatar *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pTVar2,
                          Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return pAVar1;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar1 = (Avatar *)(*pcVar4)();
  return pAVar1;
}


/* Void HandleNoIdleAnimation() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_HandleNoIdleAnimation
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    ((this->fields).currentCrossFadedAnimation,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  this_00 = (this->fields).animations;
  if (this_00 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
              (this_00,(this->fields).currentCrossFadedAnimation,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)&UNK_?);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?(value + 2);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean HaveAnimationData(String) */

bool Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_HaveAnimationData
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).animationData;
  while (pLVar1 != (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return 0;
    }
    pLVar1 = (this->fields).animationData;
    if (pLVar1 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
    pUVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                       (&UStack_3,
                        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                       );
    uStack_4._0_4_ = pUVar2->m_DelagateCallback;
    uStack_4._4_4_ = pUVar2->m_DelagateState;
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)(undefined4)uStack_4,animationName,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      return 1;
    }
    index = index + 1;
    pLVar1 = (this->fields).animationData;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_Initialize
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    x = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                  (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      AccessoryAnimationHandler_ApplyAnimationSpeed(this,StringLiteral_Idle,(MethodInfo *)0x0);
      pAVar1 = (this->fields).animations;
      if (pAVar1 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::
     AccessoryAnimationHandler_OnAvatarAnimationChange
               (AccessoryAnimationHandler *this,String *newAnimation,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    ((this->fields).currentCrossFadedAnimation,newAnimation,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    AccessoryAnimationHandler_PlayAnimation(this,newAnimation,(MethodInfo *)0x0);
  }
  return;
}


/* Void PlayAnimation(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_PlayAnimation
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  do {
    a_01 = (MethodInfo *)animationName;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                     );
      func_?(&StringLiteral_Idle);
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    iVar2 = 0;
    while( true ) {
      pLVar3 = (this->fields).animationData;
      if (pLVar3 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) goto code_?;
      if ((pLVar3->fields)._size <= iVar2) break;
      pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
               UnitySynchronizationContext+WorkRequest]::
               List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                         ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffd8,
                          (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar3,
                          iVar2,
                          MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                         );
      a = pUVar4->m_DelagateCallback;
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)a,(String *)a_01,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
      iVar2 = iVar2 + 1;
    }
    bVar1 = mscorlib.dll::System::String::String_op_Inequality
                      ((String *)a_01,StringLiteral_Idle,(MethodInfo *)0x0);
    animationName = StringLiteral_Idle;
  } while (bVar1 != 0);
  method_00 = a_01;
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    ((String *)a_01,StringLiteral_Idle,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    (this->fields).shouldTransitionToNewAnimation = 0;
    AccessoryAnimationHandler_ApplyAnimationSpeed(this,(String *)a_01,(MethodInfo *)0x0);
    (this->fields).currentCrossFadedAnimation = (String *)a_01;
    func_?();
    pAVar5 = (this->fields).animations;
    if (pAVar5 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFadeQueued
                (pAVar5,(String *)a_01,0.2,QueueMode__Enum_PlayNow,(MethodInfo *)0x0);
      pAVar5 = (this->fields).animations;
      if ((pAVar5 != (Animation *)0x0) &&
         (this_01 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar5,(String *)a_01,(MethodInfo *)0x0),
         this_01 != (AnimationState *)0x0)) {
        WVar6 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                AnimationState_get_wrapMode(this_01,(MethodInfo *)0x0);
        if (WVar6 != WrapMode__Enum_Clamp) {
          return;
        }
        iVar2 = 0;
        pLVar3 = (this->fields).animationData;
        while (pLVar3 != (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) {
          if ((pLVar3->fields)._size <= iVar2) {
            return;
          }
          pLVar3 = (this->fields).animationData;
          if (pLVar3 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
          pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                             ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffd8,
                              (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar3,
                              iVar2,
                              MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                             );
          a_00 = pUVar4->m_DelagateCallback;
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)a_00,(String *)a_01,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            if ((this->fields).animationData ==
                (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
            iVar7 = func_?();
            bVar1 = mscorlib.dll::System::String::String_op_Inequality
                              (*(String **)(iVar7 + 8),::StringLiteral__,(MethodInfo *)0x0);
            if (bVar1 != 0) {
              fVar8 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                      AnimationState_get_length(this_01,(MethodInfo *)0x0);
              fVar9 = AccessoryAnimationHandler_GetAnimationSpeed
                                 (this,(String *)a_01,(MethodInfo *)0x0);
              if ((this->fields).animationData ==
                  (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
              iVar7 = func_?();
              routine = AccessoryAnimationHandler_TransitionToNewAnimation
                                  (this,fVar8 / fVar9,*(String **)(iVar7 + 8),(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
            }
          }
          iVar2 = iVar2 + 1;
          pLVar3 = (this->fields).animationData;
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      ((this->fields).currentCrossFadedAnimation,::StringLiteral__,(MethodInfo *)0x0
                      );
    if (bVar1 != 0) {
      return;
    }
    pAVar5 = (this->fields).animations;
    if (pAVar5 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                (pAVar5,(this->fields).currentCrossFadedAnimation,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,method_00);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this;
        func_?(value + 2);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetAllAnimationToLooping() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::
     AccessoryAnimationHandler_SetAllAnimationToLooping
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationState);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).animations;
  if (this_00 != (Animation *)0x0) {
    pIVar4 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIVar4 != (IEnumerator *)0x0) {
      cVar5 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar4);
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        iVar6 = func_?(pIVar4,TypeInfo__System__IDisposable);
        if (iVar6 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar6);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pIVar4 == (IEnumerator *)0x0) break;
      uVar7 = 0;
      uVar8 = (pIVar4->klass->_1).interface_offsets_count;
      if (uVar8 != 0) {
        do {
          if (pIVar4->klass->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar9 = &(pIVar4->klass->vtable).get_Current +
                     pIVar4->klass->interfaceOffsets[uVar7].offset;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      pVVar9 = (VirtualInvokeData *)
               func_?(pIVar4,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      pAVar10 = (AnimationState *)(*pVVar9->methodPtr)(pIVar4,pVVar9->method);
      if (pAVar10 == (AnimationState *)0x0) break;
      pAVar11 = (AnimationState *)0x0;
      if (pAVar10->klass == TypeInfo__UnityEngine__AnimationState) {
        pAVar11 = pAVar10;
      }
      pAVar12 = TypeInfo__UnityEngine__AnimationState;
      if (pAVar11 == (AnimationState *)0x0) goto code_?;
      pAVar11 = (AnimationState *)0x0;
      if (pAVar10->klass == TypeInfo__UnityEngine__AnimationState) {
        pAVar11 = pAVar10;
      }
      UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_wrapMode
                (pAVar11,WrapMode__Enum_Loop,(MethodInfo *)0x0);
    }
  }
  func_?();
  pAVar10 = extraout_ECX;
  pAVar12 = extraout_EDX;
code_?:
  func_?(pAVar10,pAVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_Start
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  ActivateOnAnimationBase::ActivateOnAnimationBase_Start
            ((ActivateOnAnimationBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    x = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                  (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      AccessoryAnimationHandler_ApplyAnimationSpeed(this,StringLiteral_Idle,(MethodInfo *)0x0);
      pAVar1 = (this->fields).animations;
      if (pAVar1 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartCrossfading(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_StartCrossfading
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  (this->fields).currentCrossFadedAnimation = animationName;
  func_?(&(this->fields).currentCrossFadedAnimation,animationName);
  this_00 = (this->fields).animations;
  if (this_00 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFadeQueued
              (this_00,animationName,0.2,QueueMode__Enum_PlayNow,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
              (pAVar1,transitionToAnimationName,(MethodInfo *)0x0);
    pAVar1 = (this->fields).animations;
    if (pAVar1 != (Animation *)0x0) {
      this_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                          (pAVar1,transitionToAnimationName,(MethodInfo *)0x0);
      pAVar1 = (this->fields).animations;
      if (pAVar1 != (Animation *)0x0) {
        this_01 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                            (pAVar1,transitionToAnimationName,(MethodInfo *)0x0);
        if (this_01 != (AnimationState *)0x0) {
          fVar2 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                  AnimationState_get_length(this_01,(MethodInfo *)0x0);
          fVar3 = AccessoryAnimationHandler_GetAnimationSpeed
                            (this,transitionToAnimationName,(MethodInfo *)0x0);
          if (this_00 != (AnimationState *)0x0) {
            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                      (this_00,fVar2 / fVar3,(MethodInfo *)0x0);
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


/* IEnumerator StopAnimationNextFrame() */

IEnumerator *
Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_StopAnimationNextFrame
          (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerator TransitionToNewAnimation(Single, String) */

IEnumerator *
Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_TransitionToNewAnimation
          (AccessoryAnimationHandler *this,float resetDelay,String *transitionToAnimationName,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryAnimationHandler___TransitionToNewAnimation_d__15);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__AccessoryAnimationHandler___TransitionToNewAnimation_d__15);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    value[3].klass = (Object__Class *)transitionToAnimationName;
    value[2].monitor = (MonitorData *)resetDelay;
    func_?(value + 3,transitionToAnimationName);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* AccessoryAnimationHandler() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler__ctor
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).currentCrossFadedAnimation = ::StringLiteral__;
  func_?(&(this->fields).currentCrossFadedAnimation,::StringLiteral__);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

