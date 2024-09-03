
/* Void DebugAll() */

void Assembly-CSharp.dll::CellTraverser::CellTraverser_DebugAll
               (CellTraverser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&StringLiteral_localChunkSpaceVoxelPos_);
    func_?(&StringLiteral_stepZ_);
    func_?(&StringLiteral_stepX_);
    func_?(&StringLiteral_tMax_);
    func_?(&StringLiteral_tDelta_);
    func_?(&StringLiteral_initialtMax_);
    func_?(&StringLiteral_intersectRay_);
    func_?(&StringLiteral_stepDir_);
    func_?(&StringLiteral_stepY_);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  pSVar2 = (String *)func_?(&stack0xffffffd0,0,0,0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_intersectRay_,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&stack0xffffffe8,0,0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_tMax_,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  IStack_1.x = (this->fields).localChunkSpaceVoxelPos.x;
  IStack_1.y = (this->fields).localChunkSpaceVoxelPos.y;
  IStack_1.z = (this->fields).localChunkSpaceVoxelPos.z;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                     (&IStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_localChunkSpaceVoxelPos_,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepX,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_stepX_,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepY,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_stepY_,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepZ,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_stepZ_,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  puStack3 = &stack0xffffffe8;
  pSVar2 = (String *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_tDelta_,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  IStack_1.x = (this->fields).stepDir.x;
  IStack_1.y = (this->fields).stepDir.y;
  IStack_1.z = (this->fields).stepDir.z;
  pSVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                     (&IStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_stepDir_,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  puStack4 = &stack0xffffffe8;
  pSVar2 = (String *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_initialtMax_,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  return;
}


/* Void Init(Vector3, CollisionState) */

void Assembly-CSharp.dll::CellTraverser::CellTraverser_Init
               (CellTraverser *this,Vector3 localOrigin,CollisionState collisionState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICubeModelCollider);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__System__Math);
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
                      [(collisionState.cmb)->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(collisionState.cmb,TypeInfo__ICubeModelCollider,8);
code_?:
    iVar6 = (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    if (iVar6 != 0) {
      (this->fields).chunkSize = *(int32_t *)(iVar6 + 0x18);
      (this->fields).intersectRay.m_Origin.x = localOrigin.x;
      (this->fields).intersectRay.m_Origin.y = localOrigin.y;
      (this->fields).intersectRay.m_Origin.z = localOrigin.z;
      VStack_7.z = collisionState.localDirection.z;
      VStack_7.x = collisionState.localDirection.x;
      VStack_7.y = collisionState.localDirection.y;
      puVar8 = (undefined8 *)func_?(&stack0xffffffd8,&VStack_7,0);
      uVar9 = *puVar8;
      fVar10 = *(float *)(puVar8 + 1);
      (this->fields).intersectRay.m_Direction.x = (float)(int)uVar9;
      (this->fields).intersectRay.m_Direction.y = (float)(int)((ulonglong)uVar9 >> 0x20);
      (this->fields).intersectRay.m_Direction.z = fVar10;
      uVar11 = (this->fields).intersectRay.m_Origin.x;
      uVar12 = (this->fields).intersectRay.m_Origin.y;
      localPos.z = (float)uVar12;
      localPos.y = (float)uVar11;
      localPos.x = (float)&VStack_7.y;
      IVar13 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector
                         (localPos,(MethodInfo *)(this->fields).intersectRay.m_Origin.z);
      iVar14 = collisionState.scanAxis;
      uVar15 = *IVar13._0_4_;
      iVar16 = *(int16_t *)(IVar13._0_4_ + 1);
      (this->fields).voxelPos.x = (short)uVar15;
      (this->fields).voxelPos.y = (short)((uint)uVar15 >> 0x10);
      (this->fields).voxelPos.z = iVar16;
      VStack_7.z = (float)collisionState.scanAxis;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      iVar17 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&(this->fields).voxelPos,iVar14,(MethodInfo *)0x0);
      iVar16 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState.minBounds,collisionState.scanAxis,(MethodInfo *)0x0);
      iVar18 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState.maxBounds,collisionState.scanAxis,(MethodInfo *)0x0);
      if ((iVar16 <= iVar17) && (iVar16 = iVar17, iVar18 < iVar17)) {
        iVar16 = iVar18;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (&(this->fields).voxelPos,(int32_t)VStack_7.z,iVar16,(MethodInfo *)0x0);
      auStack_19._4_4_ = 0;
      uStack_20 = (uint)uStack_20._2_2_ << 0x10;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)(auStack_19 + 4),(uint)(ushort)(this->fields).voxelPos.x,
                 (uint)(ushort)(this->fields).voxelPos.y,(uint)(ushort)(this->fields).voxelPos.z,
                 (MethodInfo *)0x0);
      auVar21 = auStack_19;
      pIVar1 = collisionState.cmb;
      (this->fields).localChunkSpaceVoxelPos.x = auStack_19._4_2_;
      (this->fields).localChunkSpaceVoxelPos.y = auStack_19._6_2_;
      (this->fields).localChunkSpaceVoxelPos.z = (int16_t)uStack_20;
      VStack_7.z = (float)collisionState.cmb;
      auStack_19 = auVar21;
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
                          [(collisionState.cmb)->klass->interfaceOffsets[uVar4].offset].method;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar3);
        }
        ppMVar5 = (MethodInfo **)func_?(collisionState.cmb,TypeInfo__ICubeModelCollider,9)
        ;
