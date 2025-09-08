
/* Single BlockStep(Single, Single, Single, Single) */

float Assembly-CSharp.dll::SizeModifier::SizeModifier_BlockStep
                (SizeModifier *this,float t,float steps,float clampMin,float clampMax,
                MethodInfo *method)

{
  fVar1 = (float10)func_?(t * steps);
  steps = (float)(fVar1 / (float10)steps);
  if ((steps < clampMin) || (clampMin = clampMax, clampMax < steps)) {
    steps = clampMin;
  }
  return steps;
}


/* IEnumerator DoForSeconds(Single, SizeModifier+ActionDelegate) */

IEnumerator *
Assembly-CSharp.dll::SizeModifier::SizeModifier_DoForSeconds
          (SizeModifier *this,float duration,SizeModifier_ActionDelegate *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SizeModifier___DoForSeconds_d__17);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SizeModifier___DoForSeconds_d__17;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)body;
  value[3].klass = (Object__Class *)duration;
  func_?(&value[2].monitor,body);
  return (IEnumerator *)value;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_OnActivated
               (SizeModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  (this->fields).isDeactivating = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields)._.owner = target;
  (this->fields)._.timeStamp = fVar1;
  func_?(&(this->fields)._.owner,target);
  pAVar2 = (this->fields)._.owner;
  if (((pAVar2 != (Avatar *)0x0) && (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0))
     && (this_00 = (pMVar3->fields).body, this_00 != (MVBody *)0x0)) {
    pAVar4 = MVBody::MVBody_get_BlobShadow(this_00,(MethodInfo *)0x0);
    if ((pAVar4 != (AvatarBlobShadowController *)0x0) &&
       (this_01 = (pAVar4->fields).blobProjector, this_01 != (Projector *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Projector::Projector_set_orthographicSize
                (this_01,(this->fields).sizeModifier,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame *)0x0) {
        pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
        if ((pMVar5 != (MVLocalPlayer *)0x0) &&
           (pSVar6 = (pMVar5->fields).spawnRoleDataMediator, pSVar6 != (SpawnRoleDataMediator *)0x0)
           ) {
          pVVar7 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                   SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                   SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                             ((Vector3 *)&stack0xfffffff0,
                              (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                              (pSVar6->fields).defaultScale,
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                             );
          fVar8 = pVVar7->y;
          fVar1 = pVVar7->z;
          (this->fields).defaultScale.x = pVVar7->x;
          (this->fields).defaultScale.y = fVar8;
          (this->fields).defaultScale.z = fVar1;
          (*(code *)(this->klass->vtable).Scale.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_OnDeactivated
               (SizeModifier *this,Avatar *target,MethodInfo *method)

{
  (this->fields)._.owner = target;
  (this->fields).isDeactivating = 1;
  func_?(&(this->fields)._.owner,target);
  pAVar1 = (this->fields)._.owner;
  if (((pAVar1 != (Avatar *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0))
     && (this_00 = (pMVar2->fields).body, this_00 != (MVBody *)0x0)) {
    pAVar3 = MVBody::MVBody_get_BlobShadow(this_00,(MethodInfo *)0x0);
    if ((pAVar3 != (AvatarBlobShadowController *)0x0) &&
       (this_01 = (pAVar3->fields).blobProjector, this_01 != (Projector *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Projector::Projector_set_orthographicSize
                (this_01,1.0,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).UnScale.method)(this,(this->klass->vtable).Scale.methodPtr);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetTimeStamp() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_ResetTimeStamp
               (SizeModifier *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pAVar2 = (this->fields)._.owner;
  (this->fields)._.timeStamp = fVar1;
  if (pAVar2 != (Avatar *)0x0) {
    uVar3 = (this->fields).defaultScale.x;
    uVar4 = (this->fields).defaultScale.y;
    pMVar5 = (pAVar2->fields).mvAvatar;
    fVar1 = (this->fields).sizeModifier;
    uStack_6 = CONCAT44((float)uVar4 * fVar1,(float)uVar3 * fVar1);
    if (pMVar5 != (MVAvatar *)0x0) {
      (*(code *)(pMVar5->klass->vtable).set_Scale.method)
                (pMVar5,uStack_6,(this->fields).defaultScale.z * fVar1,
                 (pMVar5->klass->vtable).get_WorldPosition.methodPtr);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Unstablize() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_Unstablize
               (SizeModifier *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields)._.timeStamp;
  pfVar2 = &(this->fields).sizeUnstableAfterSeconds;
  if (fVar1 < *pfVar2 || fVar1 == *pfVar2) {
    return;
  }
  fVar3 = (this->fields).unstableSpeed;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  pAVar5 = (this->fields)._.owner;
  (this->fields).unstableSpeed = fVar4;
  if (pAVar5 != (Avatar *)0x0) {
    uVar6 = (this->fields).defaultScale.x;
    uVar7 = (this->fields).defaultScale.y;
    fVar8 = (this->fields).defaultScale.z;
    pMVar9 = (pAVar5->fields).mvAvatar;
    fVar3 = (this->fields).sizeModifier;
    uVar10 = (this->fields).defaultScale.x;
    uVar11 = (this->fields).defaultScale.y;
    fVar12 = (float)uVar10 * _UNK_?;
    fVar13 = (float)uVar11 * _UNK_?;
    fVar14 = fVar8 * _UNK_?;
    dVar15 = (double)((fVar1 - (this->fields).sizeUnstableAfterSeconds) * fVar4);
    func_?();
    fVar1 = _UNK_? - (float)dVar15;
    uStack_16 = CONCAT44(fVar1 * fVar13 + (float)uVar7 * fVar3,
                         (float)uVar6 * fVar3 + fVar1 * fVar12);
    if (pMVar9 != (MVAvatar *)0x0) {
      (*(code *)(pMVar9->klass->vtable).set_Scale.method)
                (pMVar9,uStack_16,fVar1 * fVar14 + fVar8 * fVar3,
                 (pMVar9->klass->vtable).get_WorldPosition.methodPtr);
      return;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* SizeModifier() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier__ctor(SizeModifier *this,MethodInfo *method)

{
  (this->fields).timeToSize = 1.5;
  (this->fields).sizeModifier = 1.0;
  (this->fields).sizeUnstableAfterSeconds = 28.0;
  (this->fields).unstableSpeed = 10.0;
  (this->fields).sineStrength = 14.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->fields).defaultScale.x = (pVVar1->oneVector).x;
  (this->fields).defaultScale.y = fVar2;
  (this->fields).defaultScale.z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

