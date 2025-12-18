
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Awake
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GUICellCursor_MethodInfo__UnityEngine__Object__Instantiate<GUICellCursor>_GUICellCursor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).ResetAmmo.methodPtr)(this,(this->klass->vtable).ResetAmmo.method);
  pGVar1 = (this->fields).primaryCursor;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GUICellCursor *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      GUICellCursor_MethodInfo__UnityEngine__Object__Instantiate<GUICellCursor>_GUICellCursor_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).primaryCursor = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).primaryCursor >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar1 = (GUICellCursor *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)(this->fields).secondaryCursor,
                      GUICellCursor_MethodInfo__UnityEngine__Object__Instantiate<GUICellCursor>_GUICellCursor_
                     );
  (this->fields).secondaryCursor = pGVar1;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).secondaryCursor >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar7 = iRam_?;
  pGVar1 = (this->fields).primaryCursor;
  if (pGVar1 != (GUICellCursor *)0x0) {
    (pGVar1->fields).fader = (GUICellCursor_Fader *)0x0;
    if (iVar7 != 0) {
      uVar3 = (uint)((ulonglong)&(pGVar1->fields).fader >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar1,0.0,(MethodInfo *)0x0);
    (pGVar1->fields).fadeState = 0;
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      bVar2 = iRam_? != 0;
      (pGVar1->fields).fader = (GUICellCursor_Fader *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pGVar1->fields).fader >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar1,0.0,(MethodInfo *)0x0);
      (pGVar1->fields).fadeState = 0;
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean CanInsertCubeAtCubePos(IntVector) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_CanInsertCubeAtCubePos
               (PickupItemCubeGun *this,IntVector *cubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
     (pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_01,
                          MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                         ), pOVar1 != (Object *)0x0)) {
    this_00 = (GameObject *)pOVar1[0xc].monitor;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (this_00 != (GameObject *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0);
      uVar2._0_2_ = cubePos->x;
      uVar2._2_2_ = cubePos->y;
      uStack_3 = CONCAT44(uStack_3._4_4_,uVar2);
      if (obj != (Transform *)0x0) {
        uStack_4 = CONCAT44((float)(int)(short)uVar2._2_2_,(float)(int)(short)(undefined2)uVar2);
        fStack_5 = (float)(int)cubePos->z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_3 = 0;
        fStack_6 = 0.0;
        pvVar7 = (obj->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7,&uStack_4,&uStack_3);
        pMVar11 = (this->fields)._._.owner;
        if (pMVar11 != (MVPickupOwner *)0x0) {
          uVar12 = (pMVar11->fields).lookOrigin.x;
          uVar13 = (pMVar11->fields).lookOrigin.y;
          fStack_5 = fStack_6 - (pMVar11->fields).lookOrigin.z;
          uStack_4 = CONCAT44(uStack_3._4_4_ - (float)uVar13,(float)uStack_3 - (float)uVar12);
          fVar14 = (float)FUN_?(&uStack_4);
          return (this->fields).minDistanceToCubeFire <= fVar14;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void DoAutoFire() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_DoAutoFire
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  bVar4 = (this->fields).fireSecondary;
  fVar5 = (this->fields).prevFireTime;
  aOStack_6[0].currentCryptoKey = (this->fields).fireIntervalSecondary.currentCryptoKey;
  aOStack_6[0].hiddenValue = (this->fields).fireIntervalSecondary.hiddenValue;
  aOStack_6[0].hiddenValueOld = (this->fields).fireIntervalSecondary.hiddenValueOld;
  aOStack_6[0].fakeValue = (this->fields).fireIntervalSecondary.fakeValue;
  aOStack_6[0].inited = (this->fields).fireIntervalSecondary.inited;
  aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
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
  bVar8 = fVar7 < fVar3 - fVar5;
  (this->fields).fireSecondary = bVar8;
  (this->fields).fireMain = !bVar8;
  if ((bVar8) && (bVar4 == 0)) {
    this_00 = (this->fields).chargeObject;
    if ((this_00 == (Transform *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
    {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean DoLineOfFireCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_DoLineOfFireCheck
               (PickupItemCubeGun *this,VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uVar2._0_4_ = (pMVar1->fields).lookOrigin.x;
    uVar2._4_4_ = (pMVar1->fields).lookOrigin.y;
    fVar3 = (pMVar1->fields).lookOrigin.z;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        (&VStack_5,&(((this->fields)._._.owner)->fields).lookDirection,method);
    aRStack_6[0].m_Origin.z = fVar3;
    uStack_7._0_4_ = pVVar4->x;
    uStack_7._4_4_ = pVVar4->y;
    fVar3 = pVVar4->z;
    fStack_8 = fVar3;
    uStack_9 = uStack_7;
    aRStack_6[0].m_Origin._0_8_ = uVar2;
    fVar10 = (float)FUN_?(&uStack_7);
    if (_UNK_? < fVar10) {
      fVar11 = (float)uStack_9 / fVar10;
      fVar12 = uStack_9._4_4_ / fVar10;
      fVar3 = fVar3 / fVar10;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar11 = (pVVar13->zeroVector).x;
      fVar12 = (pVVar13->zeroVector).y;
      fVar3 = (pVVar13->zeroVector).z;
    }
    uStack_7 = CONCAT44(fVar12,fVar11);
    aRStack_6[0].m_Direction.x = fVar11;
    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Default,(MethodInfo *)0x0);
    fVar10 = (this->fields).range;
    this_00 = (HashSet_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields)._._.owner;
    if (((pMVar1 != (MVPickupOwner *)0x0) &&
        (pMVar15 = (pMVar1->fields)._.worldObjectParent, pMVar15 != (MVWorldObjectClient *)0x0)) &&
       (this_00 != (HashSet_1_System_Int32_ *)0x0)) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__AddIfNotPresent
                (this_00,(pMVar15->fields)._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
                 [0x15].method);
      aRStack_6[0].m_Direction.z = fVar3;
      aRStack_6[0].m_Direction.y = uStack_7._4_4_;
      bVar16 = CollisionDetection::CollisionDetection_MVHit_1
                        (aRStack_6,hit,fVar10,this_00,1 << ((byte)iVar14 & 0x1f),(MethodInfo *)0x0);
      return bVar16;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  bVar16 = (*pcVar17)();
  return bVar16;
}


/* Void Execute() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Execute
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  uStack_3 = (undefined *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
  fVar4 = (float)(*pcRam_?)();
  fVar5 = (this->fields).prevFireTime;
  aOStack_6[0].currentCryptoKey = (this->fields)._.fireInterval.currentCryptoKey;
  aOStack_6[0].hiddenValue = (this->fields)._.fireInterval.hiddenValue;
  aOStack_6[0].hiddenValueOld = (this->fields)._.fireInterval.hiddenValueOld;
  aOStack_6[0].fakeValue = (this->fields)._.fireInterval.fakeValue;
  aOStack_6[0].inited = (this->fields)._.fireInterval.inited;
  aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
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
  if (fVar4 - fVar5 <= fVar7) {
    (this->fields).waitingToFire = 1;
  }
  else {
    if ((this->fields).fireMain != 0) {
      pMVar8 = (this->fields)._._.owner;
      if (pMVar8 == (MVPickupOwner *)0x0) goto code_?;
      (*(this->klass->vtable).OnFire.methodPtr)
                (this,(ulonglong)(pMVar8->fields)._IsLocal_k__BackingField);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar5 = (float)(*pcRam_?)();
      (this->fields).prevFireTime = fVar5;
    }
    if ((this->fields).fireSecondary != 0) {
      pMVar8 = (this->fields)._._.owner;
      if (pMVar8 != (MVPickupOwner *)0x0) {
        PickupItemCubeGun_OnFireSecondary
                  (this,(pMVar8->fields)._IsLocal_k__BackingField,(MethodInfo *)0x0);
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        fVar5 = (float)(*pcRam_?)();
        this_00 = (this->fields).chargeObject;
        (this->fields).prevFireTime = fVar5;
        if ((this_00 != (Transform *)0x0) &&
           (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,0,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (GameObject *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pvVar9 = (obj->fields)._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            pcVar1 = (code *)FUN_?(&UNK_?);
            if (pcVar1 == (code *)0x0) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar9,0);
          return;
        }
      }
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


/* IntVector GetCubePos(VoxelHit) */

IntVector *
Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_GetCubePos
          (IntVector *__return_storage_ptr__,VoxelHit *voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.point.x = (voxelHit->point).x;
  VStack_1.point.y = (voxelHit->point).y;
  VStack_1._8_8_ = *(undefined8 *)&(voxelHit->point).z;
  VStack_1.normal.y = (voxelHit->normal).y;
  VStack_1.normal.z = (voxelHit->normal).z;
  VStack_1.cubePos = voxelHit->cubePos;
  VStack_1._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
  __return_storage_ptr__->x = 0;
  __return_storage_ptr__->y = 0;
  VStack_1.face = voxelHit->face;
  VStack_1.isCubeHit = voxelHit->isCubeHit;
  VStack_1._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
  VStack_1.woId = voxelHit->woId;
  VStack_1._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
  __return_storage_ptr__->z = 0;
  VStack_1.cube = voxelHit->cube;
  VStack_1.distance = voxelHit->distance;
  VStack_1._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
  VStack_1.collider = voxelHit->collider;
  VStack_1.transform = voxelHit->transform;
  VStack_1.interactionFlags = voxelHit->interactionFlags;
  bVar2 = PickupItemCubeGun_GetCubePosFromFineGrainedTerrain
                    (&VStack_1,_UNK_?,__return_storage_ptr__,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return __return_storage_ptr__;
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this != (MVWorldObjectClientManager *)0x0) &&
     (pOVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this,
                          MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                         ), pOVar3 != (Object *)0x0)) {
    fVar4 = (voxelHit->point).x;
    fVar5 = (voxelHit->point).y;
    fVar6 = (voxelHit->point).z;
    gameObject = (GameObject *)pOVar3[0xc].monitor;
    fVar7 = (voxelHit->normal).x * _UNK_?;
    fVar8 = (voxelHit->normal).y * _UNK_?;
    fVar9 = (voxelHit->normal).z * _UNK_?;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_10.y = fVar8 + fVar5;
    VStack_10.x = fVar7 + fVar4;
    VStack_10.z = fVar9 + fVar6;
    pIVar11 = SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
                       (&IStackX_8,gameObject,&VStack_10,0,(MethodInfo *)0x0);
    iVar12 = pIVar11->y;
    iVar13 = pIVar11->z;
    __return_storage_ptr__->x = pIVar11->x;
    __return_storage_ptr__->y = iVar12;
    __return_storage_ptr__->z = iVar13;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pIVar11 = (IntVector *)(*pcVar14)();
  return pIVar11;
}


/* Boolean GetCubePosFromFineGrainedTerrain(VoxelHit, Single, IntVector ByRef) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_GetCubePosFromFineGrainedTerrain
               (VoxelHit *voxelHit,float maxDistanceToEdge,IntVector *pos,MethodInfo *method)

{
  lineEnd = (Vector3 *)pos;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__Edge);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Edge);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__Face);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Face);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aIStack_1[0]._0_4_ = 0.0;
  pIStack_2 = (IEnumerator *)0x0;
  lStack_3 = 0;
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  VStack_4.point.x = (voxelHit->point).x;
  VStack_4.point.y = (voxelHit->point).y;
  VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
  VStack_4.normal.y = (voxelHit->normal).y;
  VStack_4.normal.z = (voxelHit->normal).z;
  VStack_4.cubePos = voxelHit->cubePos;
  VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
  VStack_4.cube = voxelHit->cube;
  VStack_4.distance = voxelHit->distance;
  VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
  VStack_4.collider = voxelHit->collider;
  VStack_4.transform = voxelHit->transform;
  VStack_4.interactionFlags = voxelHit->interactionFlags;
  if (this != (MVWorldObjectClientManager *)0x0) {
    wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                   (this,voxelHit->woId,(MethodInfo *)0x0);
    if (wo == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    bVar5 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar5) ||
       (bVar6 = true,
       (MVCubeModelFineGrainedTerrain__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1]
       != TypeInfo__MVCubeModelFineGrainedTerrain)) {
      bVar6 = false;
    }
    pMVar7 = (MVWorldObjectClient *)0x0;
    if (bVar6) {
      pMVar7 = wo;
    }
    if (pMVar7 == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    gameObject = (wo->fields).gameObject;
    pCVar8 = voxelHit->cube;
    uVar9._0_4_ = voxelHit->distance;
    uVar9._4_4_ = *(undefined4 *)&voxelHit->field_0x3c;
    FVar10 = voxelHit->face;
    uVar11._0_4_ = voxelHit->face;
    uVar11._4_1_ = voxelHit->isCubeHit;
    uVar11._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
    uVar12._0_4_ = voxelHit->face;
    uVar12._4_1_ = voxelHit->isCubeHit;
    uVar12._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
    VStack_4.face = voxelHit->face;
    VStack_4.isCubeHit = voxelHit->isCubeHit;
    VStack_4._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
    uVar13._0_4_ = voxelHit->woId;
    uVar13._4_4_ = *(undefined4 *)&voxelHit->field_0x2c;
    uVar14._0_4_ = voxelHit->woId;
    uVar14._4_4_ = *(undefined4 *)&voxelHit->field_0x2c;
    VStack_4.woId = voxelHit->woId;
    VStack_4._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
    VStack_4.collider = voxelHit->collider;
    VStack_4.transform = voxelHit->transform;
    uVar15._0_4_ = (voxelHit->point).x;
    uVar15._4_4_ = (voxelHit->point).y;
    VStack_4.point.x = (voxelHit->point).x;
    VStack_4.point.y = (voxelHit->point).y;
    pfVar16 = &(voxelHit->point).z;
    fVar17 = *pfVar16;
    VStack_4._8_8_ = *(undefined8 *)pfVar16;
    VStack_4.normal.y = (voxelHit->normal).y;
    VStack_4.normal.z = (voxelHit->normal).z;
    VStack_4.cubePos = voxelHit->cubePos;
    VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
    VStack_4.interactionFlags = voxelHit->interactionFlags;
    uVar18._0_4_ = (voxelHit->normal).y;
    uVar18._4_4_ = (voxelHit->normal).z;
    uVar19._0_4_ = (voxelHit->normal).y;
    uVar19._4_4_ = (voxelHit->normal).z;
    iVar20 = (voxelHit->cubePos).z;
    IVar21 = voxelHit->cubePos;
    uVar22._0_6_ = voxelHit->cubePos;
    uVar22._6_2_ = *(undefined2 *)&voxelHit->field_0x1e;
    uVar23._0_6_ = voxelHit->cubePos;
    uVar23._6_2_ = *(undefined2 *)&voxelHit->field_0x1e;
    VStack_4.cube = pCVar8;
    VStack_4._56_8_ = uVar9;
    pMStack_24 = wo;
    pMStack_25 = pMVar7;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVStack_26 = (Vector3__Array *)uVar15;
    fStack_27 = fVar17;
    VStack_28._0_6_ = IVar21;
    edge = Cube::Cube_GetEdge_1
                     (gameObject,pCVar8,FVar10,(Vector3 *)&pVStack_26,(IntVector *)&VStack_28,
                      (MethodInfo *)0x0);
    VStack_4.point.x = (voxelHit->point).x;
    VStack_4.point.y = (voxelHit->point).y;
    VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
    VStack_4.collider = voxelHit->collider;
    VStack_4.transform = voxelHit->transform;
    VStack_4.interactionFlags = voxelHit->interactionFlags;
    VStack_28.y._0_2_ = iVar20;
    VStack_28.x = (float)(int)*(undefined8 *)&voxelHit->cubePos;
    lineEnd = (Vector3 *)(ulonglong)(uint)voxelHit->face;
    VStack_4.normal._4_8_ = uVar19;
    VStack_4._24_8_ = uVar23;
    VStack_4._32_8_ = uVar12;
    VStack_4._40_8_ = uVar14;
    VStack_4.cube = pCVar8;
    VStack_4._56_8_ = uVar9;
    edgeVerticesCubeHit =
         Cube::Cube_GetEdgeVerticesWorld
                   ((wo->fields).gameObject,voxelHit->cube,voxelHit->face,edge,
                    (IntVector *)&VStack_28,(MethodInfo *)0x0);
    uVar29._0_4_ = (voxelHit->point).x;
    uVar29._4_4_ = (voxelHit->point).y;
    VStack_4.collider = voxelHit->collider;
    VStack_4.transform = voxelHit->transform;
    VStack_4.interactionFlags = voxelHit->interactionFlags;
    VStack_4.normal._4_8_ = uVar18;
    VStack_4._24_8_ = uVar22;
    VStack_4._32_8_ = uVar11;
    VStack_4._40_8_ = uVar13;
    VStack_4.cube = pCVar8;
    VStack_4._56_8_ = uVar9;
    pVStack_26 = edgeVerticesCubeHit;
    if (edgeVerticesCubeHit != (Vector3__Array *)0x0) {
      if (((int)edgeVerticesCubeHit->max_length == 0) || ((uint)edgeVerticesCubeHit->max_length < 2)
         ) {
        FUN_?();
        pcVar30 = (code *)swi(3);
        bVar31 = (*pcVar30)();
        return bVar31;
      }
      VStack_32.x = 0.0;
      VStack_32.y = 0.0;
      VStack_32.z = 0.0;
      VStack_28.x = edgeVerticesCubeHit->vector[1].x;
      VStack_28.y = edgeVerticesCubeHit->vector[1].y;
      VStack_28.z = edgeVerticesCubeHit->vector[1].z;
      auStack_33._0_4_ = edgeVerticesCubeHit->vector[0].x;
      auStack_33._4_4_ = edgeVerticesCubeHit->vector[0].y;
      ppIStack_34 = (IEnumerator **)CONCAT44(ppIStack_34._4_4_,edgeVerticesCubeHit->vector[0].z);
      ppIStack_35 = (IEnumerator **)CONCAT44(ppIStack_35._4_4_,(voxelHit->point).z);
      lineEnd = &VStack_28;
      auStack_36 = (undefined1  [8])uVar29;
      bVar31 = MathFunctions::MathFunctions_DistancePointLine_1
                         ((Vector3 *)auStack_36,(Vector3 *)auStack_33,lineEnd,(float *)aIStack_1,
                          &VStack_32,(MethodInfo *)0x0);
      pIVar37 = TypeRef__MV__WorldObject__Face;
      if (bVar31 == 0) {
        return 0;
      }
      if (maxDistanceToEdge <= (float)aIStack_1[0]._0_4_) {
        return 0;
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar38 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar37,(MethodInfo *)0x0);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pTVar38 == (Type *)0x0) {
        uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
        pAVar39 = (ArgumentNullException *)func_?(uVar9);
        pSVar40 = (String *)func_?(&StringLiteral_enumType);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (pAVar39,pSVar40,(MethodInfo *)0x0);
        uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
        FUN_?(pAVar39,uVar9);
        pcVar30 = (code *)swi(3);
        bVar31 = (*pcVar30)();
        return bVar31;
      }
      pAVar41 = (Array *)(*(pTVar38->klass->vtable).GetEnumValues.methodPtr)(pTVar38);
      if (pAVar41 != (Array *)0x0) {
        pIStack_42 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar41,(MethodInfo *)0x0);
        auStack_36._0_4_ = 0.0;
        auStack_36._4_4_ = 0.0;
        ppIStack_35 = &pIStack_42;
        plStack_43 = &lStack_3;
        while (pIStack_42 != (IEnumerator *)0x0) {
          cVar44 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar44 == '\0') {
            lVar45 = FUN_?(*ppIStack_35,TypeInfo__System__IDisposable);
            *plStack_43 = lVar45;
            if (lVar45 == 0) {
              return 0;
            }
            FUN_?(0,TypeInfo__System__IDisposable,lVar45);
            return 0;
          }
          if (pIStack_42 == (IEnumerator *)0x0) goto code_?;
          plVar46 = (longlong *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
          pIVar37 = TypeRef__Edge;
          if (plVar46 == (longlong *)0x0) goto code_?;
          if (*(Il2CppClass **)(*plVar46 + 0x40) !=
              (TypeInfo__MV__WorldObject__Face->_0).element_class) goto code_?;
          FVar10 = *(Face__Enum *)(plVar46 + 2);
          VStack_4.point.x = (voxelHit->point).x;
          VStack_4.point.y = (voxelHit->point).y;
          VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
          VStack_4.normal.y = (voxelHit->normal).y;
          VStack_4.normal.z = (voxelHit->normal).z;
          VStack_4.cubePos = voxelHit->cubePos;
          VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
          VStack_4.cube = voxelHit->cube;
          VStack_4.distance = voxelHit->distance;
          VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
          VStack_4.collider = voxelHit->collider;
          VStack_4.transform = voxelHit->transform;
          VStack_4.interactionFlags = voxelHit->interactionFlags;
          if (FVar10 != voxelHit->face) {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            pTVar38 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar37,(MethodInfo *)0x0);
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            if (pTVar38 == (Type *)0x0) goto code_?;
            pAVar41 = (Array *)(*(pTVar38->klass->vtable).GetEnumValues.methodPtr)(pTVar38);
            if (pAVar41 == (Array *)0x0) goto code_?;
            pIStack_2 = mscorlib.dll::System::Array::Array_GetEnumerator
                                    (pAVar41,(MethodInfo *)0x0);
            auStack_33._0_4_ = 0.0;
            auStack_33._4_4_ = 0.0;
            ppIStack_34 = &pIStack_2;
            plStack_47 = &lStack_3;
            while( true ) {
              if (pIStack_2 == (IEnumerator *)0x0) goto code_?;
              cVar44 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
              if (cVar44 == '\0') break;
              if (pIStack_2 == (IEnumerator *)0x0) goto code_?;
              lineEnd = (Vector3 *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
              if (lineEnd == (Vector3 *)0x0) goto code_?;
              if (*(Il2CppClass **)(*(longlong *)lineEnd + 0x40) !=
                  (TypeInfo__Edge->_0).element_class) goto code_?;
              if (lineEnd[1].y != 0.0) {
                VStack_4.point.x = (voxelHit->point).x;
                VStack_4.point.y = (voxelHit->point).y;
                VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
                VStack_4.normal.y = (voxelHit->normal).y;
                VStack_4.normal.z = (voxelHit->normal).z;
                VStack_4.cubePos = voxelHit->cubePos;
                VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
                VStack_4.face = voxelHit->face;
                VStack_4.isCubeHit = voxelHit->isCubeHit;
                VStack_4._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
                VStack_4.woId = voxelHit->woId;
                VStack_4._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
                VStack_4.cube = voxelHit->cube;
                VStack_4.distance = voxelHit->distance;
                VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
                VStack_4.collider = voxelHit->collider;
                VStack_4.transform = voxelHit->transform;
                VStack_4.interactionFlags = voxelHit->interactionFlags;
                iVar48 = PickupItemCubeGun_GetEdgeVertexMatchCount
                                   (wo,&VStack_4,FVar10,(Edge__Enum)lineEnd[1].y,
                                    edgeVerticesCubeHit,(MethodInfo *)0x0);
                if (iVar48 == 2) {
                  VStack_4.point.x = (voxelHit->point).x;
                  VStack_4.point.y = (voxelHit->point).y;
                  VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
                  IVar21 = voxelHit->cubePos;
                  VStack_4.face = voxelHit->face;
                  VStack_4.isCubeHit = voxelHit->isCubeHit;
                  VStack_4._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
                  VStack_4.woId = voxelHit->woId;
                  VStack_4._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
                  VStack_4.cube = voxelHit->cube;
                  VStack_4.distance = voxelHit->distance;
                  VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
                  VStack_4.collider = voxelHit->collider;
                  VStack_4.transform = voxelHit->transform;
                  VStack_4.interactionFlags = voxelHit->interactionFlags;
                  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  VStack_28._0_6_ = IVar21;
                  lineEnd = (Vector3 *)(ulonglong)FVar10;
                  pIVar49 = Cube::Cube_GetCubePosAboveFace
                                      ((IntVector *)&VStack_32,(IntVector *)&VStack_28,FVar10,
                                       (MethodInfo *)0x0);
                  fVar17 = *(float *)pIVar49;
                  aIStack_1[0].z = pIVar49->z;
                  *(float *)pos = fVar17;
                  pos->z = aIStack_1[0].z;
                  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
                  if (pMVar7[1].klass != (MVWorldObjectClient__Class *)0x0) {
                    aIStack_1[0]._0_4_ = fVar17;
                    pCVar8 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                        ((RuntimePrototypeCubeModel *)pMVar7[1].klass,aIStack_1,
                                         (MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    FUN_?(&ppIStack_34);
                    FUN_?(&ppIStack_35);
                    return pCVar8 == (Cube *)0x0;
                  }
                  goto code_?;
                }
              }
            }
            FUN_?();
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(lineEnd);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar39 = (ArgumentNullException *)func_?(uVar9);
  pSVar40 = (String *)func_?(&StringLiteral_enumType);
  plVar46 = (longlong *)0x0;
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar39,pSVar40,(MethodInfo *)0x0);
  uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
  FUN_?(pAVar39,uVar9);
code_?:
  FUN_?(plVar46);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar30 = (code *)swi(3);
  bVar31 = (*pcVar30)();
  return bVar31;
}


/* Int32 GetEdgeVertexMatchCount(MVWorldObjectClient, VoxelHit, Face, Edge, Vector3[]) */

int32_t Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_GetEdgeVertexMatchCount
                  (MVWorldObjectClient *wo,VoxelHit *voxelHit,Face__Enum face,Edge__Enum edge,
                  Vector3__Array *edgeVerticesCubeHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    gameObject = (wo->fields).gameObject;
    cube = voxelHit->cube;
    fVar1 = *(float *)&voxelHit->cubePos;
    iVar2 = (voxelHit->cubePos).z;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar3 = 0;
    fStackX_8 = fVar1;
    iStackX_c = iVar2;
    pVVar4 = Cube::Cube_GetEdgeVerticesWorld
                       (gameObject,cube,face,edge,(IntVector *)&fStackX_8,(MethodInfo *)0x0);
    fVar1 = _UNK_?;
    if (pVVar4 != (Vector3__Array *)0x0) {
      pVVar5 = pVVar4->vector;
      uVar6 = uVar3;
      do {
        if ((int)pVVar4->max_length <= (int)uVar3) {
          return uVar6;
        }
        if ((uint)pVVar4->max_length <= uVar3) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          iVar8 = (*pcVar7)();
          return iVar8;
        }
        fVar9 = pVVar5->z;
        uVar10._0_4_ = pVVar5->x;
        uVar10._4_4_ = pVVar5->y;
        fStackX_8 = fVar9;
        if (edgeVerticesCubeHit == (Vector3__Array *)0x0) break;
        if ((int)edgeVerticesCubeHit->max_length == 0) goto code_?;
        uVar11 = edgeVerticesCubeHit->vector[0].x;
        uVar12 = edgeVerticesCubeHit->vector[0].y;
        fVar13 = edgeVerticesCubeHit->vector[0].z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Math);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar13 = fVar13 - fVar9;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        dVar14 = (double)(((float)uVar12 - (float)uVar10._4_4_) * ((float)uVar12 - (float)uVar10._4_4_)
                          + ((float)uVar11 - (float)(undefined4)uVar10) *
                            ((float)uVar11 - (float)(undefined4)uVar10) + fVar13 * fVar13);
        if (dVar14 < 0.0) {
          dVar14 = (double)FUN_?();
        }
        else {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = dVar14;
          auVar15 = sqrtpd(ZEXT816(0),auVar15);
          dVar14 = auVar15._0_8_;
        }
        uVar16 = uVar6 + 1;
        if (fVar1 <= (float)dVar14) {
          uVar16 = uVar6;
        }
        if ((uint)edgeVerticesCubeHit->max_length < 2) goto code_?;
        uStack_17._0_4_ = edgeVerticesCubeHit->vector[1].x;
        uStack_17._4_4_ = edgeVerticesCubeHit->vector[1].y;
        fStack_18 = fStackX_8;
        fStack_19 = edgeVerticesCubeHit->vector[1].z;
        uVar3 = uVar3 + 1;
        pVVar5 = pVVar5 + 1;
        uStack_20 = uVar10;
        fVar9 = (float)FUN_?(&uStack_17,&uStack_20);
        uVar6 = uVar16 + 1;
        if (fVar1 <= fVar9) {
          uVar6 = uVar16;
        }
      } while( true );
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Void HandleCursors() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_HandleCursors
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.interactionFlags = 0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  bVar2 = PickupItemCubeGun_DoLineOfFireCheck(this,&VStack_1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar3 = (this->fields).primaryCursor;
    if (pGVar3 != (GUICellCursor *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GUICellCursor__Fader);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      cVar4 = cRam_?;
      if ((pGVar3->fields).fadeState != 2) {
        fVar5 = (pGVar3->fields).currentAlpha;
        fVar6 = (pGVar3->fields).fadeOutTime;
        fVar7 = (pGVar3->fields).baseAlpha;
        pGVar8 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
        GUICellCursor+Fader::GUICellCursor_Fader__ctor
                  (pGVar8,(fVar5 / fVar7) * fVar6,fVar5,0.0,(MethodInfo *)0x0);
        (pGVar3->fields).fader = pGVar8;
        func_?(&(pGVar3->fields).fader);
        cVar4 = cRam_?;
        (pGVar3->fields).fadeState = 2;
      }
      pGVar3 = (this->fields).secondaryCursor;
      if (pGVar3 != (GUICellCursor *)0x0) {
        if (cVar4 == '\0') {
          FUN_?(&TypeInfo__GUICellCursor__Fader);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pGVar3->fields).fadeState == 2) {
          return;
        }
        fVar5 = (pGVar3->fields).currentAlpha;
        fVar6 = (pGVar3->fields).fadeOutTime;
        fVar7 = (pGVar3->fields).baseAlpha;
        pGVar8 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
        GUICellCursor+Fader::GUICellCursor_Fader__ctor
                  (pGVar8,(fVar5 / fVar7) * fVar6,fVar5,0.0,(MethodInfo *)0x0);
        (pGVar3->fields).fader = pGVar8;
        func_?(&(pGVar3->fields).fader);
        (pGVar3->fields).fadeState = 2;
        return;
      }
    }
    goto code_?;
  }
  if ((this->fields).fireSecondary == 0) {
    pGVar3 = (this->fields).secondaryCursor;
    if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    VStack_9.point.x = VStack_1.point.x;
    VStack_9.point.y = VStack_1.point.y;
    VStack_9.point.z = VStack_1.point.z;
    VStack_9.normal.x = VStack_1.normal.x;
    VStack_9.normal.y = VStack_1.normal.y;
    VStack_9.normal.z = VStack_1.normal.z;
    VStack_9.cubePos = VStack_1.cubePos;
    VStack_9._30_2_ = VStack_1._30_2_;
    VStack_9.face = VStack_1.face;
    VStack_9.isCubeHit = VStack_1.isCubeHit;
    VStack_9._37_3_ = VStack_1._37_3_;
    VStack_9.woId = VStack_1.woId;
    VStack_9._44_4_ = VStack_1._44_4_;
    VStack_9.cube = VStack_1.cube;
    VStack_9.distance = VStack_1.distance;
    VStack_9._60_4_ = VStack_1._60_4_;
    VStack_9.collider = VStack_1.collider;
    VStack_9.transform = VStack_1.transform;
    VStack_9.interactionFlags = VStack_1.interactionFlags;
    pIVar10 = PickupItemCubeGun_GetCubePos(&IStackX_20,&VStack_9,(MethodInfo *)0x0);
    iVar11 = pIVar10->z;
    uVar12._0_2_ = pIVar10->x;
    uVar12._2_2_ = pIVar10->y;
    IStackX_18._0_4_ = uVar12;
    IStackX_18.z = iVar11;
    bVar2 = PickupItemCubeGun_CanInsertCubeAtCubePos(this,&IStackX_18,(MethodInfo *)0x0);
    pGVar3 = (this->fields).primaryCursor;
    if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
    if (bVar2 == 0) {
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      return;
    }
    uVar13._0_2_ = (pGVar3->fields).pos.x;
    uVar13._2_2_ = (pGVar3->fields).pos.y;
    iVar14 = (pGVar3->fields).pos.z;
    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    IStackX_18._0_4_ = uVar13;
    IStackX_18.z = iVar14;
    aIStack_15[0]._0_4_ = uVar12;
    aIStack_15[0].z = iVar11;
    bVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                       (aIStack_15,&IStackX_18,(MethodInfo *)0x0);
    pGVar3 = (this->fields).primaryCursor;
    if (bVar2 == 0) {
      if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
      iVar16 = (pGVar3->fields).fadeState;
joined_?:
      if (iVar16 == 1) {
        return;
      }
    }
    else {
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar17 == (MVWorldObjectClientManager *)0x0) ||
          (pOVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                               (pMVar17,
                                MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                               ), pOVar18 == (Object *)0x0)) || (pGVar3 == (GUICellCursor *)0x0))
      goto code_?;
      IStackX_18._0_4_ = uVar12;
      IStackX_18.z = iVar11;
      GUICellCursor::GUICellCursor_SetCursorCube
                (pGVar3,&IStackX_18,(GameObject *)pOVar18[0xc].monitor,(MethodInfo *)0x0);
      pGVar3 = (this->fields).primaryCursor;
      if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      pGVar3 = (this->fields).primaryCursor;
code_?:
      if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
    }
    GUICellCursor::GUICellCursor_set_FadeState(pGVar3,FadeState__Enum_FadeIn,(MethodInfo *)0x0);
  }
  else {
    pGVar3 = (this->fields).primaryCursor;
    if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar17 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar17,VStack_1.woId,(MethodInfo *)0x0);
    if (pMVar19 == (MVWorldObjectClient *)0x0) {
      pGVar3 = (this->fields).secondaryCursor;
    }
    else {
      bVar20 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
      if (((pMVar19->klass->_1).naturalAligment < bVar20) ||
         (bVar21 = true,
         (MVCubeModelFineGrainedTerrain__Class *)
         (pMVar19->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
         TypeInfo__MVCubeModelFineGrainedTerrain)) {
        bVar21 = false;
      }
      pGVar3 = (this->fields).secondaryCursor;
      pMVar22 = (MVWorldObjectClient *)0x0;
      if (bVar21) {
        pMVar22 = pMVar19;
      }
      if (pMVar22 != (MVWorldObjectClient *)0x0) {
        uVar12 = VStack_1.cubePos._0_4_;
        iVar11 = VStack_1.cubePos.z;
        if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
        uVar23._0_2_ = (pGVar3->fields).pos.x;
        uVar23._2_2_ = (pGVar3->fields).pos.y;
        iVar14 = (pGVar3->fields).pos.z;
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar24 = VStack_1._24_8_;
        VStack_1.cubePos.x = (int16_t)uVar12;
        VStack_1.cubePos.y = SUB42(uVar12,2);
        aIStack_15[0].x = VStack_1.cubePos.x;
        aIStack_15[0].y = VStack_1.cubePos.y;
        aIStack_15[0].z = iVar11;
        IStackX_18._0_4_ = uVar23;
        IStackX_18.z = iVar14;
        VStack_1._24_8_ = uVar24;
        bVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                           (aIStack_15,&IStackX_18,(MethodInfo *)0x0);
        uVar24 = VStack_1._24_8_;
        pGVar3 = (this->fields).secondaryCursor;
        if (bVar2 != 0) {
          if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
          IStackX_18.x = VStack_1.cubePos.x;
          IStackX_18.y = VStack_1.cubePos.y;
          VStack_1.cubePos.z = SUB82(uVar24,4);
          IStackX_18.z = VStack_1.cubePos.z;
          VStack_1._24_8_ = uVar24;
          GUICellCursor::GUICellCursor_SetCursorCube
                    (pGVar3,&IStackX_18,(pMVar19->fields).gameObject,(MethodInfo *)0x0);
          pGVar3 = (this->fields).secondaryCursor;
          if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
          GUICellCursor::GUICellCursor_set_FadeOverride
                    (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
          pGVar3 = (this->fields).secondaryCursor;
          goto code_?;
        }
        if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
        iVar16 = (pGVar3->fields).fadeState;
        goto joined_?;
      }
    }
    if (pGVar3 == (GUICellCursor *)0x0) {
code_?:
      FUN_?();
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GUICellCursor__Fader);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pGVar3->fields).fadeState != 2) {
      fVar5 = (pGVar3->fields).currentAlpha;
      fVar6 = (pGVar3->fields).fadeOutTime;
      fVar7 = (pGVar3->fields).baseAlpha;
      pGVar8 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
      GUICellCursor+Fader::GUICellCursor_Fader__ctor
                (pGVar8,(fVar5 / fVar7) * fVar6,fVar5,0.0,(MethodInfo *)0x0);
      (pGVar3->fields).fader = pGVar8;
      func_?(&(pGVar3->fields).fader);
      (pGVar3->fields).fadeState = 2;
    }
  }
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnEnterVehicleWithWeapon
               (PickupItemCubeGun *this,MethodInfo *method)

{
  (this->fields).hasLeftVehicle = 0;
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnEquip
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hold_shoot_button_to_remove_cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickupItem::PickupItem_OnEquip((PickupItem *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = 0;
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  pMVar2 = (this->fields)._._.owner;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    if ((pMVar2->fields)._IsLocal_k__BackingField != 0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      key = (Object *)FUN_?(uRam_?);
      value = TM::TM__(StringLiteral_Hold_shoot_button_to_remove_cube,(MethodInfo *)0x0);
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,key,(Object *)value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController::NotificationController_PushNotification_2
                (NotificationType__Enum_PlayerTip,
                 (Dictionary_2_System_Object_System_Object_ *)this_00,
                 NotificationLifetime__Enum_High,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnFire
               (PickupItemCubeGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,
                  CONCAT71(in_register_00000011,isLocal));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.interactionFlags = 0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  if ((((this->fields).hasLeftVehicle != 0) || ((this->fields).fireSecondary != 0)) ||
     (cVar2 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                        (this,(this->klass->vtable).get_IsAmmoDepleted.method), cVar2 != '\0')) {
    return;
  }
  bVar3 = PickupItemCubeGun_DoLineOfFireCheck(this,&VStack_1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    VStack_4.point.x = VStack_1.point.x;
    VStack_4.point.y = VStack_1.point.y;
    VStack_4.point.z = VStack_1.point.z;
    VStack_4.normal.x = VStack_1.normal.x;
    VStack_4.normal.y = VStack_1.normal.y;
    VStack_4.normal.z = VStack_1.normal.z;
    VStack_4.cubePos = VStack_1.cubePos;
    VStack_4._30_2_ = VStack_1._30_2_;
    VStack_4.face = VStack_1.face;
    VStack_4.isCubeHit = VStack_1.isCubeHit;
    VStack_4._37_3_ = VStack_1._37_3_;
    VStack_4.woId = VStack_1.woId;
    VStack_4._44_4_ = VStack_1._44_4_;
    VStack_4.cube = VStack_1.cube;
    VStack_4.distance = VStack_1.distance;
    VStack_4._60_4_ = VStack_1._60_4_;
    VStack_4.collider = VStack_1.collider;
    VStack_4.transform = VStack_1.transform;
    VStack_4.interactionFlags = VStack_1.interactionFlags;
    pIVar5 = PickupItemCubeGun_GetCubePos(&IStackX_20,&VStack_4,(MethodInfo *)0x0);
    IStackX_8.x = pIVar5->x;
    IStackX_8.y = pIVar5->y;
    IStackX_8.z = pIVar5->z;
    bVar3 = PickupItemCubeGun_CanInsertCubeAtCubePos(this,&IStackX_8,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
  }
  obj = (this->fields)._._.muzzlePoint;
  pMVar6 = (this->fields)._._.owner;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    VStack_7.z = 0.0;
    pvVar8 = (obj->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar8,&VStack_7);
    materialID = (this->fields).material;
    method_00 = (MethodInfo *)(ulonglong)materialID;
    VStack_11.x = VStack_7.x;
    VStack_11.y = VStack_7.y;
    VStack_11.z = VStack_7.z;
    pCVar12 = CubeGunBulletObject::CubeGunBulletObject_Create
                        (pMVar6,&VStack_11,materialID,(MethodInfo *)0x0);
    pMVar6 = (this->fields)._._.owner;
    if (pMVar6 != (MVPickupOwner *)0x0) {
      uVar10._0_4_ = (pMVar6->fields).lookOrigin.x;
      uVar10._4_4_ = (pMVar6->fields).lookOrigin.y;
      fVar13 = (pMVar6->fields).lookOrigin.z;
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                          ((Vector3 *)&OStack_15,
                           &(((this->fields)._._.owner)->fields).lookDirection,method_00);
      RStack_16.m_Origin.z = fVar13;
      VStack_7.x = pVVar14->x;
      VStack_7.y = pVVar14->y;
      fVar13 = pVVar14->z;
      VStack_11._0_8_ = VStack_7._0_8_;
      VStack_11.z = fVar13;
      RStack_16.m_Origin._0_8_ = uVar10;
      fVar17 = (float)FUN_?(&VStack_11);
      if (_UNK_? < fVar17) {
        fVar18 = VStack_7.x / fVar17;
        fVar19 = VStack_7.y / fVar17;
        fVar13 = fVar13 / fVar17;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar18 = (pVVar20->zeroVector).x;
        fVar19 = (pVVar20->zeroVector).y;
        fVar13 = (pVVar20->zeroVector).z;
      }
      VStack_7.y = fVar19;
      VStack_7.x = fVar18;
      RStack_16.m_Direction.x = fVar18;
      if (pCVar12 != (CubeGunBulletObject *)0x0) {
        pMVar6 = (this->fields)._._.owner;
        this_00 = (pCVar12->fields).bullet;
        if (pMVar6 != (MVPickupOwner *)0x0) {
          fVar18 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                            (pMVar6,(this->fields).speed,(MethodInfo *)0x0);
          pMVar6 = (this->fields)._._.owner;
          fVar17 = (this->fields).range;
          if ((pMVar6 != (MVPickupOwner *)0x0) &&
             (ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(pMVar6->klass->vtable).get_IgnoreWOIDs.methodPtr)(),
             this_00 != (Bullet *)0x0)) {
            RStack_16.m_Direction.z = fVar13;
            RStack_16.m_Direction.y = VStack_7.y;
            Bullet::Bullet_Fire(this_00,fVar18,fVar17,&RStack_16,ignoreWoIDs,0,(MethodInfo *)0x0);
            OStack_15.currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
            OStack_15.hiddenValue = (this->fields).currentAmmo.hiddenValue;
            OStack_15.fakeValue = (this->fields).currentAmmo.fakeValue;
            OStack_15.inited = (this->fields).currentAmmo.inited;
            OStack_15._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
            iVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_InternalDecrypt(&OStack_15,(MethodInfo *)0x0);
            pOVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_op_Implicit
                                (&OStack_15,iVar21 + -1,(MethodInfo *)0x0);
            iVar21 = pOVar22->hiddenValue;
            iVar23 = pOVar22->fakeValue;
            bVar3 = pOVar22->inited;
            uVar24 = *(undefined3 *)&pOVar22->field_0xd;
            (this->fields).currentAmmo.currentCryptoKey = pOVar22->currentCryptoKey;
            (this->fields).currentAmmo.hiddenValue = iVar21;
            (this->fields).currentAmmo.fakeValue = iVar23;
            (this->fields).currentAmmo.inited = bVar3;
            *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar24;
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


/* Void OnFireSecondary(Boolean) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnFireSecondary
               (PickupItemCubeGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeGun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.interactionFlags = 0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    pTVar3 = (this->fields)._._.muzzlePoint;
    this_00 = (pMVar2->fields).audioManager;
    method_00 = (MethodInfo *)(this->fields).audioSource;
    if (pTVar3 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      OStack_4.currentCryptoKey = 0;
      OStack_4.hiddenValue = 0;
      OStack_4.fakeValue = 0;
      pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&OStack_4);
      if (this_00 != (AudioManager *)0x0) {
        OStack_8.currentCryptoKey = OStack_4.currentCryptoKey;
        OStack_8.hiddenValue = OStack_4.hiddenValue;
        OStack_8.fakeValue = OStack_4.fakeValue;
        AudioManager::AudioManager_Play_2
                  (this_00,StringLiteral_CubeGun,(AudioSource *)method_00,(Vector3 *)&OStack_8,
                   (MethodInfo *)0x0);
        pMVar9 = (this->fields)._._.owner;
        if (pMVar9 != (MVPickupOwner *)0x0) {
          uVar7._0_4_ = (int32_t)(pMVar9->fields).lookOrigin.x;
          uVar7._4_4_ = (int32_t)(pMVar9->fields).lookOrigin.y;
          fVar10 = (pMVar9->fields).lookOrigin.z;
          OStack_11._0_8_ = uVar7;
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                              (&RStack_13.m_Origin,&(pMVar9->fields).lookDirection,method_00);
          OStack_4.currentCryptoKey = (int32_t)pVVar12->x;
          OStack_4.hiddenValue = (int32_t)pVVar12->y;
          fVar14 = pVVar12->z;
          OStack_8._0_8_ = OStack_4._0_8_;
          OStack_8.fakeValue = (int32_t)fVar14;
          auStack_15._0_8_ = uVar7;
          auStack_15._8_4_ = fVar10;
          fVar16 = (float)FUN_?(&OStack_8);
          if (_UNK_? < fVar16) {
            OStack_4.currentCryptoKey = (int32_t)((float)OStack_4.currentCryptoKey / fVar16);
            fVar14 = fVar14 / fVar16;
            OStack_4.hiddenValue = (int32_t)((float)OStack_4.hiddenValue / fVar16);
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
            OStack_4.currentCryptoKey = (int32_t)(pVVar17->zeroVector).x;
            OStack_4.hiddenValue = (int32_t)(pVVar17->zeroVector).y;
            fVar14 = (pVVar17->zeroVector).z;
          }
          auStack_15._12_4_ = OStack_4.currentCryptoKey;
          fStack_18 = OStack_4.hiddenValue;
          fStack_19 = fVar14;
          uVar20 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          uVar21 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Logic,(MethodInfo *)0x0);
          RStack_13.m_Direction.x = (float)auStack_15._12_4_;
          RStack_13.m_Origin.z = (float)auStack_15._8_4_;
          RStack_13.m_Direction.z = fStack_19;
          RStack_13.m_Direction.y = fStack_18;
          RStack_13.m_Origin.x = (float)auStack_15._0_4_;
          RStack_13.m_Origin.y = (float)auStack_15._4_4_;
          bVar22 = CollisionDetection::CollisionDetection_MVHit_1
                             (&RStack_13,&VStack_1,(this->fields).range,
                              (HashSet_1_System_Int32_ *)0x0,
                              ~(1 << (uVar20 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar21 & 0x1f)),
                              (MethodInfo *)0x0);
          uVar7 = VStack_1.point._0_8_;
          if (bVar22 == 0) {
            fVar23 = (this->fields).range;
            fVar16 = (float)OStack_4.currentCryptoKey * fVar23 +
                     (float)OStack_11.currentCryptoKey;
            fVar24 = (float)OStack_4.hiddenValue * fVar23 + (float)OStack_11.hiddenValue;
            fVar10 = fVar14 * fVar23 + fVar10;
          }
          else {
            fVar16 = VStack_1.point.x;
            fVar24 = VStack_1.point.y;
            fVar10 = VStack_1.point.z;
            this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
            this_05 = (MVCubeModelBase *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (this_04,VStack_1.woId,(MethodInfo *)0x0);
            if (VStack_1.isCubeHit != 0) {
              pMVar25 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar25 == (MVNetworkGame *)0x0) ||
                  (this_01 = (pMVar25->fields)._MaterialRepository_k__BackingField,
                  VStack_1.cube == (Cube *)0x0)) ||
                 (pBVar26 = ((VStack_1.cube)->fields)._.faceMaterials, pBVar26 == (Byte__Array *)0x0
                 )) goto code_?;
              if ((int)pBVar26->max_length == 0) {
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((this_01 == (MVMaterialRepository *)0x0) ||
                 (pMVar27 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                      (this_01,pBVar26->vector[0],(MethodInfo *)0x0),
                 pMVar27 == (MVMaterial *)0x0)) goto code_?;
              RStack_13.m_Origin.x = (pMVar27->fields)._PhysicalProperties_k__BackingField.friction
              ;
              RStack_13.m_Origin.y =
                   (pMVar27->fields)._PhysicalProperties_k__BackingField.bouncyness;
              RStack_13.m_Origin.z = (pMVar27->fields)._PhysicalProperties_k__BackingField.softness
              ;
              RStack_13.m_Direction.x =
                   (pMVar27->fields)._PhysicalProperties_k__BackingField.staticFriction;
              fVar14 = (pMVar27->fields)._PhysicalProperties_k__BackingField.toughness;
              if (fVar14 != 0.0) {
                uVar28._0_4_ = (float)(this->fields).currentAmmo.currentCryptoKey;
                uVar28._4_4_ = (float)(this->fields).currentAmmo.hiddenValue;
                uVar29 = *(undefined8 *)&(this->fields).currentAmmo.fakeValue;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                RStack_13.m_Origin._0_8_ = uVar28;
                RStack_13._8_8_ = uVar29;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredInt::ObscuredInt_InternalDecrypt
                                   ((ObscuredInt *)&RStack_13,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                RStack_13.m_Origin.x = 0.0;
                RStack_13.m_Origin.y = 0.0;
                RStack_13.m_Origin.z = 0.0;
                RStack_13.m_Direction.x = 0.0;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                fVar23 = (float)Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                                ObscuredInt::ObscuredInt_Encrypt(iVar30 + 1,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                             field_0x1c == 0) {
                  FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                }
                RStack_13.m_Direction.x._0_1_ = 1;
                RStack_13.m_Origin.y = fVar23;
                RStack_13.m_Origin.x =
                     (float)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                            static_fields->cryptoKey;
                bVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                         ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                   ((MethodInfo *)0x0);
                fVar23 = 0.0;
                if (bVar22 != 0) {
                  fVar23 = (float)(iVar30 + 1);
                }
                RStack_13.m_Origin.z = fVar23;
                (this->fields).currentAmmo.currentCryptoKey = (int32_t)RStack_13.m_Origin.x;
                (this->fields).currentAmmo.hiddenValue = (int32_t)RStack_13.m_Origin.y;
                *(undefined8 *)&(this->fields).currentAmmo.fakeValue = RStack_13._8_8_;
                if (isLocal != 0) {
                  pMVar25 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (((pMVar25 == (MVNetworkGame *)0x0) ||
                      (pWVar31 = (pMVar25->fields).worldNetwork, pWVar31 == (WorldNetwork *)0x0)) ||
                     (this_02 = (RuntimeEventManager *)(pWVar31->fields)._.runtimeEventManagerNetwork
                     , this_02 == (RuntimeEventManager *)0x0)) goto code_?;
                  VStack_32.point.x = VStack_1.point.x;
                  VStack_32.point.y = VStack_1.point.y;
                  VStack_32.point.z = VStack_1.point.z;
                  VStack_32.normal.x = VStack_1.normal.x;
                  VStack_32.normal.y = VStack_1.normal.y;
                  VStack_32.normal.z = VStack_1.normal.z;
                  VStack_32.cubePos = VStack_1.cubePos;
                  VStack_32._30_2_ = VStack_1._30_2_;
                  VStack_32.face = VStack_1.face;
                  VStack_32.isCubeHit = VStack_1.isCubeHit;
                  VStack_32._37_3_ = VStack_1._37_3_;
                  VStack_32.woId = VStack_1.woId;
                  VStack_32._44_4_ = VStack_1._44_4_;
                  VStack_32.cube = VStack_1.cube;
                  VStack_32.distance = VStack_1.distance;
                  VStack_32._60_4_ = VStack_1._60_4_;
                  VStack_32.collider = VStack_1.collider;
                  VStack_32.transform = VStack_1.transform;
                  VStack_32.interactionFlags = VStack_1.interactionFlags;
                  RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                            (this_02,&VStack_32,_UNK_?,(MethodInfo *)0x0);
                }
              }
              if ((fVar14 == 0.0) && (this_05 != (MVCubeModelBase *)0x0)) {
                bVar33 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
                if ((bVar33 <= (this_05->klass->_1).naturalAligment) &&
                   ((MVCubeModelFineGrainedTerrain__Class *)
                    (this_05->klass->_1).typeHierarchy[(ulonglong)bVar33 - 1] ==
                    TypeInfo__MVCubeModelFineGrainedTerrain)) {
                  uVar29._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
                  uVar29._4_4_ = (this->fields).currentAmmo.hiddenValue;
                  uVar28 = *(undefined8 *)&(this->fields).currentAmmo.fakeValue;
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  RStack_13.m_Origin._0_8_ = uVar29;
                  RStack_13._8_8_ = uVar28;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  iVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredInt::ObscuredInt_InternalDecrypt
                                     ((ObscuredInt *)&RStack_13,(MethodInfo *)0x0);
                  pOVar34 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredInt::ObscuredInt_op_Implicit
                                      ((ObscuredInt *)&RStack_13,iVar30 + 1,(MethodInfo *)0x0);
                  iVar30 = pOVar34->hiddenValue;
                  iVar35 = pOVar34->fakeValue;
                  bVar22 = pOVar34->inited;
                  uVar36 = *(undefined3 *)&pOVar34->field_0xd;
                  (this->fields).currentAmmo.currentCryptoKey = pOVar34->currentCryptoKey;
                  (this->fields).currentAmmo.hiddenValue = iVar30;
                  (this->fields).currentAmmo.fakeValue = iVar35;
                  (this->fields).currentAmmo.inited = bVar22;
                  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar36;
                  if (isLocal != 0) {
                    bVar33 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
                    if (((this_05->klass->_1).naturalAligment < bVar33) ||
                       ((MVCubeModelFineGrainedTerrain__Class *)
                        (this_05->klass->_1).typeHierarchy[(ulonglong)bVar33 - 1] !=
                        TypeInfo__MVCubeModelFineGrainedTerrain)) {
                      FUN_?(this_05,TypeInfo__MVCubeModelFineGrainedTerrain);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    OStack_4._0_6_ = VStack_1.cubePos;
                    MVCubeModelBase::MVCubeModelBase_RemoveCube
                              (this_05,(IntVector *)&OStack_4,(MethodInfo *)0x0);
                    MVCubeModelBase::MVCubeModelBase_HandleDelta(this_05,(MethodInfo *)0x0);
                  }
                  lVar37 = FUN_?();
                  uVar28 = VStack_1.point._0_8_;
                  if (lVar37 == 0) goto code_?;
                  VStack_1.point.x = (float)uVar7;
                  VStack_1.point.y = SUB84(uVar7,4);
                  OStack_11.currentCryptoKey = (int32_t)VStack_1.point.x;
                  OStack_11.hiddenValue = (int32_t)VStack_1.point.y;
                  OStack_11.fakeValue = (int32_t)fVar10;
                  VStack_1.point._0_8_ = uVar28;
                  SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                            (*(ParticleSystem **)(lVar37 + 0x440),(Vector3 *)&OStack_11,
                             _UNK_?,(MethodInfo *)0x0);
                }
              }
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar38 = TypeInfo__PrefabPool->static_fields->instance;
          if (((pPVar38 != (PrefabPool *)0x0) &&
              (this_03 = (pPVar38->fields).enumPoolManager, this_03 != (EnumPoolManager *)0x0)) &&
             (this_06 = (RailRay *)
                        EnumPoolManager::EnumPoolManager_Instantiate
                                  (this_03,PoolEnums__Enum_CubeGunRay,
                                   RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                  ), this_06 != (RailRay *)0x0)) {
            (this_06->fields).target.x = fVar16;
            (this_06->fields).target.y = fVar24;
            (this_06->fields).target.z = fVar10;
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_06,(MethodInfo *)0x0);
            pTVar3 = (this->fields)._._.muzzlePoint;
            if (pTVar3 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              OStack_4.currentCryptoKey = 0;
              OStack_4.hiddenValue = 0;
              OStack_4.fakeValue = 0;
              pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
              if (pvVar5 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pvVar5);
              if (obj == (Transform *)0x0) {
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              OStack_11.currentCryptoKey = OStack_4.currentCryptoKey;
              OStack_11.hiddenValue = OStack_4.hiddenValue;
              OStack_11.fakeValue = OStack_4.fakeValue;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar5 = (obj->fields)._._.m_CachedPtr;
              if (pvVar5 != (void *)0x0) {
                pcVar6 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar7 = func_?(&UNK_?);
                  FUN_?(uVar7,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(pvVar5);
                RailRay::RailRay_Reset(this_06,(MethodInfo *)0x0);
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnHolstered
               (PickupItemCubeGun *this,MethodInfo *method)

{
  (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
  pGVar1 = (this->fields).primaryCursor;
  (this->fields).showingCursors = 0;
  if (pGVar1 != (GUICellCursor *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GUICellCursor__Fader);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = cRam_?;
    if ((pGVar1->fields).fadeState != 2) {
      fVar3 = (pGVar1->fields).currentAlpha;
      fVar4 = (pGVar1->fields).fadeOutTime;
      fVar5 = (pGVar1->fields).baseAlpha;
      pGVar6 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
      GUICellCursor+Fader::GUICellCursor_Fader__ctor
                (pGVar6,(fVar3 / fVar5) * fVar4,fVar3,0.0,(MethodInfo *)0x0);
      (pGVar1->fields).fader = pGVar6;
      func_?(&(pGVar1->fields).fader);
      cVar2 = cRam_?;
      (pGVar1->fields).fadeState = 2;
    }
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      if (cVar2 == '\0') {
        FUN_?(&TypeInfo__GUICellCursor__Fader);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pGVar1->fields).fadeState != 2) {
        fVar3 = (pGVar1->fields).currentAlpha;
        fVar4 = (pGVar1->fields).fadeOutTime;
        fVar5 = (pGVar1->fields).baseAlpha;
        pGVar6 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
        GUICellCursor+Fader::GUICellCursor_Fader__ctor
                  (pGVar6,(fVar3 / fVar5) * fVar4,fVar3,0.0,(MethodInfo *)0x0);
        (pGVar1->fields).fader = pGVar6;
        func_?(&(pGVar1->fields).fader);
        (pGVar1->fields).fadeState = 2;
      }
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        bVar7 = iRam_? != 0;
        (pGVar1->fields).fader = (GUICellCursor_Fader *)0x0;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(pGVar1->fields).fader >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar1,0.0,(MethodInfo *)0x0);
        (pGVar1->fields).fadeState = 0;
        pGVar1 = (this->fields).secondaryCursor;
        if (pGVar1 != (GUICellCursor *)0x0) {
          bVar7 = iRam_? != 0;
          (pGVar1->fields).fader = (GUICellCursor_Fader *)0x0;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(pGVar1->fields).fader >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar1,0.0,(MethodInfo *)0x0);
          (pGVar1->fields).fadeState = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnLeaveVehicleWithWeapon
               (PickupItemCubeGun *this,MethodInfo *method)

{
  pGVar1 = (this->fields).primaryCursor;
  (this->fields).showingCursors = 0;
  (this->fields).hasLeftVehicle = 1;
  if (pGVar1 != (GUICellCursor *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GUICellCursor__Fader);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = cRam_?;
    if ((pGVar1->fields).fadeState != 2) {
      fVar3 = (pGVar1->fields).currentAlpha;
      fVar4 = (pGVar1->fields).fadeOutTime;
      fVar5 = (pGVar1->fields).baseAlpha;
      pGVar6 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
      GUICellCursor+Fader::GUICellCursor_Fader__ctor
                (pGVar6,(fVar3 / fVar5) * fVar4,fVar3,0.0,(MethodInfo *)0x0);
      (pGVar1->fields).fader = pGVar6;
      func_?(&(pGVar1->fields).fader);
      cVar2 = cRam_?;
      (pGVar1->fields).fadeState = 2;
    }
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      if (cVar2 == '\0') {
        FUN_?(&TypeInfo__GUICellCursor__Fader);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pGVar1->fields).fadeState != 2) {
        fVar3 = (pGVar1->fields).currentAlpha;
        fVar4 = (pGVar1->fields).fadeOutTime;
        fVar5 = (pGVar1->fields).baseAlpha;
        pGVar6 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
        GUICellCursor+Fader::GUICellCursor_Fader__ctor
                  (pGVar6,(fVar3 / fVar5) * fVar4,fVar3,0.0,(MethodInfo *)0x0);
        (pGVar1->fields).fader = pGVar6;
        func_?(&(pGVar1->fields).fader);
        (pGVar1->fields).fadeState = 2;
      }
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        bVar7 = iRam_? != 0;
        (pGVar1->fields).fader = (GUICellCursor_Fader *)0x0;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(pGVar1->fields).fader >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar1,0.0,(MethodInfo *)0x0);
        (pGVar1->fields).fadeState = 0;
        pGVar1 = (this->fields).secondaryCursor;
        if (pGVar1 != (GUICellCursor *)0x0) {
          bVar7 = iRam_? != 0;
          (pGVar1->fields).fader = (GUICellCursor_Fader *)0x0;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(pGVar1->fields).fader >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar1,0.0,(MethodInfo *)0x0);
          (pGVar1->fields).fadeState = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnStateChanged
               (PickupItemCubeGun *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_material);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)newState,(Object *)StringLiteral_itemData,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (newState,(Object *)StringLiteral_itemData,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
    if (this_02 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) goto code_?;
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((this_02->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (this_02->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(this_02);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_02,(Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_02,
                          (Object *)StringLiteral_material,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pCVar5 = (this->fields).cubeBullet;
      uVar6 = *(uint8_t *)&pOVar4[1].klass;
      (this->fields).material = uVar6;
      if (pCVar5 == (CubeBullet *)0x0) goto code_?;
      goto Assembly_CSharp_dll_CubeBullet_CubeBullet_SetCubeMaterial;
    }
  }
  pCVar5 = (this->fields).cubeBullet;
  (this->fields).material = 0x18;
  if (pCVar5 == (CubeBullet *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0x18;
Assembly_CSharp_dll_CubeBullet_CubeBullet_SetCubeMaterial:
  bVar7 = cRam_? == '\0';
  this_00 = (pCVar5->fields).meshFilter;
  (pCVar5->fields)._MaterialID_k__BackingField = uVar6;
  if (bVar7) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
       (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
      (this_01 = (pMVar9->fields)._MaterialRepository_k__BackingField,
      this_01 != (MVMaterialRepository *)0x0)) &&
     ((pMVar10 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          (this_01,(pCVar5->fields)._MaterialID_k__BackingField,(MethodInfo *)0x0),
      pMVar10 != (MVMaterial *)0x0 && (this_00 != (MeshFilter *)0x0)))) {
    UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
              (this_00,(pMVar10->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
    obj = (pCVar5->fields).meshRenderer;
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if ((pMVar11 != (MaterialLoader *)0x0) && (obj != (MeshRenderer *)0x0)) {
      pMVar12 = (pMVar11->fields)._CubeModelMaterial_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,pMVar12,0,in_R9,unaff_RDI);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (MeshRenderer *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar13 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pMVar12 == (Material *)0x0) {
        pvVar14 = (void *)0x0;
      }
      else {
        pvVar14 = (pMVar12->fields)._.m_CachedPtr;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar13,pvVar14);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnUnequip
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields).showingCursors == 0) {
    return;
  }
  pGVar1 = (this->fields).primaryCursor;
  if (pGVar1 != (GUICellCursor *)0x0) {
    bVar2 = iRam_? != 0;
    (pGVar1->fields).fader = (GUICellCursor_Fader *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pGVar1->fields).fader >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar1,0.0,(MethodInfo *)0x0);
    (pGVar1->fields).fadeState = 0;
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      bVar2 = iRam_? != 0;
      (pGVar1->fields).fader = (GUICellCursor_Fader *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pGVar1->fields).fader >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar1,0.0,(MethodInfo *)0x0);
      (pGVar1->fields).fadeState = 0;
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_Destroy(pGVar1,(MethodInfo *)0x0);
        pGVar1 = (this->fields).secondaryCursor;
        if (pGVar1 != (GUICellCursor *)0x0) {
          GUICellCursor::GUICellCursor_Destroy(pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnUnholstered() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnUnholstered
               (PickupItemCubeGun *this,MethodInfo *method)

{
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_ResetAmmo
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (*(this->klass->vtable).get_MaxAmmo.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar4 = 0;
  if (bVar3 != 0) {
    iVar4 = value;
  }
  uStack_5 = (ulonglong)CONCAT14(1,iVar4);
  (this->fields).currentAmmo.currentCryptoKey = iVar2;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = (undefined4)uStack_5;
  (this->fields).currentAmmo.inited = uStack_5._4_1_;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uStack_5._5_3_;
  return;
}


/* Void SetCubeBulletMaterial(Byte) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_SetCubeBulletMaterial
               (PickupItemCubeGun *this,uint8_t materialId,MethodInfo *method)

{
  (this->fields).material = materialId;
  pCVar1 = (this->fields).cubeBullet;
  if (pCVar1 == (CubeBullet *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = cRam_? == '\0';
  this_00 = (pCVar1->fields).meshFilter;
  (pCVar1->fields)._MaterialID_k__BackingField = materialId;
  if (bVar3) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar4 != (MVGameControllerBase *)0x0) &&
       (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
      (this_01 = (pMVar5->fields)._MaterialRepository_k__BackingField,
      this_01 != (MVMaterialRepository *)0x0)) &&
     ((pMVar6 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          (this_01,(pCVar1->fields)._MaterialID_k__BackingField,(MethodInfo *)0x0),
      pMVar6 != (MVMaterial *)0x0 && (this_00 != (MeshFilter *)0x0)))) {
    UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
              (this_00,(pMVar6->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
    obj = (pCVar1->fields).meshRenderer;
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if ((pMVar7 != (MaterialLoader *)0x0) && (obj != (MeshRenderer *)0x0)) {
      pMVar8 = (pMVar7->fields)._CubeModelMaterial_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,pMVar8,0,in_R9,unaff_RDI);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (MeshRenderer *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar9 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pMVar8 == (Material *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = (pMVar8->fields)._.m_CachedPtr;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar9,pvVar10);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ShowCursors() */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_ShowCursors
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((pMVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) &&
       ((this->fields)._._._IsHolstered_k__BackingField == 0)) {
      pMVar1 = (this->fields)._._.owner;
      if (pMVar1 == (MVPickupOwner *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (((pMVar1->fields)._IsLocal_k__BackingField != 0) &&
         (pMVar4 = (pMVar1->fields)._.worldObjectParent, pMVar4 != (MVWorldObjectClient *)0x0)) {
        pMVar5 = pMVar4->klass;
        bVar6 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pMVar5->_1).naturalAligment < bVar6) ||
           ((MVAvatarLocal__Class *)(pMVar5->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
            TypeInfo__MVAvatarLocal)) {
          bVar6 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
          pMVar5 = ((((this->fields)._._.owner)->fields)._.worldObjectParent)->klass;
          if ((pMVar5->_1).naturalAligment < bVar6) {
            return 0;
          }
          if ((MVVehicleBase__Class *)(pMVar5->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
              TypeInfo__MVVehicleBase) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


/* Void Start() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Start
               (PickupItemCubeGun *this,MethodInfo *method)

{
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields).primaryCursor;
  if (pGVar2 != (GUICellCursor *)0x0) {
    (pGVar2->fields).fadeInTime = 0.2;
    pGVar2 = (this->fields).secondaryCursor;
    if (pGVar2 != (GUICellCursor *)0x0) {
      (pGVar2->fields).fadeInTime = 0.2;
      pGVar2 = (this->fields).primaryCursor;
      if (pGVar2 != (GUICellCursor *)0x0) {
        (pGVar2->fields).fadeOutTime = 0.2;
        pGVar2 = (this->fields).secondaryCursor;
        if (pGVar2 != (GUICellCursor *)0x0) {
          (pGVar2->fields).fadeOutTime = 0.2;
          pGVar2 = (this->fields).secondaryCursor;
          if (pGVar2 != (GUICellCursor *)0x0) {
            bVar3 = iRam_? != 0;
            (pGVar2->fields).fader = (GUICellCursor_Fader *)0x0;
            if (bVar3) {
              uVar4 = (uint)((ulonglong)&(pGVar2->fields).fader >> 0xc);
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
            GUICellCursor::GUICellCursor_SetMaterialOpacity(pGVar2,0.0,(MethodInfo *)0x0);
            (pGVar2->fields).fadeState = 0;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void StartFire() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_StartFire
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  (this->fields)._.isFiring = 1;
  (this->fields).fireMain = 1;
  (this->fields).fireSecondary = 0;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  fVar5 = (this->fields).prevFireTime;
  aOStack_6[0].currentCryptoKey = (this->fields)._.fireInterval.currentCryptoKey;
  aOStack_6[0].hiddenValue = (this->fields)._.fireInterval.hiddenValue;
  aOStack_6[0].hiddenValueOld = (this->fields)._.fireInterval.hiddenValueOld;
  aOStack_6[0].fakeValue = (this->fields)._.fireInterval.fakeValue;
  aOStack_6[0].inited = (this->fields)._.fireInterval.inited;
  aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
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
  if (fVar7 < fVar4 - fVar5) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar5 = (float)(*pcRam_?)();
    uVar8._0_4_ = (this->fields)._.fireInterval.currentCryptoKey;
    uVar8._4_4_ = (this->fields)._.fireInterval.hiddenValue;
    pBVar9 = (this->fields)._.fireInterval.hiddenValueOld;
    uVar3._0_4_ = (this->fields)._.fireInterval.fakeValue;
    uVar3._4_1_ = (this->fields)._.fireInterval.inited;
    uVar3._5_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_6[0]._0_8_ = uVar8;
    aOStack_6[0].hiddenValueOld = pBVar9;
    aOStack_6[0]._16_8_ = uVar3;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
    (this->fields).prevFireTime = fVar5 - fVar4;
  }
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_TriggerBegin
               (PickupItemCubeGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (((this->fields)._.isFiring == 0) && ((this->fields).waitingToFire == 0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pcVar1 = pcRam_?;
    (this->fields)._.isFiring = 1;
    (this->fields).fireMain = 1;
    (this->fields).fireSecondary = 0;
    pcVar2 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcVar1)();
    fVar5 = (this->fields).prevFireTime;
    aOStack_6[0].currentCryptoKey = (this->fields)._.fireInterval.currentCryptoKey;
    aOStack_6[0].hiddenValue = (this->fields)._.fireInterval.hiddenValue;
    aOStack_6[0].hiddenValueOld = (this->fields)._.fireInterval.hiddenValueOld;
    aOStack_6[0].fakeValue = (this->fields)._.fireInterval.fakeValue;
    aOStack_6[0].inited = (this->fields)._.fireInterval.inited;
    aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
    if (fVar7 < fVar4 - fVar5) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar5 = (float)(*pcRam_?)();
      uVar8._0_4_ = (this->fields)._.fireInterval.currentCryptoKey;
      uVar8._4_4_ = (this->fields)._.fireInterval.hiddenValue;
      pBVar9 = (this->fields)._.fireInterval.hiddenValueOld;
      uVar3._0_4_ = (this->fields)._.fireInterval.fakeValue;
      uVar3._4_1_ = (this->fields)._.fireInterval.inited;
      uVar3._5_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x15;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      aOStack_6[0]._0_8_ = uVar8;
      aOStack_6[0].hiddenValueOld = pBVar9;
      aOStack_6[0]._16_8_ = uVar3;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
      (this->fields).prevFireTime = fVar5 - fVar4;
    }
  }
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_TriggerEnd
               (PickupItemCubeGun *this,MethodInfo *method)

{
  PickupItemCubeGun_Execute(this,(MethodInfo *)0x0);
  (this->fields).fireMain = 0;
  (this->fields).fireSecondary = 0;
  (this->fields).waitingToFire = 0;
  (this->fields)._.isFiring = 0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Update
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields).showingCursors != 0) {
    PickupItemCubeGun_HandleCursors(this,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)(this);
  if (cVar1 != '\0') {
    pCVar2 = (this->fields).cubeBullet;
    if ((pCVar2 == (CubeBullet *)0x0) ||
       (pMVar3 = (pCVar2->fields).meshRenderer, pMVar3 == (MeshRenderer *)0x0))
    goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)pMVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pCVar2 = (this->fields).cubeBullet;
      if ((pCVar2 == (CubeBullet *)0x0) ||
         (pMVar3 = (pCVar2->fields).meshRenderer, pMVar3 == (MeshRenderer *)0x0))
      goto code_?;
      uVar5 = 0;
      goto UnityEngine_CoreModule_dll_UnityEngine_Renderer_Renderer_set_enabled;
    }
  }
  cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)(this);
  if (cVar1 != '\0') {
    return;
  }
  pCVar2 = (this->fields).cubeBullet;
  if ((pCVar2 != (CubeBullet *)0x0) &&
     (pMVar3 = (pCVar2->fields).meshRenderer, pMVar3 != (MeshRenderer *)0x0)) {
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)pMVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    pCVar2 = (this->fields).cubeBullet;
    if ((pCVar2 != (CubeBullet *)0x0) &&
       (pMVar3 = (pCVar2->fields).meshRenderer, pMVar3 != (MeshRenderer *)0x0)) {
      uVar5 = 1;
UnityEngine_CoreModule_dll_UnityEngine_Renderer_Renderer_set_enabled:
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,uVar5,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar3 == (MeshRenderer *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = (pMVar3->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar3,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar7,uVar5);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_UpdateControllerUpdate
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields)._.isFiring != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    bVar4 = (this->fields).fireSecondary;
    fVar5 = (this->fields).prevFireTime;
    aOStack_6[0].currentCryptoKey = (this->fields).fireIntervalSecondary.currentCryptoKey;
    aOStack_6[0].hiddenValue = (this->fields).fireIntervalSecondary.hiddenValue;
    aOStack_6[0].hiddenValueOld = (this->fields).fireIntervalSecondary.hiddenValueOld;
    aOStack_6[0].fakeValue = (this->fields).fireIntervalSecondary.fakeValue;
    aOStack_6[0].inited = (this->fields).fireIntervalSecondary.inited;
    aOStack_6[0]._21_3_ = *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
    bVar8 = fVar7 < fVar3 - fVar5;
    (this->fields).fireSecondary = bVar8;
    (this->fields).fireMain = !bVar8;
    if ((bVar8) && (bVar4 == 0)) {
      this_00 = (this->fields).chargeObject;
      if ((this_00 == (Transform *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0
         )) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* PickupItemCubeGun() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun__ctor
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).minDistanceToCubeFire = 0.8;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar1 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt(10,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uVar4 = 0;
  if (bVar3 != 0) {
    uVar4 = 10;
  }
  (this->fields).speed = 30.0;
  (this->fields).range = 200.0;
  (this->fields).maxAmmo.currentCryptoKey = iVar2;
  (this->fields).maxAmmo.hiddenValue = (int32_t)AVar1;
  *(Byte__Array **)&(this->fields).maxAmmo.fakeValue = (Byte__Array *)(ulonglong)CONCAT14(1,uVar4);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5._0_4_ = 0.0;
  uStack_5._4_1_ = 0;
  uStack_5._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar1,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_5._0_4_ = 0.5;
    uStack_5._4_1_ = 0;
    uStack_5._5_3_ = 0;
  }
  bVar6 = iRam_? != 0;
  (this->fields).fireIntervalSecondary.currentCryptoKey = 0;
  (this->fields).fireIntervalSecondary.hiddenValue.b1 = 0;
  (this->fields).fireIntervalSecondary.hiddenValue.b2 = 0;
  (this->fields).fireIntervalSecondary.hiddenValue.b3 = 0;
  (this->fields).fireIntervalSecondary.hiddenValue.b4 = 0;
  (this->fields).fireIntervalSecondary.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields).fireIntervalSecondary.fakeValue = (float)uStack_5;
  (this->fields).fireIntervalSecondary.inited = uStack_5._4_1_;
  *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x15 = uStack_5._5_3_;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).fireIntervalSecondary.hiddenValueOld >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar1 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  (this->fields).currentAmmo.currentCryptoKey = iVar2;
  (this->fields).currentAmmo.hiddenValue = (int32_t)AVar1;
  (this->fields).currentAmmo.fakeValue = 0;
  (this->fields).currentAmmo.inited = 1;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar11 = _UNK_?;
  uVar12 = _UNK_?;
  uVar13 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar14 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar4;
  _UNK_? = (undefined4)uVar13;
  _UNK_? = SUB84(uVar13,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar4;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar14 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar4;
  _UNK_? = (undefined4)uVar13;
  _UNK_? = SUB84(uVar13,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar4;
  _UNK_? = (undefined4)uVar12;
  _UNK_? = SUB84(uVar12,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar13;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar4;
  _UNK_? = (undefined4)uVar11;
  _UNK_? = SUB84(uVar11,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar13;
  (this->fields)._.crossHairCannotFireHigh.a = (float)uVar4;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5._0_4_ = 0.0;
  uStack_5._4_1_ = 0;
  uStack_5._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar1,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_5._0_4_ = 1.0;
    uStack_5._4_1_ = 0;
    uStack_5._5_3_ = 0;
  }
  bVar6 = iRam_? != 0;
  pPVar15 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar15->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar15->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar15->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar15->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uStack_5;
  (this->fields)._.fireInterval.inited = uStack_5._4_1_;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x15 = uStack_5._5_3_;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar16 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar6 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar16;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar10;
      LOCK();
      uVar8 = *puVar10;
      if (uVar9 == uVar8) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar8);
  }
  bVar6 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar6) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar17 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar18 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar19 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar20 = ppMVar18;
    if (lVar19 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar19 = lRam_?;
    }
    else {
      do {
        uVar7 = (uint)ppMVar20;
        LOCK();
        bVar6 = uVar7 != uRam_?;
        uVar21 = uVar7;
        uVar22 = uVar7 + 1;
        if (bVar6) {
          uVar21 = uRam_?;
          uVar22 = uRam_?;
        }
        uRam_? = uVar22;
        UNLOCK();
      } while ((bVar6) &&
              (ppMVar20 = (MethodInfo **)(ulonglong)uVar21, uVar7 = uVar21, uVar21 != 2));
      while (uVar7 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar7 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar19;
    puVar23 = &(pOVar17->_1).field_0x1c;
    LOCK();
    bVar6 = *(int *)puVar23 == 1;
    if (bVar6) {
      *(undefined4 *)puVar23 = 1;
    }
    uVar7 = uRam_?;
    UNLOCK();
    if (bVar6) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar7 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar24 = &(pOVar17->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar6 = *puVar24 == 1;
      if (bVar6) {
        *puVar24 = 1;
      }
      uVar7 = uRam_?;
      UNLOCK();
      if (bVar6) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar7 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar7 = GetCurrentThreadId();
        psVar25 = &(pOVar17->_1).cctor_thread;
        LOCK();
        bVar6 = (ulonglong)uVar7 == *psVar25;
        if (bVar6) {
          *psVar25 = (ulonglong)uVar7;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
        while( true ) {
          puVar23 = &(pOVar17->_1).field_0x1c;
          LOCK();
          bVar6 = *(int *)puVar23 == 1;
          if (bVar6) {
            *(undefined4 *)puVar23 = 1;
          }
          UNLOCK();
          if (bVar6) break;
          LOCK();
          lVar19._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
          lVar19._4_4_ = (pOVar17->_1).cctor_started;
          if (lVar19 == 0) {
            (pOVar17->_1).initializationExceptionGCHandle = 0;
            (pOVar17->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar19 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar7 = GetCurrentThreadId();
        LOCK();
        (pOVar17->_1).cctor_thread = (ulonglong)uVar7;
        UNLOCK();
        LOCK();
        (pOVar17->_1).cctor_finished_or_no_cctor = 1;
        uVar7 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar7 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar17->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar17);
          ppMVar20 = ppMVar18;
          pIVar26 = (Il2CppClass *)pOVar17;
code_?:
          do {
            if (ppMVar20 == (MethodInfo **)0x0) {
              FUN_?(pIVar26);
              if (pIVar26->field_count != 0) {
                ppMVar20 = pIVar26->methods;
                pMVar27 = *ppMVar20;
code_?:
                if (pMVar27 != (MethodInfo *)0x0) {
                  if ((*pMVar27->name == '.') && ((pMVar27->flags & 0x800) != 0)) {
                    ppMVar28 = ppMVar18;
                    while (ppMVar29 = ppMVar28 + 0x3052af3c,
                          ppMVar28 = (MethodInfo **)((longlong)ppMVar28 + 1),
                          *(char *)ppMVar29 == (pMVar27->name + -1)[(longlong)ppMVar28]) {
                      if (ppMVar28 == (MethodInfo **)0x7) {
                        FUN_?(pMVar27,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar20 = ppMVar20 + 1;
              if (ppMVar20 < pIVar26->methods + pIVar26->field_count) {
                pMVar27 = *ppMVar20;
                goto code_?;
              }
            }
            pIVar26 = pIVar26->parent;
            ppMVar20 = ppMVar18;
          } while (pIVar26 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar17->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar17->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar30._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
      lVar30._4_4_ = (pOVar17->_1).cctor_started;
      if (lVar30 != 0) {
        uVar13._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
        uVar13._4_4_ = (pOVar17->_1).cctor_started;
        uVar13 = FUN_?(uVar13);
        FUN_?(uVar13,0);
        FUN_?(0,0,0,0,0);
        pcVar31 = (code *)swi(3);
        (*pcVar31)();
        return;
      }
    }
  }
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_get_IsAmmoDepleted
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  if (0 < iVar4) {
    return 0;
  }
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_get_MaxAmmo
                  (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).maxAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).maxAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).maxAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).maxAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  iVar5 = (*(this->klass->vtable).CalculateMaxAmmo.methodPtr)
                    (this,(ulonglong)uVar4,(this->klass->vtable).CalculateMaxAmmo.method);
  aOStack_3[0].currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
  aOStack_3[0].hiddenValue = (this->fields).currentAmmo.hiddenValue;
  aOStack_3[0].fakeValue = (this->fields).currentAmmo.fakeValue;
  aOStack_3[0].inited = (this->fields).currentAmmo.inited;
  aOStack_3[0]._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  if (iVar6 < iVar5) {
    iVar6 = iVar5;
  }
  return iVar6;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_get_Quantity
                  (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  return iVar4;
}