code_?:
        (*(code *)*ppMVar5)(pIVar1,&(this->fields).localChunkSpaceVoxelPos,ppMVar5[1]);
        VStack_7.z = (this->fields).intersectRay.m_Direction.z;
        VStack_7.x = (this->fields).intersectRay.m_Direction.x;
        VStack_7.y = (this->fields).intersectRay.m_Direction.y;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        iVar14 = mscorlib.dll::System::Math::Math_Sign_2(VStack_7.x,(MethodInfo *)0x0);
        (this->fields).stepX = iVar14;
        VStack_7.x = (this->fields).intersectRay.m_Direction.x;
        VStack_7.y = (this->fields).intersectRay.m_Direction.y;
        VStack_7.z = (this->fields).intersectRay.m_Direction.z;
        iVar14 = mscorlib.dll::System::Math::Math_Sign_2(VStack_7.y,(MethodInfo *)0x0);
        (this->fields).stepY = iVar14;
        VStack_7.x = (this->fields).intersectRay.m_Direction.x;
        VStack_7.y = (this->fields).intersectRay.m_Direction.y;
        VStack_7.z = (this->fields).intersectRay.m_Direction.z;
        iVar14 = mscorlib.dll::System::Math::Math_Sign_2(VStack_7.z,(MethodInfo *)0x0);
        (this->fields).stepZ = iVar14;
        uVar15 = _UNK_?;
        sVar22 = (this->fields).voxelPos.x;
        iVar6 = (this->fields).stepX;
        sVar23 = (this->fields).voxelPos.z;
        iVar24 = (this->fields).stepY;
        sVar25 = (this->fields).voxelPos.y;
        (this->fields).tMax.x = (float)_UNK_?;
        (this->fields).tMax.y = (float)uVar15;
        (this->fields).tMax.z = INFINITY;
        fVar10 = _UNK_?;
        uVar26 = (this->fields).intersectRay.m_Direction.x;
        if ((float)uVar26 != 0.0) {
          uVar27 = (this->fields).intersectRay.m_Origin.x;
          uVar28 = (this->fields).intersectRay.m_Direction.x;
          (this->fields).tMax.x =
               ((float)(int)((int)sVar22 + (uint)(0 < iVar6)) - ((float)uVar27 + _UNK_?)) /
               (float)uVar28;
        }
        uVar29 = (this->fields).intersectRay.m_Direction.y;
        if ((float)uVar29 != 0.0) {
          uVar30 = (this->fields).intersectRay.m_Origin.y;
          uVar31 = (this->fields).intersectRay.m_Direction.y;
          (this->fields).tMax.y =
               ((float)(int)((uint)(0 < iVar24) + (int)sVar25) - ((float)uVar30 + fVar10)) /
               (float)uVar31;
        }
        if ((this->fields).intersectRay.m_Direction.z != 0.0) {
          (this->fields).tMax.z =
               ((float)(int)((uint)(0 < iVar14) + (int)sVar23) -
               ((this->fields).intersectRay.m_Origin.z + fVar10)) /
               (this->fields).intersectRay.m_Direction.z;
        }
        fVar32 = (this->fields).tMax.y;
        fVar10 = (this->fields).tMax.z;
        (this->fields).initialtMax.x = (this->fields).tMax.x;
        (this->fields).initialtMax.y = fVar32;
        (this->fields).initialtMax.z = fVar10;
        (this->fields).tDelta.x = (float)uVar15;
        (this->fields).tDelta.y = (float)uVar15;
        (this->fields).tDelta.z = INFINITY;
        uVar33 = (this->fields).intersectRay.m_Direction.x;
        if ((float)uVar33 != 0.0) {
          uVar34 = (this->fields).intersectRay.m_Direction.x;
          (this->fields).tDelta.x = (float)(this->fields).stepX / (float)uVar34;
        }
        uVar35 = (this->fields).intersectRay.m_Direction.y;
        if ((float)uVar35 != 0.0) {
          uVar36 = (this->fields).intersectRay.m_Direction.y;
          (this->fields).tDelta.y = (float)(this->fields).stepY / (float)uVar36;
        }
        if ((this->fields).intersectRay.m_Direction.z != 0.0) {
          (this->fields).tDelta.z =
               (float)(this->fields).stepZ / (this->fields).intersectRay.m_Direction.z;
        }
        return;
      }
    }
  }
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Boolean Step() */

