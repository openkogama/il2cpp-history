
/* Void Update() */

void Assembly-CSharp.dll::FirstTimeAvatarJumpAnimator::FirstTimeAvatarJumpAnimator_Update
               (FirstTimeAvatarJumpAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_timeStamp);
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_state);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
     (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
     pBVar3 != (BoneAnimation *)0x0)) {
    bVar4 = BoneAnimation::BoneAnimation_IsPlaying
                      (pBVar3,(this->fields).jumpAnimationName,(MethodInfo *)0x0);
    if ((bVar4 == 0) && (1 < (this->fields).jumps)) {
      pMVar1 = (this->fields).avatarLocal;
      if (((pMVar1 != (MVAvatarLocal *)0x0) &&
          (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
         (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
         pBVar3 != (BoneAnimation *)0x0)) {
        BoneAnimation::BoneAnimation_Play(pBVar3,(this->fields).jumpAnimationName,(MethodInfo *)0x0)
        ;
        piVar5 = &(this->fields).jumps;
        *piVar5 = *piVar5 + -1;
        return;
      }
    }
    else if ((this->fields).jumps == 1) {
      pDVar6 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar6,(Object *)StringLiteral_state,(Object *)StringLiteral_Walk,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar7,(MethodInfo *)0x0);
          pOVar8 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar6,(Object *)StringLiteral_timeStamp,pOVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pMVar1 = (this->fields).avatarLocal;
          if (((pMVar1 != (MVAvatarLocal *)0x0) &&
              (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
             (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
             pBVar3 != (BoneAnimation *)0x0)) {
            BoneAnimation::BoneAnimation_ComputeBlendAnimation(pBVar3,pDVar6,(MethodInfo *)0x0);
            piVar5 = &(this->fields).jumps;
            *piVar5 = *piVar5 + -1;
            return;
          }
        }
      }
    }
    else {
      if ((this->fields).jumps != 0) {
        return;
      }
      pDVar6 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar6,(Object *)StringLiteral_state,(Object *)StringLiteral_Idle,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar7,(MethodInfo *)0x0);
          pOVar8 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar6,(Object *)StringLiteral_timeStamp,pOVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pMVar1 = (this->fields).avatarLocal;
          if (((pMVar1 != (MVAvatarLocal *)0x0) &&
              (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
             (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
             pBVar3 != (BoneAnimation *)0x0)) {
            BoneAnimation::BoneAnimation_ComputeBlendAnimation(pBVar3,pDVar6,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* FirstTimeAvatarJumpAnimator() */

void Assembly-CSharp.dll::FirstTimeAvatarJumpAnimator::FirstTimeAvatarJumpAnimator__ctor
               (FirstTimeAvatarJumpAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Jump);
    cRam_? = '\x01';
  }
  (this->fields).jumps = 6;
  (this->fields).jumpAnimationName = StringLiteral_Jump;
  func_?(&(this->fields).jumpAnimationName,StringLiteral_Jump);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

