
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
              (*(cm->klass->vtable).get_Scale.methodPtr)
                        (&stack0xffffffe4,cm,(cm->klass->vtable).get_Scale.method);
    uStack_3 = *puVar2;
    fVar4 = radius / (float)pMVar5;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar6 = mscorlib.dll::System::Math::Math_Max_3(0.0,fVar4 - _UNK_?,(MethodInfo *)0x0);
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
      uVar1 = 0x102b;
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
    uVar2 = 0x102b;
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
  pos.z = 0x7e7f;
  uStack9 = 0x102b;
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
  pMVar1 = cm;
  uVar2 = (undefined2)((uint)unaff_EDI >> 0x10);
  iVar3 = fineGrainedTerrainLocalPos.z;
  if (cRam_? == '\0') {
    func_?(0xb388);
    cRam_? = '\x01';
  }
  TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->centerDamage = centerDamage;
  TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType =
       damageFallOffType;
  if (cm != (MVCubeModelBase *)0x0) {
    if ((cm->fields)._._.type == 8) {
      pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_FineGrainedLocalPosToTerrainLocalPos
                         ((Vector3 *)&stack0xfffffff0,fineGrainedTerrainLocalPos,(MethodInfo *)0x0);
      fVar5 = pVVar4->z;
      fVar6 = pVVar4->y;
      pRVar7 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
      (pRVar7->localPosition).x = pVVar4->x;
      (pRVar7->localPosition).y = fVar6;
      (pRVar7->localPosition).z = fVar5;
      IVar8.z = fineGrainedTerrainLocalPos.x;
      IVar8._0_4_ = &stack0xfffffff4;
      IVar8 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_FromLocalPosToLocalPos
                         (IVar8,(ICubeModel *)CONCAT22(uVar2,fineGrainedTerrainLocalPos.z),
                          (ICubeModel *)cm,(MethodInfo *)fineGrainedTerrainWorldObject);
      cm._0_2_ = 0;
      RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
                (pMVar1,radius,*IVar8._0_4_,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        fineGrainedTerrainLocalPos.z = -0x7fe9;
        in_stack_9 = 0x102b;
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = (MVCubeModelBase *)0x0;
      puVar10 = (undefined *)0x0;
      centerDamage = 0.0;
      pRVar11 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
      if (0 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x) {
        do {
          iVar12 = 0;
          fVar5 = centerDamage;
          if (0 < (pRVar11->static_fields->iterationBounds).y) {
            do {
              iVar13 = 0;
              this = (MVCubeModelBase *)(uint)(ushort)cm;
              if (0 < (pRVar11->static_fields->iterationBounds).z) {
                do {
                  iVar3 = (int16_t)puVar10;
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            ((IntVector *)&stack0xfffffff4,
                             (int)(pRVar11->static_fields->localMin).x + (int)fVar5,
                             (pRVar11->static_fields->localMin).y + iVar12,
                             (pRVar11->static_fields->localMin).z + iVar13,(MethodInfo *)0x0);
                  pMVar14 = (MVCubeModelBase *)0x0;
                  pos.z = iVar3;
                  pos._0_4_ = pMVar1;
                  a = MVCubeModelBase::MVCubeModelBase_GetCube(this,pos,(MethodInfo *)0x0);
                  pMVar1 = pMVar14;
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                    pMVar1 = pMVar14;
                  }
                  cm._0_2_ = 0;
                  puVar10 = &UNK_?;
                  bVar15 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                                    ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
                  if (bVar15 == 0) {
                    this = (MVCubeModelBase *)0x0;
                  }
                  else {
                    in_stack_9 = 0;
                    cm._0_2_ = (ushort)puVar10;
                    cubePos.z = (ushort)cm;
                    cubePos._0_4_ = pMVar1;
                    puVar16 = puVar10;
                    destructionState =
                         RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                                   (cubePos,(CubeBase *)a,
                                    (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)
                                    CONCAT22(getPhysicalProperites._2_2_,
                                             (int16_t)getPhysicalProperites),(MethodInfo *)0x0);
                    this = (MVCubeModelBase *)((uint)puVar10 & 0xffff);
                    getPhysicalProperites._0_2_ = (int16_t)puVar16;
                    fineGrainedTerrainLocalPos.z = (int16_t)destructionState;
                    in_stack_9 = (undefined2)(destructionState >> 0x10);
                    fineGrainedTerrainLocalPos._0_4_ = &UNK_?;
                    testPosition.z = (int16_t)getPhysicalProperites;
                    testPosition._0_4_ = pMVar1;
                    pMVar14 = pMVar1;
                    RemoveCubes_RemoveCubesWithinRadius_RemoveCube
                              (destructionState,this,fineGrainedTerrainWorldObject,testPosition,
                               (MethodInfo *)0x0);
                    radius = (float)a;
                    centerDamage = (float)this;
                    fineGrainedTerrainWorldObject = pMVar1;
                    pMVar1 = pMVar14;
                    puVar10 = puVar16;
                  }
                  iVar13 = iVar13 + 1;
                  pRVar11 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
                  fVar5 = centerDamage;
                } while (iVar13 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->
                                  iterationBounds).z);
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < (pRVar11->static_fields->iterationBounds).y);
          }
          centerDamage = (float)((int)fVar5 + 1);
          iVar3 = fineGrainedTerrainLocalPos.z;
        } while ((int)centerDamage < (int)(pRVar11->static_fields->iterationBounds).x);
      }
    }
    localIntVector.z = iVar3;
    localIntVector.x = fineGrainedTerrainLocalPos.x;
    localIntVector.y = fineGrainedTerrainLocalPos.y;
    pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalIntVectorToLocalPos
                       ((Vector3 *)&stack0xfffffff0,localIntVector,(MethodInfo *)0x0);
    fVar6 = pVVar4->y;
    fVar5 = pVVar4->z;
    pRVar7 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    (pRVar7->localPosition).x = pVVar4->x;
    (pRVar7->localPosition).y = fVar6;
    (pRVar7->localPosition).z = fVar5;
    localCenterPosition.z = iVar3;
    localCenterPosition.x = fineGrainedTerrainLocalPos.x;
    localCenterPosition.y = fineGrainedTerrainLocalPos.y;
    RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
              (fineGrainedTerrainWorldObject,radius,localCenterPosition,(MethodInfo *)0x0);
    bVar15 = RemoveCubes_RemoveCubesWithinRadius_RemoveCubesSmooth
                      (fineGrainedTerrainWorldObject,
                       (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)
                       CONCAT22(getPhysicalProperites._2_2_,(int16_t)getPhysicalProperites),
                       (MethodInfo *)0x0);
    return bVar15 != 0;
  }
  func_?();
  pcVar17 = (code *)swi(3);
  bVar15 = (*pcVar17)();
  return bVar15;
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
    (*(wo->klass->vtable).RemoveCubeNetworkUpdate_1.methodPtr)
              (wo,testPosition._0_4_,testPosition.z,
               (wo->klass->vtable).RemoveCubeNetworkUpdate_1.method);
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
  uStack_1 = (undefined *)0x0;
  bVar2 = 0;
  pCVar3 = (Cube *)0x0;
  z = 0;
  pFVar4 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0;
  pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
  this = wo;
  if (0 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x) {
    do {
      iVar6 = 0;
      if (0 < (pRVar5->static_fields->iterationBounds).y) {
        do {
          iVar7 = 0;
          bVar8 = 0;
          RVar9 = RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
          pFVar4 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)((uint)pFVar4 & 0xffff0000);
          if (0 < (pRVar5->static_fields->iterationBounds).z) {
            do {
              uVar10 = (ushort)pCVar3;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        ((IntVector *)&uStack_1,(pRVar5->static_fields->localMin).x + z,
                         (pRVar5->static_fields->localMin).y + iVar6,
                         (pRVar5->static_fields->localMin).z + iVar7,(MethodInfo *)0x0);
              if (this == (MVCubeModelBase *)0x0) goto code_?;
              iVar11 = 0;
              pos.z = uVar10;
              pos._0_4_ = uStack_1;
              a_00 = MVCubeModelBase::MVCubeModelBase_GetCube(this,pos,(MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pCVar3 = a_00;
              bVar2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                ((CubeBase *)a_00,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                iVar12 = (int16_t)getPhysicalProperites;
                uVar13 = (undefined2)((uint)getPhysicalProperites >> 0x10);
                iVar14 = (int16_t)pCVar3;
                pCVar3 = (Cube *)&UNK_?;
                cubePos.z = iVar14;
                cubePos._0_4_ = uStack_1;
                iVar14 = iVar12;
                uVar15 = uVar13;
                RVar16 = RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                                  (cubePos,(CubeBase *)a_00,getPhysicalProperites,(MethodInfo *)0x0)
                ;
                if (RVar9 == 
                    RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction)
                {
                  bVar17 = RVar16 == 
                           RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
code_?:
                  bVar18 = false;
                }
                else {
                  bVar17 = false;
                  if (RVar9 != 
                      RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed)
                  goto code_?;
                  bVar18 = RVar16 == 
                           RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction
                  ;
                }
                if ((bool)(bVar18 & bVar8)) {
                  iVar14 = (int16_t)wo;
                  uVar15 = (undefined2)((uint)wo >> 0x10);
                  pos_00.z = (short)pCVar3;
                  pos_00._0_4_ = uStack_1;
                  sVar19 = (short)uStack_1;
                  sVar20 = uStack_1._2_2_;
                  RVar21 = RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
                                    (wo,(int32_t)getPhysicalProperites,pos_00,0,
                                     getPhysicalProperites,(MethodInfo *)0x0);
                  iVar6 = CONCAT22(sVar20,sVar19);
                  z = CONCAT22(uVar13,iVar12);
                  RVar9 = RVar16;
                  if (RVar21 == RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely) {
code_?:
                    getPhysicalProperites = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)wo;
                    wo = (MVCubeModelBase *)0x65;
                    uVar22 = (uint)pCVar3 & 0xffff;
                    func_?();
                    pFVar4 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)
                              CONCAT13(1,(int3)uVar22);
                    goto code_?;
                  }
                  if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                    RVar9 = RVar16;
                  }
                  pBVar23 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                           RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                     (RVar21,(MethodInfo *)0x0);
                  z = CONCAT22(uVar13,iVar12);
                  iVar6 = CONCAT22(sVar20,sVar19);
                  if (a_00 != (Cube *)0x0) {
                    if ((a_00->fields)._.unIndentedSides != 0x3f) {
                      pBVar24 = (a_00->fields)._.byteCorners;
                      uVar22 = 0;
                      if (pBVar23 == (Byte__Array *)0x0) goto code_?;
                      do {
                        if (pBVar23->max_length <= uVar22) goto code_?;
                        if (pBVar24 == (Byte__Array *)0x0) goto code_?;
                        if (pBVar24->max_length <= uVar22) goto code_?;
                        if (pBVar23->vector[uVar22] != pBVar24->vector[uVar22]) goto code_?;
                        uVar22 = uVar22 + 1;
                      } while ((int)uVar22 < 8);
                    }
                    pBVar24 = (a_00->fields)._.faceMaterials;
                    if (pBVar24 != (Byte__Array *)0x0) {
                      pOVar25 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour
                               ::PlayableBehaviour_Clone
                                         ((PlayableBehaviour *)pBVar24,(MethodInfo *)0x0);
                      pCVar26 = (CubeBase *)func_?();
                      if (pCVar26 != (CubeBase *)0x0) {
                        if (pOVar25 == (Object *)0x0) {
                          pBVar24 = (Byte__Array *)0x0;
                        }
                        else {
                          pBVar24 = (Byte__Array *)func_?();
                          if (pBVar24 == (Byte__Array *)0x0) goto code_?;
                        }
                        getPhysicalProperites =
                             (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)&UNK_?;
                        MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                                  (pCVar26,pBVar23,pBVar24,(MethodInfo *)0x0);
                        func_?();
                        iVar6 = CONCAT22(sVar20,sVar19);
                        z = CONCAT22(uVar13,iVar12);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
                if (bVar17) {
                  z = (short)pCVar3 + -1;
                  sVar20 = (short)uStack_1 >> 0xf;
                  this_00 = (IntVector *)&stack0xffffffc0;
                  sVar19 = (short)uStack_1;
                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                            (this_00,(int)(short)uStack_1,(int)uStack_1._2_2_,z,(MethodInfo *)0x0)
                  ;
                  uVar13 = (undefined2)((uint)this_00 >> 0x10);
                  b.y = 0;
                  b.x = uVar10;
                  RVar9 = RVar16;
                  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
                    getPhysicalProperites =
                         (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)
                         TypeInfo__MV__WorldObject__IntVector;
                    wo = (MVCubeModelBase *)&UNK_?;
                    func_?();
                    RVar9 = RVar16;
                  }
                  iVar7 = CONCAT22(sVar20,sVar19);
                  iVar12 = (int16_t)pFVar4;
                  a.z = iVar12;
                  a.x = sVar19;
                  a.y = sVar20;
                  b.z = iVar11;
                  iVar14 = iVar12;
                  bVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
                                    (a,b,(MethodInfo *)0x0);
                  iVar6 = CONCAT22(uVar13,iVar11);
                  if (bVar2 != 0) {
                    uVar13 = SUB42(wo,0);
                    uVar27 = (undefined2)((uint)wo >> 0x10);
                    pos_01.z = iVar12;
                    pos_01.x = sVar19;
                    pos_01.y = sVar20;
                    pFVar4 = getPhysicalProperites;
                    iVar28 = z;
                    RVar21 = RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
                                      (wo,z,pos_01,1,getPhysicalProperites,(MethodInfo *)0x0);
                    iVar6 = CONCAT22(uVar27,uVar13);
                    z = CONCAT22((short)((uint)iVar28 >> 0x10),iVar12);
                    if (RVar21 != RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely) {
                      if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      getPhysicalProperites =
                           (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)&UNK_?;
                      pBVar23 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                               RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                         (RVar21,(MethodInfo *)0x0);
                      iVar6 = CONCAT22(uVar27,uVar13);
                      z = CONCAT22((short)((uint)iVar28 >> 0x10),iVar12);
                      if (iVar7 == 0) {
code_?:
                        func_?();
                      }
                      else {
                        if (*(char *)(iVar7 + 8) != '?') {
                          iVar29 = *(int *)(iVar7 + 0xc);
                          uVar22 = 0;
                          if (pBVar23 == (Byte__Array *)0x0) goto code_?;
                          do {
                            if (pBVar23->max_length <= uVar22) goto code_?;
                            if (iVar29 == 0) goto code_?;
                            if (*(uint *)(iVar29 + 0xc) <= uVar22) goto code_?;
                            if (pBVar23->vector[uVar22] != *(uint8_t *)(uVar22 + 0x10 + iVar29))
                            goto code_?;
                            uVar22 = uVar22 + 1;
                          } while ((int)uVar22 < 8);
                        }
                        if ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        pBVar23 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                                 RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                           (RVar21,(MethodInfo *)0x0);
                        if (*(PlayableBehaviour **)(iVar7 + 0x10) == (PlayableBehaviour *)0x0)
                        goto code_?;
                        pOVar25 = UnityEngine.CoreModule.dll::UnityEngine::Playables::
                                 PlayableBehaviour::PlayableBehaviour_Clone
                                           (*(PlayableBehaviour **)(iVar7 + 0x10),(MethodInfo *)0x0
                                           );
                        pCVar26 = (CubeBase *)func_?();
                        if (pCVar26 == (CubeBase *)0x0) goto code_?;
                        if (pOVar25 == (Object *)0x0) {
                          pBVar24 = (Byte__Array *)0x0;
code_?:
                          getPhysicalProperites =
                               (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)&UNK_?;
                          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                                    (pCVar26,pBVar23,pBVar24,(MethodInfo *)0x0);
                          func_?();
                          iVar6 = CONCAT22(uVar27,uVar13);
                          z = CONCAT22((short)((uint)iVar28 >> 0x10),iVar12);
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
                      pcVar30 = (code *)swi(3);
                      bVar2 = (*pcVar30)();
                      return bVar2;
                    }
                  }
code_?:
                  iVar7 = CONCAT22(uVar15,iVar14);
                  if (RVar9 != 
                      RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed) {
                    bVar8 = 0;
                    goto code_?;
                  }
                }
                else {
                  RVar9 = RVar16;
                  if (RVar16 != 
                      RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed)
                  goto code_?;
                }
                iVar7 = CONCAT22(uVar15,iVar14);
                bVar8 = 1;
              }
              else {
                bVar8 = 0;
              }
code_?:
              iVar7 = iVar7 + 1;
              pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
              this = wo;
            } while (iVar7 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->
                              iterationBounds).z);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (pRVar5->static_fields->iterationBounds).y);
      }
      z = z + 1;
    } while (z < (pRVar5->static_fields->iterationBounds).x);
    bVar2 = (bool)((uint)pFVar4 >> 0x18);
  }
  return bVar2;
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
    func_?(&TypeInfo__RemoveCubes__RemoveCubesWithinRadius);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pCVar2 = (Cube *)0x0;
  bVar3 = 0;
  uVar4 = 0;
  pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
  if (0 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x) {
    do {
      puVar6 = (undefined *)0x0;
      if (0 < (pRVar5->static_fields->iterationBounds).y) {
        do {
          iVar7 = 0;
          puStack_8 = puVar6;
          if (0 < (pRVar5->static_fields->iterationBounds).z) {
            do {
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        ((IntVector *)&stack0xffffffe8,
                         (int)(pRVar5->static_fields->localMin).x + uVar4,
                         (int32_t)(puStack_8 + (pRVar5->static_fields->localMin).y),
                         (pRVar5->static_fields->localMin).z + iVar7,(MethodInfo *)0x0);
              if (wo == (MVCubeModelBase *)0x0) {
                func_?();
                pcVar9 = (code *)swi(3);
                bVar3 = (*pcVar9)();
                return bVar3;
              }
              iVar10 = 0;
              uVar11 = 0;
              pos.y = 0;
              pos.z = 0;
              pos.x = uVar1;
              a = MVCubeModelBase::MVCubeModelBase_GetCube(wo,pos,(MethodInfo *)0x0);
              uVar1 = uVar11;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                uVar1 = uVar11;
              }
              uVar4 = 0;
              pCVar2 = a;
              bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                                ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                uVar4 = CONCAT22(0,uVar1);
                puVar6 = &UNK_?;
                cubePos.z = iVar10;
                cubePos.x = uVar1;
                cubePos.y = 0;
                destructionState =
                     RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                               (cubePos,(CubeBase *)a,getPhysicalProperites,(MethodInfo *)0x0);
                testPosition.y = 0;
                testPosition.x = uVar1;
                getPhysicalProperites = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)wo;
                testPosition.z = iVar10;
                bVar3 = RemoveCubes_RemoveCubesWithinRadius_RemoveCube
                                  (destructionState,wo,(MVCubeModelBase *)0x0,testPosition,
                                   (MethodInfo *)0x0);
                pCVar2 = (Cube *)((uint)puVar6 & 0xff);
                if (bVar3 != 0) {
                  pCVar2 = (Cube *)0x1;
                }
              }
              iVar7 = iVar7 + 1;
              puVar6 = &UNK_?;
              pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
            } while (iVar7 < (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->
                             iterationBounds).z);
          }
          puVar6 = puVar6 + 1;
        } while ((int)puVar6 < (int)(pRVar5->static_fields->iterationBounds).y);
      }
      bVar3 = (bool)pCVar2;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(pRVar5->static_fields->iterationBounds).x);
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
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