bool Assembly-CSharp.dll::CellTraverser::CellTraverser_Step(CellTraverser *this,MethodInfo *method)

{
  bVar1 = 1;
  fVar2 = (this->fields).tMax.y;
  pVVar3 = &(this->fields).tMax;
  if ((pVVar3->x <= fVar2 && fVar2 != pVVar3->x) &&
     (fVar2 = (this->fields).tMax.z, pVVar3 = &(this->fields).tMax,
     pVVar3->x <= fVar2 && fVar2 != pVVar3->x)) {
    pIVar4 = &(this->fields).localChunkSpaceVoxelPos;
    pIVar4->x = pIVar4->x + (short)(this->fields).stepX;
    pIVar4 = &(this->fields).voxelPos;
    pIVar4->x = pIVar4->x + (short)(this->fields).stepX;
    (this->fields).tMax.x = (this->fields).tDelta.x + (this->fields).tMax.x;
    if (((int)(this->fields).localChunkSpaceVoxelPos.x == (this->fields).chunkSize) ||
       ((this->fields).localChunkSpaceVoxelPos.x < 0)) {
      bVar1 = 0;
    }
    iVar5 = (this->fields).stepX;
    (this->fields).stepDir.y = 0;
    (this->fields).stepDir.z = 0;
    (this->fields).stepDir.x = (int16_t)iVar5;
    return bVar1;
  }
  fVar2 = (this->fields).tMax.z;
  pfVar6 = &(this->fields).tMax.y;
  if (fVar2 < *pfVar6 || fVar2 == *pfVar6) {
    piVar7 = &(this->fields).localChunkSpaceVoxelPos.z;
    *piVar7 = *piVar7 + (short)(this->fields).stepZ;
    piVar7 = &(this->fields).voxelPos.z;
    *piVar7 = *piVar7 + (short)(this->fields).stepZ;
    (this->fields).tMax.z = (this->fields).tDelta.z + (this->fields).tMax.z;
    if (((int)(this->fields).localChunkSpaceVoxelPos.z == (this->fields).chunkSize) ||
       ((this->fields).localChunkSpaceVoxelPos.z < 0)) {
      bVar1 = 0;
    }
    (this->fields).stepDir.x = 0;
    (this->fields).stepDir.y = 0;
    (this->fields).stepDir.z = (int16_t)(this->fields).stepZ;
    return bVar1;
  }
  piVar7 = &(this->fields).localChunkSpaceVoxelPos.y;
  *piVar7 = *piVar7 + (short)(this->fields).stepY;
  piVar7 = &(this->fields).voxelPos.y;
  *piVar7 = *piVar7 + (short)(this->fields).stepY;
  (this->fields).tMax.y = (this->fields).tDelta.y + (this->fields).tMax.y;
  if (((int)(this->fields).localChunkSpaceVoxelPos.y == (this->fields).chunkSize) ||
     ((this->fields).localChunkSpaceVoxelPos.y < 0)) {
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
  method_00 = (MethodInfo *)0x0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,0,0,0,(MethodInfo *)0x0);
  *(MethodInfo **)&(this->fields).voxelPos = method_00;
  (this->fields).voxelPos.z = 0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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

