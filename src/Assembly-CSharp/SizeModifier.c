
/* Single BlockStep(Single, Single, Single, Single) */

float Assembly-CSharp.dll::SizeModifier::SizeModifier_BlockStep
                (SizeModifier *this,float t,float steps,float clampMin,float clampMax,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = t * steps;
  fVar2 = (float10)func_?((double)fVar1,&dStack_3);
  if (fVar1 < _UNK_?) {
    if ((double)fVar2 == _UNK_?) {
      uVar4 = func_?();
      fVar1 = (float)dStack_3;
      if ((uVar4 & 1) != 0) {
        fVar1 = fVar1 - _UNK_?;
      }
      goto code_?;
    }
    fVar2 = (float10)func_?((double)(fVar1 - _UNK_?));
  }
  else {
    if ((double)fVar2 == _UNK_?) {
      uVar4 = func_?();
      fVar1 = (float)dStack_3;
      if ((uVar4 & 1) != 0) {
        fVar1 = fVar1 + _UNK_?;
      }
      goto code_?;
    }
    fVar2 = (float10)func_?((double)(fVar1 + _UNK_?));
  }
  fVar1 = (float)fVar2;
code_?:
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1 / steps,clampMin,clampMax,(MethodInfo *)0x0);
  return fVar1;
}


/* IEnumerator DoForSeconds(Single, SizeModifier+ActionDelegate) */

