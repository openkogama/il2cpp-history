
/* Void DebugAll() */

void Assembly-CSharp.dll::CellTraverser::CellTraverser_DebugAll
               (CellTraverser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__UnityEngine__Ray,&stack0xffffffa8);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_intersectRay_,pOVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__UnityEngine__Vector3);
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_tMax_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__IntVector,&stack0xffffffec);
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_localChunkSpaceVoxelPos_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_stepX_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_stepY_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_stepZ_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_tDelta_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_stepDir_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_initialtMax_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  return;
}


/* Void Init(Vector3, CollisionState) */

void Assembly-CSharp.dll::CellTraverser::CellTraverser_Init
               (CellTraverser *this,Vector3 localOrigin,CollisionState collisionState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = collisionState.cmb;
  if (collisionState.cmb != (ICubeModelCollider *)0x0) {
    pIVar2 = (collisionState.cmb)->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppMVar5 = &(&((collisionState.cmb)->klass->vtable).get_PrototypeCubeModel)
                      [pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(collisionState.cmb,TypeInfo__ICubeModelCollider,8);
code_?:
    this_00 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
              (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    if (this_00 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) {
      iVar6 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
               Int32]::
               Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                         (this_00,(MethodInfo *)0x0);
      (this->fields).chunkSize = iVar6;
      pCVar7 = &this->fields;
      func_?(pCVar7,localOrigin.x,localOrigin.y,localOrigin.z,0);
      func_?(pCVar7,collisionState.localDirection.x,collisionState.localDirection.y,
                      collisionState.localDirection.z,0);
      puVar8 = (undefined8 *)func_?(&stack0xffffffc0,pCVar7,0);
      uVar9 = 0;
      localPos.y = (float)(int)*puVar8;
      localPos.x = (float)&stack0xffffffe8;
      localPos.z = (float)((ulonglong)*puVar8 >> 0x20);
      IVar10 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector(localPos,*(MethodInfo **)(puVar8 + 1));
      pIVar11 = &(this->fields).voxelPos;
      uVar12 = *IVar10._0_4_;
      iVar13 = *(int16_t *)(IVar10._0_4_ + 1);
      pIVar11->x = (short)uVar12;
      pIVar11->y = (short)((uint)uVar12 >> 0x10);
      (this->fields).voxelPos.z = iVar13;
      sVar14 = func_?(pIVar11,collisionState.scanAxis,0,uVar9);
      sVar15 = func_?(&collisionState.minBounds,collisionState.scanAxis,0);
      sVar16 = func_?(&collisionState.maxBounds,collisionState.scanAxis,0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                ((int)sVar14,(int)sVar15,(int)sVar16,(MethodInfo *)0x0);
      func_?(pIVar11);
      uVar12 = 0;
      iVar13 = 0;
      func_?(&stack0xffffffdc,pIVar11->x,(this->fields).voxelPos.y,(this->fields).voxelPos.z
                      ,0);
      pIVar1 = collisionState.cmb;
      (this->fields).localChunkSpaceVoxelPos.x = (short)uVar12;
      (this->fields).localChunkSpaceVoxelPos.y = (short)((uint)uVar12 >> 0x10);
      (this->fields).localChunkSpaceVoxelPos.z = iVar13;
      if (collisionState.cmb != (ICubeModelCollider *)0x0) {
        pIVar2 = (collisionState.cmb)->klass;
        uVar4 = 0;
        uVar3._0_1_ = (pIVar2->_1).rank;
        uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
        if (uVar3 != 0) {
          do {
            if (pIVar2->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__ICubeModelCollider) {
              ppMVar5 = &(&((collisionState.cmb)->klass->vtable).CubePosToChunkPos)
                          [pIVar2->interfaceOffsets[uVar4].offset].method;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar3);
        }
        ppMVar5 = (MethodInfo **)func_?(collisionState.cmb,TypeInfo__ICubeModelCollider,9)
        ;
code_?:
        pCVar7 = &this->fields;
        (*(code *)*ppMVar5)(pIVar1,&(this->fields).localChunkSpaceVoxelPos,ppMVar5[1]);
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffffc0,(InputToPlayerMovementAndroid *)pCVar7,
                             (MethodInfo *)0x0);
        value = pVVar17->x;
        iVar6 = mscorlib.dll::System::Math::Math_Sign((float)value,(MethodInfo *)0x0);
        (this->fields).stepX = iVar6;
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffffc0,(InputToPlayerMovementAndroid *)pCVar7,
                             (MethodInfo *)0x0);
        value_00 = pVVar17->y;
        iVar6 = mscorlib.dll::System::Math::Math_Sign((float)value_00,(MethodInfo *)0x0);
        (this->fields).stepY = iVar6;
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffffc0,(InputToPlayerMovementAndroid *)pCVar7,
                             (MethodInfo *)0x0);
        iVar6 = mscorlib.dll::System::Math::Math_Sign(pVVar17->z,(MethodInfo *)0x0);
        (this->fields).stepZ = iVar6;
        func_?();
        fVar18 = 0.0;
        uVar19 = 0x7f8000007f800000;
        func_?();
        (this->fields).tMax.x = (float)(int)uVar19;
        (this->fields).tMax.y = (float)(int)((ulonglong)uVar19 >> 0x20);
        fVar20 = 0.0;
        (this->fields).tMax.z = fVar18;
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffffc0,(InputToPlayerMovementAndroid *)pCVar7,
                             (MethodInfo *)0x0);
        uVar21 = pVVar17->x;
        if ((float)uVar21 != 0.0) {
          puVar8 = (undefined8 *)func_?();
          fVar18 = (float)*puVar8;
          pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                              ((Vector3 *)&stack0xffffffb4,(InputToPlayerMovementAndroid *)pCVar7,
                               (MethodInfo *)0x0);
          uVar22 = pVVar17->x;
          (this->fields).tMax.x = (fVar20 - (fVar18 + _UNK_?)) / (float)uVar22;
        }
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffffb4,(InputToPlayerMovementAndroid *)pCVar7,
                             (MethodInfo *)0x0);
        uVar23 = pVVar17->y;
        if ((float)uVar23 != 0.0) {
          puVar24 = &UNK_?;
          puVar8 = (undefined8 *)func_?();
          fVar20 = (float)((ulonglong)*puVar8 >> 0x20);
          pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                              ((Vector3 *)&stack0xffffffb4,(InputToPlayerMovementAndroid *)pCVar7,
                               (MethodInfo *)0x0);
          uVar25 = pVVar17->y;
          (this->fields).tMax.y = ((float)puVar24 - (fVar20 + _UNK_?)) / (float)uVar25;
        }
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffffb4,(InputToPlayerMovementAndroid *)pCVar7,
                             (MethodInfo *)0x0);
        if (pVVar17->z != 0.0) {
          iVar26 = func_?();
          fVar18 = 0.0;
          fVar20 = *(float *)(iVar26 + 8);
          pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                              ((Vector3 *)&stack0xffffffb4,(InputToPlayerMovementAndroid *)pCVar7,
                               (MethodInfo *)0x0);
          (this->fields).tMax.z = (fVar18 - (fVar20 + _UNK_?)) / pVVar17->z;
        }
        fVar20 = 0.0;
        uVar19 = 0;
        func_?();
        (this->fields).initialtMax.x = (float)(int)uVar19;
        (this->fields).initialtMax.y = (float)(int)((ulonglong)uVar19 >> 0x20);
        (this->fields).initialtMax.z = fVar20;
        uVar19 = 0;
        fVar20 = 0.0;
        func_?();
        (this->fields).tDelta.x = (float)(int)uVar19;
        (this->fields).tDelta.y = (float)(int)((ulonglong)uVar19 >> 0x20);
        (this->fields).tDelta.z = fVar20;
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)&stack0xffffffb4,(InputToPlayerMovementAndroid *)pCVar7,
                             (MethodInfo *)0x0);
        uVar27 = pVVar17->x;
        if ((float)uVar27 != 0.0) {
          iVar26 = (this->fields).stepX;
          pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                              ((Vector3 *)&stack0xffffffb4,(InputToPlayerMovementAndroid *)pCVar7,
                               (MethodInfo *)0x0);
          uVar28 = pVVar17->x;
          (this->fields).tDelta.x = (float)iVar26 / (float)uVar28;
        }
        collisionState.localOrigin.z = 0.0;
        collisionState.localOrigin.x = (float)&stack0xffffffb4;
        collisionState.localOrigin.y = (float)pCVar7;
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)collisionState.localOrigin.x,
                             (InputToPlayerMovementAndroid *)pCVar7,(MethodInfo *)0x0);
        uVar29 = pVVar17->y;
        if ((float)uVar29 != 0.0) {
          iVar26 = (this->fields).stepY;
          collisionState.localHitPoint.x = (float)&stack0xffffffb4;
          collisionState.localHitPoint.z = 0.0;
          collisionState.localOrigin.z = (float)&UNK_?;
          collisionState.localHitPoint.y = (float)pCVar7;
          pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                              ((Vector3 *)collisionState.localHitPoint.x,
                               (InputToPlayerMovementAndroid *)pCVar7,(MethodInfo *)0x0);
          uVar30 = pVVar17->y;
          (this->fields).tDelta.y = (float)iVar26 / (float)uVar30;
        }
        collisionState.localNormal.z = 0.0;
        collisionState.localNormal.x = (float)&stack0xffffffb4;
        collisionState.localHitPoint.z = (float)&UNK_?;
        collisionState.localNormal.y = (float)pCVar7;
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            ((Vector3 *)collisionState.localNormal.x,
                             (InputToPlayerMovementAndroid *)pCVar7,(MethodInfo *)0x0);
        if (pVVar17->z != 0.0) {
          iVar26 = (this->fields).stepZ;
          collisionState.localDirection.x = (float)&stack0xffffffb4;
          collisionState.localDirection.z = 0.0;
          collisionState.localNormal.z = (float)&UNK_?;
          collisionState.localDirection.y = (float)pCVar7;
          pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                              ((Vector3 *)collisionState.localDirection.x,
                               (InputToPlayerMovementAndroid *)pCVar7,(MethodInfo *)0x0);
          (this->fields).tDelta.z = (float)iVar26 / pVVar17->z;
        }
        return;
      }
    }
  }
  func_?(0);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Boolean Step() */

