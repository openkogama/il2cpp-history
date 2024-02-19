
/* Void AnimationChangeHandler(Object) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_AnimationChangeHandler
               (BoneAnimation *this,Object *animData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_timeStamp);
    func_?(&StringLiteral_state);
    cRam_? = '\x01';
  }
  if (animData == (Object *)0x0) {
code_?:
    func_?();
code_?:
    TVar1.m_Index = func_?();
    pSVar2 = extraout_ECX;
  }
  else {
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((animData->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (animData->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)animData,
                       (Object *)StringLiteral_state,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    newAnimation.m_Index = 0;
    if (TVar1.m_Index == 0) {
code_?:
      TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)animData,
                         (Object *)StringLiteral_timeStamp,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar1.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?();
        BoneAnimation_StartAnimation
                  ((BoneAnimation *)0x0,(String *)newAnimation.m_Index,*piVar4,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
      newAnimation = TVar1;
    }
    pSVar2 = TypeInfo__System__String;
    if ((String *)newAnimation.m_Index != (String *)0x0) goto code_?;
  }
  func_?(TVar1.m_Index,pSVar2);
  pDVar3 = extraout_EDX;
code_?:
  func_?(animData,pDVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Attach(MVAvatar, Boolean) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Attach
               (BoneAnimation *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  (this->fields).mvAvatar = mvAvatar;
  func_?(&(this->fields).mvAvatar,mvAvatar);
  (this->fields).isLocal = isLocal;
  return;
}


/* Void ComputeAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeAnimation
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Jump);
    cRam_? = '\x01';
  }
  if ((this->fields).currentAnim != (AnimationData *)0x0) {
    if (((this->fields).prevAnim != (AnimationData *)0x0) &&
       (bVar1 = mscorlib.dll::System::String::String_op_Inequality
                          ((((this->fields).currentAnim)->fields).state,
                           (((this->fields).prevAnim)->fields).state,(MethodInfo *)0x0), bVar1 == 0)
       ) {
      return;
    }
    pAVar2 = (this->fields).currentAnim;
    if (pAVar2 == (AnimationData *)0x0) goto code_?;
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      ((pAVar2->fields).state,StringLiteral_Jump,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pAVar2 = (this->fields).currentAnim;
      if ((pAVar2 == (AnimationData *)0x0) ||
         (pAVar3 = (this->fields).avatarAnimation, pAVar3 == (Animation *)0x0))
      goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar3,(pAVar2->fields).state,0.3,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar3 = (this->fields).avatarAnimation;
      if (pAVar3 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar3,StringLiteral_Jump,(MethodInfo *)0x0);
      pAVar2 = (this->fields).currentAnim;
      if ((pAVar2 == (AnimationData *)0x0) ||
         (pAVar3 = (this->fields).avatarAnimation, pAVar3 == (Animation *)0x0))
      goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar3,(pAVar2->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    pAVar2 = (this->fields).currentAnim;
    if (pAVar2 == (AnimationData *)0x0) goto code_?;
    iVar4 = (pAVar2->fields).timeStamp;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__TransformNetworkManager);
      cRam_? = '\x01';
    }
    if (iVar4 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      iVar4 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField;
      pAVar2 = (this->fields).currentAnim;
      if (pAVar2 == (AnimationData *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar6 = (pAVar2->fields).timeStamp;
      pAVar3 = (this->fields).avatarAnimation;
      if ((pAVar3 == (Animation *)0x0) ||
         (pAVar7 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                             (pAVar3,(pAVar2->fields).state,(MethodInfo *)0x0),
         pAVar7 == (AnimationState *)0x0)) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_get_length
                (pAVar7,(MethodInfo *)0x0);
      pAVar2 = (this->fields).currentAnim;
      if ((pAVar2 == (AnimationData *)0x0) ||
         ((pAVar3 = (this->fields).avatarAnimation, pAVar3 == (Animation *)0x0 ||
          (pAVar7 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar3,(pAVar2->fields).state,(MethodInfo *)0x0),
          pAVar7 == (AnimationState *)0x0)))) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                (pAVar7,((float)(iVar4 - iVar6) * _UNK_?) / 3.4381452e-29,(MethodInfo *)0x0);
    }
    pAStack8 = (this->fields).currentAnim;
    (this->fields).prevAnim = pAStack8;
    ppAStack9 = &(this->fields).prevAnim;
    func_?();
    ppAStack10 = &(this->fields).currentAnim;
    (this->fields).currentAnim = (AnimationData *)0x0;
    puStack11 = (undefined *)0x0;
    func_?();
  }
  return;
}


/* Void ComputeBlendAnimation(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeBlendAnimation
               (BoneAnimation *this,Dictionary_2_System_Object_System_Object_ *animData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AnimationData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_timeStamp);
    func_?(&StringLiteral_state);
    cRam_? = '\x01';
  }
  if (animData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)animData,
                       (Object *)StringLiteral_state,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    TVar2.m_Index = 0;
    if (TVar1.m_Index != 0) {
      if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
        TVar2 = TVar1;
      }
      pSVar3 = TypeInfo__System__String;
      if ((Object__Class *)TVar2.m_Index == (Object__Class *)0x0) goto code_?;
    }
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)animData,
                       (Object *)StringLiteral_timeStamp,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      puVar4 = (undefined4 *)func_?();
      pMVar5 = (MonitorData *)*puVar4;
      method_00 = TypeInfo__AnimationData;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)TVar2.m_Index;
      func_?(value + 1,TVar2.m_Index);
      value[1].monitor = pMVar5;
      *(Object **)(TVar1.m_Index + 0x2c) = value;
      func_?(TVar1.m_Index + 0x2c,value);
      if (*(int *)(TVar1.m_Index + 0x28) != 0) {
        if (*(int *)(TVar1.m_Index + 0x2c) == 0) goto code_?;
        bVar6 = mscorlib.dll::System::String::String_op_Inequality
                          (*(String **)(*(int *)(TVar1.m_Index + 0x2c) + 8),
                           *(String **)(*(int *)(TVar1.m_Index + 0x28) + 8),(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
      }
      if ((*(int *)(TVar1.m_Index + 0x2c) != 0) &&
         (*(Animation **)(TVar1.m_Index + 0x40) != (Animation *)0x0)) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                  (*(Animation **)(TVar1.m_Index + 0x40),
                   *(String **)(*(int *)(TVar1.m_Index + 0x2c) + 8),0.3,PlayMode__Enum_StopAll,
                   (MethodInfo *)0x0);
        *(undefined4 *)(TVar1.m_Index + 0x28) = *(undefined4 *)(TVar1.m_Index + 0x2c);
        func_?();
        *(undefined4 *)(TVar1.m_Index + 0x2c) = 0;
        func_?(TVar1.m_Index + 0x2c,0);
        return;
      }
      goto code_?;
    }
  }
  TVar1.m_Index = func_?();
  pSVar3 = extraout_ECX;
code_?:
  func_?(TVar1.m_Index,pSVar3);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ComputeRemoteAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeRemoteAnimation
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TransformNetworkManager);
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).animationQueue;
  iVar2 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField + 0x14;
  if (pQVar1 == (Queue_1_AnimationData_ *)0x0) goto code_?;
  pAVar3 = (this->fields).nextAnim;
  if ((pQVar1->fields)._size < 1) {
    if ((pAVar3 != (AnimationData *)0x0) && ((pAVar3->fields).timeStamp <= iVar2)) {
      (this->fields).currentAnim = pAVar3;
      func_?(&(this->fields).currentAnim,pAVar3);
      (this->fields).nextAnim = (AnimationData *)0x0;
      func_?(&(this->fields).nextAnim,0);
    }
  }
  else {
    if (pAVar3 == (AnimationData *)0x0) {
      if (pQVar1 == (Queue_1_AnimationData_ *)0x0) goto code_?;
      pAVar3 = (AnimationData *)
               mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
               Queue_1_System_Object__Dequeue
                         ((Queue_1_System_Object_ *)pQVar1,
                          MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__)
      ;
      (this->fields).nextAnim = pAVar3;
      func_?(&(this->fields).nextAnim,pAVar3);
    }
    if ((this->fields).nextAnim != (AnimationData *)0x0) {
      if (((this->fields).currentAnim == (AnimationData *)0x0) &&
         (pAVar3 = (this->fields).nextAnim, (pAVar3->fields).timeStamp <= iVar2)) {
        (this->fields).currentAnim = pAVar3;
        func_?(&(this->fields).currentAnim,pAVar3);
        (this->fields).nextAnim = (AnimationData *)0x0;
        func_?(&(this->fields).nextAnim,0);
      }
      if ((this->fields).nextAnim != (AnimationData *)0x0) {
        ppAVar4 = &(this->fields).nextAnim;
        do {
          if (*ppAVar4 == (AnimationData *)0x0) goto code_?;
          if (iVar2 < ((*ppAVar4)->fields).timeStamp) break;
          pQVar1 = (this->fields).animationQueue;
          if (pQVar1 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          if ((pQVar1->fields)._size < 1) break;
          (this->fields).currentAnim = *ppAVar4;
          func_?(&(this->fields).currentAnim,*ppAVar4);
          pQVar1 = (this->fields).animationQueue;
          if (pQVar1 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          pAVar3 = (AnimationData *)
                   mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                   Queue_1_System_Object__Dequeue
                             ((Queue_1_System_Object_ *)pQVar1,
                              MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                             );
          *ppAVar4 = pAVar3;
          func_?(ppAVar4,pAVar3);
        } while (*ppAVar4 != (AnimationData *)0x0);
      }
    }
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Jump);
    cRam_? = '\x01';
  }
  if ((this->fields).currentAnim != (AnimationData *)0x0) {
    if (((this->fields).prevAnim != (AnimationData *)0x0) &&
       (bVar5 = mscorlib.dll::System::String::String_op_Inequality
                          ((((this->fields).currentAnim)->fields).state,
                           (((this->fields).prevAnim)->fields).state,(MethodInfo *)0x0), bVar5 == 0)
       ) {
      return;
    }
    pAVar3 = (this->fields).currentAnim;
    if (pAVar3 == (AnimationData *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::String::String_op_Equality
                      ((pAVar3->fields).state,StringLiteral_Jump,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      pAVar3 = (this->fields).currentAnim;
      if ((pAVar3 == (AnimationData *)0x0) ||
         (pAVar6 = (this->fields).avatarAnimation, pAVar6 == (Animation *)0x0))
      goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar6,(pAVar3->fields).state,0.3,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar6 = (this->fields).avatarAnimation;
      if (pAVar6 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar6,StringLiteral_Jump,(MethodInfo *)0x0);
      pAVar3 = (this->fields).currentAnim;
      if ((pAVar3 == (AnimationData *)0x0) ||
         (pAVar6 = (this->fields).avatarAnimation, pAVar6 == (Animation *)0x0))
      goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar6,(pAVar3->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    pAVar3 = (this->fields).currentAnim;
    if (pAVar3 == (AnimationData *)0x0) goto code_?;
    iVar2 = (pAVar3->fields).timeStamp;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__TransformNetworkManager);
      cRam_? = '\x01';
    }
    if (iVar2 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__TransformNetworkManager);
        cRam_? = '\x01';
      }
      iVar2 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField;
      pAVar3 = (this->fields).currentAnim;
      if (pAVar3 == (AnimationData *)0x0) {
code_?:
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar8 = (pAVar3->fields).timeStamp;
      pAVar6 = (this->fields).avatarAnimation;
      if ((pAVar6 == (Animation *)0x0) ||
         (pAVar9 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                             (pAVar6,(pAVar3->fields).state,(MethodInfo *)0x0),
         pAVar9 == (AnimationState *)0x0)) goto code_?;
      fVar10 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
               AnimationState_get_length(pAVar9,(MethodInfo *)0x0);
      pAVar3 = (this->fields).currentAnim;
      if ((pAVar3 == (AnimationData *)0x0) ||
         ((pAVar6 = (this->fields).avatarAnimation, pAVar6 == (Animation *)0x0 ||
          (pAVar9 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar6,(pAVar3->fields).state,(MethodInfo *)0x0),
          pAVar9 == (AnimationState *)0x0)))) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                (pAVar9,((float)(iVar2 - iVar8) * _UNK_?) / fVar10,(MethodInfo *)0x0);
    }
    pAStack11 = (this->fields).currentAnim;
    (this->fields).prevAnim = pAStack11;
    ppAStack12 = &(this->fields).prevAnim;
    func_?();
    (this->fields).currentAnim = (AnimationData *)0x0;
    puStack13 = (undefined *)0x0;
    func_?();
  }
  return;
}


/* Void Detach() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Detach
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Clear__);
    func_?(&StringLiteral_Detach_);
    cRam_? = '\x01';
  }
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this_02,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Detach_,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).avatarAnimation;
    if (this_00 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Stop
                (this_00,(MethodInfo *)0x0);
      this_01 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                (this->fields).animationQueue;
      if (this_01 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::
        Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
        Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                  (this_01,MethodInfo__System__Collections__Generic__Queue<AnimationData>__Clear__);
        (this->fields).nextAnim = (AnimationData *)0x0;
        func_?();
        (this->fields).currentAnim = (AnimationData *)0x0;
        func_?();
        (this->fields).prevAnim = (AnimationData *)0x0;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single GetAnimationTime(String) */

