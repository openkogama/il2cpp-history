
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
  if (animData == (Object *)0x0) goto code_?;
  pDVar1 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if (((animData->klass->_1).typeHierarchyDepth <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (animData->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  pOVar2 = (Object__Class *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)animData,
                      (Object *)StringLiteral_state,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pOVar3 = (Object__Class *)0x0;
  if (pOVar2 == (Object__Class *)0x0) {
code_?:
    method_00 = (MethodInfo *)animData;
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)animData,
                        (Object *)StringLiteral_timeStamp,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar4 == (Object *)0x0) {
code_?:
      pOVar4 = (Object *)func_?();
    }
    else if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar5 = (undefined4 *)func_?();
      pMVar6 = (MonitorData *)*puVar5;
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                       );
        cRam_? = '\x01';
      }
      if ((this->fields).OnAnimationChange != (Action_1_String_ *)0x0) {
        pAVar7 = (this->fields).OnAnimationChange;
        (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code,pOVar3);
      }
      animData = (Object *)this;
      if ((this->fields).isLocal == 0) {
        this_00 = (this->fields).animationQueue;
        pOVar4 = (Object *)func_?();
        if (pOVar4 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar4,ExceptionArgument__Enum_obj,method_00);
          pOVar4[1].klass = pOVar3;
          func_?(pOVar4 + 1,pOVar3);
          pOVar4[1].monitor = pMVar6;
          if (this_00 != (Queue_1_AnimationData_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
            Queue_1_System_Object__Enqueue
                      ((Queue_1_System_Object_ *)this_00,pOVar4,
                       MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                      );
            BoneAnimation_ComputeRemoteAnimation(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        value = (AnimationData *)func_?();
        if (value != (AnimationData *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)value,ExceptionArgument__Enum_obj,method_00);
          (value->fields).state = (String *)pOVar3;
          func_?(&value->fields,pOVar3);
          (value->fields).timeStamp = (int32_t)pMVar6;
          (this->fields).currentAnim = value;
          func_?(&(this->fields).currentAnim,value);
          BoneAnimation_ComputeAnimation(this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pOVar2 = (Object__Class *)func_?(pOVar4);
    pSVar8 = extraout_ECX;
  }
  else {
    if ((String__Class *)(pOVar2->_0).image == TypeInfo__System__String) {
      pOVar3 = pOVar2;
    }
    pSVar8 = TypeInfo__System__String;
    if (pOVar3 != (Object__Class *)0x0) goto code_?;
  }
  func_?(pOVar2,pSVar8);
  pDVar1 = extraout_EDX;
code_?:
  func_?(animData,pDVar1);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
                (pAVar7,((float)(iVar4 - iVar6) * _UNK_?) / 3.2583163e-29,(MethodInfo *)0x0);
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (animData,(Object *)StringLiteral_state,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar2 = (Object *)0x0;
    if (pOVar1 != (Object *)0x0) {
      if ((String__Class *)pOVar1->klass == TypeInfo__System__String) {
        pOVar2 = pOVar1;
      }
      pSVar3 = TypeInfo__System__String;
      if (pOVar2 == (Object *)0x0) goto code_?;
    }
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (animData,(Object *)StringLiteral_timeStamp,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar4 = (undefined4 *)func_?();
      pMVar5 = (MonitorData *)*puVar4;
      pOVar1 = (Object *)func_?();
      if (pOVar1 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar1,ExceptionArgument__Enum_obj,method);
        pOVar1[1].klass = (Object__Class *)pOVar2;
        func_?();
        pOVar1[1].monitor = pMVar5;
        pOVar1[6].klass = (Object__Class *)pOVar1;
        func_?(pOVar1 + 6);
        if (pOVar1[5].monitor != (MonitorData *)0x0) {
          if (pOVar1[6].klass == (Object__Class *)0x0) goto code_?;
          bVar6 = mscorlib.dll::System::String::String_op_Inequality
                            (*(String **)((int)pOVar1[6].klass + 8),
                             *(String **)(pOVar1[5].monitor + 8),(MethodInfo *)0x0);
          if (bVar6 == 0) {
            return;
          }
        }
        if ((pOVar1[6].klass != (Object__Class *)0x0) &&
           ((Animation *)pOVar1[8].monitor != (Animation *)0x0)) {
          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                    ((Animation *)pOVar1[8].monitor,*(String **)((int)pOVar1[6].klass + 8),0.3,
                     PlayMode__Enum_StopAll,(MethodInfo *)0x0);
          pOVar1[5].monitor = (MonitorData *)pOVar1[6].klass;
          func_?();
          pOVar1[6].klass = (Object__Class *)0x0;
          func_?(pOVar1 + 6);
          return;
        }
      }
      goto code_?;
    }
  }
  pOVar1 = (Object *)func_?();
  pSVar3 = extraout_ECX;
code_?:
  func_?(pOVar1,pSVar3);
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
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
    HashSet_1_System_Object__Add
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
    HashSet_1_System_Object__Add
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
      if ((((pMVar3 != (MVAvatar *)0x0) && (pMVar4 = (pMVar3->fields).body, pMVar4 != (MVBody *)0x0)
           ) && (pTVar5 = (pMVar4->fields)._._._.transform, pTVar5 != (Transform *)0x0)) &&
         (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0),
         this_00 != (MVAvatarLocal *)0x0)) {
        uVar7._0_4_ = pVVar6->x;
        uVar7._4_4_ = pVVar6->y;
        fVar2 = pVVar6->z;
code_?:
        position.z = fVar2;
        position.x = (float)(int)uVar7;
        position.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        AudioManager::AudioManager_Play_2
                  ((AudioManager *)this_00,StringLiteral_Footstep,pAVar1,position,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
  else {
    this_00 = (MVAvatarLocal *)(this->fields).mvAvatar;
    if (this_00 != (MVAvatarLocal *)0x0) {
      pMVar8 = TypeInfo__MVAvatarLocal;
      if (((this_00->klass->_1).typeHierarchyDepth <
           (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) ||
         ((MVAvatarLocal__Class *)
          (this_00->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1]
          != TypeInfo__MVAvatarLocal)) goto code_?;
      pAVar9 = (this_00->fields).avatarMotor;
      if (pAVar9 != (AvatarMotor *)0x0) {
        cVar10 = (*(pAVar9->klass->vtable).get_Grounded.methodPtr)
                           (pAVar9,(pAVar9->klass->vtable).get_Grounded.method);
        if (cVar10 == '\0') {
          return;
        }
        bVar11 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(this_00,(MethodInfo *)0x0);
        if (bVar11 != 0) {
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
          pCVar12 = (this->fields).mainCamera;
          if ((pCVar12 != (Camera *)0x0) &&
             (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar12,(MethodInfo *)0x0),
             pTVar5 != (Transform *)0x0)) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
            uVar13 = pVVar6->x;
            uVar14 = pVVar6->y;
            fVar2 = pVVar6->z;
            pCVar12 = (this->fields).mainCamera;
            if ((pCVar12 != (Camera *)0x0) &&
               (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar12,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  ((Vector3 *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
              uVar15 = pVVar6->x;
              uVar16 = pVVar6->y;
              fVar2 = pVVar6->z + fVar2;
              if (this_00 != (MVAvatarLocal *)0x0) {
                uVar7 = CONCAT44((float)uVar14 + (float)uVar16,(float)uVar15 + (float)uVar13);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pMVar8 = extraout_EDX;
code_?:
  func_?(this_00,pMVar8);
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
    value = (Object *)func_?(TypeInfo__AnimationData);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EDI);
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
    }
  }
  else {
    value_00 = (AnimationData *)func_?(TypeInfo__AnimationData);
    if (value_00 != (AnimationData *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_EDI);
      (value_00->fields).state = newAnimation;
      func_?(&value_00->fields,newAnimation);
      (value_00->fields).timeStamp = timeStamp;
      (this->fields).currentAnim = value_00;
      func_?(&(this->fields).currentAnim,value_00);
      BoneAnimation_ComputeAnimation(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
        uVar14 = 0;
        uVar15 = (pIStack_6->klass->_1).interface_offsets_count;
        if (uVar15 != 0) {
          do {
            if (pIStack_6->klass->interfaceOffsets[uVar14].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar16 = &(pIStack_6->klass->vtable).MoveNext +
                        pIStack_6->klass->interfaceOffsets[uVar14].offset;
              goto code_?;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar15);
        }
        pVVar16 = (VirtualInvokeData *)
                  func_?(pIStack_6,TypeInfo__System__Collections__IEnumerator,0);
code_?:
        cVar17 = (*pVVar16->methodPtr)(pIVar13,pVVar16->method);
        pIVar13 = pIStack_6;
        if (cVar17 == '\0') {
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
        uVar14 = 0;
        uVar15 = (pIStack_6->klass->_1).interface_offsets_count;
        if (uVar15 != 0) {
          do {
            if (pIStack_6->klass->interfaceOffsets[uVar14].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar16 = &(pIStack_6->klass->vtable).get_Current +
                        pIStack_6->klass->interfaceOffsets[uVar14].offset;
              goto code_?;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar15);
        }
        pVVar16 = (VirtualInvokeData *)
                  func_?(pIStack_6,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pAVar18 = (AnimationState *)(*pVVar16->methodPtr)(pIVar13,pVVar16->method);
        if (pAVar18 == (AnimationState *)0x0) goto code_?;
        pAVar19 = (AnimationState *)0x0;
        if (pAVar18->klass == TypeInfo__UnityEngine__AnimationState) {
          pAVar19 = pAVar18;
        }
        pAVar20 = TypeInfo__UnityEngine__AnimationState;
        if (pAVar19 == (AnimationState *)0x0) goto code_?;
        pSVar21 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                  AnimationState_get_name(pAVar19,(MethodInfo *)0x0);
        bVar22 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar21,StringLiteral_Walk,(MethodInfo *)0x0);
        if (((bVar22 != 0) &&
            (bVar22 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                     AnimationState_get_enabled(pAVar19,(MethodInfo *)0x0), bVar22 != 0)) &&
           (MVar23 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
           MVar23 != MVGameMode__Enum_CharacterEditor)) {
          if ((this->fields).mvAvatar == (MVAvatar *)0x0) {
            fVar24 = (this->fields).fallbackWalkSpeed;
          }
          else {
            puVar25 = (undefined8 *)func_?(auStack_26,0x5e,(this->fields).mvAvatar);
            uStack_27 = *puVar25;
            uStack_28 = *(undefined4 *)(puVar25 + 1);
            fVar29 = (float10)func_?(&uStack_27,0);
            fVar24 = (float)fVar29;
            fStack_30 = fVar24;
          }
          fVar24 = fVar24 * _UNK_?;
          fVar31 = _UNK_?;
          if ((fVar24 < _UNK_?) || (fVar31 = _UNK_?, _UNK_? < fVar24)) {
            fVar24 = fVar31;
          }
          UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                    (pAVar19,fVar24,(MethodInfo *)0x0);
        }
        pHVar32 = (this->fields).playingAnimations;
        pSVar21 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                  AnimationState_get_name(pAVar19,(MethodInfo *)0x0);
        if (pHVar32 == (HashSet_1_System_String_ *)0x0) break;
        bVar22 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                HashSet_1_System_Object__Contains
                          ((HashSet_1_System_Object_ *)pHVar32,(Object *)pSVar21,
                           MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                          );
        if ((bVar22 != 0) &&
           (bVar22 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_enabled(pAVar19,(MethodInfo *)0x0), bVar22 == 0)) {
          pHVar32 = (this->fields).playingAnimations;
          pSVar21 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_name(pAVar19,(MethodInfo *)0x0);
          if (pHVar32 == (HashSet_1_System_String_ *)0x0) break;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Remove
                    ((HashSet_1_System_Object_ *)pHVar32,(Object *)pSVar21,
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
          cVar17 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_6);
          pIVar13 = pIStack_6;
          if (cVar17 == '\0') {
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
          uVar14 = 0;
          uVar15 = (pIStack_6->klass->_1).interface_offsets_count;
          if (uVar15 != 0) {
            do {
              if (pIStack_6->klass->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                pVVar16 = &(pIStack_6->klass->vtable).get_Current +
                          pIStack_6->klass->interfaceOffsets[uVar14].offset;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          pVVar16 = (VirtualInvokeData *)
                    func_?(pIStack_6,TypeInfo__System__Collections__IEnumerator,1);
code_?:
          pAVar18 = (AnimationState *)(*pVVar16->methodPtr)(pIVar13,pVVar16->method);
          if (pAVar18 == (AnimationState *)0x0) break;
          pAVar19 = (AnimationState *)0x0;
          if (pAVar18->klass == TypeInfo__UnityEngine__AnimationState) {
            pAVar19 = pAVar18;
          }
          pAVar20 = TypeInfo__UnityEngine__AnimationState;
          if (pAVar19 == (AnimationState *)0x0) goto code_?;
          pAVar19 = (AnimationState *)0x0;
          if (pAVar18->klass == TypeInfo__UnityEngine__AnimationState) {
            pAVar19 = pAVar18;
          }
          UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                    (pAVar19,1.0,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?();
  pAVar18 = extraout_ECX;
  pAVar20 = extraout_EDX;
code_?:
  func_?(pAVar18,pAVar20);
code_?:
  pAVar18 = (AnimationState *)func_?();
  pAVar20 = extraout_ECX_00;
code_?:
  func_?(pAVar18,pAVar20);
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
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
  if (this_00 != (Queue_1_AnimationData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Queue__);
    (this->fields).animationQueue = this_00;
    func_?(&(this->fields).animationQueue,this_00);
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
      (this->fields).playingAnimations = (HashSet_1_System_String_ *)this_01;
      func_?(&(this->fields).playingAnimations,this_01);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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

