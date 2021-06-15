
/* Void ApplyAnimationSpeed(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_ApplyAnimationSpeed
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    x = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                  (pAVar1,animationName,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  fStack_1 = 1.0;
  pLVar2 = (this->fields).animationData;
  while (pLVar2 != (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      return fStack_1;
    }
    pLVar2 = (this->fields).animationData;
    if (pLVar2 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
    pAVar4 = mscorlib.dll::System::Collections::Generic::
             List`1[AccessoryAnimationHandler+AnimationData]::
             List_1_AccessoryAnimationHandler_AnimationData__get_Item
                       (&AStack_5,pLVar2,index,
                        MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                       );
    uStack_6._0_4_ = pAVar4->animationName;
    uStack_6._4_4_ = pAVar4->animationSpeed;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      pSStack_7 = TypeInfo__System__String;
      func_?();
    }
    bVar8 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)uStack_6,animationName,(MethodInfo *)0x0);
    if (bVar8 != 0) {
      pLVar2 = (this->fields).animationData;
      if (pLVar2 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
      puVar9 = (undefined8 *)
               func_?(auStack_10,pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                              );
      uStack_11._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
      fStack_1 = uStack_11._4_4_;
      uStack_11 = *puVar9;
    }
    index = index + 1;
    pLVar2 = (this->fields).animationData;
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  fVar13 = (float10)(*pcVar12)();
  return (float)fVar13;
}


/* Avatar GetAvatar() */

Avatar_1 *
Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_GetAvatar
          (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (Avatar_1 *)0x0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    while( true ) {
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return pAVar1;
      }
      if (pTVar2 == (Transform *)0x0) break;
      pAVar1 = (Avatar_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)pTVar2,
                          Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return pAVar1;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pAVar1 = (Avatar_1 *)(*pcVar4)();
  return pAVar1;
}


/* Void HandleNoIdleAnimation() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_HandleNoIdleAnimation
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).currentCrossFadedAnimation;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (a,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  method_00 = (MethodInfo *)(this->fields).animations;
  if (method_00 != (MethodInfo *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
              ((Animation *)method_00,(this->fields).currentCrossFadedAnimation,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields).state = (int32_t)this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean HaveAnimationData(String) */

