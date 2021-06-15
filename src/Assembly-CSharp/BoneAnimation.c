
/* Void AnimationChangeHandler(Object) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_AnimationChangeHandler
               (BoneAnimation *this,Object *animData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  player = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if (animData == (Object *)0x0) goto code_?;
  bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((animData->klass->_1).naturalAligment < bVar1) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (animData->klass->_1).typeHierarchy[bVar1 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this_03 = (Dictionary_2_System_Type_Pool_ *)0x0;
  if (bVar2) {
    this_03 = (Dictionary_2_System_Type_Pool_ *)animData;
  }
  if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_03,(Type *)StringLiteral_state,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  player = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  if (pDVar3 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_03,(Type *)StringLiteral_timeStamp,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar4 == (Pool *)0x0) {
code_?:
      pPVar4 = (Pool *)func_?();
    }
    else if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar5 = (undefined4 *)func_?();
      friend_1 = (Friend *)*puVar5;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (this->fields).OnAnimationChange;
      if (this_00 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_00,(Dictionary_2_System_String_System_Object_ *)player,
                   MethodInfo__System__Action<System::String>__Invoke_System__String_);
      }
      if ((this->fields).isLocal != 0) {
        this_02 = (PlayerElementData *)func_?();
        PlayerElementData::PlayerElementData__ctor
                  (this_02,(MVPlayer *)player,friend_1,(MethodInfo *)0x0);
        (this->fields).currentAnim = (AnimationData *)this_02;
        BoneAnimation_ComputeAnimation(this,(MethodInfo *)0x0);
        return;
      }
      this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).animationQueue;
      item = (SmoothPhysicsMovement_Package *)func_?();
      PlayerElementData::PlayerElementData__ctor
                ((PlayerElementData *)item,(MVPlayer *)player,friend_1,(MethodInfo *)0x0);
      if (this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
        System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
        Queue_1_SmoothPhysicsMovement_Package__Enqueue
                  (this_01,item,
                   MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                  );
        BoneAnimation_ComputeRemoteAnimation(this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)func_?(pPVar4);
    pSVar6 = extraout_ECX;
  }
  else {
    if ((String__Class *)(pDVar3->_0).image == TypeInfo__System__String) {
      player = pDVar3;
    }
    pSVar6 = TypeInfo__System__String;
    if (player != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
  }
  func_?(pDVar3,pSVar6);
  animData = extraout_EDX;
code_?:
  func_?(animData,player);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Attach(MVAvatar, Boolean) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Attach
               (BoneAnimation *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  (this->fields).mvAvatar = mvAvatar;
  (this->fields).isLocal = isLocal;
  return;
}


/* Void ComputeAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeAnimation
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (Collection_1_VoxelHit_ *)(this->fields).currentAnim;
  if (pCVar1 != (Collection_1_VoxelHit_ *)0x0) {
    if ((this->fields).prevAnim != (AnimationData *)0x0) {
      pSVar2 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
      pCVar1 = (Collection_1_VoxelHit_ *)(this->fields).prevAnim;
      if (pCVar1 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
      b = (String *)
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar3 = mscorlib.dll::System::String::String_op_Inequality(pSVar2,b,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
    }
    pCVar1 = (Collection_1_VoxelHit_ *)(this->fields).currentAnim;
    if (pCVar1 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    pSVar2 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar2,StringLiteral_Jump,(MethodInfo *)0x0);
    pAVar4 = (this->fields).avatarAnimation;
    if (bVar3 == 0) {
      pCVar1 = (Collection_1_VoxelHit_ *)(this->fields).currentAnim;
      if ((pCVar1 == (Collection_1_VoxelHit_ *)0x0) ||
         (pSVar2 = (String *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0),
         pAVar4 == (Animation *)0x0)) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar4,pSVar2,0.3,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      if (pAVar4 == (Animation *)0x0) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Internal_RewindByName
                (pAVar4,StringLiteral_Jump,(MethodInfo *)0x0);
      pCVar1 = (Collection_1_VoxelHit_ *)(this->fields).currentAnim;
      pAVar4 = (this->fields).avatarAnimation;
      if ((pCVar1 == (Collection_1_VoxelHit_ *)0x0) ||
         (pSVar2 = (String *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0),
         pAVar4 == (Animation *)0x0)) goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                (pAVar4,pSVar2,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    pCVar5 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)(this->fields).currentAnim;
    if (pCVar5 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
    goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       (pCVar5,(MethodInfo *)0x0);
    iVar7 = TransformNetworkManager::TransformNetworkManager_get_DelayedTime((MethodInfo *)0x0);
    if ((int)pOVar6 < iVar7) {
      iVar7 = TransformNetworkManager::TransformNetworkManager_get_DelayedTime((MethodInfo *)0x0);
      pCVar5 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
               (this->fields).currentAnim;
      if (pCVar5 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
code_?:
        func_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (pCVar5,(MethodInfo *)0x0);
      pCVar1 = (Collection_1_VoxelHit_ *)(this->fields).currentAnim;
      pAVar4 = (this->fields).avatarAnimation;
      if (((pCVar1 == (Collection_1_VoxelHit_ *)0x0) ||
          (pSVar2 = (String *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0),
          pAVar4 == (Animation *)0x0)) ||
         (pAVar9 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                             (pAVar4,pSVar2,(MethodInfo *)0x0), pAVar9 == (AnimationState *)0x0))
      goto code_?;
      fVar10 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
               AnimationState_get_length(pAVar9,(MethodInfo *)0x0);
      pCVar1 = (Collection_1_VoxelHit_ *)(this->fields).currentAnim;
      pAVar4 = (this->fields).avatarAnimation;
      if (((pCVar1 == (Collection_1_VoxelHit_ *)0x0) ||
          (pSVar2 = (String *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0),
          pAVar4 == (Animation *)0x0)) ||
         (pAVar9 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                             (pAVar4,pSVar2,(MethodInfo *)0x0), pAVar9 == (AnimationState *)0x0))
      goto code_?;
      UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                (pAVar9,((float)(iVar7 - (int)pOVar6) * _UNK_?) / fVar10,(MethodInfo *)0x0);
    }
    (this->fields).prevAnim = (this->fields).currentAnim;
    (this->fields).currentAnim = (AnimationData *)0x0;
  }
  return;
}


/* Void ComputeBlendAnimation(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeBlendAnimation
               (BoneAnimation *this,Dictionary_2_System_Object_System_Object_ *animData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (animData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar1 = (MVPlayer *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)animData,(Type *)StringLiteral_state,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    player = (MVPlayer *)0x0;
    if (pMVar1 != (MVPlayer *)0x0) {
      if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
        player = pMVar1;
      }
      pSVar2 = TypeInfo__System__String;
      if (player == (MVPlayer *)0x0) goto code_?;
    }
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)animData,(Type *)StringLiteral_timeStamp,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar3 == (Pool *)0x0) goto code_?;
    if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar4 = (undefined4 *)func_?();
      friend_1 = (Friend *)*puVar4;
      pCVar5 = (Collection_1_VoxelHit_ *)func_?();
      PlayerElementData::PlayerElementData__ctor
                ((PlayerElementData *)pCVar5,player,friend_1,(MethodInfo *)0x0);
      pMVar6 = pPVar3[1].monitor;
      pPVar3[1].fields.prefab = (MonoBehaviour *)pCVar5;
      if (pMVar6 == (MonitorData *)0x0) {
code_?:
        pCVar5 = (Collection_1_VoxelHit_ *)pPVar3[1].fields.prefab;
        this_00 = pPVar3[1].fields.pool;
        if ((pCVar5 != (Collection_1_VoxelHit_ *)0x0) &&
           (pSVar7 = (String *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(pCVar5,(MethodInfo *)0x0),
           this_00 != (MonoBehaviour__Array *)0x0)) {
          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                    ((Animation *)this_00,pSVar7,0.3,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
          pPVar3[1].monitor = (MonitorData *)pPVar3[1].fields.prefab;
          pPVar3[1].fields.prefab = (MonoBehaviour *)0x0;
          return;
        }
      }
      else if (pCVar5 != (Collection_1_VoxelHit_ *)0x0) {
        pSVar7 = (String *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(pCVar5,(MethodInfo *)0x0);
        if ((Collection_1_VoxelHit_ *)pPVar3[1].monitor != (Collection_1_VoxelHit_ *)0x0) {
          b = (String *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)pPVar3[1].monitor,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar8 = mscorlib.dll::System::String::String_op_Inequality(pSVar7,b,(MethodInfo *)0x0);
          if (bVar8 == 0) {
            return;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  pMVar1 = (MVPlayer *)func_?();
  pSVar2 = extraout_ECX;
code_?:
  func_?(pMVar1,pSVar2);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ComputeRemoteAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_ComputeRemoteAnimation
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = TransformNetworkManager::TransformNetworkManager_get_DelayedTime((MethodInfo *)0x0);
  iVar2 = iVar1 + 0x14;
  pQVar3 = (this->fields).animationQueue;
  if (pQVar3 == (Queue_1_AnimationData_ *)0x0) {
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                     ((KogamaSettingNumericBase_1_System_Single_ *)pQVar3,
                      MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__);
  pSVar6 = (SmoothPhysicsMovement_Package *)(this->fields).nextAnim;
  if ((int)pIVar5 < 1) {
    if ((pSVar6 != (SmoothPhysicsMovement_Package *)0x0) &&
       (pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar6,
                            (MethodInfo *)0x0), (int)pOVar7 <= iVar2)) {
      (this->fields).currentAnim = (this->fields).nextAnim;
      (this->fields).nextAnim = (AnimationData *)0x0;
      BoneAnimation_ComputeAnimation(this,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar8 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).animationQueue;
    if (pQVar8 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
             Queue_1_SmoothPhysicsMovement_Package__Dequeue
                       (pQVar8,
                        MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__);
    (this->fields).nextAnim = (AnimationData *)pSVar6;
    if (pSVar6 != (SmoothPhysicsMovement_Package *)0x0) goto code_?;
  }
  else {
code_?:
    if (((this->fields).currentAnim == (AnimationData *)0x0) &&
       (pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar6,
                            (MethodInfo *)0x0), (int)pOVar7 <= iVar2)) {
      (this->fields).currentAnim = (this->fields).nextAnim;
      (this->fields).nextAnim = (AnimationData *)0x0;
    }
  }
  pSVar6 = (SmoothPhysicsMovement_Package *)(this->fields).nextAnim;
  while ((pSVar6 != (SmoothPhysicsMovement_Package *)0x0 &&
         (pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar6,
                              (MethodInfo *)0x0), (int)pOVar7 <= iVar2))) {
    pQVar3 = (this->fields).animationQueue;
    if (pQVar3 == (Queue_1_AnimationData_ *)0x0) goto code_?;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar3,
                        MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__)
    ;
    if ((int)pIVar5 < 1) break;
    (this->fields).currentAnim = (this->fields).nextAnim;
    pQVar8 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).animationQueue;
    if (pQVar8 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
             Queue_1_SmoothPhysicsMovement_Package__Dequeue
                       (pQVar8,
                        MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__);
    (this->fields).nextAnim = (AnimationData *)pSVar6;
  }
code_?:
  BoneAnimation_ComputeAnimation(this,(MethodInfo *)0x0);
  return;
}


/* Void Detach() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Detach
               (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Detach_,pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    self = (this->fields).avatarAnimation;
    if (self != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_INTERNAL_CALL_Stop
                (self,(MethodInfo *)0x0);
      this_00 = (this->fields).animationQueue;
      if (this_00 != (Queue_1_AnimationData_ *)0x0) {
        System.dll::System::Collections::Generic::Queue`1[System::Int32]::
        Queue_1_System_Int32__Clear
                  ((Queue_1_System_Int32_ *)this_00,
                   MethodInfo__System__Collections__Generic__Queue<AnimationData>__Clear__);
        (this->fields).nextAnim = (AnimationData *)0x0;
        (this->fields).currentAnim = (AnimationData *)0x0;
        (this->fields).prevAnim = (AnimationData *)0x0;
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
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
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
  pAVar1 = (this->fields).avatarAnimation;
  if (pAVar1 == (Animation *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?,0,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  bVar3 = (*pcRam_?)(pAVar1,animationName);
  return bVar3;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_OnEnable
               (BoneAnimation *this,MethodInfo *method)

{
  (this->fields).currentAnim = (this->fields).prevAnim;
  (this->fields).prevAnim = (AnimationData *)0x0;
  return;
}


/* Void Play(String) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Play
               (BoneAnimation *this,String *animationName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).playingAnimations;
  if (this_00 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              (this_00,(UnityWebRequest *)animationName,
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
              UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).playingAnimations;
  if (this_00 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              (this_00,(UnityWebRequest *)animationName,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
              );
    pAVar1 = (this->fields).avatarAnimation;
    if (pAVar1 != (Animation *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
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
                UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                Animation_INTERNAL_CALL_Sample(pAVar1,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 == (MVAvatar *)0x0) {
    return;
  }
  if ((this->fields).isLocal == 0) {
    pAVar2 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                       (0.7,1.2,(MethodInfo *)0x0);
    if (pAVar2 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar2,fVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    pAVar2 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
    pMVar1 = (this->fields).mvAvatar;
    if (((pMVar1 == (MVAvatar *)0x0) ||
        (this_01 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(pMVar1,(MethodInfo *)0x0),
        this_01 == (PrefabPool *)0x0)) ||
       (this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0),
       this_02 == (MVPointLightObject *)0x0)) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,(Transform *)this_02,(MethodInfo *)0x0);
  }
  else {
    this_03 = (MVAvatarLocal *)func_?(pMVar1,TypeInfo__MVAvatarLocal);
    if ((this_03 == (MVAvatarLocal *)0x0) ||
       (pMVar5 = MVAvatarLocal::MVAvatarLocal_get_RigidBody(this_03,(MethodInfo *)0x0),
       pMVar5 == (MVRigidBody *)0x0)) goto code_?;
    cVar6 = (*(code *)(pMVar5->klass->vtable).__unknown.method)();
    if (cVar6 == '\0') {
      return;
    }
    bVar7 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(this_03,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      return;
    }
    pAVar2 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                       (0.7,1.2,(MethodInfo *)0x0);
    if (pAVar2 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar2,fVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    pAVar2 = BoneAnimation_get_AudioSource(this,(MethodInfo *)0x0);
    pCVar8 = (this->fields).mainCamera;
    if ((pCVar8 == (Camera *)0x0) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar9,(MethodInfo *)0x0);
    uVar10 = pVVar4->x;
    uVar11 = pVVar4->y;
    a.y = (float)uVar11;
    a.x = (float)uVar10;
    pCVar8 = (this->fields).mainCamera;
    if ((pCVar8 == (Camera *)0x0) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       ((Vector3 *)&stack0xffffffd8,pTVar9,(MethodInfo *)0x0);
    uVar12._0_4_ = pVVar4->x;
    uVar12._4_4_ = pVVar4->y;
    fVar3 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = (float)&UNK_?;
    b.z = fVar3;
    b.x = (float)uVar12;
    b.y = SUB84(uVar12,4);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
  }
  if (this_00 != (AudioManager *)0x0) {
    AudioManager::AudioManager_Play_2
              (this_00,StringLiteral_Footstep,pAVar2,*pVVar4,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Start(BoneAnimation *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  return;
}


/* Void StartAnimation(String, Int32) */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_StartAnimation
               (BoneAnimation *this,String *newAnimation,int32_t timeStamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).OnAnimationChange;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)newAnimation,
               MethodInfo__System__Action<System::String>__Invoke_System__String_);
  }
  if ((this->fields).isLocal == 0) {
    this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).animationQueue;
    item = (SmoothPhysicsMovement_Package *)func_?(TypeInfo__AnimationData);
    PlayerElementData::PlayerElementData__ctor
              ((PlayerElementData *)item,(MVPlayer *)newAnimation,(Friend *)timeStamp,
               (MethodInfo *)0x0);
    if (this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                (this_01,item,
                 MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                );
      BoneAnimation_ComputeRemoteAnimation(this,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_02 = (PlayerElementData *)func_?(TypeInfo__AnimationData);
  PlayerElementData::PlayerElementData__ctor
            (this_02,(MVPlayer *)newAnimation,(Friend *)timeStamp,(MethodInfo *)0x0);
  (this->fields).currentAnim = (AnimationData *)this_02;
  BoneAnimation_ComputeAnimation(this,(MethodInfo *)0x0);
  return;
}


/* Void Stop() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation_Stop(BoneAnimation *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarAnimation;
  if (pAVar1 == (Animation *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pAVar1);
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  uStack_7 = 0;
  pIStack_8 = (IEnumerator__Class *)0x0;
  pIVar9 = (IEnumerator__Class *)&UNK_?;
  func_?();
  iStack_10 = -1;
  pBStack_11 = (BoneAnimation *)0xffffffff;
  piStack_12 = (int *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if ((this->fields).isLocal == 0) {
    pIVar9 = (IEnumerator__Class *)0x0;
    piStack_12 = (int *)&stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    BoneAnimation_ComputeRemoteAnimation(this,(MethodInfo *)0x0);
  }
  pBVar13 = this;
  if ((this->fields).pauseNextFrame != 0) {
    pIVar9 = (IEnumerator__Class *)0x0;
    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0)
    ;
    if (iVar14 == (this->fields).playStartFrame + 1) {
      pAVar15 = (this->fields).avatarAnimation;
      if (pAVar15 != (Animation *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_INTERNAL_CALL_Stop
                  (pAVar15,(MethodInfo *)0x0);
        pAVar15 = (this->fields).avatarAnimation;
        if (pAVar15 != (Animation *)0x0) {
          unaff_ESI = (IEnumerator__Class *)
                      UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                      Animation_GetEnumerator(pAVar15,(MethodInfo *)0x0);
          uStack_1 = 0;
          pIStack_16 = unaff_ESI;
          while (unaff_ESI != (IEnumerator__Class *)0x0) {
            cVar17 = func_?(1,TypeInfo__System__Collections__IEnumerator);
            if (cVar17 == '\0') {
              *piStack_12 = 0x85;
              iStack_10 = 0;
              uStack_1 = 0xffffffff;
              pIVar9 = unaff_ESI;
              pIVar18 = (IEnumerator__Class *)func_?();
              if (pIVar18 != (IEnumerator__Class *)0x0) {
                func_?(0,TypeInfo__System__IDisposable);
                pIVar9 = pIVar18;
              }
              if (*piStack_12 == 0x85) {
                iStack_10 = -1;
              }
              (this->fields).pauseNextFrame = 0;
              goto code_?;
            }
            pIVar19 = (unaff_ESI->_0).image;
            pBVar13 = (BoneAnimation *)0x0;
            uVar20 = 0;
            uVar21 = *(ushort *)((int)&pIVar19[4].nameNoExt + 2);
            if (uVar21 != 0) {
              pBVar13 = (BoneAnimation *)pIVar19[2].name;
              do {
                if ((&pBVar13->klass)[(uint)uVar20 * 2] ==
                    (BoneAnimation__Class *)TypeInfo__System__Collections__IEnumerator) {
                  ppcVar22 = &((unaff_ESI->_0).image)->name +
                             (int)((&pBVar13->monitor)[(uint)uVar20 * 2] + 0x18) * 2;
                  goto code_?;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar21);
            }
            ppcVar22 = (char **)func_?(unaff_ESI,TypeInfo__System__Collections__IEnumerator
                                               );
code_?:
            pAVar23 = (AnimationState *)(*(code *)*ppcVar22)(unaff_ESI);
            if (pAVar23 == (AnimationState *)0x0) break;
            this_02 = (AnimationState *)0x0;
            if (pAVar23->klass == TypeInfo__UnityEngine__AnimationState) {
              this_02 = pAVar23;
            }
            if (this_02 == (AnimationState *)0x0) {
              func_?(pAVar23);
              break;
            }
            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                      (this_02,1.0,(MethodInfo *)0x0);
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  pAVar15 = (this->fields).avatarAnimation;
  pBVar13 = this;
  if (pAVar15 != (Animation *)0x0) {
    pBStack_11 = (BoneAnimation *)
                 UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetEnumerator
                           (pAVar15,(MethodInfo *)pIVar9);
    uStack_1 = 2;
    pBVar24 = pBStack_11;
    while (pBVar25 = pBStack_11, pIVar9 = TypeInfo__System__Collections__IEnumerator,
          pBVar13 = (BoneAnimation *)0x0, pBVar24 != (BoneAnimation *)0x0) {
      pBVar26 = pBVar24->klass;
      uVar20 = 0;
      uVar21._0_1_ = (pBVar26->_1).rank;
      uVar21._1_1_ = (pBVar26->_1).minimumAlignment;
      if (uVar21 != 0) {
        do {
          if (pBVar26->interfaceOffsets[uVar20].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar27 = &(&(pBVar26->vtable).Finalize)[pBVar26->interfaceOffsets[uVar20].offset].method
            ;
            goto code_?;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar21);
      }
      ppMVar27 = (MethodInfo **)
                 func_?(pBStack_11,TypeInfo__System__Collections__IEnumerator);
code_?:
      cVar17 = (*(code *)*ppMVar27)(pBVar25);
      unaff_ESI = pIStack_8;
      if (cVar17 == '\0') {
        piStack_12[iStack_10 + 1] = 0x17a;
        uStack_1 = 0xffffffff;
        iVar28 = func_?(pBVar25);
        if (iVar28 != 0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        if (unaff_ESI == (IEnumerator__Class *)0x0) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      pIVar18 = (IEnumerator__Class *)func_?(0,TypeInfo__System__Collections__IEnumerator);
      pBVar13 = pBVar25;
      unaff_ESI = pIVar9;
      if (pIVar18 == (IEnumerator__Class *)0x0) break;
      unaff_ESI = (IEnumerator__Class *)0x0;
      if ((AnimationState__Class *)(pIVar18->_0).image == TypeInfo__UnityEngine__AnimationState) {
        unaff_ESI = pIVar18;
      }
      if (unaff_ESI == (IEnumerator__Class *)0x0) goto code_?;
      pSVar29 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                AnimationState_get_name((AnimationState *)unaff_ESI,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar30 = mscorlib.dll::System::String::String_op_Equality
                         (pSVar29,StringLiteral_Walk,(MethodInfo *)0x0);
      if ((bVar30 != 0) &&
         (bVar30 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                   AnimationState_get_enabled((AnimationState *)unaff_ESI,(MethodInfo *)0x0),
         bVar30 != 0)) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        MVar31 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar31 != MVGameMode__Enum_CharacterEditor) {
          pMVar32 = (this->fields).mvAvatar;
          if (pMVar32 == (MVAvatar *)0x0) {
            pIStack_16 = (IEnumerator__Class *)(this->fields).fallbackWalkSpeed;
          }
          else {
            puVar33 = (undefined8 *)func_?(auStack_34,0x59,pMVar32);
            uStack_7 = *puVar33;
            uStack_6 = *(undefined4 *)(puVar33 + 1);
            fVar35 = (float10)func_?(&uStack_7,0);
            pIStack_16 = (IEnumerator__Class *)(float)fVar35;
          }
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          pIStack_16 = (IEnumerator__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                                 ((float)pIStack_16 * _UNK_?,0.5,1.1,(MethodInfo *)0x0);
          UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_speed
                    ((AnimationState *)unaff_ESI,(float)pIStack_16,(MethodInfo *)0x0);
        }
      }
      this_00 = (this->fields).playingAnimations;
      pSVar29 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                AnimationState_get_name((AnimationState *)unaff_ESI,(MethodInfo *)0x0);
      if (this_00 == (HashSet_1_System_String_ *)0x0) break;
      bVar30 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
               NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                         ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)this_00,
                          (NativeAdType__Enum)pSVar29,
                          MethodInfo__System__Collections__Generic__HashSet<System::String>__Contains_System__String_
                         );
      pBVar24 = pBVar25;
      if ((bVar30 != 0) &&
         (bVar30 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                   AnimationState_get_enabled((AnimationState *)unaff_ESI,(MethodInfo *)0x0),
         bVar30 == 0)) {
        this_01 = (HashSet_1_MVRotator_ *)(this->fields).playingAnimations;
        item = (MVRotator *)
               UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_get_name
                         ((AnimationState *)unaff_ESI,(MethodInfo *)0x0);
        if (this_01 == (HashSet_1_MVRotator_ *)0x0) break;
        System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::
        HashSet_1_MVRotator__Remove
                  (this_01,item,
                   MethodInfo__System__Collections__Generic__HashSet<System::String>__Remove_System__String_
                  );
      }
    }
  }
code_?:
  func_?();
  pIVar18 = (IEnumerator__Class *)func_?(pBVar13,0,0);
code_?:
  func_?(pIVar18);
code_?:
  func_?(unaff_ESI,0);
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* BoneAnimation() */

void Assembly-CSharp.dll::BoneAnimation::BoneAnimation__ctor(BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).fallbackWalkSpeed = 8.0;
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<AnimationData>);
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_00,MethodInfo__System__Collections__Generic__Queue<AnimationData>__Queue__);
  (this->fields).animationQueue = (Queue_1_AnimationData_ *)this_00;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
  (this->fields).playingAnimations = (HashSet_1_System_String_ *)this_01;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* AudioSource get_AudioSource() */

AudioSource *
Assembly-CSharp.dll::BoneAnimation::BoneAnimation_get_AudioSource
          (BoneAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).audioSource;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                       );
    (this->fields).audioSource = (AudioSource *)pMVar2;
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

