
/* Void Update() */

void Assembly-CSharp.dll::FirstTimeAvatarJumpAnimator::FirstTimeAvatarJumpAnimator_Update
               (FirstTimeAvatarJumpAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pMVar2 = MVAvatar::MVAvatar_get_Body((MVAvatar *)pMVar1,(MethodInfo *)0x0),
      pMVar2 != (MVBody *)0x0)) &&
     (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
     pBVar3 != (BoneAnimation *)0x0)) {
    bVar4 = BoneAnimation::BoneAnimation_IsPlaying
                      (pBVar3,(this->fields).jumpAnimationName,(MethodInfo *)0x0);
    if ((bVar4 == 0) && (1 < (this->fields).jumps)) {
      pMVar1 = (this->fields).avatarLocal;
      if (((pMVar1 != (MVAvatarLocal *)0x0) &&
          (pMVar2 = MVAvatar::MVAvatar_get_Body((MVAvatar *)pMVar1,(MethodInfo *)0x0),
          pMVar2 != (MVBody *)0x0)) &&
         (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
         pBVar3 != (BoneAnimation *)0x0)) {
        BoneAnimation::BoneAnimation_Play(pBVar3,(this->fields).jumpAnimationName,(MethodInfo *)0x0)
        ;
        piVar5 = &(this->fields).jumps;
        *piVar5 = *piVar5 + -1;
        return;
      }
    }
    else {
      iVar6 = (this->fields).jumps;
      if (iVar6 == 1) {
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    ((Dictionary_2_System_String_Theme_ *)pDVar7,StringLiteral_state,
                     (Theme *)StringLiteral_Walk,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar8 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar8,(MethodInfo *)0x0);
            pTVar9 = (Theme *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)pDVar7,StringLiteral_timeStamp,pTVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pMVar1 = (this->fields).avatarLocal;
            if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                (pMVar2 = MVAvatar::MVAvatar_get_Body((MVAvatar *)pMVar1,(MethodInfo *)0x0),
                pMVar2 != (MVBody *)0x0)) &&
               (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
               pBVar3 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_ComputeBlendAnimation(pBVar3,pDVar7,(MethodInfo *)0x0);
              piVar5 = &(this->fields).jumps;
              *piVar5 = *piVar5 + -1;
              return;
            }
          }
        }
      }
      else {
        if (iVar6 != 0) {
          return;
        }
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    ((Dictionary_2_System_String_Theme_ *)pDVar7,StringLiteral_state,
                     (Theme *)StringLiteral_Idle,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar8 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar8,(MethodInfo *)0x0);
            pTVar9 = (Theme *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)pDVar7,StringLiteral_timeStamp,pTVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pMVar1 = (this->fields).avatarLocal;
            if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                (pMVar2 = MVAvatar::MVAvatar_get_Body((MVAvatar *)pMVar1,(MethodInfo *)0x0),
                pMVar2 != (MVBody *)0x0)) &&
               (pBVar3 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
               pBVar3 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_ComputeBlendAnimation(pBVar3,pDVar7,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* FirstTimeAvatarJumpAnimator() */

void Assembly-CSharp.dll::FirstTimeAvatarJumpAnimator::FirstTimeAvatarJumpAnimator__ctor
               (FirstTimeAvatarJumpAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).jumps = 6;
  (this->fields).jumpAnimationName = StringLiteral_Jump;
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