IEnumerator *
Assembly-CSharp.dll::SizeModifier::SizeModifier_DoForSeconds
          (SizeModifier *this,float duration,SizeModifier_ActionDelegate *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SizeModifier___DoForSeconds_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.y = (float)this;
    (this_00->fields)._._._._.m_CachedPtr = body;
    (this_00->fields).originalScale.x = duration;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_OnActivated
               (SizeModifier *this,Avatar_1 *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isDeactivating = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields)._.owner = target;
  (this->fields)._.timeStamp = fVar1;
  if ((target != (Avatar_1 *)0x0) &&
     (this_00 = (target->fields).mvAvatar, this_00 != (MVAvatar *)0x0)) {
    this_01 = MVAvatar::MVAvatar_get_Body(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVBody *)0x0) {
      this_02 = MVBody::MVBody_get_BlobShadow(this_01,(MethodInfo *)0x0);
      if (this_02 != (AvatarBlobShadowController *)0x0) {
        AvatarBlobShadowController::AvatarBlobShadowController_ScaleShadow
                  (this_02,(this->fields).sizeModifier,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_03 != (MVNetworkGame *)0x0) {
          this_04 = (PrefabPool *)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
          if (this_04 != (PrefabPool *)0x0) {
            this_05 = (InventoryItemPreviewer *)
                      PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
            if (this_05 != (InventoryItemPreviewer *)0x0) {
              s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                  InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                            (this_05,(MethodInfo *)0x0);
              pVVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                       SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                       SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                 ((Vector3 *)&stack0xfffffff0,s,
                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                 );
              fVar3 = pVVar2->y;
              fVar1 = pVVar2->z;
              (this->fields).defaultScale.x = pVVar2->x;
              (this->fields).defaultScale.y = fVar3;
              (this->fields).defaultScale.z = fVar1;
              (*(code *)(this->klass->vtable).Scale.method)(this,this->klass[1]._0.image);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_OnDeactivated
               (SizeModifier *this,Avatar_1 *target,MethodInfo *method)

{
  (this->fields).isDeactivating = 1;
  (this->fields)._.owner = target;
  if ((target != (Avatar_1 *)0x0) &&
     (this_00 = (target->fields).mvAvatar, this_00 != (MVAvatar *)0x0)) {
    this_01 = MVAvatar::MVAvatar_get_Body(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVBody *)0x0) {
      this_02 = MVBody::MVBody_get_BlobShadow(this_01,(MethodInfo *)0x0);
      if (this_02 != (AvatarBlobShadowController *)0x0) {
        AvatarBlobShadowController::AvatarBlobShadowController_ScaleShadow
                  (this_02,1.0,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).UnScale.method)();
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetTimeStamp() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_ResetTimeStamp
               (SizeModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pAVar2 = (this->fields)._.owner;
  (this->fields)._.timeStamp = fVar1;
  if (pAVar2 != (Avatar_1 *)0x0) {
    VStack_3.y = (this->fields).defaultScale.x;
    VStack_3.z = (this->fields).defaultScale.y;
    fVar1 = (this->fields).sizeModifier;
    fVar4 = (this->fields).defaultScale.z;
    pMVar5 = (pAVar2->fields).mvAvatar;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar4;
    a.x = VStack_3.y;
    a.y = VStack_3.z;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_3,a,fVar1,(MethodInfo *)0x0);
    if (pMVar5 != (MVAvatar *)0x0) {
      VStack_3.y = pVVar6->x;
      VStack_3.z = pVVar6->y;
      VStack_3.x = (float)pMVar5;
      (*(code *)(pMVar5->klass->vtable).set_Scale.method)();
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Unstablize() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_Unstablize
               (SizeModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pMStack_2 = (Mathf__Class *)(fVar1 - (this->fields)._.timeStamp);
  pfVar3 = &(this->fields).sizeUnstableAfterSeconds;
  if ((float)pMStack_2 < *pfVar3 || (float)pMStack_2 == *pfVar3) {
    return;
  }
  fVar1 = (this->fields).unstableSpeed;
  uVar4._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
  pAVar5 = (this->fields)._.owner;
  (this->fields).unstableSpeed = (float)uVar4 + fVar1;
  if (pAVar5 != (Avatar_1 *)0x0) {
    VStack_6.y = (this->fields).defaultScale.x;
    VStack_6.z = (this->fields).defaultScale.y;
    fVar1 = (this->fields).sizeModifier;
    pMVar7 = (pAVar5->fields).mvAvatar;
    uVar4._0_4_ = (this->fields).defaultScale.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_01.z = (float)uVar4;
    a_01.x = VStack_6.y;
    a_01.y = VStack_6.z;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffdc,a_01,fVar1,(MethodInfo *)0x0);
    fVar9 = pVVar8->z;
    fVar10 = (this->fields).defaultScale.z;
    pVVar8 = &(this->fields).defaultScale;
    fVar11 = pVVar8->y;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_6,*pVVar8,0.03,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar8->x;
    fStack_12 = pVVar8->y;
    fVar1 = (this->fields).sizeUnstableAfterSeconds;
    VStack_6.z = pVVar8->z;
    puStack_13 = (undefined *)(this->fields).unstableSpeed;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      pMStack_2 = TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    fVar1 = (float)pMStack_2 - fVar1;
    pMStack_2 = (Mathf__Class *)0x0;
    dVar14 = (double)(fVar1 * (float)puStack_13);
    func_?();
    a.z = VStack_6.z;
    a.x = (float)uVar4;
    a.y = fStack_12;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffdc,a,_UNK_? - (float)dVar14,
                        in_stack_15);
    a_00.y = fVar10;
    a_00.x = fVar11;
    a_00.z = fVar9;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd0,a_00,*pVVar8,(MethodInfo *)0x0);
    if (pMVar7 != (MVAvatar *)0x0) {
      uVar16 = pVVar8->x;
      uVar17 = pVVar8->y;
      (*(code *)(pMVar7->klass->vtable).set_Scale.method)
                (pMVar7,uVar16,uVar17,pVVar8->z,(pMVar7->klass->vtable).get_WorldPosition.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* SizeModifier() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier__ctor(SizeModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).timeToSize = 1.5;
  (this->fields).sizeModifier = 1.0;
  (this->fields).sizeUnstableAfterSeconds = 28.0;
  (this->fields).unstableSpeed = 10.0;
  (this->fields).sineStrength = 14.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).defaultScale.x = pVVar1->x;
  (this->fields).defaultScale.y = fVar3;
  (this->fields).defaultScale.z = fVar4;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}