bool Assembly-CSharp.dll::CellTraverser::CellTraverser_Step(CellTraverser *this,MethodInfo *method)

{
  bVar1 = 1;
  fVar2 = (this->fields).tMax.x;
  fVar3 = (this->fields).tMax.y;
  if ((fVar2 < fVar3) && (fVar2 < (this->fields).tMax.z)) {
    pIVar4 = &(this->fields).localChunkSpaceVoxelPos;
    pIVar4->x = pIVar4->x + (short)(this->fields).stepX;
    pIVar4 = &(this->fields).voxelPos;
    pIVar4->x = pIVar4->x + (short)(this->fields).stepX;
    (this->fields).tMax.x = (this->fields).tDelta.x + fVar2;
    sVar5 = (this->fields).localChunkSpaceVoxelPos.x;
    if (((int)sVar5 == (this->fields).chunkSize) || (sVar5 < 0)) {
      bVar1 = 0;
    }
    (this->fields).stepDir.x = (int16_t)(this->fields).stepX;
    (this->fields).stepDir.y = 0;
    (this->fields).stepDir.z = 0;
    return bVar1;
  }
  if ((this->fields).tMax.z <= fVar3) {
    piVar6 = &(this->fields).localChunkSpaceVoxelPos.z;
    *piVar6 = *piVar6 + (short)(this->fields).stepZ;
    piVar6 = &(this->fields).voxelPos.z;
    *piVar6 = *piVar6 + (short)(this->fields).stepZ;
    (this->fields).tMax.z = (this->fields).tDelta.z + (this->fields).tMax.z;
    sVar5 = (this->fields).localChunkSpaceVoxelPos.z;
    if (((int)sVar5 == (this->fields).chunkSize) || (sVar5 < 0)) {
      bVar1 = 0;
    }
    (this->fields).stepDir.x = 0;
    (this->fields).stepDir.y = 0;
    (this->fields).stepDir.z = (int16_t)(this->fields).stepZ;
    return bVar1;
  }
  piVar6 = &(this->fields).localChunkSpaceVoxelPos.y;
  *piVar6 = *piVar6 + (short)(this->fields).stepY;
  piVar6 = &(this->fields).voxelPos.y;
  *piVar6 = *piVar6 + (short)(this->fields).stepY;
  (this->fields).tMax.y = (this->fields).tDelta.y + fVar3;
  sVar5 = (this->fields).localChunkSpaceVoxelPos.y;
  if (((int)sVar5 == (this->fields).chunkSize) || (sVar5 < 0)) {
    bVar1 = 0;
  }
  (this->fields).stepDir.x = 0;
  (this->fields).stepDir.y = (int16_t)(this->fields).stepY;
  (this->fields).stepDir.z = 0;
  return bVar1;
}


