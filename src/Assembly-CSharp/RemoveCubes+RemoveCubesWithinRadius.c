
/* RemoveCubes+RemoveCubesWithinRadius+DestructionState CalculateCubeDestruction(IntVector,
   CubeBase, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
          (IntVector *cubePos,CubeBase *cubeBase,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cubeBase != (CubeBase *)0x0) &&
     (pBVar1 = (cubeBase->fields).faceMaterials, pBVar1 != (Byte__Array *)0x0)) {
    if ((int)pBVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      RVar3 = (*pcVar2)();
      return RVar3;
    }
    if (getPhysicalProperites != (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0) {
      lVar4 = (*(getPhysicalProperites->fields)._._.invoke_impl)
                        (auStack_5,(getPhysicalProperites->fields)._._.method_code,
                         pBVar1->vector[0],(getPhysicalProperites->fields)._._.method);
      toughness = *(float *)(lVar4 + 0x10);
      if (toughness == 0.0) {
        return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
      }
      uVar6 = cubePos->y;
      pRVar7 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
      auStack_5[0]._0_4_ = (pRVar7->localPosition).x;
      auStack_5[0]._4_4_ = (pRVar7->localPosition).y;
      fVar8 = (float)(int)cubePos->x - (float)(undefined4)auStack_5[0];
      fVar9 = (float)(int)cubePos->z - (pRVar7->localPosition).z;
      iVar10 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType;
      fVar9 = ((float)(int)(short)uVar6 - (float)auStack_5[0]._4_4_) *
              ((float)(int)(short)uVar6 - (float)auStack_5[0]._4_4_) + fVar8 * fVar8 +
              fVar9 * fVar9;
      if (iVar10 == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pRVar7 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
        if (toughness < pRVar7->centerDamage) {
          if (fVar9 < pRVar7->localRadiusReducedSquared) {
            return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
          }
          if (fVar9 < pRVar7->localRadiusExtendedSquared) {
            return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
          }
        }
      }
      else if (iVar10 == 1) {
        RVar3 = RemoveCubes_RemoveCubesWithinRadius_LinearDestruction
                          (fVar9,toughness,(MethodInfo *)0x0);
        return RVar3;
      }
      return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  RVar3 = (*pcVar2)();
  return RVar3;
}


/* Void CalculateLocalValues(MVCubeModelBase, Single, IntVector) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
               (MVCubeModelBase *cm,float radius,IntVector *localCenterPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cm == (MVCubeModelBase *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar2 = (undefined8 *)(*(cm->klass->vtable).get_Scale.methodPtr)(&uStack_3,cm);
  uStack_3 = *puVar2;
  fVar4 = radius / (float)uStack_3;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = _UNK_?;
  fVar6 = fVar4 - _UNK_?;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  if (fVar6 < _UNK_?) {
    fVar6 = 0.0;
  }
  if (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType == 1) {
    centerDamage = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->centerDamage;
    if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
    RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
              (fVar4,centerDamage,(MethodInfo *)0x0);
  }
  fVar4 = fVar4 + fVar5;
  TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->localRadiusExtendedSquared =
       fVar4 * fVar4;
  TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->localRadiusReducedSquared =
       fVar6 * fVar6;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar7 = TypeInfo__MV__WorldObject__IntVector->static_fields;
  uVar8 = (pIVar7->One).x;
  uVar9 = (pIVar7->One).y;
  sVar10 = localCenterPosition->z;
  sVar11 = (short)(int)fVar4 * uVar8;
  sVar12 = (short)(int)fVar4 * uVar9;
  sVar13 = (short)(int)fVar4 * (pIVar7->One).z;
  uVar14 = localCenterPosition->x;
  uVar15 = localCenterPosition->y;
  pRVar16 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
  (pRVar16->localMin).x = uVar14 - sVar11;
  (pRVar16->localMin).y = uVar15 - sVar12;
  (pRVar16->localMin).z = sVar10 - sVar13;
  pIVar7 = TypeInfo__MV__WorldObject__IntVector->static_fields;
  uVar17 = (pIVar7->One).x;
  uVar18 = (pIVar7->One).y;
  sVar10 = (pIVar7->One).z;
  pRVar16 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
  (pRVar16->iterationBounds).x = sVar11 * 2 + uVar17;
  (pRVar16->iterationBounds).y = sVar12 * 2 + uVar18;
  (pRVar16->iterationBounds).z = sVar13 * 2 + sVar10;
  return;
}


/* Boolean CubeCornersEqual(Byte[], Byte[]) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_CubeCornersEqual
               (Byte__Array *corners0,Byte__Array *corners1,MethodInfo *method)

{
  puVar1 = corners0->vector;
  uVar2 = 0;
  while (corners0 != (Byte__Array *)0x0) {
    if ((uint)corners0->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if (corners1 == (Byte__Array *)0x0) break;
    if ((uint)corners1->max_length <= uVar2) goto code_?;
    if (*puVar1 != puVar1[(longlong)corners1 - (longlong)corners0]) {
      return 0;
    }
    puVar1 = puVar1 + 1;
    uVar2 = uVar2 + 1;
    if (7 < (longlong)(puVar1 + (-0x20 - (longlong)corners0))) {
      return 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* RemoveCubes+RemoveCubesWithinRadius+RemoveStyle HandleCubeOnRadiusLimit(MVCubeModelBase, Int32,
   IntVector, Boolean, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
          (MVCubeModelBase *wo,int32_t x,IntVector *pos,bool fromDestroyToNotDestroy,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__IntVector);
  }
  iVar1 = (int)(TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x /
          2;
  sVar2 = 1;
  if (x < iVar1) {
    sVar2 = -1;
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__IntVector);
  }
  iVar3 = pos->z;
  IStackX_8.x = pos->x;
  IStackX_8.y = pos->y;
  uVar4._2_2_ = IStackX_8.y;
  uVar4._0_2_ = IStackX_8.x + sVar2;
  IStackX_8.z = iVar3;
  if ((wo != (MVCubeModelBase *)0x0) &&
     (this = (wo->fields).prototypeCubeModel, this != (RuntimePrototypeCubeModel *)0x0)) {
    IStackX_8._0_4_ = uVar4;
    cubeBase = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                         (this,&IStackX_8,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((cubeBase == (Cube *)0x0) ||
       (IStackX_8._0_4_ = uVar4, IStackX_8.z = iVar3,
       RVar5 = RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                         (&IStackX_8,(CubeBase *)cubeBase,getPhysicalProperites,(MethodInfo *)0x0),
       RVar5 != RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed)) {
      RVar6 = RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely;
    }
    else if (fromDestroyToNotDestroy == 0) {
      RVar6 = RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_OnEdgeLeftUp;
      if (x < iVar1) {
        RVar6 = (sVar2 != -1) + RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_OnEdgeLeftDown
        ;
      }
    }
    else if (x < iVar1) {
      RVar6 = RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely;
      if (sVar2 == -1) {
        RVar6 = RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_OnEdgeRightDown;
      }
    }
    else {
      RVar6 = RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_OnEdgeRightUp;
    }
    return RVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  RVar6 = (*pcVar7)();
  return RVar6;
}


/* Boolean HandleRemoveCubes(MVCubeModelBase, Single, IntVector, Single, DamageFallOffType,
   MVCubeModelBase, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
               (MVCubeModelBase *cm,float radius,IntVector *fineGrainedTerrainLocalPos,
               float centerDamage,DamageFallOffType__Enum damageFallOffType,
               MVCubeModelBase *fineGrainedTerrainWorldObject,
               Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->centerDamage = centerDamage;
  TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType =
       damageFallOffType;
  if (cm != (MVCubeModelBase *)0x0) {
    if ((cm->fields)._._.type == 8) {
      IStackX_8.x = fineGrainedTerrainLocalPos->x;
      IStackX_8.y = fineGrainedTerrainLocalPos->y;
      IStackX_8.z = fineGrainedTerrainLocalPos->z;
      uVar1._0_2_ = fineGrainedTerrainLocalPos->x;
      uVar1._2_2_ = fineGrainedTerrainLocalPos->y;
      uStack_2 = CONCAT44(uStack_2._4_4_,uVar1);
      iVar3 = (int)IStackX_8.y;
      sVar4 = fineGrainedTerrainLocalPos->z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_2._0_4_ = (pVVar5->oneVector).x;
      uStack_2._4_4_ = (pVVar5->oneVector).y;
      fVar6 = ((float)iVar3 - (float)uStack_2._4_4_ * _UNK_?) * _UNK_?;
      fVar7 = ((float)(int)sVar4 - (pVVar5->oneVector).z * _UNK_?) * _UNK_?;
      pRVar8 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
      (pRVar8->localPosition).x =
           ((float)(int)(short)(undefined2)uVar1 - (float)(undefined4)uStack_2 * _UNK_?) *
           _UNK_?;
      (pRVar8->localPosition).y = fVar6;
      (pRVar8->localPosition).z = fVar7;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (fineGrainedTerrainWorldObject == (MVCubeModelBase *)0x0) goto code_?;
      puVar9 = (undefined8 *)
                FUN_?(&uStack_2,0,TypeInfo__MV__WorldObject__ICubeModel,
                              fineGrainedTerrainWorldObject);
      uVar10 = *puVar9;
      uStack_11 = *(undefined4 *)(puVar9 + 1);
      uStack_2 = uVar10;
      puVar9 = (undefined8 *)FUN_?(&uStack_2,0,TypeInfo__MV__WorldObject__ICubeModel);
      IStackX_8.x = fineGrainedTerrainLocalPos->x;
      IStackX_8.y = fineGrainedTerrainLocalPos->y;
      fVar7 = (float)uVar10 / (float)*puVar9;
      IStackX_8.z = fineGrainedTerrainLocalPos->z;
      uVar12._0_2_ = fineGrainedTerrainLocalPos->x;
      uVar12._2_2_ = fineGrainedTerrainLocalPos->y;
      uStack_2._4_4_ = (undefined4)((ulonglong)*puVar9 >> 0x20);
      uStack_2 = CONCAT44(uStack_2._4_4_,uVar12);
      fVar6 = (float)func_?((float)(int)(short)(undefined2)uVar12 * fVar7);
      uStack_2 = CONCAT62(uStack_2._2_6_,(short)(int)fVar6);
      fVar6 = (float)func_?((float)(int)IStackX_8.y * fVar7);
      uStack_2._0_4_ = CONCAT22((short)(int)fVar6,(int16_t)uStack_2);
      fVar6 = (float)func_?((float)(int)fineGrainedTerrainLocalPos->z * fVar7);
      uVar10 = uStack_2;
      IStackX_8.x = (int16_t)uStack_2;
      IStackX_8.y = uStack_2._2_2_;
      IStackX_8.z = (int16_t)(int)fVar6;
      uStack_2 = uVar10;
      RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
                (cm,radius,&IStackX_8,(MethodInfo *)0x0);
      RemoveCubes_RemoveCubesWithinRadius_RemoveCubesTerrain
                (cm,fineGrainedTerrainWorldObject,getPhysicalProperites,(MethodInfo *)0x0);
    }
    uVar13 = fineGrainedTerrainLocalPos->y;
    sVar4 = fineGrainedTerrainLocalPos->z;
    pRVar8 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    IStackX_8.x = fineGrainedTerrainLocalPos->x;
    IStackX_8.y = fineGrainedTerrainLocalPos->y;
    IStackX_8.z = fineGrainedTerrainLocalPos->z;
    (pRVar8->localPosition).x = (float)(int)fineGrainedTerrainLocalPos->x;
    (pRVar8->localPosition).y = (float)(int)(short)uVar13;
    (pRVar8->localPosition).z = (float)(int)sVar4;
    RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
              (fineGrainedTerrainWorldObject,radius,&IStackX_8,(MethodInfo *)0x0);
    bVar14 = RemoveCubes_RemoveCubesWithinRadius_RemoveCubesSmooth
                      (fineGrainedTerrainWorldObject,getPhysicalProperites,(MethodInfo *)0x0);
    return bVar14;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
}


/* RemoveCubes+RemoveCubesWithinRadius+DestructionState LinearDestruction(Single, Single) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_LinearDestruction
          (float testDistSqr,float toughness,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
          numFallOffValues;
  uVar2 = uVar1 - 1;
  if (-1 < (int)uVar2) {
    lVar3 = (longlong)(int)uVar2 * 8;
    pRVar4 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
    do {
      if (*(int *)&(pRVar4->_1).field_0x1c == 0) {
        FUN_?();
        pRVar4 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
      }
      pRVar5 = pRVar4->static_fields->fallOffValues;
      if (pRVar5 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        RVar7 = (*pcVar6)();
        return RVar7;
      }
      if ((uint)pRVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        RVar7 = (*pcVar6)();
        return RVar7;
      }
      if (testDistSqr < *(float *)((longlong)&pRVar5->vector[0].squaredDistance + lVar3)) {
        if (*(int *)&(pRVar4->_1).field_0x1c == 0) {
          FUN_?();
          pRVar4 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
        }
        pRVar5 = pRVar4->static_fields->fallOffValues;
        if (pRVar5 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
        goto code_?;
        if ((uint)pRVar5->max_length <= uVar2) goto code_?;
        fVar8 = *(float *)((longlong)&pRVar5->vector[0].damage + lVar3);
        fVar9 = 0.0;
        if ((int)uVar2 < pRVar4->static_fields->numFallOffValues + -1) {
          if (*(int *)&(pRVar4->_1).field_0x1c == 0) {
            FUN_?();
            pRVar4 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
          }
          pRVar5 = pRVar4->static_fields->fallOffValues;
          if (pRVar5 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0
             ) goto code_?;
          if ((uint)pRVar5->max_length <= uVar1) goto code_?;
          fVar9 = *(float *)((longlong)&pRVar5->vector[1].damage + lVar3);
        }
        if (toughness < fVar9) {
          return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
        }
        if (toughness < fVar8) {
          return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
        }
      }
      uVar1 = uVar1 - 1;
      lVar3 = lVar3 + -8;
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
  }
  return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
}


/* RemoveCubes+RemoveCubesWithinRadius+DestructionState NoFallOffDestruction(Single, Single) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_NoFallOffDestruction
          (float testDistSqr,float toughness,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
  if (toughness < pRVar1->centerDamage) {
    if (pRVar1->localRadiusReducedSquared <= testDistSqr) {
      return (pRVar1->localRadiusExtendedSquared <= testDistSqr) +
             RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
    }
    return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
  }
  return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
}


/* Boolean RemoveCube(RemoveCubes+RemoveCubesWithinRadius+DestructionState, MVCubeModelBase,
   MVCubeModelBase, IntVector) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_RemoveCube
               (RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum destructionState,
               MVCubeModelBase *wo,MVCubeModelBase *fineGrainedTerrain,IntVector *testPosition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MoveCubeFromCoarseToFine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (destructionState == RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed) {
    bVar1 = 0;
  }
  else {
    if (destructionState ==
        RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction) {
      if (*(int *)&(TypeInfo__MoveCubeFromCoarseToFine->_1).field_0x1c == 0) {
        FUN_?();
      }
      aIStack_2[0].x = testPosition->x;
      aIStack_2[0].y = testPosition->y;
      aIStack_2[0].z = testPosition->z;
      MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
                ((ICubeModel *)wo,(ICubeModel *)fineGrainedTerrain,aIStack_2,(MethodInfo *)0x0);
    }
    if (wo == (MVCubeModelBase *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
    aIStack_2[0].x = testPosition->x;
    aIStack_2[0].y = testPosition->y;
    aIStack_2[0].z = testPosition->z;
    (*(wo->klass->vtable).RemoveCubeNetworkUpdate_1.methodPtr)
              (wo,aIStack_2,(wo->klass->vtable).RemoveCubeNetworkUpdate_1.method);
    bVar1 = 1;
  }
  return bVar1;
}


/* Boolean RemoveCubesSmooth(MVCubeModelBase, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_RemoveCubesSmooth
               (MVCubeModelBase *wo,
               Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bStackX_20 = 0;
  iStack_1 = 0;
  pRVar2 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
  bVar3 = 0;
  if (0 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x) {
    do {
      iStack_4 = 0;
      if (0 < (pRVar2->static_fields->iterationBounds).y) {
        do {
          bVar5 = false;
          RVar6 = RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
          pCStack_7 = (Cube *)0x0;
          uStack_8 = 0;
          uStack_9 = 0;
          sStack_10 = 0;
          iStack_11 = 0;
          if (0 < (pRVar2->static_fields->iterationBounds).z) {
            uStack_12 = 0;
            do {
              pRVar13 = pRVar2->static_fields;
              sVar14 = (pRVar13->localMin).x;
              sVar15 = (pRVar13->localMin).y;
              sVar16 = (pRVar13->localMin).z;
              if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                FUN_?();
              }
              sVar14 = (short)iStack_1 + sVar14;
              sVar15 = sVar15 + (short)iStack_4;
              sVar16 = sVar16 + (short)iStack_11;
              uStack_17 = CONCAT22(sVar15,sVar14);
              if ((wo == (MVCubeModelBase *)0x0) ||
                 (this = (wo->fields).prototypeCubeModel, this == (RuntimePrototypeCubeModel *)0x0))
              goto code_?;
              aIStack_18[0].x = sVar14;
              aIStack_18[0].y = sVar15;
              aIStack_18[0].z = sVar16;
              pCVar19 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                 (this,aIStack_18,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pCVar19 == (Cube *)0x0) {
                bVar5 = false;
              }
              else {
                aIStack_20[0].x = sVar14;
                aIStack_20[0].y = sVar15;
                aIStack_20[0].z = sVar16;
                RVar21 = RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                                  (aIStack_20,(CubeBase *)pCVar19,getPhysicalProperites,
                                   (MethodInfo *)0x0);
                if (RVar6 == 
                    RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction)
                {
                  bVar22 = RVar21 == 
                           RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
code_?:
                  bVar23 = false;
                }
                else {
                  bVar22 = false;
                  if (RVar6 != 
                      RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed)
                  goto code_?;
                  bVar23 = RVar21 == 
                           RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction
                  ;
                }
                uVar24 = 0;
                if ((bool)(bVar23 & bVar5)) {
                  aIStack_25[0].x = sVar14;
                  aIStack_25[0].y = sVar15;
                  aIStack_25[0].z = sVar16;
                  RVar26 = RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
                                    (wo,iStack_1,aIStack_25,0,getPhysicalProperites,
                                     (MethodInfo *)0x0);
                  if (RVar26 == RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely) {
code_?:
                    uStack_8 = (ulonglong)uStack_17;
                    uStack_9 = uStack_17;
                    uStack_27 = uStack_17;
                    sStack_28 = sVar16;
                    pCStack_7 = pCVar19;
                    (*(wo->klass->vtable).RemoveCubeNetworkUpdate_1.methodPtr)
                              (wo,&uStack_27,(wo->klass->vtable).RemoveCubeNetworkUpdate_1.method);
                    bStackX_20 = 1;
                    uStack_12 = uStack_17;
                    sStack_10 = sVar16;
                  }
                  else {
                    if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                                 field_0x1c == 0) {
                      FUN_?();
                    }
                    pBVar29 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                             RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                       (RVar26,(MethodInfo *)0x0);
                    if ((pCVar19->fields)._.unIndentedSides != 0x3f) {
                      pBVar30 = (pCVar19->fields)._.byteCorners;
                      puVar31 = pBVar29->vector;
                      do {
                        if (pBVar29 == (Byte__Array *)0x0) goto code_?;
                        if ((uint)pBVar29->max_length <= uVar24) goto code_?;
                        if (pBVar30 == (Byte__Array *)0x0) goto code_?;
                        if ((uint)pBVar30->max_length <= uVar24) goto code_?;
                        if (*puVar31 != puVar31[(longlong)pBVar30 - (longlong)pBVar29])
                        goto code_?;
                        puVar31 = puVar31 + 1;
                        uVar24 = uVar24 + 1;
                      } while ((longlong)(puVar31 + (-0x20 - (longlong)pBVar29)) < 8);
                    }
                    if ((pCVar19->fields)._.faceMaterials == (Byte__Array *)0x0)
                    goto code_?;
                    lVar32 = FUN_?();
                    pCVar33 = (CubeBase *)FUN_?(TypeInfo__MV__WorldObject__CubeBase);
                    pBVar34 = TypeInfo__System__Byte;
                    if (lVar32 == 0) {
                      pBVar30 = (Byte__Array *)0x0;
                    }
                    else {
                      pBVar30 = (Byte__Array *)FUN_?(lVar32,TypeInfo__System__Byte);
                      if (pBVar30 == (Byte__Array *)0x0) {
                        FUN_?(lVar32,pBVar34);
                        pcVar35 = (code *)swi(3);
                        bVar3 = (*pcVar35)();
                        return bVar3;
                      }
                    }
                    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                              (pCVar33,pBVar29,pBVar30,(MethodInfo *)0x0);
                    uStack_36 = uStack_17;
                    sStack_37 = sVar16;
                    (*(wo->klass->vtable).AddCubeNetworkUpdate_1.methodPtr)
                              (wo,&uStack_36,pCVar33,
                               (wo->klass->vtable).AddCubeNetworkUpdate_1.method);
                  }
                }
                else if (bVar22) {
                  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if ((((short)uStack_12 == sVar14) && (uStack_9._2_2_ == sVar15)) &&
                     (sStack_10 == (short)(sVar16 + -1))) {
                    uVar38 = (undefined4)uStack_8;
                    aIStack_39[0].z = sStack_10;
                    aIStack_39[0]._0_4_ = uVar38;
                    RVar26 = RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
                                      (wo,iStack_1,aIStack_39,1,getPhysicalProperites,
                                       (MethodInfo *)0x0);
                    if (RVar26 != RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely) {
                      if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      pBVar29 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                               RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                         (RVar26,(MethodInfo *)0x0);
                      pCVar19 = pCStack_7;
                      if (pCStack_7 == (Cube *)0x0) {
code_?:
                        FUN_?();
                        pcVar35 = (code *)swi(3);
                        bVar3 = (*pcVar35)();
                        return bVar3;
                      }
                      if ((pCStack_7->fields)._.unIndentedSides != 0x3f) {
                        pBVar30 = (pCStack_7->fields)._.byteCorners;
                        puVar31 = pBVar29->vector;
                        do {
                          if (pBVar29 == (Byte__Array *)0x0) goto code_?;
                          if ((uint)pBVar29->max_length <= uVar24) {
code_?:
                            FUN_?();
                            pcVar35 = (code *)swi(3);
                            bVar3 = (*pcVar35)();
                            return bVar3;
                          }
                          if (pBVar30 == (Byte__Array *)0x0) goto code_?;
                          if ((uint)pBVar30->max_length <= uVar24) goto code_?;
                          if (*puVar31 != puVar31[(longlong)pBVar30 - (longlong)pBVar29])
                          goto code_?;
                          puVar31 = puVar31 + 1;
                          uVar24 = uVar24 + 1;
                        } while ((longlong)(puVar31 + (-0x20 - (longlong)pBVar29)) < 8);
                      }
                      if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      pBVar29 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                               RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                         (RVar26,(MethodInfo *)0x0);
                      if ((pCVar19->fields)._.faceMaterials == (Byte__Array *)0x0)
                      goto code_?;
                      lVar32 = FUN_?();
                      pCVar33 = (CubeBase *)FUN_?(TypeInfo__MV__WorldObject__CubeBase);
                      pBVar34 = TypeInfo__System__Byte;
                      if (lVar32 == 0) {
                        pBVar30 = (Byte__Array *)0x0;
                      }
                      else {
                        pBVar30 = (Byte__Array *)FUN_?(lVar32,TypeInfo__System__Byte);
                        if (pBVar30 == (Byte__Array *)0x0) {
                          FUN_?(lVar32,pBVar34);
                          pcVar35 = (code *)swi(3);
                          bVar3 = (*pcVar35)();
                          return bVar3;
                        }
                      }
                      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                                (pCVar33,pBVar29,pBVar30,(MethodInfo *)0x0);
                      aIStack_40[0].z = sStack_10;
                      aIStack_40[0]._0_4_ = uVar38;
                      (*(wo->klass->vtable).AddCubeNetworkUpdate_1.methodPtr)
                                (wo,aIStack_40,pCVar33,
                                 (wo->klass->vtable).AddCubeNetworkUpdate_1.method);
                    }
                  }
                }
                else if (RVar21 != 
                         RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed)
                goto code_?;
code_?:
                bVar5 = RVar21 == 
                         RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
                RVar6 = RVar21;
              }
              iStack_11 = iStack_11 + 1;
              pRVar2 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
            } while (iStack_11 <
                     (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds
                     ).z);
          }
          iStack_4 = iStack_4 + 1;
        } while (iStack_4 < (pRVar2->static_fields->iterationBounds).y);
      }
      iStack_1 = iStack_1 + 1;
      bVar3 = bStackX_20;
    } while (iStack_1 < (pRVar2->static_fields->iterationBounds).x);
  }
  return bVar3;
}


/* Boolean RemoveCubesTerrain(MVCubeModelBase, MVCubeModelBase,
   Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_RemoveCubesTerrain
               (MVCubeModelBase *wo,MVCubeModelBase *fineGrainedTerrain,
               Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = 0;
  bVar2 = 0;
  iVar3 = 0;
  pRVar4 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
  if (0 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x) {
    do {
      iVar5 = 0;
      if (0 < (pRVar4->static_fields->iterationBounds).y) {
        do {
          iVar6 = 0;
          if (0 < (pRVar4->static_fields->iterationBounds).z) {
            do {
              pRVar7 = pRVar4->static_fields;
              sVar8 = (pRVar7->localMin).x;
              sVar9 = (pRVar7->localMin).y;
              sVar10 = (pRVar7->localMin).z;
              if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                FUN_?();
              }
              sVar8 = sVar8 + (short)iVar3;
              sVar9 = sVar9 + (short)iVar5;
              sVar10 = (short)iVar6 + sVar10;
              if ((wo == (MVCubeModelBase *)0x0) ||
                 (this = (wo->fields).prototypeCubeModel, this == (RuntimePrototypeCubeModel *)0x0))
              {
                FUN_?();
                pcVar11 = (code *)swi(3);
                bVar2 = (*pcVar11)();
                return bVar2;
              }
              aIStack_12[0].x = sVar8;
              aIStack_12[0].y = sVar9;
              aIStack_12[0].z = sVar10;
              cubeBase = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                   (this,aIStack_12,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cubeBase != (Cube *)0x0) {
                aIStack_13[0].x = sVar8;
                aIStack_13[0].y = sVar9;
                aIStack_13[0].z = sVar10;
                destructionState =
                     RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                               (aIStack_13,(CubeBase *)cubeBase,getPhysicalProperites,
                                (MethodInfo *)0x0);
                aIStack_14[0].x = sVar8;
                aIStack_14[0].y = sVar9;
                aIStack_14[0].z = sVar10;
                bVar15 = RemoveCubes_RemoveCubesWithinRadius_RemoveCube
                                  (destructionState,wo,fineGrainedTerrain,aIStack_14,
                                   (MethodInfo *)0x0);
                bVar2 = bVar1;
                if (bVar15 != 0) {
                  bVar1 = 1;
                  bVar2 = 1;
                }
              }
              iVar6 = iVar6 + 1;
              pRVar4 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
            } while (iVar6 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->
                             iterationBounds).z);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (pRVar4->static_fields->iterationBounds).y);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (pRVar4->static_fields->iterationBounds).x);
  }
  return bVar2;
}


/* Void TestFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_TestFallOffValues
               (float radius,float centerDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0) {
    FUN_?();
  }
  RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
  RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
            (radius,centerDamage,(MethodInfo *)0x0);
  uVar1 = 0;
  while( true ) {
    if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
        numFallOffValues <= (int)uVar1) break;
    if (*(int *)&(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pRVar2 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
             fallOffValues;
    if (pRVar2 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)pRVar2->max_length <= uVar1) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    message = (Object *)
              FUN_?(
                           TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue
                           );
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
  }
  return;
}

