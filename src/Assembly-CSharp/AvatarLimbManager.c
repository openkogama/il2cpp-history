
/* Void CheckAvatarRotation() */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_CheckAvatarRotation
               (AvatarLimbManager *this,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar2 = (PrefabPool *)(this->fields).avatarWO;
  if (pPVar2 != (PrefabPool *)0x0) {
    pMVar3 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
    if (pMVar3 != (MVPointLightObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                (&QStack_4,(Transform *)pMVar3,(MethodInfo *)0x0);
      puVar5 = (undefined8 *)func_?(&QStack_4.y,&stack0xffffffd0,0);
      uStack_6._4_4_ = (AvatarLimbManager *)((ulonglong)*puVar5 >> 0x20);
      this = uStack_6._4_4_;
      if (_UNK_? < (float)uStack_6._4_4_) {
        this = (AvatarLimbManager *)(_UNK_? - ((float)uStack_6._4_4_ - _UNK_?));
      }
      uStack_6 = *puVar5;
      puVar5 = (undefined8 *)func_?();
      uVar7 = *puVar5;
      uStack_6._4_4_ = (AvatarLimbManager *)((ulonglong)uVar7 >> 0x20);
      if (_UNK_? < (float)uStack_6._4_4_) {
        uStack_6._4_4_ =
             (AvatarLimbManager *)(_UNK_? - ((float)uStack_6._4_4_ - _UNK_?));
      }
      fVar8 = (float)this - (float)uStack_6._4_4_;
      uStack_6 = uVar7;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      if ((_UNK_? <
           (float)(double)CONCAT44((uint)((ulonglong)(double)fVar8 >> 0x20) & _UNK_?,
                                   SUB84((double)fVar8,0) & _UNK_?)) &&
         (this_00 = (JumpState_OnWallJumpDelegate *)(pAVar1->fields).OnAvatarRotate,
         this_00 != (JumpState_OnWallJumpDelegate *)0x0)) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0)
        ;
      }
      pPVar2 = (PrefabPool *)(pAVar1->fields).avatarWO;
      if (pPVar2 != (PrefabPool *)0x0) {
        pMVar3 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
        if (pMVar3 != (MVPointLightObject *)0x0) {
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             (&QStack_4,(Transform *)pMVar3,(MethodInfo *)0x0);
          fVar8 = pQVar9->y;
          fVar10 = pQVar9->z;
          fVar11 = pQVar9->w;
          (pAVar1->fields).previousTransformRotation.x = pQVar9->x;
          (pAVar1->fields).previousTransformRotation.y = fVar8;
          (pAVar1->fields).previousTransformRotation.z = fVar10;
          (pAVar1->fields).previousTransformRotation.w = fVar11;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_Initialize
               (AvatarLimbManager *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).avatarWO = avatarWO;
  method_00 = TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler;
  this_00 = (AvatarLimbManager_AvatarLookDirectionHandler *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_00);
  (this->fields).lookDirectionHandler = this_00;
  if (this_00 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    (this_00->fields).avatarWO = avatarWO;
    method_01 = TypeInfo__AvatarLimbManager__LimbRotator;
    this_01 = (ScaleAnimationBase *)func_?();
    *(undefined1 *)&(this_01->fields).state = 1;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_01);
    (this->fields).limbRotator = (AvatarLimbManager_LimbRotator *)this_01;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_02 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
              );
    (this_01->fields)._._._._.m_CachedPtr = this_02;
    if (body != (MVBody *)0x0) {
      pBVar1 = MVBody::MVBody_get_Animation(body,(MethodInfo *)0x0);
      if (pBVar1 != (BoneAnimation *)0x0) {
        pAVar2 = (pBVar1->fields).OnAnimationChange;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action<System::String>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_01,
                   MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_,
                   MethodInfo__System__Action<System::String>__Action_System__Object__void__);
        pAVar3 = (Action_1_String_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)this_03,(MethodInfo *)0x0);
        pAVar2 = (Action_1_String_ *)0x0;
        if (pAVar3 == (Action_1_String_ *)0x0) {
code_?:
          (pBVar1->fields).OnAnimationChange = pAVar2;
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_CreateLimbController
                    ((AvatarLimbManager_LimbRotator *)this_01,BodyData_PartIndex__Enum_Torso,
                     avatarWO,(MVBody *)0x0,this,(MethodInfo *)0x0);
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_CreateLimbController
                    ((AvatarLimbManager_LimbRotator *)this_01,BodyData_PartIndex__Enum_Head,avatarWO
                     ,(MVBody *)0x0,this,(MethodInfo *)0x0);
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_CreateLimbController
                    ((AvatarLimbManager_LimbRotator *)this_01,BodyData_PartIndex__Enum_RArm,avatarWO
                     ,(MVBody *)0x0,this,(MethodInfo *)0x0);
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_CreateLimbController
                    ((AvatarLimbManager_LimbRotator *)this_01,BodyData_PartIndex__Enum_LArm,avatarWO
                     ,(MVBody *)0x0,this,(MethodInfo *)0x0);
          return;
        }
        if (pAVar3->klass == TypeInfo__System__Action<System::String>) {
          pAVar2 = pAVar3;
        }
        if (pAVar2 != (Action_1_String_ *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnStartEmote(String) */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_OnStartEmote
               (AvatarLimbManager *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).OnEmoteStart;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)newAnimation,
               MethodInfo__System__Action<System::String>__Invoke_System__String_);
  }
  return;
}


/* Single QuaternionAngleToNormalAngle(Single) */

float Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_QuaternionAngleToNormalAngle
                (AvatarLimbManager *this,float angle,MethodInfo *method)

{
  if (_UNK_? < angle) {
    angle = _UNK_? - (angle - _UNK_?);
  }
  return angle;
}


/* Void SetLimbRotatorActivity(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_SetLimbRotatorActivity
               (AvatarLimbManager *this,bool shouldBeActive,MethodInfo *method)

{
  pAVar1 = (this->fields).limbRotator;
  if (pAVar1 != (AvatarLimbManager_LimbRotator *)0x0) {
    (pAVar1->fields).isActive = shouldBeActive;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateLimbRotations(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_UpdateLimbRotations
               (AvatarLimbManager *this,Vector3 lookDirection,MethodInfo *method)

{
  this_00 = (this->fields).lookDirectionHandler;
  if (this_00 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    AvatarLimbManager+AvatarLookDirectionHandler::
    AvatarLimbManager_AvatarLookDirectionHandler_Update(this_00,lookDirection,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