/* CellTraverser() */

void Assembly-CSharp.dll::CellTraverser::CellTraverser__ctor(CellTraverser *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)0x0;
  iStack_2 = 0;
  method_00 = (MethodInfo *)&pIStack_1;
  (this->fields).intersectRay.m_Origin.x = 0.0;
  (this->fields).intersectRay.m_Origin.y = 0.0;
  (this->fields).intersectRay.m_Origin.z = 0.0;
  (this->fields).intersectRay.m_Direction.x = 0.0;
  (this->fields).intersectRay.m_Direction.y = 0.0;
  (this->fields).intersectRay.m_Direction.z = 0.0;
  func_?(method_00,0,0,0,0);
  *(Il2CppMethodPointer *)&(this->fields).voxelPos = pIStack_1;
  (this->fields).voxelPos.z = iStack_2;
  (this->fields).stepDir.x = 0;
  (this->fields).stepDir.y = 0;
  (this->fields).stepDir.z = 0;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  return;
}


/* IntVector get_StepDir() */

IntVector Assembly-CSharp.dll::CellTraverser::CellTraverser_get_StepDir
                    (CellTraverser *this,MethodInfo *method)

{
  IVar1.z = (int16_t)method;
  IVar1._0_4_ = this;
  this->klass = *(CellTraverser__Class **)((int)&method[1].token + 2);
  *(uint16_t *)&this->monitor = method[1].iflags;
  return IVar1;
}


/* IntVector get_VoxelPos() */

IntVector Assembly-CSharp.dll::CellTraverser::CellTraverser_get_VoxelPos
                    (CellTraverser *this,MethodInfo *method)

{
  IVar1.z = (int16_t)method;
  IVar1._0_4_ = this;
  this->klass = (CellTraverser__Class *)method[1].field8_0x20;
  *(short *)&this->monitor = (short)method[1].token;
  return IVar1;
}

