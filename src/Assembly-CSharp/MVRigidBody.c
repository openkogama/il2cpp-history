
/* Void AddImpulse(MVPlayer, Vector3, Boolean) */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody_AddImpulse
               (MVRigidBody *this,MVPlayer *shooter,Vector3 *impulse,bool suspendImpactDamage,
               MethodInfo *method)

{
  if (shooter != (MVPlayer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
        (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
       (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
       pMVar4 == (MVLocalPlayer *)0x0)) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = MVPlayer::MVPlayer_IsOnSameTeam((MVPlayer *)pMVar4,shooter,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 == (MVNetworkGame *)0x0) ||
          (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
         (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
         pMVar4 == (MVLocalPlayer *)0x0)) goto code_?;
      if ((pMVar4->fields)._._ActorNr_k__BackingField != (shooter->fields)._ActorNr_k__BackingField)
      {
        return;
      }
    }
  }
  VStack_7.x = impulse->x;
  VStack_7.y = impulse->y;
  VStack_7.z = impulse->z;
  MVRigidBody_AddImpulse_1(this,&VStack_7,suspendImpactDamage,(MethodInfo *)0x0);
  return;
}


/* Void AddImpulse(Vector3, Boolean) */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody_AddImpulse_1
               (MVRigidBody *this,Vector3 *impulse,bool suspendImpactDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (MVRigidBody *)0x0) {
    pvVar1 = (this->fields)._._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    pMVar5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    if (cVar4 == '\0') {
      return;
    }
    this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)(this->fields).impulseVectors;
    if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
      piVar6 = &(this_00->fields)._version;
      *piVar6 = *piVar6 + 1;
      pPVar7 = (this_00->fields)._items;
      if (pPVar7 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
        uVar8 = (this_00->fields)._size;
        if (uVar8 < (uint)pPVar7->max_length) {
          (this_00->fields)._size = uVar8 + 1;
          if ((uint)pPVar7->max_length <= uVar8) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar9 = impulse->y;
          fVar10 = impulse->z;
          pPVar7->vector[(int)uVar8].Quadrant = (int32_t)impulse->x;
          pPVar7->vector[(int)uVar8].FirstAxisSign = (int32_t)fVar9;
          pPVar7->vector[(int)uVar8].SecondAxisSign = (int32_t)fVar10;
        }
        else {
          PStack_11.SecondAxisSign = (int32_t)impulse->z;
          PStack_11.Quadrant = (int32_t)impulse->x;
          PStack_11.FirstAxisSign = (int32_t)impulse->y;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    (this_00,&PStack_11,pMVar5->klass->rgctx_data[0xe].method);
        }
        if (suspendImpactDamage == 0) {
          return;
        }
        (*(this->klass->vtable).__unknown_4.methodPtr)
                  (this,(this->klass->vtable).__unknown_4.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 AdjustGroundVelocityToNormal(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                    (Vector3 *__return_storage_ptr__,Vector3 *hVelocity,Vector3 *groundNormal,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = hVelocity->x;
  uVar2 = hVelocity->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->upVector).x;
  uVar5 = (pVVar3->upVector).y;
  fVar6 = (float)uVar1 * (pVVar3->upVector).z - hVelocity->z * (float)uVar4;
  fVar7 = hVelocity->z * (float)uVar5 - (float)uVar2 * (pVVar3->upVector).z;
  fVar8 = (float)uVar2 * (float)uVar4 - (float)uVar1 * (float)uVar5;
  uStack_9._0_4_ = groundNormal->x;
  uStack_9._4_4_ = groundNormal->y;
  fVar10 = fVar6 * groundNormal->z - fVar8 * (float)uStack_9._4_4_;
  fVar11 = fVar8 * (float)(undefined4)uStack_9 - fVar7 * groundNormal->z;
  fVar6 = fVar7 * (float)uStack_9._4_4_ - fVar6 * (float)(undefined4)uStack_9;
  uStack_12 = CONCAT44(fVar11,fVar10);
  fStack_13 = fVar6;
  fVar8 = (float)FUN_?(&uStack_12);
  if (_UNK_? < fVar8) {
    fVar6 = fVar6 / fVar8;
    uStack_12 = CONCAT44(fVar11 / fVar8,fVar10 / fVar8);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_12._0_4_ = (pVVar3->zeroVector).x;
    uStack_12._4_4_ = (pVVar3->zeroVector).y;
    fVar6 = (pVVar3->zeroVector).z;
  }
  fVar8 = (float)FUN_?(hVelocity);
  __return_storage_ptr__->x = (float)uStack_12 * fVar8;
  __return_storage_ptr__->y = uStack_12._4_4_ * fVar8;
  __return_storage_ptr__->z = fVar6 * fVar8;
  return __return_storage_ptr__;
}


/* Vector3 ApplyGravity(Vector3, Vector3, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_ApplyGravity
                    (Vector3 *__return_storage_ptr__,MVRigidBody *this,Vector3 *velocity,
                    Vector3 *velocityPrevFrame,MVInteractableBase *interactableLocal,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = velocityPrevFrame->y;
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = TypeInfo__MVPhysics->static_fields;
  uVar3._0_4_ = (pMVar2->gravity).currentCryptoKey;
  uVar3._4_4_ = (pMVar2->gravity).hiddenValue;
  pBVar4 = (pMVar2->gravity).hiddenValueOld;
  uVar5._0_4_ = (pMVar2->gravity).fakeValue;
  uVar5._4_1_ = (pMVar2->gravity).inited;
  uVar5._5_3_ = *(undefined3 *)&(pMVar2->gravity).field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_6[0]._0_8_ = uVar3;
  aOStack_6[0].hiddenValueOld = pBVar4;
  aOStack_6[0]._16_8_ = uVar5;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
  if (interactableLocal == (MVInteractableBase *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    pVVar9 = (Vector3 *)(*pcVar8)();
    return pVVar9;
  }
  fVar10 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                           (interactableLocal,0,(this->fields).density,
                            (interactableLocal->klass->vtable).__unknown_8.method);
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar8 = (code *)swi(3);
    pVVar9 = (Vector3 *)(*pcVar8)();
    return pVVar9;
  }
  pcRam_? = pcVar8;
  fVar11 = (float)(*pcRam_?)();
  fVar1 = fVar1 - fVar11 * fVar10 * fVar7;
  uVar12 = velocity->x;
  __return_storage_ptr__->x = (float)uVar12;
  __return_storage_ptr__->y = fVar1;
  velocity->x = (float)uVar12;
  velocity->y = fVar1;
  __return_storage_ptr__->z = velocity->z;
  return __return_storage_ptr__;
}


/* Vector3 GetImpulse(Vector3, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_GetImpulse
                    (Vector3 *__return_storage_ptr__,MVRigidBody *this,Vector3 *velocity,
                    MVInteractableBase *interactableLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                  ,this,velocity,interactableLocal,interactableLocal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).impulseVectors;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      fVar2 = velocity->y;
      __return_storage_ptr__->x = velocity->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = velocity->z;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_4._0_4_ = (pVVar3->zeroVector).x;
    uStack_4._4_4_ = (pVVar3->zeroVector).y;
    fStack_5 = (pVVar3->zeroVector).z;
    pLVar1 = (this->fields).impulseVectors;
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      iStack_12 = (pLVar1->fields)._version;
      uStack_13 = 0;
      uStack_14 = 0;
      uStack_7._0_4_ = SUB84(pLVar1,0);
      uStack_7._4_4_ = (undefined4)((ulonglong)pLVar1 >> 0x20);
      uStack_15 = (undefined4)uStack_7;
      uStack_16 = uStack_7._4_4_;
      uStack_17 = 0;
      fStack_18 = 0.0;
      fStack_19 = 0.0;
      fStack_20 = 0.0;
      uStack_21 = 0;
      uStack_7 = 0;
      puStack_22 = &uStack_15;
      while( true ) {
        cVar23 = FUN_?(&uStack_15,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                              );
        if (cVar23 == '\0') break;
        fStack_5 = fStack_20 + fStack_5;
        uStack_4 = CONCAT44(fStack_19 + uStack_4._4_4_,fStack_18 + (float)uStack_4);
      }
      if (interactableLocal != (MVInteractableBase *)0x0) {
        fVar2 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                                  (interactableLocal,1,(this->fields).weight,
                                   (interactableLocal->klass->vtable).__unknown_8.method);
        fVar2 = _UNK_? / fVar2;
        pLVar1 = (this->fields).impulseVectors;
        if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
          piVar24 = &(pLVar1->fields)._version;
          *piVar24 = *piVar24 + 1;
          (pLVar1->fields)._size = 0;
          uVar25 = velocity->x;
          uVar26 = velocity->y;
          fVar27 = velocity->z;
          __return_storage_ptr__->x = fVar2 * (float)uStack_4 + (float)uVar25;
          __return_storage_ptr__->y = fVar2 * uStack_4._4_4_ + (float)uVar26;
          __return_storage_ptr__->z = fVar2 * fStack_5 + fVar27;
          return __return_storage_ptr__;
        }
      }
    }
  }
  FUN_?();
  pcVar28 = (code *)swi(3);
  pVVar29 = (Vector3 *)(*pcVar28)();
  return pVVar29;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody_Reset(MVRigidBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).impulseVectors;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 VelocityDamping(Vector3, Single, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_VelocityDamping
                    (Vector3 *__return_storage_ptr__,Vector3 *velocity,float defaultDampning,
                    MVInteractableBase *interactableLocal,MethodInfo *method)

{
  if (interactableLocal == (MVInteractableBase *)0x0) {
    FUN_?(__return_storage_ptr__,velocity,CONCAT44(in_XMM2_Db,defaultDampning));
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  fVar3 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                            (interactableLocal,4,(ulonglong)_UNK_?,
                             (interactableLocal->klass->vtable).__unknown_8.method);
  uVar4 = velocity->x;
  uVar5 = velocity->y;
  fVar6 = velocity->z;
  fVar7 = velocity->z;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  fVar9 = (float)(*pcRam_?)();
  fVar9 = fVar9 / _UNK_?;
  uVar10 = velocity->x;
  fVar11 = velocity->y;
  fVar12 = velocity->z;
  __return_storage_ptr__->x = (float)uVar10 - fVar9 * ((float)uVar4 - (float)uVar4 * fVar3);
  __return_storage_ptr__->y = fVar11 - fVar9 * ((float)uVar5 - (float)uVar5 * fVar3);
  __return_storage_ptr__->z = fVar12 - fVar9 * (fVar6 - fVar7 * fVar3);
  return __return_storage_ptr__;
}


/* MVRigidBody() */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody__ctor(MVRigidBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroundState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVGroundState *)FUN_?(TypeInfo__MVGroundState);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
  bVar3 = iRam_? != 0;
  (pMVar1->fields).groundMaterial = pMVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pMVar1->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_8 = (ulonglong)uVar4 << 0x20;
  uVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  bVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uStack_11._0_2_ = (ushort)(bVar10 != 0) << 8;
  uStack_11 = (uint)CONCAT12(1,(short)uStack_11);
  bVar3 = cRam_? == '\0';
  (pMVar1->fields).grounded.currentCryptoKey = uVar9;
  *(undefined3 *)&(pMVar1->fields).grounded.field_0x1 = lStack_8._1_3_;
  (pMVar1->fields).grounded.hiddenValue = lStack_8._4_4_;
  (pMVar1->fields).grounded.fakeValue = (undefined1)uStack_11;
  (pMVar1->fields).grounded.fakeValueChanged = uStack_11._1_1_;
  (pMVar1->fields).grounded.inited = uStack_11._2_1_;
  (pMVar1->fields).grounded.field_0xb = uStack_11._3_1_;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = iRam_? != 0;
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar13 = (pVVar12->zeroVector).y;
  fVar14 = (pVVar12->zeroVector).z;
  (pMVar1->fields).groundNormal.x = (pVVar12->zeroVector).x;
  (pMVar1->fields).groundNormal.y = fVar13;
  (pMVar1->fields).groundNormal.z = fVar14;
  (this->fields).groundState = pMVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).groundState >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  (this->fields).weight = 1.0;
  (this->fields).density = 1.0;
  (this->fields).isPlayerControlled = 1;
  pLVar15 = (List_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(pLVar15,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
               );
  bVar3 = iRam_? != 0;
  (this->fields).impulseVectors = pLVar15;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).impulseVectors >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = cRam_? == '\0';
  (this->fields)._.findWorldObjectParent = 1;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