float Assembly-CSharp.dll::BoneAnimation::BoneAnimation_GetAnimationTime
                (BoneAnimation *this,String *animation,MethodInfo *method)

{
  this_00 = (this->fields).avatarAnimation;
  if (this_00 != (Animation *)0x0) {
    this_01 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                        (this_00,animation,(MethodInfo *)0x0);
    if (this_01 != (AnimationState *)0x0) {
      fVar1 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
              AnimationState_get_length(this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetFootstepPitch() */

float Assembly-CSharp.dll::BoneAnimation::BoneAnimation_GetFootstepPitch
                (BoneAnimation *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range(0.7,1.2,(MethodInfo *)0x0)
  ;
  return fVar1;
}


/* Boolean IsPlaying(String) */

bool Assembly-CSharp.dll::BoneAnimation::BoneAnimation_IsPlaying
               (BoneAnimation *this,String *animationName,MethodInfo *method)

{
  pSStack_1 = (String *)&stack0xfffffffc;
  pAVar2 = (this->fields).avatarAnimation;
  if (pAVar2 != (Animation *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pSStack_1 = animationName;
    pAStack_3 = pAVar2;
    bVar4 = (*pcRam_?)();
    return bVar4;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_OnEnable
               (BoneAnimation *this,MethodInfo *method)

{
  pAVar1 = (this->fields).prevAnim;
  (this->fields).currentAnim = pAVar1;
  func_?(&(this->fields).currentAnim,pAVar1);
  (this->fields).prevAnim = (AnimationData *)0x0;
  func_?(&(this->fields).prevAnim,0);
  return;
}


/* Void Play(String) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Play
               (BoneAnimation *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).playingAnimations;
  if (this_00 != (HashSet_1_System_String_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
              ((HashSet_1_System_Object_ *)this_00,(Object *)animationName,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
              );
    pAVar1 = (this->fields).avatarAnimation;
    if (pAVar1 != (Animation *)0x0) {
      pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                         (pAVar1,animationName,(MethodInfo *)0x0);
      if (pAVar2 != (AnimationState *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                  (pAVar2,1.0,(MethodInfo *)0x0);
        pAVar1 = (this->fields).avatarAnimation;
        if (pAVar1 != (Animation *)0x0) {
          pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                             (pAVar1,animationName,(MethodInfo *)0x0);
          if (pAVar2 != (AnimationState *)0x0) {
            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                      (pAVar2,0.0,(MethodInfo *)0x0);
            pAVar1 = (this->fields).avatarAnimation;
            if (pAVar1 != (Animation *)0x0) {
              UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                        (pAVar1,animationName,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PlayAndPauseAt(String, Single) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_PlayAndPauseAt
               (BoneAnimation *this,String *animationName,float time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).playingAnimations;
  if (this_00 != (HashSet_1_System_String_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
              ((HashSet_1_System_Object_ *)this_00,(Object *)animationName,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
              );
    pAVar1 = (this->fields).avatarAnimation;
    if (pAVar1 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar1,animationName,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
      pAVar1 = (this->fields).avatarAnimation;
      if (pAVar1 != (Animation *)0x0) {
        pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                           (pAVar1,animationName,(MethodInfo *)0x0);
        if (pAVar2 != (AnimationState *)0x0) {
          UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                    (pAVar2,0.0,(MethodInfo *)0x0);
          pAVar1 = (this->fields).avatarAnimation;
          if (pAVar1 != (Animation *)0x0) {
            pAVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                               (pAVar1,animationName,(MethodInfo *)0x0);
            if (pAVar2 != (AnimationState *)0x0) {
              UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                        (pAVar2,0.0,(MethodInfo *)0x0);
              (this->fields).pauseNextFrame = 1;
              iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                                ((MethodInfo *)0x0);
              (this->fields).playStartFrame = iVar3;
              pAVar1 = (this->fields).avatarAnimation;
              if (pAVar1 != (Animation *)0x0) {
                UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Sample
                          (pAVar1,(MethodInfo *)0x0);
                return;
              }
            }
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


/* Void PlayFootstepAudio() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_PlayFootstepAudio
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&StringLiteral_Footstep);
    cRam_? = '\x01';
  }
  if ((this->fields).mvAvatar == (MVAvatar *)0x0) {
    return;
  }
  if ((this->fields).isLocal == 0) {
    pAVar1 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                       (0.7,1.2,(MethodInfo *)0x0);
    this_00 = (MVAvatarLocal *)0x0;
    if (pAVar1 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar1,fVar2,(MethodInfo *)0x0);
      this_00 = (MVAvatarLocal *)
                MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar1 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
      pMVar3 = (this->fields).mvAvatar;
      if (((pMVar3 != (MVAvatar *)0x0) && (pMVar4 = (pMVar3->fields).body, pMVar4 != (MVBody *)0x0))
         && (pTVar5 = (pMVar4->fields)._._._.transform, pTVar5 != (Transform *)0x0)) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&fStack_7,pTVar5,(MethodInfo *)0x0);
        if (this_00 != (MVAvatarLocal *)0x0) {
          uVar8._0_4_ = pVVar6->x;
          uVar8._4_4_ = pVVar6->y;
          fVar2 = pVVar6->z;
code_?:
          position.z = fVar2;
          position.x = (float)uVar8;
          position.y = SUB84(uVar8,4);
          AudioManager::AudioManager_Play_2
                    ((AudioManager *)this_00,StringLiteral_Footstep,pAVar1,position,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    this_00 = (MVAvatarLocal *)(this->fields).mvAvatar;
    if (this_00 != (MVAvatarLocal *)0x0) {
      pMVar9 = TypeInfo__MVAvatarLocal;
      if (((this_00->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) ||
         ((MVAvatarLocal__Class *)
          (this_00->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarLocal)) goto code_?;
      pAVar10 = (this_00->fields).avatarMotor;
      if (pAVar10 != (AvatarMotor *)0x0) {
        cVar11 = (*(code *)(pAVar10->klass->vtable).get_Grounded.method)
                          (pAVar10,(pAVar10->klass->vtable).get_Velocity.methodPtr);
        if (cVar11 == '\0') {
          return;
        }
        bVar12 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(this_00,(MethodInfo *)0x0);
        if (bVar12 != 0) {
          return;
        }
        pAVar1 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                           (0.7,1.2,(MethodInfo *)0x0);
        this_00 = (MVAvatarLocal *)0x0;
        if (pAVar1 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (pAVar1,fVar2,(MethodInfo *)0x0);
          this_00 = (MVAvatarLocal *)
                    MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar1 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
          pCVar13 = (this->fields).mainCamera;
          if ((pCVar13 != (Camera *)0x0) &&
             (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar13,(MethodInfo *)0x0),
             pTVar5 != (Transform *)0x0)) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
            fStack_7 = pVVar6->x;
            puStack_14 = (undefined *)pVVar6->y;
            fVar2 = pVVar6->z;
            pCVar13 = (this->fields).mainCamera;
            if ((pCVar13 != (Camera *)0x0) &&
               (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar13,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  ((Vector3 *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
              uVar15 = pVVar6->x;
              uVar16 = pVVar6->y;
              fVar2 = pVVar6->z + fVar2;
              puStack_14 = (undefined *)((float)puStack_14 + (float)uVar16);
              fStack_7 = (float)uVar15 + fStack_7;
              uVar8 = _fStack_1c;
              if (this_00 != (MVAvatarLocal *)0x0) goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pMVar9 = extraout_EDX;
code_?:
  func_?(this_00,pMVar9);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Start(BoneAnimation *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  func_?(pCVar1);
  return;
}


/* Void StartAnimation(String, Int32) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_StartAnimation
               (BoneAnimation *this,String *newAnimation,int32_t timeStamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AnimationData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).OnAnimationChange != (Action_1_String_ *)0x0) {
    pAVar1 = (this->fields).OnAnimationChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,newAnimation,(pAVar1->fields)._._.method);
  }
  if ((this->fields).isLocal == 0) {
    this_00 = (this->fields).animationQueue;
    pAVar2 = TypeInfo__AnimationData;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar2);
    value[1].klass = (Object__Class *)newAnimation;
    func_?(value + 1,newAnimation);
    value[1].monitor = (MonitorData *)timeStamp;
    if (this_00 != (Queue_1_AnimationData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this_00,value,
                 MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                );
      BoneAnimation_ComputeRemoteAnimation(this,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar2 = TypeInfo__AnimationData;
  value_00 = (AnimationData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar2);
  (value_00->fields).state = newAnimation;
  func_?(&value_00->fields,newAnimation);
  (value_00->fields).timeStamp = timeStamp;
  (this->fields).currentAnim = value_00;
  func_?(&(this->fields).currentAnim,value_00);
  BoneAnimation_ComputeAnimation(this,(MethodInfo *)0x0);
  return;
}


/* Void Stop() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Stop(BoneAnimation *this,MethodInfo *method)

{
  pAStack_1 = (Animation *)&stack0xfffffffc;
  pAVar2 = (this->fields).avatarAnimation;
  if (pAVar2 != (Animation *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pAStack_1 = pAVar2;
    (*pcRam_?)();
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Update
               (BoneAnimation *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationState);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<System::String>__Remove_System__String_
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&StringLiteral_Walk);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pIStack_6 = (IEnumerator *)0x0;
  iStack_7 = 0;
  if ((this->fields).isLocal == 0) {
    BoneAnimation_ComputeRemoteAnimation(this,(MethodInfo *)0x0);
  }
  if (((this->fields).pauseNextFrame == 0) ||
     (iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                         ((MethodInfo *)0x0), iVar8 != (this->fields).playStartFrame + 1)) {
code_?:
    pAVar9 = (this->fields).avatarAnimation;
    if (pAVar9 != (Animation *)0x0) {
      pIStack_6 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetEnumerator
                             (pAVar9,(MethodInfo *)0x0);
      ppIStack_10 = &pIStack_6;
      uStack_11 = 0;
      piStack_12 = &iStack_7;
      uStack_1 = 4;
      while (pIVar13 = pIStack_6, pIStack_6 != (IEnumerator *)0x0) {
        pIVar14 = pIStack_6->klass;
        uVar15 = 0;
        uVar16._0_1_ = (pIVar14->_1).rank;
        uVar16._1_1_ = (pIVar14->_1).minimumAlignment;
        if (uVar16 != 0) {
          do {
            if (pIVar14->interfaceOffsets[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar17 = &(&(pIStack_6->klass->vtable).MoveNext)
                          [pIStack_6->klass->interfaceOffsets[uVar15].offset].method;
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar16);
        }
        ppMVar17 = (MethodInfo **)
                   func_?(pIStack_6,TypeInfo__System__Collections__IEnumerator,0);
code_?:
        cVar18 = (*(code *)*ppMVar17)(pIVar13,ppMVar17[1]);
        pIVar13 = pIStack_6;
        if (cVar18 == '\0') {
          uStack_1 = 0xffffffff;
          iStack_7 = func_?(pIStack_6,TypeInfo__System__IDisposable);
          if (iStack_7 == 0) {
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          func_?(0,TypeInfo__System__IDisposable,iStack_7);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pIStack_6 == (IEnumerator *)0x0) break;
        pIVar14 = pIStack_6->klass;
        uVar15 = 0;
        uVar19._0_1_ = (pIVar14->_1).rank;
        uVar19._1_1_ = (pIVar14->_1).minimumAlignment;
        if (uVar19 != 0) {
          do {
            if (pIVar14->interfaceOffsets[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar17 = &(&(pIStack_6->klass->vtable).get_Current)
                          [pIStack_6->klass->interfaceOffsets[uVar15].offset].method;
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar19);
        }
        ppMVar17 = (MethodInfo **)
                   func_?(pIStack_6,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pAVar20 = (AnimationState *)(*(code *)*ppMVar17)(pIVar13,ppMVar17[1]);
        if (pAVar20 == (AnimationState *)0x0) goto code_?;
        pAVar21 = (AnimationState *)0x0;
        if (pAVar20->klass == TypeInfo__UnityEngine__AnimationState) {
          pAVar21 = pAVar20;
        }
        pAVar22 = TypeInfo__UnityEngine__AnimationState;
        if (pAVar21 == (AnimationState *)0x0) goto code_?;
        pSVar23 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                  AnimationState_get_name(pAVar21,(MethodInfo *)0x0);
        bVar24 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar23,StringLiteral_Walk,(MethodInfo *)0x0);
        if (((bVar24 != 0) &&
            (bVar24 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                     AnimationState_get_enabled(pAVar21,(MethodInfo *)0x0), bVar24 != 0)) &&
           (MVar25 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
           MVar25 != MVGameMode__Enum_CharacterEditor)) {
          if ((this->fields).mvAvatar == (MVAvatar *)0x0) {
            fVar26 = (this->fields).fallbackWalkSpeed;
          }
          else {
            puVar27 = (undefined8 *)func_?(auStack_28,0x5d,(this->fields).mvAvatar);
            uStack_29 = *puVar27;
            uStack_30 = *(undefined4 *)(puVar27 + 1);
            fVar31 = (float10)func_?(&uStack_29,0);
            fVar26 = (float)fVar31;
            fStack_32 = fVar26;
          }
          fVar26 = fVar26 * _UNK_?;
          fVar33 = _UNK_?;
          if ((fVar26 < _UNK_?) || (fVar33 = _UNK_?, _UNK_? < fVar26)) {
            fVar26 = fVar33;
          }
          UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                    (pAVar21,fVar26,(MethodInfo *)0x0);
        }
        pHVar34 = (this->fields).playingAnimations;
        pSVar23 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                  AnimationState_get_name(pAVar21,(MethodInfo *)0x0);
        if (pHVar34 == (HashSet_1_System_String_ *)0x0) break;
        bVar24 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                HashSet_1_System_Object__Contains
                          ((HashSet_1_System_Object_ *)pHVar34,(Object *)pSVar23,
                           MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                          );
        if ((bVar24 != 0) &&
           (bVar24 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_enabled(pAVar21,(MethodInfo *)0x0), bVar24 == 0)) {
          pHVar34 = (this->fields).playingAnimations;
          pSVar23 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_name(pAVar21,(MethodInfo *)0x0);
          if (pHVar34 == (HashSet_1_System_String_ *)0x0) break;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Remove
                    ((HashSet_1_System_Object_ *)pHVar34,(Object *)pSVar23,
                     MethodInfo__System__Collections__Generic__HashSet<System::String>__Remove_System__String_
                    );
        }
      }
    }
  }
  else {
    pAVar9 = (this->fields).avatarAnimation;
    if (pAVar9 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Stop
                (pAVar9,(MethodInfo *)0x0);
      pAVar9 = (this->fields).avatarAnimation;
      if (pAVar9 != (Animation *)0x0) {
        pIStack_6 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                     Animation_GetEnumerator(pAVar9,(MethodInfo *)0x0);
        ppIStack_10 = &pIStack_6;
        piStack_12 = &iStack_7;
        uStack_11 = 0;
        uStack_1 = 1;
        while (pIStack_6 != (IEnumerator *)0x0) {
          cVar18 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_6);
          pIVar13 = pIStack_6;
          if (cVar18 == '\0') {
            uStack_1 = 0xffffffff;
            iStack_7 = func_?(pIStack_6,TypeInfo__System__IDisposable);
            if (iStack_7 != 0) {
              func_?(0,TypeInfo__System__IDisposable,iStack_7);
            }
            uStack_1 = 0xffffffff;
            (this->fields).pauseNextFrame = 0;
            goto code_?;
          }
          if (pIStack_6 == (IEnumerator *)0x0) break;
          pIVar14 = pIStack_6->klass;
          uVar16 = 0;
          uVar15._0_1_ = (pIVar14->_1).rank;
          uVar15._1_1_ = (pIVar14->_1).minimumAlignment;
          if (uVar15 != 0) {
            do {
              if (pIVar14->interfaceOffsets[uVar16].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                ppMVar17 = &(&(pIStack_6->klass->vtable).get_Current)
                            [pIStack_6->klass->interfaceOffsets[uVar16].offset].method;
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar15);
          }
          ppMVar17 = (MethodInfo **)
                     func_?(pIStack_6,TypeInfo__System__Collections__IEnumerator,1);
code_?:
          pAVar20 = (AnimationState *)(*(code *)*ppMVar17)(pIVar13,ppMVar17[1]);
          if (pAVar20 == (AnimationState *)0x0) break;
          pAVar21 = (AnimationState *)0x0;
          if (pAVar20->klass == TypeInfo__UnityEngine__AnimationState) {
            pAVar21 = pAVar20;
          }
          pAVar22 = TypeInfo__UnityEngine__AnimationState;
          if (pAVar21 == (AnimationState *)0x0) goto code_?;
          pAVar21 = (AnimationState *)0x0;
          if (pAVar20->klass == TypeInfo__UnityEngine__AnimationState) {
            pAVar21 = pAVar20;
          }
          UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                    (pAVar21,1.0,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  pAVar20 = extraout_ECX;
  pAVar22 = extraout_EDX;
code_?:
  func_?(pAVar20,pAVar22);
code_?:
  pAVar20 = (AnimationState *)func_?();
  pAVar22 = extraout_ECX_00;
code_?:
  func_?(pAVar20,pAVar22);
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* BoneAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation__ctor(BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<System::String>);
    func_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Queue__);
    func_?(&TypeInfo__System__Collections__Generic__Queue<AnimationData>);
    cRam_? = '\x01';
  }
  (this->fields).fallbackWalkSpeed = 8.0;
  this_00 = (Queue_1_AnimationData_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<AnimationData>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<AnimationData>__Queue__);
  (this->fields).animationQueue = this_00;
  func_?(&(this->fields).animationQueue,this_00);
  this_01 = (HashSet_1_System_String_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
  (this->fields).playingAnimations = this_01;
  func_?(&(this->fields).playingAnimations,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* AudioSource get_AudioSource() */

AudioSource *
Assembly-CSharp.dll::BoneAnimation::BoneAnimation_get_AudioSource
          (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (AudioSource *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                       );
    (this->fields).audioSource = pAVar1;
    func_?(&(this->fields).audioSource,pAVar1);
  }
  return (this->fields).audioSource;
}


/* Void set_FallBackWalkSpeed(Single) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_set_FallBackWalkSpeed
               (BoneAnimation *this,float value,MethodInfo *method)

{
  (this->fields).fallbackWalkSpeed = value * _UNK_?;
  return;
}

