
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
      (this->fields).chunkSize = *(int32_t *)(iVar6 + 0x2c);
      (this->fields).intersectRay.m_Origin.x = localOrigin.x;
      (this->fields).intersectRay.m_Origin.y = localOrigin.y;
      (this->fields).intersectRay.m_Origin.z = localOrigin.z;
      value.z = collisionState.localDirection.z;
      value.x = collisionState.localDirection.x;
      value.y = collisionState.localDirection.y;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_8,value,(MethodInfo *)0x0);
      fVar9 = pVVar7->y;
      fVar10 = pVVar7->z;
      (this->fields).intersectRay.m_Direction.x = pVVar7->x;
      (this->fields).intersectRay.m_Direction.y = fVar9;
      (this->fields).intersectRay.m_Direction.z = fVar10;
      uVar11 = (this->fields).intersectRay.m_Origin.x;
      uVar12 = (this->fields).intersectRay.m_Origin.y;
      localPos.z = (float)uVar12;
      localPos.y = (float)uVar11;
      localPos.x = (float)&VStack_8.y;
      IVar13 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_LocalPosToLocalIntVector
                         (localPos,(MethodInfo *)(this->fields).intersectRay.m_Origin.z);
      iVar14 = collisionState.scanAxis;
      uVar15 = *IVar13._0_4_;
      iVar16 = *(int16_t *)(IVar13._0_4_ + 1);
      (this->fields).voxelPos.x = (short)uVar15;
      (this->fields).voxelPos.y = (short)((uint)uVar15 >> 0x10);
      (this->fields).voxelPos.z = iVar16;
      VStack_8.z = (float)&(this->fields).voxelPos;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      uVar4 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&(this->fields).voxelPos,iVar14,(MethodInfo *)0x0);
      pIStack_17 = (ICubeModelCollider *)(uint)uVar4;
      pCVar18 = &collisionState;
      pfVar19 = (float *)&stack0xffffff18;
      for (iVar6 = 0x31; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar19 = (pCVar18->localOrigin).x;
        pCVar18 = (CollisionState *)&(pCVar18->localOrigin).y;
        pfVar19 = pfVar19 + 1;
      }
      sVar20 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState.minBounds,iStack_21,(MethodInfo *)0x0);
      iVar6 = 0x31;
      pCVar18 = &collisionState;
      pfVar19 = (float *)&stack0xffffff18;
      while( true ) {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        *pfVar19 = (pCVar18->localOrigin).x;
        pCVar18 = (CollisionState *)&(pCVar18->localOrigin).y;
        pfVar19 = pfVar19 + 1;
      }
      iVar16 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState.maxBounds,iStack_21,(MethodInfo *)0x0);
      sVar22 = (short)pIStack_17;
      if ((sVar20 <= sVar22) && (sVar20 = sVar22, iVar16 < sVar22)) {
        sVar20 = iVar16;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                ((IntVector *)VStack_8.z,iVar14,sVar20,(MethodInfo *)0x0);
      auStack_23._4_4_ = 0;
      uStack_24 = (uint)uStack_24._2_2_ << 0x10;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)(auStack_23 + 4),(uint)(ushort)(this->fields).voxelPos.x,
                 (uint)(ushort)(this->fields).voxelPos.y,(uint)(ushort)(this->fields).voxelPos.z,
                 (MethodInfo *)0x0);
      auVar25 = auStack_23;
      pIVar1 = collisionState.cmb;
      (this->fields).localChunkSpaceVoxelPos.x = auStack_23._4_2_;
      (this->fields).localChunkSpaceVoxelPos.y = auStack_23._6_2_;
      (this->fields).localChunkSpaceVoxelPos.z = (int16_t)uStack_24;
      pIStack_17 = collisionState.cmb;
      auStack_23 = auVar25;
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
        VStack_8.z = (this->fields).intersectRay.m_Direction.z;
        VStack_8.x = (this->fields).intersectRay.m_Direction.x;
        VStack_8.y = (this->fields).intersectRay.m_Direction.y;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        iVar14 = mscorlib.dll::System::Math::Math_Sign_2(VStack_8.x,(MethodInfo *)0x0);
        (this->fields).stepX = iVar14;
        VStack_8.x = (this->fields).intersectRay.m_Direction.x;
        VStack_8.y = (this->fields).intersectRay.m_Direction.y;
        VStack_8.z = (this->fields).intersectRay.m_Direction.z;
        iVar14 = mscorlib.dll::System::Math::Math_Sign_2(VStack_8.y,(MethodInfo *)0x0);
        (this->fields).stepY = iVar14;
        VStack_8.x = (this->fields).intersectRay.m_Direction.x;
        VStack_8.y = (this->fields).intersectRay.m_Direction.y;
        VStack_8.z = (this->fields).intersectRay.m_Direction.z;
        iVar14 = mscorlib.dll::System::Math::Math_Sign_2(VStack_8.z,(MethodInfo *)0x0);
        (this->fields).stepZ = iVar14;
        uVar15 = _UNK_?;
        iVar6 = (this->fields).stepX;
        sVar20 = (this->fields).voxelPos.x;
        sVar22 = (this->fields).voxelPos.z;
        iVar26 = (this->fields).stepY;
        sVar27 = (this->fields).voxelPos.y;
        (this->fields).tMax.x = (float)_UNK_?;
        (this->fields).tMax.y = (float)uVar15;
        (this->fields).tMax.z = INFINITY;
        fVar10 = _UNK_?;
        uVar28 = (this->fields).intersectRay.m_Direction.x;
        if ((float)uVar28 != 0.0) {
          uVar29 = (this->fields).intersectRay.m_Origin.x;
          uVar30 = (this->fields).intersectRay.m_Direction.x;
          (this->fields).tMax.x =
               ((float)(int)((int)sVar20 + (uint)(0 < iVar6)) - ((float)uVar29 + _UNK_?)) /
               (float)uVar30;
        }
        uVar31 = (this->fields).intersectRay.m_Direction.y;
        if ((float)uVar31 != 0.0) {
          uVar32 = (this->fields).intersectRay.m_Origin.y;
          uVar33 = (this->fields).intersectRay.m_Direction.y;
          (this->fields).tMax.y =
               ((float)(int)((uint)(0 < iVar26) + (int)sVar27) - ((float)uVar32 + fVar10)) /
               (float)uVar33;
        }
        if ((this->fields).intersectRay.m_Direction.z != 0.0) {
          (this->fields).tMax.z =
               ((float)(int)((uint)(0 < iVar14) + (int)sVar22) -
               ((this->fields).intersectRay.m_Origin.z + fVar10)) /
               (this->fields).intersectRay.m_Direction.z;
        }
        fVar9 = (this->fields).tMax.y;
        fVar10 = (this->fields).tMax.z;
        (this->fields).initialtMax.x = (this->fields).tMax.x;
        (this->fields).initialtMax.y = fVar9;
        (this->fields).initialtMax.z = fVar10;
        (this->fields).tDelta.x = (float)uVar15;
        (this->fields).tDelta.y = (float)uVar15;
        (this->fields).tDelta.z = INFINITY;
        uVar34 = (this->fields).intersectRay.m_Direction.x;
        if ((float)uVar34 != 0.0) {
          uVar35 = (this->fields).intersectRay.m_Direction.x;
          (this->fields).tDelta.x = (float)(this->fields).stepX / (float)uVar35;
        }
        uVar36 = (this->fields).intersectRay.m_Direction.y;
        if ((float)uVar36 != 0.0) {
          uVar37 = (this->fields).intersectRay.m_Direction.y;
          (this->fields).tDelta.y = (float)(this->fields).stepY / (float)uVar37;
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
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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

