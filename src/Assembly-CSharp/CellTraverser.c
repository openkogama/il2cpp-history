
/* Void DebugAll() */

void Assembly-CSharp.dll::CellTraverser::CellTraverser_DebugAll
               (CellTraverser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_localChunkSpaceVoxelPos_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stepZ_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stepX_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tMax_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tDelta_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_initialtMax_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_intersectRay_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stepDir_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stepY_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (this->fields).intersectRay.m_Origin.x;
  uStack_1._4_4_ = (this->fields).intersectRay.m_Origin.y;
  fStack_2 = (this->fields).intersectRay.m_Origin.z;
  fStack_3 = (this->fields).intersectRay.m_Direction.x;
  pSStack_4._0_4_ = (this->fields).intersectRay.m_Direction.y;
  pSStack_4._4_4_ = (this->fields).intersectRay.m_Direction.z;
  pSVar5 = (String *)FUN_?(&uStack_1,0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_intersectRay_,pSVar5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  uStack_1._0_4_ = (this->fields).tMax.x;
  uStack_1._4_4_ = (this->fields).tMax.y;
  fStack_2 = (this->fields).tMax.z;
  pSVar5 = (String *)FUN_?(&uStack_1,0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_tMax_,pSVar5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  IStackX_8.x = (this->fields).localChunkSpaceVoxelPos.x;
  IStackX_8.y = (this->fields).localChunkSpaceVoxelPos.y;
  IStackX_8.z = (this->fields).localChunkSpaceVoxelPos.z;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                     (&IStackX_8,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_localChunkSpaceVoxelPos_,pSVar5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepX,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_stepX_,pSVar5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepY,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_stepY_,pSVar5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).stepZ,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_stepZ_,pSVar5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  uStack_1._0_4_ = (this->fields).tDelta.x;
  uStack_1._4_4_ = (this->fields).tDelta.y;
  fStack_2 = (this->fields).tDelta.z;
  pSVar5 = (String *)FUN_?(&uStack_1,0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_tDelta_,pSVar5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  IStackX_8.x = (this->fields).stepDir.x;
  IStackX_8.y = (this->fields).stepDir.y;
  IStackX_8.z = (this->fields).stepDir.z;
  pSVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                     (&IStackX_8,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_stepDir_,pSVar5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  uStack_1._0_4_ = (this->fields).initialtMax.x;
  uStack_1._4_4_ = (this->fields).initialtMax.y;
  fStack_2 = (this->fields).initialtMax.z;
  pSVar5 = (String *)FUN_?(&uStack_1,0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_initialtMax_,pSVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar6 != (ILogger_1 *)0x0) {
    pSStack_4 = pSVar5;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,3);
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Init(Vector3, CollisionState) */

void Assembly-CSharp.dll::CellTraverser::CellTraverser_Init
               (CellTraverser *this,Vector3 *localOrigin,CollisionState *collisionState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (collisionState->localOrigin).x;
  uStack_1._4_4_ = (collisionState->localOrigin).y;
  uStack_2 = *(undefined8 *)&(collisionState->localOrigin).z;
  uStack_3 = *(undefined8 *)&(collisionState->elipsoidSpaceDirection).z;
  uStack_4._0_4_ = (collisionState->localHitPoint).y;
  uStack_4._4_4_ = (collisionState->localHitPoint).z;
  uStack_5._0_4_ = (collisionState->localNormal).x;
  uStack_5._4_4_ = (collisionState->localNormal).y;
  uVar6 = *(undefined8 *)&(collisionState->localNormal).z;
  uVar7 = (collisionState->localDirection).y;
  uVar8 = (collisionState->localDirection).z;
  uStack_9._0_4_ = (collisionState->origin).x;
  uStack_9._4_4_ = (collisionState->origin).y;
  uStack_10 = *(undefined8 *)&(collisionState->origin).z;
  uStack_11 = (undefined4)uVar6;
  fStack_12 = (float)((ulonglong)uVar6 >> 0x20);
  uStack_13._0_4_ = (collisionState->direction).y;
  uStack_13._4_4_ = (collisionState->direction).z;
  pIVar14 = collisionState->cmb;
  uStack_15._0_4_ = (collisionState->localToElipsoidSpace).m00;
  uStack_15._4_4_ = (collisionState->localToElipsoidSpace).m10;
  uStack_16._0_4_ = (collisionState->localToElipsoidSpace).m20;
  uStack_16._4_4_ = (collisionState->localToElipsoidSpace).m30;
  uStack_17._0_4_ = (collisionState->localToElipsoidSpace).m01;
  uStack_17._4_4_ = (collisionState->localToElipsoidSpace).m11;
  uStack_18._0_4_ = (collisionState->localToElipsoidSpace).m21;
  uStack_18._4_4_ = (collisionState->localToElipsoidSpace).m31;
  uStack_19._0_4_ = (collisionState->localToElipsoidSpace).m03;
  uStack_19._4_4_ = (collisionState->localToElipsoidSpace).m13;
  uStack_20._0_4_ = (collisionState->localToElipsoidSpace).m23;
  uStack_20._4_4_ = (collisionState->localToElipsoidSpace).m33;
  uStack_21._0_4_ = (collisionState->localToElipsoidSpace).m02;
  uStack_21._4_4_ = (collisionState->localToElipsoidSpace).m12;
  uStack_22._0_4_ = (collisionState->localToElipsoidSpace).m22;
  uStack_22._4_4_ = (collisionState->localToElipsoidSpace).m32;
  uStack_23._0_4_ = collisionState->scanAxis;
  uStack_23._4_2_ = (collisionState->minBounds).x;
  uStack_23._6_2_ = (collisionState->minBounds).y;
  uStack_24 = *(undefined8 *)&(collisionState->minBounds).z;
  uStack_25._0_4_ = collisionState->firstHitScanAxis;
  uStack_25._4_1_ = collisionState->firstHitDetected;
  uStack_25._5_3_ = *(undefined3 *)&collisionState->field_0xa5;
  uStack_26._0_4_ = collisionState->scaledMaxRadius;
  uStack_26._4_4_ = (collisionState->elipsoidSpaceOrigin).x;
  uStack_27._0_4_ = (collisionState->elipsoidSpaceOrigin).y;
  uStack_27._4_4_ = (collisionState->elipsoidSpaceOrigin).z;
  uStack_28._0_4_ = (collisionState->elipsoidSpaceDirection).x;
  uStack_28._4_4_ = (collisionState->elipsoidSpaceDirection).y;
  fStack_29 = (float)uVar7;
  fStack_30 = (float)uVar8;
  pIStack_31 = pIVar14;
  if (pIVar14 != (ICubeModelCollider *)0x0) {
    pIVar32 = pIVar14->klass;
    uVar33 = 0;
    uVar34._0_1_ = (pIVar32->_1).rank;
    uVar34._1_1_ = (pIVar32->_1).minimumAlignment;
    if (uVar34 != 0) {
      uVar35 = uVar33;
      do {
        if (pIVar32->interfaceOffsets[uVar35].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          pVVar36 = &(pIVar32->vtable).get_Id + (pIVar32->interfaceOffsets[uVar35].offset + 8);
          goto code_?;
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 < uVar34);
    }
    pVVar36 = (VirtualInvokeData *)FUN_?(pIVar14,TypeInfo__ICubeModelCollider,8);
code_?:
    lVar37 = (*pVVar36->methodPtr)(pIVar14,pVVar36->method);
    if (lVar37 != 0) {
      uStack_4._0_4_ = (collisionState->localHitPoint).y;
      uStack_4._4_4_ = (collisionState->localHitPoint).z;
      uStack_5._0_4_ = (collisionState->localNormal).x;
      uStack_5._4_4_ = (collisionState->localNormal).y;
      (this->fields).chunkSize = *(int32_t *)(lVar37 + 0x48);
      fVar38 = localOrigin->y;
      fVar39 = localOrigin->z;
      (this->fields).intersectRay.m_Origin.x = localOrigin->x;
      (this->fields).intersectRay.m_Origin.y = fVar38;
      uStack_1._0_4_ = (collisionState->localOrigin).x;
      uStack_1._4_4_ = (collisionState->localOrigin).y;
      uStack_2 = *(undefined8 *)&(collisionState->localOrigin).z;
      (this->fields).intersectRay.m_Origin.z = fVar39;
      uStack_3 = *(undefined8 *)&(collisionState->elipsoidSpaceDirection).z;
      uVar6 = *(undefined8 *)&(collisionState->localNormal).z;
      uVar40 = (collisionState->localDirection).y;
      uVar41 = (collisionState->localDirection).z;
      uStack_9._0_4_ = (collisionState->origin).x;
      uStack_9._4_4_ = (collisionState->origin).y;
      uStack_10 = *(undefined8 *)&(collisionState->origin).z;
      uStack_11 = (undefined4)uVar6;
      fStack_12 = (float)((ulonglong)uVar6 >> 0x20);
      uStack_13._0_4_ = (collisionState->direction).y;
      uStack_13._4_4_ = (collisionState->direction).z;
      pIStack_31 = collisionState->cmb;
      uStack_15._0_4_ = (collisionState->localToElipsoidSpace).m00;
      uStack_15._4_4_ = (collisionState->localToElipsoidSpace).m10;
      uStack_16._0_4_ = (collisionState->localToElipsoidSpace).m20;
      uStack_16._4_4_ = (collisionState->localToElipsoidSpace).m30;
      uStack_17._0_4_ = (collisionState->localToElipsoidSpace).m01;
      uStack_17._4_4_ = (collisionState->localToElipsoidSpace).m11;
      uStack_18._0_4_ = (collisionState->localToElipsoidSpace).m21;
      uStack_18._4_4_ = (collisionState->localToElipsoidSpace).m31;
      uStack_21._0_4_ = (collisionState->localToElipsoidSpace).m02;
      uStack_21._4_4_ = (collisionState->localToElipsoidSpace).m12;
      uStack_22._0_4_ = (collisionState->localToElipsoidSpace).m22;
      uStack_22._4_4_ = (collisionState->localToElipsoidSpace).m32;
      uStack_19._0_4_ = (collisionState->localToElipsoidSpace).m03;
      uStack_19._4_4_ = (collisionState->localToElipsoidSpace).m13;
      uStack_20._0_4_ = (collisionState->localToElipsoidSpace).m23;
      uStack_20._4_4_ = (collisionState->localToElipsoidSpace).m33;
      uStack_23._0_4_ = collisionState->scanAxis;
      uStack_23._4_2_ = (collisionState->minBounds).x;
      uStack_23._6_2_ = (collisionState->minBounds).y;
      uStack_24 = *(undefined8 *)&(collisionState->minBounds).z;
      uStack_25._0_4_ = collisionState->firstHitScanAxis;
      uStack_25._4_1_ = collisionState->firstHitDetected;
      uStack_25._5_3_ = *(undefined3 *)&collisionState->field_0xa5;
      uStack_26._0_4_ = collisionState->scaledMaxRadius;
      uStack_26._4_4_ = (collisionState->elipsoidSpaceOrigin).x;
      uStack_27._0_4_ = (collisionState->elipsoidSpaceOrigin).y;
      uStack_27._4_4_ = (collisionState->elipsoidSpaceOrigin).z;
      uStack_28._0_4_ = (collisionState->elipsoidSpaceDirection).x;
      uStack_28._4_4_ = (collisionState->elipsoidSpaceDirection).y;
      VStack_42.y = (float)uVar40;
      VStack_42.x = fStack_12;
      VStack_42.z = (float)uVar41;
      fStack_29 = (float)uVar40;
      fStack_30 = (float)uVar41;
      fVar39 = (float)FUN_?(&VStack_42);
      if (_UNK_? < fVar39) {
        fVar38 = (float)uVar41 / fVar39;
        uVar6 = CONCAT44(fStack_29 / fVar39,fStack_12 / fVar39);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar43 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar6._0_4_ = (pVVar43->zeroVector).x;
        uVar6._4_4_ = (pVVar43->zeroVector).y;
        fVar38 = (pVVar43->zeroVector).z;
      }
      (this->fields).intersectRay.m_Direction.x = (float)(int)uVar6;
      (this->fields).intersectRay.m_Direction.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      (this->fields).intersectRay.m_Direction.z = fVar38;
      VStack_42.x = (this->fields).intersectRay.m_Origin.x;
      VStack_42.y = (this->fields).intersectRay.m_Origin.y;
      VStack_42.z = (this->fields).intersectRay.m_Origin.z;
      pIVar44 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                CubeMathFunctions_LocalPosToLocalIntVector
                          (aIStackX_18,&VStack_42,(MethodInfo *)0x0);
      uStack_45._0_4_ = (collisionState->localOrigin).x;
      uStack_45._4_4_ = (collisionState->localOrigin).y;
      uStack_46 = *(undefined8 *)&(collisionState->localOrigin).z;
      uStack_47._0_4_ = (collisionState->localHitPoint).y;
      uStack_47._4_4_ = (collisionState->localHitPoint).z;
      uStack_48._0_4_ = (collisionState->localNormal).x;
      uStack_48._4_4_ = (collisionState->localNormal).y;
      iVar49 = pIVar44->y;
      iVar50 = pIVar44->z;
      uStack_3 = *(undefined8 *)&(collisionState->elipsoidSpaceDirection).z;
      (this->fields).voxelPos.x = pIVar44->x;
      (this->fields).voxelPos.y = iVar49;
      (this->fields).voxelPos.z = iVar50;
      uStack_51 = *(undefined8 *)&(collisionState->localNormal).z;
      uStack_52._0_4_ = (collisionState->localDirection).y;
      uStack_52._4_4_ = (collisionState->localDirection).z;
      uStack_53._0_4_ = (collisionState->origin).x;
      uStack_53._4_4_ = (collisionState->origin).y;
      uStack_54 = *(undefined8 *)&(collisionState->origin).z;
      uStack_55._0_4_ = (collisionState->direction).y;
      uStack_55._4_4_ = (collisionState->direction).z;
      pIStack_56 = collisionState->cmb;
      uStack_57._0_4_ = (collisionState->localToElipsoidSpace).m00;
      uStack_57._4_4_ = (collisionState->localToElipsoidSpace).m10;
      uStack_58._0_4_ = (collisionState->localToElipsoidSpace).m20;
      uStack_58._4_4_ = (collisionState->localToElipsoidSpace).m30;
      uStack_59._0_4_ = (collisionState->localToElipsoidSpace).m01;
      uStack_59._4_4_ = (collisionState->localToElipsoidSpace).m11;
      uStack_60._0_4_ = (collisionState->localToElipsoidSpace).m21;
      uStack_60._4_4_ = (collisionState->localToElipsoidSpace).m31;
      uStack_61._0_4_ = (collisionState->localToElipsoidSpace).m02;
      uStack_61._4_4_ = (collisionState->localToElipsoidSpace).m12;
      uStack_62._0_4_ = (collisionState->localToElipsoidSpace).m22;
      uStack_62._4_4_ = (collisionState->localToElipsoidSpace).m32;
      uStack_63._0_4_ = (collisionState->localToElipsoidSpace).m03;
      uStack_63._4_4_ = (collisionState->localToElipsoidSpace).m13;
      uStack_64._0_4_ = (collisionState->localToElipsoidSpace).m23;
      uStack_64._4_4_ = (collisionState->localToElipsoidSpace).m33;
      uStack_65._0_4_ = collisionState->scanAxis;
      uStack_65._4_2_ = (collisionState->minBounds).x;
      uStack_65._6_2_ = (collisionState->minBounds).y;
      uStack_66 = *(undefined8 *)&(collisionState->minBounds).z;
      uStack_67._0_4_ = collisionState->firstHitScanAxis;
      uStack_67._4_1_ = collisionState->firstHitDetected;
      uStack_67._5_3_ = *(undefined3 *)&collisionState->field_0xa5;
      uStack_68._0_4_ = collisionState->scaledMaxRadius;
      uStack_68._4_4_ = (collisionState->elipsoidSpaceOrigin).x;
      uStack_69._0_4_ = (collisionState->elipsoidSpaceOrigin).y;
      uStack_69._4_4_ = (collisionState->elipsoidSpaceOrigin).z;
      uStack_70._0_4_ = (collisionState->elipsoidSpaceDirection).x;
      uStack_70._4_4_ = (collisionState->elipsoidSpaceDirection).y;
      uStack_1._0_4_ = (collisionState->localOrigin).x;
      uStack_1._4_4_ = (collisionState->localOrigin).y;
      uStack_2 = *(undefined8 *)&(collisionState->localOrigin).z;
      uStack_4._0_4_ = (collisionState->localHitPoint).y;
      uStack_4._4_4_ = (collisionState->localHitPoint).z;
      uStack_5._0_4_ = (collisionState->localNormal).x;
      uStack_5._4_4_ = (collisionState->localNormal).y;
      uVar6 = *(undefined8 *)&(collisionState->localNormal).z;
      uVar71 = (collisionState->localDirection).y;
      uVar72 = (collisionState->localDirection).z;
      uStack_9._0_4_ = (collisionState->origin).x;
      uStack_9._4_4_ = (collisionState->origin).y;
      uStack_10 = *(undefined8 *)&(collisionState->origin).z;
      uStack_11 = (undefined4)uVar6;
      fStack_12 = (float)((ulonglong)uVar6 >> 0x20);
      uStack_13._0_4_ = (collisionState->direction).y;
      uStack_13._4_4_ = (collisionState->direction).z;
      pIStack_31 = collisionState->cmb;
      uStack_15._0_4_ = (collisionState->localToElipsoidSpace).m00;
      uStack_15._4_4_ = (collisionState->localToElipsoidSpace).m10;
      uStack_16._0_4_ = (collisionState->localToElipsoidSpace).m20;
      uStack_16._4_4_ = (collisionState->localToElipsoidSpace).m30;
      uStack_17._0_4_ = (collisionState->localToElipsoidSpace).m01;
      uStack_17._4_4_ = (collisionState->localToElipsoidSpace).m11;
      uStack_18._0_4_ = (collisionState->localToElipsoidSpace).m21;
      uStack_18._4_4_ = (collisionState->localToElipsoidSpace).m31;
      uStack_21._0_4_ = (collisionState->localToElipsoidSpace).m02;
      uStack_21._4_4_ = (collisionState->localToElipsoidSpace).m12;
      uStack_22._0_4_ = (collisionState->localToElipsoidSpace).m22;
      uStack_22._4_4_ = (collisionState->localToElipsoidSpace).m32;
      uStack_19._0_4_ = (collisionState->localToElipsoidSpace).m03;
      uStack_19._4_4_ = (collisionState->localToElipsoidSpace).m13;
      uStack_20._0_4_ = (collisionState->localToElipsoidSpace).m23;
      uStack_20._4_4_ = (collisionState->localToElipsoidSpace).m33;
      uStack_23._0_4_ = collisionState->scanAxis;
      uStack_23._4_2_ = (collisionState->minBounds).x;
      uStack_23._6_2_ = (collisionState->minBounds).y;
      uStack_24 = *(undefined8 *)&(collisionState->minBounds).z;
      uStack_25._0_4_ = collisionState->firstHitScanAxis;
      uStack_25._4_1_ = collisionState->firstHitDetected;
      uStack_25._5_3_ = *(undefined3 *)&collisionState->field_0xa5;
      uStack_26._0_4_ = collisionState->scaledMaxRadius;
      uStack_26._4_4_ = (collisionState->elipsoidSpaceOrigin).x;
      uStack_27._0_4_ = (collisionState->elipsoidSpaceOrigin).y;
      uStack_27._4_4_ = (collisionState->elipsoidSpaceOrigin).z;
      uStack_28._0_4_ = (collisionState->elipsoidSpaceDirection).x;
      uStack_28._4_4_ = (collisionState->elipsoidSpaceDirection).y;
      fStack_29 = (float)uVar71;
      fStack_30 = (float)uVar72;
      uStack_73 = uStack_3;
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar49 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&(this->fields).voxelPos,(int32_t)uStack_23,(MethodInfo *)0x0);
      uStack_1._0_4_ = (collisionState->localOrigin).x;
      uStack_1._4_4_ = (collisionState->localOrigin).y;
      uStack_2 = *(undefined8 *)&(collisionState->localOrigin).z;
      uStack_4._0_4_ = (collisionState->localHitPoint).y;
      uStack_4._4_4_ = (collisionState->localHitPoint).z;
      uStack_5._0_4_ = (collisionState->localNormal).x;
      uStack_5._4_4_ = (collisionState->localNormal).y;
      uStack_3 = *(undefined8 *)&(collisionState->elipsoidSpaceDirection).z;
      uVar6 = *(undefined8 *)&(collisionState->localNormal).z;
      uVar74 = (collisionState->localDirection).y;
      uVar75 = (collisionState->localDirection).z;
      uStack_9._0_4_ = (collisionState->origin).x;
      uStack_9._4_4_ = (collisionState->origin).y;
      uStack_10 = *(undefined8 *)&(collisionState->origin).z;
      uStack_11 = (undefined4)uVar6;
      fStack_12 = (float)((ulonglong)uVar6 >> 0x20);
      uStack_13._0_4_ = (collisionState->direction).y;
      uStack_13._4_4_ = (collisionState->direction).z;
      pIStack_31 = collisionState->cmb;
      uStack_15._0_4_ = (collisionState->localToElipsoidSpace).m00;
      uStack_15._4_4_ = (collisionState->localToElipsoidSpace).m10;
      uStack_16._0_4_ = (collisionState->localToElipsoidSpace).m20;
      uStack_16._4_4_ = (collisionState->localToElipsoidSpace).m30;
      uStack_17._0_4_ = (collisionState->localToElipsoidSpace).m01;
      uStack_17._4_4_ = (collisionState->localToElipsoidSpace).m11;
      uStack_18._0_4_ = (collisionState->localToElipsoidSpace).m21;
      uStack_18._4_4_ = (collisionState->localToElipsoidSpace).m31;
      uStack_21._0_4_ = (collisionState->localToElipsoidSpace).m02;
      uStack_21._4_4_ = (collisionState->localToElipsoidSpace).m12;
      uStack_22._0_4_ = (collisionState->localToElipsoidSpace).m22;
      uStack_22._4_4_ = (collisionState->localToElipsoidSpace).m32;
      uStack_19._0_4_ = (collisionState->localToElipsoidSpace).m03;
      uStack_19._4_4_ = (collisionState->localToElipsoidSpace).m13;
      uStack_20._0_4_ = (collisionState->localToElipsoidSpace).m23;
      uStack_20._4_4_ = (collisionState->localToElipsoidSpace).m33;
      uStack_23._0_4_ = collisionState->scanAxis;
      uStack_23._4_2_ = (collisionState->minBounds).x;
      uStack_23._6_2_ = (collisionState->minBounds).y;
      uStack_24 = *(undefined8 *)&(collisionState->minBounds).z;
      uStack_25._0_4_ = collisionState->firstHitScanAxis;
      uStack_25._4_1_ = collisionState->firstHitDetected;
      uStack_25._5_3_ = *(undefined3 *)&collisionState->field_0xa5;
      uStack_26._0_4_ = collisionState->scaledMaxRadius;
      uStack_26._4_4_ = (collisionState->elipsoidSpaceOrigin).x;
      uStack_27._0_4_ = (collisionState->elipsoidSpaceOrigin).y;
      uStack_27._4_4_ = (collisionState->elipsoidSpaceOrigin).z;
      uStack_28._0_4_ = (collisionState->elipsoidSpaceDirection).x;
      uStack_28._4_4_ = (collisionState->elipsoidSpaceDirection).y;
      fStack_29 = (float)uVar74;
      fStack_30 = (float)uVar75;
      iVar50 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->minBounds,(int32_t)uStack_23,(MethodInfo *)0x0);
      uStack_1._0_4_ = (collisionState->localOrigin).x;
      uStack_1._4_4_ = (collisionState->localOrigin).y;
      uStack_2 = *(undefined8 *)&(collisionState->localOrigin).z;
      uStack_4._0_4_ = (collisionState->localHitPoint).y;
      uStack_4._4_4_ = (collisionState->localHitPoint).z;
      uStack_5._0_4_ = (collisionState->localNormal).x;
      uStack_5._4_4_ = (collisionState->localNormal).y;
      uStack_3 = *(undefined8 *)&(collisionState->elipsoidSpaceDirection).z;
      uVar6 = *(undefined8 *)&(collisionState->localNormal).z;
      uVar76 = (collisionState->localDirection).y;
      uVar77 = (collisionState->localDirection).z;
      uStack_9._0_4_ = (collisionState->origin).x;
      uStack_9._4_4_ = (collisionState->origin).y;
      uStack_10 = *(undefined8 *)&(collisionState->origin).z;
      uStack_11 = (undefined4)uVar6;
      fStack_12 = (float)((ulonglong)uVar6 >> 0x20);
      uStack_13._0_4_ = (collisionState->direction).y;
      uStack_13._4_4_ = (collisionState->direction).z;
      pIStack_31 = collisionState->cmb;
      uStack_15._0_4_ = (collisionState->localToElipsoidSpace).m00;
      uStack_15._4_4_ = (collisionState->localToElipsoidSpace).m10;
      uStack_16._0_4_ = (collisionState->localToElipsoidSpace).m20;
      uStack_16._4_4_ = (collisionState->localToElipsoidSpace).m30;
      uStack_17._0_4_ = (collisionState->localToElipsoidSpace).m01;
      uStack_17._4_4_ = (collisionState->localToElipsoidSpace).m11;
      uStack_18._0_4_ = (collisionState->localToElipsoidSpace).m21;
      uStack_18._4_4_ = (collisionState->localToElipsoidSpace).m31;
      uStack_21._0_4_ = (collisionState->localToElipsoidSpace).m02;
      uStack_21._4_4_ = (collisionState->localToElipsoidSpace).m12;
      uStack_22._0_4_ = (collisionState->localToElipsoidSpace).m22;
      uStack_22._4_4_ = (collisionState->localToElipsoidSpace).m32;
      uStack_19._0_4_ = (collisionState->localToElipsoidSpace).m03;
      uStack_19._4_4_ = (collisionState->localToElipsoidSpace).m13;
      uStack_20._0_4_ = (collisionState->localToElipsoidSpace).m23;
      uStack_20._4_4_ = (collisionState->localToElipsoidSpace).m33;
      uStack_23._0_4_ = collisionState->scanAxis;
      uStack_23._4_2_ = (collisionState->minBounds).x;
      uStack_23._6_2_ = (collisionState->minBounds).y;
      uStack_24 = *(undefined8 *)&(collisionState->minBounds).z;
      uStack_25._0_4_ = collisionState->firstHitScanAxis;
      uStack_25._4_1_ = collisionState->firstHitDetected;
      uStack_25._5_3_ = *(undefined3 *)&collisionState->field_0xa5;
      uStack_26._0_4_ = collisionState->scaledMaxRadius;
      uStack_26._4_4_ = (collisionState->elipsoidSpaceOrigin).x;
      uStack_27._0_4_ = (collisionState->elipsoidSpaceOrigin).y;
      uStack_27._4_4_ = (collisionState->elipsoidSpaceOrigin).z;
      uStack_28._0_4_ = (collisionState->elipsoidSpaceDirection).x;
      uStack_28._4_4_ = (collisionState->elipsoidSpaceDirection).y;
      fStack_29 = (float)uVar76;
      fStack_30 = (float)uVar77;
      iVar78 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                         (&collisionState->maxBounds,(int32_t)uStack_23,(MethodInfo *)0x0);
      if ((iVar50 <= iVar49) && (iVar50 = iVar49, iVar78 < iVar49)) {
        iVar50 = iVar78;
      }
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
                (&(this->fields).voxelPos,(int32_t)uStack_65,iVar50,(MethodInfo *)0x0);
      iVar50 = (this->fields).voxelPos.z;
      uStack_45._0_4_ = (collisionState->localOrigin).x;
      uStack_45._4_4_ = (collisionState->localOrigin).y;
      uStack_46 = *(undefined8 *)&(collisionState->localOrigin).z;
      uStack_47._0_4_ = (collisionState->localHitPoint).y;
      uStack_47._4_4_ = (collisionState->localHitPoint).z;
      uStack_48._0_4_ = (collisionState->localNormal).x;
      uStack_48._4_4_ = (collisionState->localNormal).y;
      aIStackX_18[0].x = (this->fields).voxelPos.x;
      aIStackX_18[0].y = (this->fields).voxelPos.y;
      (this->fields).localChunkSpaceVoxelPos.x = aIStackX_18[0].x;
      (this->fields).localChunkSpaceVoxelPos.y = aIStackX_18[0].y;
      uStack_73 = *(undefined8 *)&(collisionState->elipsoidSpaceDirection).z;
      (this->fields).localChunkSpaceVoxelPos.z = iVar50;
      uStack_51 = *(undefined8 *)&(collisionState->localNormal).z;
      uStack_52._0_4_ = (collisionState->localDirection).y;
      uStack_52._4_4_ = (collisionState->localDirection).z;
      uStack_53._0_4_ = (collisionState->origin).x;
      uStack_53._4_4_ = (collisionState->origin).y;
      uStack_54 = *(undefined8 *)&(collisionState->origin).z;
      uStack_55._0_4_ = (collisionState->direction).y;
      uStack_55._4_4_ = (collisionState->direction).z;
      pIVar14 = collisionState->cmb;
      uStack_57._0_4_ = (collisionState->localToElipsoidSpace).m00;
      uStack_57._4_4_ = (collisionState->localToElipsoidSpace).m10;
      uStack_58._0_4_ = (collisionState->localToElipsoidSpace).m20;
      uStack_58._4_4_ = (collisionState->localToElipsoidSpace).m30;
      uStack_59._0_4_ = (collisionState->localToElipsoidSpace).m01;
      uStack_59._4_4_ = (collisionState->localToElipsoidSpace).m11;
      uStack_60._0_4_ = (collisionState->localToElipsoidSpace).m21;
      uStack_60._4_4_ = (collisionState->localToElipsoidSpace).m31;
      uStack_61._0_4_ = (collisionState->localToElipsoidSpace).m02;
      uStack_61._4_4_ = (collisionState->localToElipsoidSpace).m12;
      uStack_62._0_4_ = (collisionState->localToElipsoidSpace).m22;
      uStack_62._4_4_ = (collisionState->localToElipsoidSpace).m32;
      uStack_63._0_4_ = (collisionState->localToElipsoidSpace).m03;
      uStack_63._4_4_ = (collisionState->localToElipsoidSpace).m13;
      uStack_64._0_4_ = (collisionState->localToElipsoidSpace).m23;
      uStack_64._4_4_ = (collisionState->localToElipsoidSpace).m33;
      uStack_65._0_4_ = collisionState->scanAxis;
      uStack_65._4_2_ = (collisionState->minBounds).x;
      uStack_65._6_2_ = (collisionState->minBounds).y;
      uStack_66 = *(undefined8 *)&(collisionState->minBounds).z;
      uStack_67._0_4_ = collisionState->firstHitScanAxis;
      uStack_67._4_1_ = collisionState->firstHitDetected;
      uStack_67._5_3_ = *(undefined3 *)&collisionState->field_0xa5;
      uStack_68._0_4_ = collisionState->scaledMaxRadius;
      uStack_68._4_4_ = (collisionState->elipsoidSpaceOrigin).x;
      uStack_69._0_4_ = (collisionState->elipsoidSpaceOrigin).y;
      uStack_69._4_4_ = (collisionState->elipsoidSpaceOrigin).z;
      uStack_70._0_4_ = (collisionState->elipsoidSpaceDirection).x;
      uStack_70._4_4_ = (collisionState->elipsoidSpaceDirection).y;
      pIStack_56 = pIVar14;
      if (pIVar14 != (ICubeModelCollider *)0x0) {
        pIVar32 = pIVar14->klass;
        uVar35._0_1_ = (pIVar32->_1).rank;
        uVar35._1_1_ = (pIVar32->_1).minimumAlignment;
        if (uVar35 != 0) {
          do {
            if (pIVar32->interfaceOffsets[uVar33].interfaceType ==
                (Il2CppClass *)TypeInfo__ICubeModelCollider) {
              pVVar36 = &(pIVar32->vtable).get_Id + (pIVar32->interfaceOffsets[uVar33].offset + 9);
              goto code_?;
            }
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar35);
        }
        pVVar36 = (VirtualInvokeData *)FUN_?(pIVar14,TypeInfo__ICubeModelCollider,9);
code_?:
        (*pVVar36->methodPtr)(pIVar14,&(this->fields).localChunkSpaceVoxelPos,pVVar36->method);
        VStack_42.x = (this->fields).intersectRay.m_Direction.x;
        VStack_42.y = (this->fields).intersectRay.m_Direction.y;
        VStack_42.z = (this->fields).intersectRay.m_Direction.z;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar79 = mscorlib.dll::System::Math::Math_Sign_2(VStack_42.x,(MethodInfo *)0x0);
        (this->fields).stepX = iVar79;
        VStack_42.z = (this->fields).intersectRay.m_Direction.z;
        VStack_42.x = (this->fields).intersectRay.m_Direction.x;
        VStack_42.y = (this->fields).intersectRay.m_Direction.y;
        iVar79 = mscorlib.dll::System::Math::Math_Sign_2(VStack_42.y,(MethodInfo *)0x0);
        (this->fields).stepY = iVar79;
        VStack_42.x = (this->fields).intersectRay.m_Direction.x;
        VStack_42.y = (this->fields).intersectRay.m_Direction.y;
        iVar79 = mscorlib.dll::System::Math::Math_Sign_2
                           ((this->fields).intersectRay.m_Direction.z,(MethodInfo *)0x0);
        (this->fields).stepZ = iVar79;
        fVar39 = _UNK_?;
        iVar80 = (this->fields).stepX;
        iVar81 = (this->fields).stepY;
        sVar82 = (this->fields).voxelPos.x;
        sVar83 = (this->fields).voxelPos.y;
        sVar84 = (this->fields).voxelPos.z;
        (this->fields).tMax.x = _UNK_?;
        (this->fields).tMax.y = fVar39;
        (this->fields).tMax.z = fVar39;
        uVar85 = (this->fields).intersectRay.m_Direction.x;
        if ((float)uVar85 != 0.0) {
          uVar86 = (this->fields).intersectRay.m_Origin.x;
          (this->fields).tMax.x =
               ((float)(int)((int)sVar82 + (uint)(0 < iVar80)) - ((float)uVar86 + _UNK_?)) /
               (float)uVar85;
        }
        uVar87 = (this->fields).intersectRay.m_Direction.y;
        if ((float)uVar87 != 0.0) {
          (this->fields).tMax.y =
               ((float)(int)((int)sVar83 + (uint)(0 < iVar81)) -
               ((this->fields).intersectRay.m_Origin.y + _UNK_?)) / (float)uVar87;
        }
        if ((this->fields).intersectRay.m_Direction.z != 0.0) {
          (this->fields).tMax.z =
               ((float)(int)((uint)(0 < iVar79) + (int)sVar84) -
               ((this->fields).intersectRay.m_Origin.z + _UNK_?)) /
               (this->fields).intersectRay.m_Direction.z;
        }
        fVar88 = (this->fields).tMax.y;
        fVar38 = (this->fields).tMax.z;
        (this->fields).initialtMax.x = (this->fields).tMax.x;
        (this->fields).initialtMax.y = fVar88;
        (this->fields).tDelta.x = fVar39;
        (this->fields).tDelta.y = fVar39;
        (this->fields).tDelta.z = fVar39;
        (this->fields).initialtMax.z = fVar38;
        uVar89 = (this->fields).intersectRay.m_Direction.x;
        if ((float)uVar89 != 0.0) {
          (this->fields).tDelta.x = (float)(this->fields).stepX / (float)uVar89;
        }
        if ((this->fields).intersectRay.m_Direction.y != 0.0) {
          (this->fields).tDelta.y =
               (float)(this->fields).stepY / (this->fields).intersectRay.m_Direction.y;
        }
        fVar39 = (this->fields).intersectRay.m_Direction.z;
        if (fVar39 != 0.0) {
          (this->fields).tDelta.z = (float)(this->fields).stepZ / fVar39;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar90 = (code *)swi(3);
  (*pcVar90)();
  return;
}


/* Boolean Step() */

bool Assembly-CSharp.dll::CellTraverser::CellTraverser_Step(CellTraverser *this,MethodInfo *method)

{
  fVar1 = (this->fields).tMax.y;
  pVVar2 = &(this->fields).tMax;
  bVar3 = 1;
  if ((pVVar2->x <= fVar1 && fVar1 != pVVar2->x) &&
     (fVar1 = (this->fields).tMax.z, pVVar2 = &(this->fields).tMax,
     pVVar2->x <= fVar1 && fVar1 != pVVar2->x)) {
    sVar4 = (short)(this->fields).stepX;
    pIVar5 = &(this->fields).localChunkSpaceVoxelPos;
    pIVar5->x = pIVar5->x + sVar4;
    pIVar5 = &(this->fields).voxelPos;
    pIVar5->x = pIVar5->x + sVar4;
    (this->fields).tMax.x = (this->fields).tDelta.x + (this->fields).tMax.x;
    if (((int)(this->fields).localChunkSpaceVoxelPos.x == (this->fields).chunkSize) ||
       ((this->fields).localChunkSpaceVoxelPos.x < 0)) {
      bVar3 = 0;
    }
    (this->fields).stepDir.x = (int16_t)(this->fields).stepX;
    (this->fields).stepDir.y = 0;
    (this->fields).stepDir.z = 0;
    return bVar3;
  }
  fVar1 = (this->fields).tMax.z;
  pfVar6 = &(this->fields).tMax.y;
  if (fVar1 < *pfVar6 || fVar1 == *pfVar6) {
    sVar4 = (short)(this->fields).stepZ;
    piVar7 = &(this->fields).localChunkSpaceVoxelPos.z;
    *piVar7 = *piVar7 + sVar4;
    piVar7 = &(this->fields).voxelPos.z;
    *piVar7 = *piVar7 + sVar4;
    sVar4 = (this->fields).localChunkSpaceVoxelPos.z;
    (this->fields).tMax.z = (this->fields).tDelta.z + (this->fields).tMax.z;
    if (((int)sVar4 == (this->fields).chunkSize) || ((this->fields).localChunkSpaceVoxelPos.z < 0))
    {
      bVar3 = 0;
    }
    (this->fields).stepDir.x = 0;
    (this->fields).stepDir.y = 0;
    (this->fields).stepDir.z = (int16_t)(this->fields).stepZ;
    return bVar3;
  }
  sVar4 = (short)(this->fields).stepY;
  piVar7 = &(this->fields).localChunkSpaceVoxelPos.y;
  *piVar7 = *piVar7 + sVar4;
  piVar7 = &(this->fields).voxelPos.y;
  *piVar7 = *piVar7 + sVar4;
  sVar4 = (this->fields).localChunkSpaceVoxelPos.y;
  (this->fields).tMax.y = (this->fields).tDelta.y + (this->fields).tMax.y;
  if (((int)sVar4 == (this->fields).chunkSize) || ((this->fields).localChunkSpaceVoxelPos.y < 0)) {
    bVar3 = 0;
  }
  (this->fields).stepDir.x = 0;
  (this->fields).stepDir.y = (int16_t)(this->fields).stepY;
  (this->fields).stepDir.z = 0;
  return bVar3;
}


/* CellTraverser() */

void Assembly-CSharp.dll::CellTraverser::CellTraverser__ctor(CellTraverser *this,MethodInfo *method)

{
  (this->fields).voxelPos.x = 0;
  (this->fields).voxelPos.y = 0;
  (this->fields).voxelPos.z = 0;
  return;
}


/* IntVector get_StepDir() */

IntVector *
Assembly-CSharp.dll::CellTraverser::CellTraverser_get_StepDir
          (IntVector *__return_storage_ptr__,CellTraverser *this,MethodInfo *method)

{
  iVar1 = (this->fields).stepDir.y;
  __return_storage_ptr__->x = (this->fields).stepDir.x;
  __return_storage_ptr__->y = iVar1;
  __return_storage_ptr__->z = (this->fields).stepDir.z;
  return __return_storage_ptr__;
}


/* IntVector get_VoxelPos() */

IntVector *
Assembly-CSharp.dll::CellTraverser::CellTraverser_get_VoxelPos
          (IntVector *__return_storage_ptr__,CellTraverser *this,MethodInfo *method)

{
  iVar1 = (this->fields).voxelPos.y;
  __return_storage_ptr__->x = (this->fields).voxelPos.x;
  __return_storage_ptr__->y = iVar1;
  __return_storage_ptr__->z = (this->fields).voxelPos.z;
  return __return_storage_ptr__;
}

