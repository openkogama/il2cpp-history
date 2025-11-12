
/* Void SetScaleFadeDistance(Single) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::
     AvatarCameraDistTransparency_SetScaleFadeDistance
               (AvatarCameraDistTransparency *this,float scale,MethodInfo *method)

{
  uVar1 = (this->fields).camMoveTowardsOffset.x;
  fVar2 = (this->fields).camMoveTowardsOffset.y;
  (this->fields).fadeStartDistance = scale * (this->fields).fadeStartBase;
  fVar3 = (this->fields).camMoveTowardsOffset.z;
  (this->fields).fadeEndDistance = scale * (this->fields).fadeEndBase;
  (this->fields).camMoveTowardsOffset.x = (float)uVar1 * scale;
  (this->fields).camMoveTowardsOffset.y = fVar2 * scale;
  (this->fields).camMoveTowardsOffset.z = fVar3 * scale;
  return;
}


/* Void Update(MVAvatarLocal) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
               (AvatarCameraDistTransparency *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper, pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar3 = (pSVar2->fields).spawnRoleType;
    if ((pSVar3 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
       (pSVar4 = (pSVar3->fields).subscribableVariable,
       pSVar4 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
      if (((pSVar4->fields)._.value & 4) != 0) {
        return;
      }
      if (((avatarLocal != (MVAvatarLocal *)0x0) &&
          (pMVar5 = (avatarLocal->fields)._.body, pMVar5 != (MVBody *)0x0)) &&
         (pTVar6 = (pMVar5->fields)._._._.transform, pTVar6 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = 0;
        fStack_8 = 0.0;
        if ((pTVar6->fields)._._.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)();
        uVar11 = (this->fields).camMoveTowardsOffset.x;
        uVar12 = (this->fields).camMoveTowardsOffset.y;
        fVar13 = (float)uStack_7 + (float)uVar11;
        fVar14 = fStack_8 + (this->fields).camMoveTowardsOffset.z;
        fVar15 = uStack_7._4_4_ + (float)uVar12;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if ((this_01 != (MainCameraManager *)0x0) &&
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_01,(MethodInfo *)0x0),
           pTVar6 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_7 = 0;
          fStack_8 = 0.0;
          pvVar16 = (pTVar6->fields)._._.m_CachedPtr;
          if (pvVar16 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(pvVar16,&uStack_7);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          fVar13 = fVar13 - (float)uStack_7;
          fVar15 = fVar15 - uStack_7._4_4_;
          fVar14 = fVar14 - fStack_8;
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          dVar17 = (double)(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
          if (dVar17 < 0.0) {
            dVar17 = (double)FUN_?();
          }
          else {
            auVar18._8_8_ = 0;
            auVar18._0_8_ = dVar17;
            auVar18 = sqrtpd(ZEXT816(0),auVar18);
            dVar17 = auVar18._0_8_;
          }
          fVar15 = (float)dVar17;
          if ((float)((uint)(fVar15 - (this->fields).prevDist) & _UNK_?) <= _UNK_?)
          {
            return;
          }
          (this->fields).prevDist = fVar15;
          fVar15 = (fVar15 - (this->fields).fadeEndDistance) /
                   ((this->fields).fadeStartDistance - (this->fields).fadeEndDistance);
          if (fVar15 < 0.0) {
            fVar15 = 0.0;
          }
          else if (_UNK_? < fVar15) {
            fVar15 = _UNK_?;
          }
          if ((avatarLocal->fields)._.isHidden != 0) {
            return;
          }
          pAVar19 = (avatarLocal->fields)._.avatar;
          if ((pAVar19 != (Avatar *)0x0) &&
             (this_00 = (pAVar19->fields).avatarFader, this_00 != (AvatarFader *)0x0)) {
            AvatarFader::AvatarFader_SetTransparency(this_00,fVar15,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* AvatarCameraDistTransparency(Vector3, Single, Single) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
               (AvatarCameraDistTransparency *this,Vector3 *camMoveTowardsOffset,
               float fadeStartDistance,float fadeEndDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = camMoveTowardsOffset->y;
  fVar2 = camMoveTowardsOffset->z;
  (this->fields).camMoveTowardsOffset.x = camMoveTowardsOffset->x;
  (this->fields).camMoveTowardsOffset.y = fVar1;
  (this->fields).fadeStartDistance = fadeStartDistance;
  (this->fields).fadeEndDistance = fadeEndDistance;
  (this->fields).camMoveTowardsOffset.z = fVar2;
  (this->fields).fadeStartBase = 4.0;
  (this->fields).fadeEndBase = 2.0;
  (this->fields).prevDist = -1.0;
  return;
}