bool Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_HaveAnimationData
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).animationData;
  while (pLVar1 != (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return 0;
    }
    pLVar1 = (this->fields).animationData;
    if (pLVar1 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
    pAVar3 = mscorlib.dll::System::Collections::Generic::
             List`1[AccessoryAnimationHandler+AnimationData]::
             List_1_AccessoryAnimationHandler_AnimationData__get_Item
                       (&AStack_4,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                       );
    uStack_5._0_4_ = pAVar3->animationName;
    uStack_5._4_4_ = pAVar3->animationSpeed;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      AStack_4.TransitionToAnimationName = (String *)TypeInfo__System__String;
      AStack_4.animationSpeed = (float)&UNK_?;
      func_?();
    }
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)uStack_5,animationName,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      return 1;
    }
    index = index + 1;
    pLVar1 = (this->fields).animationData;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_Initialize
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    x = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                  (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      AccessoryAnimationHandler_ApplyAnimationSpeed(this,StringLiteral_Idle,(MethodInfo *)0x0);
      pAVar1 = (this->fields).animations;
      if (pAVar1 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).currentCrossFadedAnimation;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality(a,newAnimation,(MethodInfo *)0x0);
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
    pSVar1 = animationName;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) goto code_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    iVar3 = 0;
    while( true ) {
      pLVar4 = (this->fields).animationData;
      if (pLVar4 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) goto code_?;
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                          MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                         );
      if ((int)pOVar5 <= iVar3) break;
      pLVar4 = (this->fields).animationData;
      if (pLVar4 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) goto code_?;
      pAVar6 = mscorlib.dll::System::Collections::Generic::
               List`1[AccessoryAnimationHandler+AnimationData]::
               List_1_AccessoryAnimationHandler_AnimationData__get_Item
                         (&AStack_7,pLVar4,iVar3,
                          MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Item_int_
                         );
      uStack_8._0_4_ = pAVar6->animationName;
      uStack_8._4_4_ = pAVar6->animationSpeed;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)uStack_8,pSVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) goto code_?;
      iVar3 = iVar3 + 1;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar1,StringLiteral_Idle,(MethodInfo *)0x0);
    animationName = StringLiteral_Idle;
  } while (bVar2 != 0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral_Idle,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    (this->fields).shouldTransitionToNewAnimation = 0;
    AccessoryAnimationHandler_ApplyAnimationSpeed(this,pSVar1,(MethodInfo *)0x0);
    pAVar9 = (this->fields).animations;
    (this->fields).currentCrossFadedAnimation = pSVar1;
    if (pAVar9 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFadeQueued_1
                (pAVar9,pSVar1,0.2,QueueMode__Enum_PlayNow,(MethodInfo *)0x0);
      pAVar9 = (this->fields).animations;
      if ((pAVar9 != (Animation *)0x0) &&
         (pAStack_10 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar9,pSVar1,(MethodInfo *)0x0),
         pAStack_10 != (AnimationState *)0x0)) {
        WVar11 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                AnimationState_get_wrapMode(pAStack_10,(MethodInfo *)0x0);
        if (WVar11 != WrapMode__Enum_Clamp) {
          return;
        }
        pLVar4 = (this->fields).animationData;
        pSStack_12 = (String *)0x0;
        pSVar13 = pSStack_12;
        while (pSStack_12 = pSVar13, pLVar4 != (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0
              ) {
          pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                              MethodInfo__System__Collections__Generic__List<AccessoryAnimationHandler::AnimationData>__get_Count__
                             );
          if ((int)pOVar5 <= (int)pSStack_12) {
            return;
          }
          if ((this->fields).animationData == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0
             ) break;
          puVar14 = (undefined8 *)func_?(&AStack_7);
          uStack_8 = *puVar14;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar2 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)uStack_8,pSVar1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pLVar4 = (this->fields).animationData;
            if (pLVar4 == (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
            iVar3 = func_?(&stack0xffffffcc,pLVar4,pSVar13);
            pSStack_12 = *(String **)(iVar3 + 8);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            bVar2 = mscorlib.dll::System::String::String_op_Inequality
                              (pSStack_12,TypeInfo__System__String->static_fields->Empty,
                               (MethodInfo *)0x0);
            if (bVar2 != 0) {
              pSStack_12 = (String *)
                          UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                          AnimationState_get_length(pAStack_10,(MethodInfo *)0x0);
              fStack_15 = AccessoryAnimationHandler_GetAnimationSpeed(this,pSVar1,(MethodInfo *)0x0)
              ;
              if ((this->fields).animationData ==
                  (List_1_AccessoryAnimationHandler_AnimationData_ *)0x0) break;
              iVar3 = func_?();
              routine = AccessoryAnimationHandler_TransitionToNewAnimation
                                  (this,(float)pSStack_12 / fStack_15,*(String **)(iVar3 + 8),
                                   (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
            }
          }
          pSVar13 = (String *)((int)pSVar13 + 1);
          pLVar4 = (this->fields).animationData;
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pSVar1 = (this->fields).currentCrossFadedAnimation;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar1,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    method_00 = (MethodInfo *)(this->fields).animations;
    if (method_00 != (MethodInfo *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                ((Animation *)method_00,(this->fields).currentCrossFadedAnimation,(MethodInfo *)0x0)
      ;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
      if (this_01 != (ScaleAnimationBase *)0x0) {
        (this_01->fields).state = (int32_t)this;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = (this->fields).animations;
  if (this_00 != (Animation *)0x0) {
    pIVar4 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    uStack_1 = 0;
    while (pIVar4 != (IEnumerator *)0x0) {
      cVar5 = func_?(1);
      unaff_EBX = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        iVar6 = func_?();
        if (iVar6 != 0) {
          func_?(0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pIVar7 = pIVar4->klass;
      uVar8 = 0;
      uVar9._0_1_ = (pIVar7->_1).rank;
      uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
      if (uVar9 != 0) {
        unaff_EBX = pIVar7->interfaceOffsets;
        do {
          if (unaff_EBX[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar10 = &(&(pIVar4->klass->vtable).get_Current)[unaff_EBX[uVar8].offset].method;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      ppMVar10 = (MethodInfo **)func_?(pIVar4);
code_?:
      pAVar11 = (AnimationState *)(*(code *)*ppMVar10)();
      if (pAVar11 == (AnimationState *)0x0) break;
      this_01 = (AnimationState *)0x0;
      if (pAVar11->klass == TypeInfo__UnityEngine__AnimationState) {
        this_01 = pAVar11;
      }
      if (this_01 == (AnimationState *)0x0) {
        func_?();
        break;
      }
      UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_wrapMode
                (this_01,WrapMode__Enum_Loop,(MethodInfo *)0x0);
    }
  }
  func_?();
  func_?(unaff_EBX);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_Start
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  ActivateOnAnimationBase::ActivateOnAnimationBase_Start
            ((ActivateOnAnimationBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animations;
  if (pAVar1 != (Animation *)0x0) {
    x = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetClip
                  (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      AccessoryAnimationHandler_ApplyAnimationSpeed(this,StringLiteral_Idle,(MethodInfo *)0x0);
      pAVar1 = (this->fields).animations;
      if (pAVar1 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar1,StringLiteral_Idle,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartCrossfading(String) */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler_StartCrossfading
               (AccessoryAnimationHandler *this,String *animationName,MethodInfo *method)

{
  (this->fields).currentCrossFadedAnimation = animationName;
  this_00 = (this->fields).animations;
  if (this_00 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFadeQueued_1
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
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryAnimationHandler___StopAnimationNextFrame_c__Iterator1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryAnimationHandler___TransitionToNewAnimation_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)transitionToAnimationName;
    (this_00->fields).originalScale.y = (float)this;
    (this_00->fields).state = (int32_t)resetDelay;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* AccessoryAnimationHandler() */

void Assembly-CSharp.dll::AccessoryAnimationHandler::AccessoryAnimationHandler__ctor
               (AccessoryAnimationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).currentCrossFadedAnimation = TypeInfo__System__String->static_fields->Empty;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

