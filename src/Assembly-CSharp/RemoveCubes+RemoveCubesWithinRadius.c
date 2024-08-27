
/* RemoveCubes+RemoveCubesWithinRadius+DestructionState CalculateCubeDestruction(IntVector,
   CubeBase, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
          (IntVector cubePos,CubeBase *cubeBase,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    cRam_? = '\x01';
  }
  if ((cubeBase != (CubeBase *)0x0) &&
     (pBVar1 = (cubeBase->fields).faceMaterials, pBVar1 != (Byte__Array *)0x0)) {
    if (pBVar1->max_length == 0) goto code_?;
    cubeBase = (CubeBase *)(uint)pBVar1->vector[0];
    if (getPhysicalProperites != (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0) {
      iVar2 = (*(getPhysicalProperites->fields)._._.invoke_impl)
                        (auStack_3,(getPhysicalProperites->fields)._._.method_code,cubeBase,
                         (getPhysicalProperites->fields)._._.method);
      fVar4 = *(float *)(iVar2 + 0x10);
      if (fVar4 != 0.0) {
        pVVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                 CubeMathFunctions_LocalIntVectorToLocalPos(&VStack_6,cubePos,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar5->x;
        uStack_7._4_4_ = pVVar5->y;
        fStack_8 = pVVar5->z;
        pRVar9 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
        VStack_6.x = (pRVar9->localPosition).x;
        VStack_6.y = (pRVar9->localPosition).y;
        VStack_6.z = (pRVar9->localPosition).z;
        iVar2 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType;
        fVar10 = ((float)(undefined4)uStack_7 - VStack_6.x) *
                 ((float)(undefined4)uStack_7 - VStack_6.x) +
                 ((float)uStack_7._4_4_ - VStack_6.y) * ((float)uStack_7._4_4_ - VStack_6.y) +
                 (fStack_8 - VStack_6.z) * (fStack_8 - VStack_6.z);
        if (iVar2 == 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
            cRam_? = '\x01';
          }
          pRVar9 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
          if (fVar4 < pRVar9->centerDamage) {
            if (fVar10 < pRVar9->localRadiusReducedSquared) {
              return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
            }
            if (fVar10 < pRVar9->localRadiusExtendedSquared) {
              return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
            }
          }
        }
        else if (iVar2 == 1) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
            cRam_? = '\x01';
          }
          if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
            cRam_? = '\x01';
          }
          if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
          }
          uVar11 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
                   numFallOffValues - 1;
          if (-1 < (int)uVar11) {
            iVar2 = uVar11 * 8 + 0x10;
            pRVar12 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
            do {
              if ((pRVar12->_1).cctor_finished_or_no_cctor == 0) {
                func_?(pRVar12);
                pRVar12 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
              }
              pRVar13 = pRVar12->static_fields->fallOffValues;
              if (pRVar13 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *
                            )0x0) goto code_?;
              if (pRVar13->max_length <= uVar11) goto code_?;
              if (fVar10 < *(float *)((int)&((RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array
                                              *)(pRVar13->vector + -2))->klass + iVar2)) {
                if ((pRVar12->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(pRVar12);
                  pRVar12 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
                }
                if (pRVar12->static_fields->fallOffValues ==
                    (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
                goto code_?;
                iVar14 = func_?(uVar11);
                fVar15 = 0.0;
                fVar16 = *(float *)(iVar14 + 4);
                if ((int)uVar11 <
                    TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
                    numFallOffValues + -1) {
                  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
                  }
                  if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
                      fallOffValues ==
                      (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
                  goto code_?;
                  iVar14 = func_?(uVar11 + 1);
                  fVar15 = *(float *)(iVar14 + 4);
                }
                if (fVar4 < fVar15) {
                  return 
                  RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
                }
                pRVar12 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
                if (fVar4 < fVar16) {
                  return 
                  RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
                }
              }
              iVar2 = iVar2 + -8;
              uVar11 = uVar11 - 1;
            } while (-1 < (int)uVar11);
          }
        }
      }
      return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  RVar18 = (*pcVar17)();
  return RVar18;
}


/* Void CalculateLocalValues(MVCubeModelBase, Single, IntVector) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
               (MVCubeModelBase *cm,float radius,IntVector localCenterPosition,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_ESI >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    cRam_? = '\x01';
  }
  if (cm != (MVCubeModelBase *)0x0) {
    puVar2 = (undefined8 *)
              (*(code *)(cm->klass->vtable).get_Scale.method)
                        (&stack0xffffffe4,cm,(cm->klass->vtable).set_Scale.methodPtr);
    uStack_3 = *puVar2;
    fVar4 = radius / (float)pMVar5;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar6 = mscorlib.dll::System::Math::Math_Max_7(0.0,fVar4 - _UNK_?,(MethodInfo *)0x0);
    cm._0_2_ = SUB42(fVar6,0);
    cm._2_2_ = (undefined2)((uint)fVar6 >> 0x10);
    if (fVar6 < _UNK_?) {
      cm._0_2_ = 0;
      cm._2_2_ = 0;
    }
    if (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType == 1) {
      fVar6 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->centerDamage;
      if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar1 = (undefined2)((uint)fVar6 >> 0x10);
      RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
      RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
                (fVar4,fVar6,(MethodInfo *)0x0);
    }
    fVar4 = fVar4 + _UNK_?;
    TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->localRadiusExtendedSquared =
         fVar4 * fVar4;
    TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->localRadiusReducedSquared =
         (float)CONCAT22(cm._2_2_,cm._0_2_) * (float)CONCAT22(cm._2_2_,cm._0_2_);
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      uVar1 = 0x1036;
      func_?();
    }
    uVar7 = (TypeInfo__MV__WorldObject__IntVector->static_fields->One).x;
    IVar8.z = uVar7;
    IVar8.x = (short)(int)fVar4;
    IVar8.y = (short)((uint)(int)fVar4 >> 0x10);
    IVar9 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                       ((int32_t)&puStack_10,IVar8,
                        (MethodInfo *)
                        CONCAT22(uVar1,(TypeInfo__MV__WorldObject__IntVector->static_fields->One).z
                                ));
    uVar1 = *(undefined2 *)(IVar9._0_4_ + 1);
    iVar11 = (int16_t)*IVar9._0_4_;
    uVar12 = CONCAT62((int6)(uStack_3 >> 0x10),uVar1);
    uStack_3 = uVar12 & 0xffffffff;
    uVar13 = uStack_3;
    i1.z = localCenterPosition.x;
    i1._0_4_ = &puStack_10;
    i2_00.y = in_stack_14;
    i2_00.x = localCenterPosition.z;
    i2_00.z = iVar11;
    pMVar5 = (MethodInfo *)uVar12;
    method_00 = pMVar5;
    uStack_3 = uVar13;
    IVar9 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                       (i1,i2_00,method_00);
    uVar15 = *IVar9._0_4_;
    iVar16 = *(int16_t *)(IVar9._0_4_ + 1);
    pRVar17 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    (pRVar17->localMin).x = (short)uVar15;
    (pRVar17->localMin).y = (short)((uint)uVar15 >> 0x10);
    (pRVar17->localMin).z = iVar16;
    uStack_3 = CONCAT44(&UNK_?,pMVar5);
    iV.z = iVar11;
    iV.x = 2;
    iV.y = 0;
    IVar8 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                       ((int32_t)&puStack_10,iV,(MethodInfo *)CONCAT22(cm._2_2_,uVar1));
    pIVar18 = TypeInfo__MV__WorldObject__IntVector->static_fields;
    uStack19 = 0;
    uVar20 = (pIVar18->One).x;
    uVar21 = (pIVar18->One).y;
    method = (MethodInfo *)CONCAT22(method._2_2_,(pIVar18->One).z);
    radius._0_2_ = (int16_t)*IVar8._0_4_;
    IVar9.z = radius._0_2_;
    IVar9._0_4_ = &puStack_10;
    i2.y = localCenterPosition.y;
    i2.x = *(undefined2 *)(IVar8._0_4_ + 1);
    i2.z = uVar20;
    uStack22 = uVar21;
    IVar9 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition(IVar9,i2,method);
    uVar15 = *IVar9._0_4_;
    iVar16 = *(int16_t *)(IVar9._0_4_ + 1);
    pRVar17 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    (pRVar17->iterationBounds).x = (short)uVar15;
    (pRVar17->iterationBounds).y = (short)((uint)uVar15 >> 0x10);
    (pRVar17->iterationBounds).z = iVar16;
    return;
  }
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Boolean CubeCornersEqual(Byte[], Byte[]) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_CubeCornersEqual
               (Byte__Array *corners0,Byte__Array *corners1,MethodInfo *method)

{
  uVar1 = 0;
  if (corners0 == (Byte__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    while (uVar1 < corners0->max_length) {
      if (corners1 == (Byte__Array *)0x0) goto code_?;
      if (corners1->max_length <= uVar1) break;
      if (corners0->vector[uVar1] != corners1->vector[uVar1]) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      if (7 < (int)uVar1) {
        return 1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* RemoveCubes+RemoveCubesWithinRadius+RemoveStyle HandleCubeOnRadiusLimit(MVCubeModelBase, Int32,
   IntVector, Boolean, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
          (MVCubeModelBase *wo,int32_t x,IntVector pos,bool fromDestroyToNotDestroy,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_ESI >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    cRam_? = '\x01';
  }
  uVar2 = 0;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    uVar2 = 0;
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,0,0,0,(MethodInfo *)0x0);
  if (x < (int)(TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x /
          2) {
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    uVar2 = 0x1036;
    func_?();
  }
  method_00 = (MethodInfo *)((uint)uVar2 << 0x10);
  IVar4.z = pos.x;
  IVar4._0_4_ = &pos;
  IVar5.y = uVar1;
  IVar5.x = pos.z;
  IVar5.z = iVar3;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                    (IVar4,IVar5,method_00);
  sVar6 = (short)method_00;
  IVar4 = *IVar5._0_4_;
  if (wo == (MVCubeModelBase *)0x0) {
    pos._0_4_ = &UNK_?;
    func_?();
    pcVar7 = (code *)swi(3);
    RVar8 = (*pcVar7)();
    return RVar8;
  }
  pos.x = 0;
  pos.y = 0;
  a = MVCubeModelBase::MVCubeModelBase_GetCube(wo,*IVar5._0_4_,(MethodInfo *)0x0);
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pos.z = 0x2387;
  uStack9 = 0x1036;
  bVar10 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
  if ((bVar10 == 0) &&
     (RVar11 = RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                        (IVar4,(CubeBase *)a,(Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0,
                         (MethodInfo *)0x0),
     RVar11 == RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed)) {
    if (sVar6 == 1) {
      return RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_OnEdgeRightUp;
    }
    if (sVar6 == -1) {
      return RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_OnEdgeRightDown;
    }
  }
  return RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely;
}


/* Boolean HandleRemoveCubes(MVCubeModelBase, Single, IntVector, Single, DamageFallOffType,
   MVCubeModelBase, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
               (MVCubeModelBase *cm,float radius,IntVector fineGrainedTerrainLocalPos,
               float centerDamage,DamageFallOffType__Enum damageFallOffType,
               MVCubeModelBase *fineGrainedTerrainWorldObject,
               Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,
               MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (cRam_? == '\0') {
    func_?(0xe58);
    cRam_? = '\x01';
  }
  TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->centerDamage = centerDamage;
  TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType =
       damageFallOffType;
  if (cm != (MVCubeModelBase *)0x0) {
    if ((cm->fields)._._.type == 8) {
      pVVar2 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_FineGrainedLocalPosToTerrainLocalPos
                         ((Vector3 *)&stack0xfffffff0,fineGrainedTerrainLocalPos,(MethodInfo *)0x0);
      fVar3 = pVVar2->z;
      fVar4 = pVVar2->y;
      pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
      (pRVar5->localPosition).x = pVVar2->x;
      (pRVar5->localPosition).y = fVar4;
      (pRVar5->localPosition).z = fVar3;
      IVar6.z = fineGrainedTerrainLocalPos.x;
      IVar6._0_4_ = &stack0xfffffff4;
      IVar6 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
              CubeMathFunctions_FromLocalPosToLocalPos
                        (IVar6,(ICubeModel *)CONCAT22(uVar1,fineGrainedTerrainLocalPos.z),
                         (ICubeModel *)cm,(MethodInfo *)fineGrainedTerrainWorldObject);
      RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
                (cm,radius,*IVar6._0_4_,(MethodInfo *)0x0);
      RemoveCubes_RemoveCubesWithinRadius_RemoveCubesTerrain
                (cm,fineGrainedTerrainWorldObject,getPhysicalProperites,(MethodInfo *)0x0);
    }
    pVVar2 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalIntVectorToLocalPos
                       ((Vector3 *)&stack0xfffffff0,fineGrainedTerrainLocalPos,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar3 = pVVar2->z;
    pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    (pRVar5->localPosition).x = pVVar2->x;
    (pRVar5->localPosition).y = fVar4;
    (pRVar5->localPosition).z = fVar3;
    RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
              (fineGrainedTerrainWorldObject,radius,fineGrainedTerrainLocalPos,(MethodInfo *)0x0);
    bVar7 = RemoveCubes_RemoveCubesWithinRadius_RemoveCubesSmooth
                      (fineGrainedTerrainWorldObject,getPhysicalProperites,(MethodInfo *)0x0);
    return bVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* RemoveCubes+RemoveCubesWithinRadius+DestructionState LinearDestruction(Single, Single) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_LinearDestruction
          (float testDistSqr,float toughness,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  uVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
          numFallOffValues - 1;
  if (-1 < (int)uVar1) {
    iVar2 = uVar1 * 8 + 0x10;
    pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
    do {
      if ((pRVar3->_1).cctor_finished_or_no_cctor == 0) {
        func_?(pRVar3);
        pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
      }
      pRVar4 = pRVar3->static_fields->fallOffValues;
      if (pRVar4 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
      goto code_?;
      if (pRVar4->max_length <= uVar1) goto code_?;
      if (testDistSqr <
          *(float *)((int)&((RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *
                            )(pRVar4->vector + -2))->klass + iVar2)) {
        if ((pRVar3->_1).cctor_finished_or_no_cctor == 0) {
          func_?(pRVar3);
          pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
        }
        if (pRVar3->static_fields->fallOffValues ==
            (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) {
code_?:
          func_?();
code_?:
          func_?();
          pcVar5 = (code *)swi(3);
          RVar6 = (*pcVar5)();
          return RVar6;
        }
        iVar7 = func_?(uVar1);
        fVar8 = 0.0;
        fVar9 = *(float *)(iVar7 + 4);
        if ((int)uVar1 <
            TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
            numFallOffValues + -1) {
          if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
          }
          if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
              fallOffValues ==
              (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
          goto code_?;
          iVar7 = func_?(uVar1 + 1);
          fVar8 = *(float *)(iVar7 + 4);
        }
        if (toughness < fVar8) {
          return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
        }
        pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
        if (toughness < fVar9) {
          return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
        }
      }
      iVar2 = iVar2 + -8;
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
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
    func_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
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
               MVCubeModelBase *wo,MVCubeModelBase *fineGrainedTerrain,IntVector testPosition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MoveCubeFromCoarseToFine);
    cRam_? = '\x01';
  }
  if (destructionState == RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed) {
    return 0;
  }
  if (destructionState ==
      RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction) {
    if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MoveCubeFromCoarseToFine);
    }
    MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
              ((ICubeModel *)wo,(ICubeModel *)fineGrainedTerrain,testPosition,(MethodInfo *)0x0);
  }
  if (wo != (MVCubeModelBase *)0x0) {
    (*(code *)(wo->klass->vtable).RemoveCubeNetworkUpdate_1.method)
              (wo,testPosition._0_4_,testPosition.z,
               (wo->klass->vtable).AddCubeNetworkUpdate_1.methodPtr);
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean RemoveCubesSmooth(MVCubeModelBase, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_RemoveCubesSmooth
               (MVCubeModelBase *wo,
               Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    cRam_? = '\x01';
  }
  z = (undefined *)0x0;
  pCVar1 = (Cube *)0x0;
  bStack_2 = 0;
  pFVar3 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0;
  pRVar4 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
  bVar5 = 0;
  if (0 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x) {
    do {
      iVar6 = 0;
      if (0 < (pRVar4->static_fields->iterationBounds).y) {
        do {
          iVar7 = 0;
          uStack_8 = 0;
          puVar9 = (undefined *)0x2;
          iStack_10 = 0;
          pFVar11 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0;
          if (0 < (pRVar4->static_fields->iterationBounds).z) {
            bVar12 = false;
            do {
              iVar13 = (int16_t)pCVar1;
              sVar14 = (pRVar4->static_fields->localMin).x;
              iVar15 = (pRVar4->static_fields->localMin).y;
              iVar16 = (pRVar4->static_fields->localMin).z;
              if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MV__WorldObject__IntVector);
              }
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        ((IntVector *)&stack0xffffffc8,(int32_t)((int)&pFVar3->klass + (int)sVar14)
                         ,iVar15 + iVar6,(int32_t)((int)&pFVar11->klass + (int)iVar16),
                         (MethodInfo *)0x0);
              if (wo == (MVCubeModelBase *)0x0) goto code_?;
              pos.z = iVar13;
              pos._0_4_ = z;
              a_00 = MVCubeModelBase::MVCubeModelBase_GetCube(wo,pos,(MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              z = &UNK_?;
              pCVar1 = a_00;
              bVar5 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                ((CubeBase *)a_00,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                pFVar11 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0;
                iVar15 = (int16_t)getPhysicalProperites;
                uVar17 = (undefined2)((uint)getPhysicalProperites >> 0x10);
                iVar16 = (int16_t)pCVar1;
                pCVar1 = (Cube *)&UNK_?;
                cubePos.z = iVar16;
                cubePos._0_4_ = z;
                puVar18 = (undefined *)
                         RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                                   (cubePos,(CubeBase *)a_00,getPhysicalProperites,(MethodInfo *)0x0
                                   );
                if (puVar9 == (undefined *)0x1) {
                  bVar19 = puVar18 == (undefined *)0x2;
code_?:
                  bVar20 = false;
                }
                else {
                  bVar19 = false;
                  if (puVar9 != (undefined *)0x2) goto code_?;
                  bVar20 = puVar18 == (undefined *)0x1;
                }
                sVar14 = (short)pCVar1;
                iVar16 = (int16_t)wo;
                uVar21 = (undefined2)((uint)wo >> 0x10);
                if ((bool)(bVar20 & bVar12)) {
                  pCVar22 = (Cube *)0x0;
                  pos_01.z = sVar14;
                  pos_01._0_4_ = z;
                  puVar9 = z;
                  pFVar3 = getPhysicalProperites;
                  index_00 = RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
                                       (wo,(int32_t)getPhysicalProperites,pos_01,0,
                                        getPhysicalProperites,(MethodInfo *)0x0);
                  iVar15 = iVar16;
                  uVar17 = uVar21;
                  pFVar11 = getPhysicalProperites;
                  puVar18 = puVar9;
                  if (index_00 != RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely)
                  {
                    iVar7 = sVar14;
                    if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                      iVar15 = iVar16;
                      uVar17 = uVar21;
                      pFVar11 = getPhysicalProperites;
                      iVar7 = sVar14;
                    }
                    getPhysicalProperites =
                         (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)&UNK_?;
                    pBVar23 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                             RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                       (index_00,(MethodInfo *)0x0);
                    if (a_00 != (Cube *)0x0) {
                      if ((a_00->fields)._.unIndentedSides != 0x3f) {
                        pBVar24 = (a_00->fields)._.byteCorners;
                        uVar25 = 0;
                        if (pBVar23 == (Byte__Array *)0x0) goto code_?;
                        do {
                          if (pBVar23->max_length <= uVar25) goto code_?;
                          if (pBVar24 == (Byte__Array *)0x0) goto code_?;
                          if (pBVar24->max_length <= uVar25) goto code_?;
                          puVar18 = puVar9;
                          if (pBVar23->vector[uVar25] != pBVar24->vector[uVar25]) goto code_?;
                          uVar25 = uVar25 + 1;
                          a_00 = pCVar22;
                        } while ((int)uVar25 < 8);
                      }
                      pBVar24 = (a_00->fields)._.faceMaterials;
                      if (pBVar24 != (Byte__Array *)0x0) {
                        pOVar26 = UnityEngine.CoreModule.dll::UnityEngine::Playables::
                                 PlayableBehaviour::PlayableBehaviour_Clone
                                           ((PlayableBehaviour *)pBVar24,(MethodInfo *)0x0);
                        pCVar27 = (CubeBase *)func_?();
                        if (pOVar26 == (Object *)0x0) {
                          pBVar24 = (Byte__Array *)0x0;
                        }
                        else {
                          pBVar24 = (Byte__Array *)func_?();
                          if (pBVar24 == (Byte__Array *)0x0) goto code_?;
                        }
                        MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                                  (pCVar27,pBVar23,pBVar24,(MethodInfo *)0x0);
                        func_?();
                        iVar6 = CONCAT22(uVar17,iVar15);
                        bVar12 = puVar9 == (undefined *)0x2;
                        goto code_?;
                      }
                    }
                    goto code_?;
                  }
code_?:
                  iStack_10 = (int16_t)pCVar1;
                  iVar7 = (int16_t)z;
                  uStack_8 = (undefined2)((uint)z >> 0x10);
                  getPhysicalProperites = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)wo;
                  wo = (MVCubeModelBase *)0x64;
                  func_?();
                  bStack_2 = 1;
                  puVar9 = puVar18;
                }
                else if (bVar19) {
                  sVar28 = (short)z;
                  uVar25 = (uint)z >> 0x10;
                  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                    pFVar3 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)&UNK_?;
                    func_?();
                  }
                  z = (undefined *)(sVar14 + -1);
                  iVar6 = (int)(short)uVar25;
                  sVar14 = sVar28 >> 0xf;
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            ((IntVector *)&stack0xffffffc0,(int)sVar28,iVar6,(int32_t)z,
                             (MethodInfo *)0x0);
                  b.y = sVar14;
                  b.x = sVar28;
                  puVar29 = (undefined *)CONCAT22(uStack_8,iVar7);
                  pFVar11 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0;
                  iVar15 = (int16_t)iVar6;
                  pCVar1 = (Cube *)&UNK_?;
                  a.z = iStack_10;
                  a._0_4_ = puVar29;
                  b.z = iVar15;
                  bVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
                                    (a,b,(MethodInfo *)0x0);
                  puVar9 = puVar18;
                  if (bVar5 != 0) {
                    iVar6 = 1;
                    pos_00.z = iStack_10;
                    pos_00._0_4_ = puVar29;
                    pFVar11 = getPhysicalProperites;
                    iVar7 = iStack_10;
                    pFVar3 = getPhysicalProperites;
                    index = (MVCubeModelBase *)
                            RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
                                      (wo,(int32_t)getPhysicalProperites,pos_00,1,
                                       getPhysicalProperites,(MethodInfo *)0x0);
                    iVar15 = iVar16;
                    uVar17 = uVar21;
                    puVar9 = puVar29;
                    if (index != (MVCubeModelBase *)0x4) {
                      if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                        iVar15 = iVar16;
                        uVar17 = uVar21;
                        puVar9 = puVar29;
                      }
                      getPhysicalProperites = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0;
                      pBVar23 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                               RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                         ((int32_t)index,(MethodInfo *)0x0);
                      if (iVar6 == 0) {
code_?:
                        func_?();
                      }
                      else {
                        wo = index;
                        if (*(char *)(iVar6 + 8) != '?') {
                          iVar30 = *(int *)(iVar6 + 0xc);
                          uVar25 = 0;
                          if (pBVar23 == (Byte__Array *)0x0) goto code_?;
                          do {
                            if (pBVar23->max_length <= uVar25) goto code_?;
                            if (iVar30 == 0) goto code_?;
                            if (*(uint *)(iVar30 + 0xc) <= uVar25) goto code_?;
                            if (pBVar23->vector[uVar25] != *(uint8_t *)(uVar25 + 0x10 + iVar30))
                            goto code_?;
                            uVar25 = uVar25 + 1;
                          } while ((int)uVar25 < 8);
                        }
                        if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        getPhysicalProperites =
                             (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)&UNK_?;
                        pBVar23 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                                 RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                           ((int32_t)index,(MethodInfo *)0x0);
                        if (*(PlayableBehaviour **)(iVar6 + 0x10) == (PlayableBehaviour *)0x0)
                        goto code_?;
                        pOVar26 = UnityEngine.CoreModule.dll::UnityEngine::Playables::
                                 PlayableBehaviour::PlayableBehaviour_Clone
                                           (*(PlayableBehaviour **)(iVar6 + 0x10),(MethodInfo *)0x0
                                           );
                        pCVar27 = (CubeBase *)func_?();
                        if (pOVar26 == (Object *)0x0) {
                          pBVar24 = (Byte__Array *)0x0;
code_?:
                          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                                    (pCVar27,pBVar23,pBVar24,(MethodInfo *)0x0);
                          func_?();
                          iVar6 = CONCAT22(uVar17,iVar15);
                          bVar12 = puVar9 == (undefined *)0x2;
                          goto code_?;
                        }
                        pBVar24 = (Byte__Array *)func_?();
                        if (pBVar24 != (Byte__Array *)0x0) goto code_?;
                      }
                      func_?();
code_?:
                      func_?();
code_?:
                      func_?();
                      pcVar31 = (code *)swi(3);
                      bVar5 = (*pcVar31)();
                      return bVar5;
                    }
                  }
                }
                else {
                  puVar9 = puVar18;
                  if (puVar18 != (undefined *)0x2) goto code_?;
                }
code_?:
                iVar6 = CONCAT22(uVar17,iVar15);
                bVar12 = puVar9 == (undefined *)0x2;
              }
              else {
                bVar12 = false;
              }
code_?:
              pFVar11 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)((int)&pFVar11->klass + 1)
              ;
              pRVar4 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
            } while ((int)pFVar11 <
                     (int)(TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->
                          iterationBounds).z);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (pRVar4->static_fields->iterationBounds).y);
      }
      pFVar3 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)((int)&pFVar3->klass + 1);
      bVar5 = bStack_2;
    } while ((int)pFVar3 < (int)(pRVar4->static_fields->iterationBounds).x);
  }
  return bVar5;
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
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  bVar3 = 0;
  pCVar4 = (Cube *)0x0;
  pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
  if (0 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x) {
    do {
      uVar6 = 0;
      if (0 < (pRVar5->static_fields->iterationBounds).y) {
        do {
          iVar7 = 0;
          if (0 < (pRVar5->static_fields->iterationBounds).z) {
            do {
              fineGrainedTerrain_00 = fineGrainedTerrain;
              pRVar8 = pRVar5->static_fields;
              sVar9 = (pRVar8->localMin).x;
              sVar10 = (pRVar8->localMin).y;
              sVar11 = (pRVar8->localMin).z;
              uVar2 = uVar1;
              if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MV__WorldObject__IntVector);
                uVar2 = uVar1;
              }
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        ((IntVector *)&stack0xffffffe4,(int32_t)((int)&pCVar4->klass + (int)sVar9),
                         (int)sVar10 + uVar6,sVar11 + iVar7,(MethodInfo *)0x0);
              if (wo == (MVCubeModelBase *)0x0) {
                func_?();
                pcVar12 = (code *)swi(3);
                bVar3 = (*pcVar12)();
                return bVar3;
              }
              uVar13 = 0;
              uVar1 = 0;
              pos.y = 0;
              pos.z = 0;
              pos.x = uVar2;
              a = MVCubeModelBase::MVCubeModelBase_GetCube(wo,pos,(MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar2 = 0;
              uVar6 = 0;
              pCVar4 = a;
              bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                                ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                uVar6 = CONCAT22(0,uVar1);
                pCVar4 = (Cube *)&UNK_?;
                cubePos.z = uVar13;
                cubePos.x = uVar1;
                cubePos.y = 0;
                uVar2 = uVar13;
                destructionState =
                     (MVCubeModelBase *)
                     RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                               (cubePos,(CubeBase *)a,getPhysicalProperites,(MethodInfo *)0x0);
                testPosition.y = 0;
                testPosition.x = uVar1;
                getPhysicalProperites =
                     (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)fineGrainedTerrain;
                fineGrainedTerrain = wo;
                testPosition.z = uVar2;
                bVar3 = RemoveCubes_RemoveCubesWithinRadius_RemoveCube
                                  ((RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum)
                                   destructionState,wo,fineGrainedTerrain_00,testPosition,
                                   (MethodInfo *)0x0);
                uVar2 = uVar13 & 0xff;
                wo = destructionState;
                if (bVar3 != 0) {
                  uVar2 = 1;
                }
              }
              iVar7 = iVar7 + 1;
              pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
            } while (iVar7 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->
                             iterationBounds).z);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)(pRVar5->static_fields->iterationBounds).y);
      }
      bVar3 = (bool)uVar2;
      pCVar4 = (Cube *)((int)&pCVar4->klass + 1);
    } while ((int)pCVar4 < (int)(pRVar5->static_fields->iterationBounds).x);
  }
  return bVar3;
}


/* Void TestFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_TestFallOffValues
               (float radius,float centerDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue);
    func_?(&TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
  RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
            (radius,centerDamage,(MethodInfo *)0x0);
  uVar1 = 0;
  iVar2 = 0x10;
  while( true ) {
    if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
        numFallOffValues <= (int)uVar1) {
      return;
    }
    if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    }
    pRVar3 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
             fallOffValues;
    if (pRVar3 == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0)
    goto code_?;
    if (pRVar3->max_length <= uVar1) break;
    uStack_4 = *(undefined4 *)
                ((int)&((RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)
                       (pRVar3->vector + -2))->klass + iVar2);
    uStack_5 = *(undefined4 *)((int)pRVar3->vector + iVar2 + -0xc);
    message = (Object *)
              func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue
                              ,&uStack_4);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 8;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

