
/* RemoveCubes+RemoveCubesWithinRadius+DestructionState CalculateCubeDestruction(IntVector,
   CubeBase, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
          (IntVector cubePos,CubeBase *cubeBase,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cubeBase != (CubeBase *)0x0) {
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)cubeBase,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
      if (getPhysicalProperites != (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0) {
        pPVar2 = System.Core.dll::System::Func`2[Byte,MV::WorldObject::PhysicalProperties]::
                 Func_2_Byte_MV_WorldObject_PhysicalProperties__Invoke
                           ((PhysicalProperties *)auStack_3,getPhysicalProperites,
                            *(uint8_t *)&pOVar1[2].klass,
                            MethodInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>__Invoke_unsigned_char_
                           );
        if (pPVar2->toughness != _UNK_?) {
          pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                   CubeMathFunctions_LocalIntVectorToLocalPos
                             ((Vector3 *)(auStack_3 + 8),cubePos,(MethodInfo *)0x0);
          uVar5._0_4_ = pVVar4->x;
          uVar5._4_4_ = pVVar4->y;
          fVar6 = pVVar4->z;
          pRVar7 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
          auStack_3._12_4_ = (pRVar7->localPosition).x;
          puStack_8 = (undefined *)(pRVar7->localPosition).y;
          fVar9 = (pRVar7->localPosition).z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          toughness = (float)stack0xffffffec;
          a.z = fVar6;
          a.x = (float)(int)uVar5;
          a.y = (float)(int)((ulonglong)uVar5 >> 0x20);
          b.z = fVar9;
          b.x = (float)auStack_3._12_4_;
          b.y = (float)puStack_8;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)(auStack_3 + 8),a,b,(MethodInfo *)0x0);
          fVar10 = (float10)func_?();
          fVar6 = (float)fVar10;
          iVar11 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType;
          if (iVar11 == 0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pRVar7 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
            if (toughness < pRVar7->centerDamage) {
              if (fVar6 < pRVar7->localRadiusReducedSquared) {
                return 
                RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
              }
              if (fVar6 < pRVar7->localRadiusExtendedSquared) {
                return 
                RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
              }
            }
          }
          else if (iVar11 == 1) {
            RVar12 = RemoveCubes_RemoveCubesWithinRadius_LinearDestruction
                              (fVar6,toughness,(MethodInfo *)0x0);
            return RVar12;
          }
        }
        return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
      }
    }
  }
  func_?(0);
code_?:
  uVar13 = func_?(0,0);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  RVar12 = (*pcVar14)();
  return RVar12;
}


/* Void CalculateLocalValues(MVCubeModelBase, Single, IntVector) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
               (MVCubeModelBase *cm,float radius,IntVector localCenterPosition,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_ESI >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cm != (MVCubeModelBase *)0x0) {
    puVar2 = (undefined8 *)
             (*(code *)(cm->klass->vtable).get_Scale.method)
                       (&stack0xffffffe0,cm,(cm->klass->vtable).set_Scale.methodPtr);
    uStack_3 = *puVar2;
    localRadius = radius / (float)pMVar4;
    radius._2_2_ = (undefined2)((uint)localRadius >> 0x10);
    fVar5 = mscorlib.dll::System::Math::Math_Max_2
                       (0.0,localRadius - _UNK_?,(MethodInfo *)0x0);
    cm._0_2_ = SUB42(fVar5,0);
    cm._2_2_ = (undefined2)((uint)fVar5 >> 0x10);
    if (fVar5 < _UNK_?) {
      cm._0_2_ = 0;
      cm._2_2_ = 0;
    }
    fVar5 = localRadius + _UNK_?;
    if (TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->damageFallOffType == 1) {
      centerDamage = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->centerDamage;
      if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
        func_?();
      }
      uVar1 = (undefined2)((uint)centerDamage >> 0x10);
      RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
      RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
                (localRadius,centerDamage,(MethodInfo *)0x0);
    }
    pRVar6 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    pRVar6->localRadiusExtendedSquared = fVar5 * fVar5;
    pRVar6->localRadiusReducedSquared =
         (float)CONCAT22(cm._2_2_,(int16_t)cm) * (float)CONCAT22(cm._2_2_,(int16_t)cm);
    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
      uVar1 = 0x1028;
      func_?();
    }
    uVar7 = (TypeInfo__MV__WorldObject__IntVector->static_fields->One).x;
    IVar8.z = uVar7;
    IVar8.x = (short)(int)fVar5;
    IVar8.y = (short)((uint)(int)fVar5 >> 0x10);
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
    pMVar4 = (MethodInfo *)uVar12;
    method_00 = pMVar4;
    uStack_3 = uVar13;
    IVar9 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                       (i1,i2_00,method_00);
    uVar15 = *IVar9._0_4_;
    iVar16 = *(int16_t *)(IVar9._0_4_ + 1);
    pRVar6 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    (pRVar6->localMin).x = (short)uVar15;
    (pRVar6->localMin).y = (short)((uint)uVar15 >> 0x10);
    (pRVar6->localMin).z = iVar16;
    uStack_3 = CONCAT44(&UNK_?,pMVar4);
    iV.z = iVar11;
    iV.x = 2;
    iV.y = 0;
    IVar8 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                       ((int32_t)&puStack_10,iV,(MethodInfo *)CONCAT22(unaff_retaddr,uVar1));
    uVar17 = (TypeInfo__MV__WorldObject__IntVector->static_fields->One).x;
    cm._0_2_ = (int16_t)*IVar8._0_4_;
    IVar9.z = (int16_t)cm;
    IVar9._0_4_ = &puStack_10;
    i2.y = radius._2_2_;
    i2.x = *(undefined2 *)(IVar8._0_4_ + 1);
    i2.z = uVar17;
    IVar9 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                       (IVar9,i2,
                        (MethodInfo *)
                        CONCAT22(in_stack_18,
                                 (TypeInfo__MV__WorldObject__IntVector->static_fields->One).z));
    uVar15 = *IVar9._0_4_;
    iVar16 = *(int16_t *)(IVar9._0_4_ + 1);
    pRVar6 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    (pRVar6->iterationBounds).x = (short)uVar15;
    (pRVar6->iterationBounds).y = (short)((uint)uVar15 >> 0x10);
    (pRVar6->iterationBounds).z = iVar16;
    return;
  }
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Boolean CubeCornersEqual(Byte[], Byte[]) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_CubeCornersEqual
               (Byte__Array *corners0,Byte__Array *corners1,MethodInfo *method)

{
  uVar1 = 0;
  while (corners0 != (Byte__Array *)0x0) {
    if (corners0->max_length <= uVar1) goto code_?;
    if (corners1 == (Byte__Array *)0x0) break;
    if (corners1->max_length <= uVar1) goto code_?;
    if (corners0->vector[uVar1] != corners1->vector[uVar1]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    if (7 < (int)uVar1) {
      return 1;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* RemoveCubes+RemoveCubesWithinRadius+RemoveStyle HandleCubeOnRadiusLimit(MVCubeModelBase, Int32,
   IntVector, Boolean, Func`2[Byte,MV.WorldObject.PhysicalProperties]) */

RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
          (MVCubeModelBase *wo,int32_t x,IntVector pos,bool fromDestroyToNotDestroy,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  func_?((short)&stack0xfffffff4,0,0,0,0);
  if (x < (int)(TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields->iterationBounds).x /
          2) {
    iVar4 = -1;
  }
  else {
    iVar4 = 1;
  }
  if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
    uVar1 = 0x1028;
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  IVar5.z = pos.x;
  IVar5._0_4_ = &pos;
  i2.y = uVar2;
  i2.x = pos.z;
  i2.z = iVar4;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                    (IVar5,i2,(MethodInfo *)CONCAT22(uVar1,uVar3));
  pIVar6 = IVar5._0_4_;
  iVar4 = pIVar6->z;
  IVar5 = *pIVar6;
  if (wo == (MVCubeModelBase *)0x0) {
    func_?();
    pcVar7 = (code *)swi(3);
    RVar8 = (*pcVar7)();
    return RVar8;
  }
  a = MVCubeModelBase::MVCubeModelBase_GetCube(wo,*pIVar6,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar9 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                    ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    pos.z = (int16_t)getPhysicalProperites;
    uStack10 = (undefined2)((uint)getPhysicalProperites >> 0x10);
    pos._0_4_ = a;
    RVar11 = RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                      (IVar5,(CubeBase *)a,getPhysicalProperites,(MethodInfo *)0x0);
    if (RVar11 == RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed) {
      if (iVar4 == 1) {
        return RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_OnEdgeLeftUp;
      }
      if (iVar4 == -1) {
        return RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_OnEdgeLeftDown;
      }
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
  uVar1 = (undefined2)((uint)unaff_EBX >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar2 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
  pRVar2->centerDamage = centerDamage;
  pRVar2->damageFallOffType = damageFallOffType;
  if (cm != (MVCubeModelBase *)0x0) {
    pOVar3 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
             ::Object,System::Object]::
             Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)cm,(MethodInfo *)0x0);
    fVar4 = radius;
    if (pOVar3 == (Object *)0x8) {
      pVVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_FineGrainedLocalPosToTerrainLocalPos
                         ((Vector3 *)&stack0xfffffff0,fineGrainedTerrainLocalPos,(MethodInfo *)0x0);
      fVar4 = pVVar5->z;
      fVar6 = pVVar5->y;
      pRVar2 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
      (pRVar2->localPosition).x = pVVar5->x;
      (pRVar2->localPosition).y = fVar6;
      (pRVar2->localPosition).z = fVar4;
      IVar7.z = fineGrainedTerrainLocalPos.x;
      IVar7._0_4_ = &stack0xfffffff4;
      IVar7 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_FromLocalPosToLocalPos
                         (IVar7,(ICubeModel *)CONCAT22(uVar1,fineGrainedTerrainLocalPos.z),
                          (ICubeModel *)cm,(MethodInfo *)fineGrainedTerrainWorldObject);
      iVar8 = (IVar7._0_4_)->z;
      fVar4 = (float)CONCAT22(radius._2_2_,iVar8);
      fineGrainedTerrainLocalPos.x = 0;
      fineGrainedTerrainLocalPos.y = 0;
      RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
                (cm,radius,*IVar7._0_4_,(MethodInfo *)0x0);
      pMVar9 = fineGrainedTerrainWorldObject;
      if (cRam_? == '\0') {
        pMVar9 = (MVCubeModelBase *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      puVar10 = (undefined *)0x0;
      uVar11 = 0;
      pRVar2 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
      pRVar12 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
      radius._0_2_ = iVar8;
      if (0 < (pRVar2->iterationBounds).x) {
        do {
          iVar13 = 0;
          fineGrainedTerrainWorldObject = pMVar9;
          if (0 < (pRVar2->iterationBounds).y) {
            do {
              iVar14 = 0;
              if (0 < (pRVar2->iterationBounds).z) {
                do {
                  fineGrainedTerrainWorldObject =
                       (MVCubeModelBase *)((pRVar2->localMin).z + iVar14);
                  uStack15 = (undefined2)((uint)&stack0xfffffff4 >> 0x10);
                  func_?();
                  puVar16 = &UNK_?;
                  pos.z = (int16_t)cm;
                  pos._0_4_ = puVar10;
                  a = MVCubeModelBase::MVCubeModelBase_GetCube(cm,pos,(MethodInfo *)0x0);
                  uVar17 = (ushort)cm;
                  puVar10 = puVar16;
                  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                    uStack15 = 0x1028;
                    func_?();
                    puVar10 = puVar16;
                  }
                  centerDamage._0_2_ = 0;
                  fineGrainedTerrainLocalPos.z = 0;
                  uStack15 = 0;
                  radius._0_2_ = 0x1f5b;
                  radius._2_2_ = 0x1028;
                  bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                                    ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
                  fineGrainedTerrainLocalPos._0_4_ = a;
                  if (bVar18 != 0) {
                    fineGrainedTerrainLocalPos.z = (int16_t)puVar10;
                    uStack15 = (undefined2)((uint)puVar10 >> 0x10);
                    fineGrainedTerrainLocalPos._0_4_ = &UNK_?;
                    cubePos.z = uVar17;
                    cubePos._0_4_ = puVar10;
                    uVar19 = uVar17;
                    destructionState =
                         RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                                   (cubePos,(CubeBase *)a,
                                    (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0,
                                    (MethodInfo *)0x0);
                    fineGrainedTerrainWorldObject = (MVCubeModelBase *)&UNK_?;
                    testPosition.z = uVar19;
                    testPosition._0_4_ = puVar10;
                    RemoveCubes_RemoveCubesWithinRadius_RemoveCube
                              (destructionState,(MVCubeModelBase *)0x0,(MVCubeModelBase *)0x0,
                               testPosition,(MethodInfo *)0x0);
                    centerDamage._0_2_ = uVar17;
                  }
                  uVar11 = (uint)centerDamage._0_2_;
                  cm = (MVCubeModelBase *)0x0;
                  iVar14 = iVar14 + 1;
                  pRVar2 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
                  pRVar12 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
                } while (iVar14 < (pRVar2->iterationBounds).z);
              }
              pRVar2 = pRVar12->static_fields;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (pRVar2->iterationBounds).y);
          }
          fVar4 = (float)CONCAT22(radius._2_2_,radius._0_2_);
          pRVar2 = pRVar12->static_fields;
          uVar11 = uVar11 + 1;
          pMVar9 = fineGrainedTerrainWorldObject;
        } while ((int)uVar11 < (int)(pRVar2->iterationBounds).x);
      }
    }
    uStack15 = 0x1028;
    localIntVector.z = fineGrainedTerrainLocalPos.z;
    localIntVector.x = fineGrainedTerrainLocalPos.x;
    localIntVector.y = fineGrainedTerrainLocalPos.y;
    pVVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalIntVectorToLocalPos
                       ((Vector3 *)&stack0xfffffff0,localIntVector,(MethodInfo *)0x0);
    fVar20 = pVVar5->y;
    fVar6 = pVVar5->z;
    pRVar2 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
    (pRVar2->localPosition).x = pVVar5->x;
    (pRVar2->localPosition).y = fVar20;
    (pRVar2->localPosition).z = fVar6;
    localCenterPosition.z = fineGrainedTerrainLocalPos.z;
    localCenterPosition.x = fineGrainedTerrainLocalPos.x;
    localCenterPosition.y = fineGrainedTerrainLocalPos.y;
    RemoveCubes_RemoveCubesWithinRadius_CalculateLocalValues
              (fineGrainedTerrainWorldObject,fVar4,localCenterPosition,(MethodInfo *)0x0);
    bVar18 = RemoveCubes_RemoveCubesWithinRadius_RemoveCubesSmooth
                      (fineGrainedTerrainWorldObject,
                       (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)
                       fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
    return bVar18 != 0;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  bVar18 = (*pcVar21)();
  return bVar18;
}


/* RemoveCubes+RemoveCubesWithinRadius+DestructionState LinearDestruction(Single, Single) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_LinearDestruction
          (float testDistSqr,float toughness,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  iVar1 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
          numFallOffValues;
  while( true ) {
    iVar2 = iVar1;
    iVar1 = iVar2 + -1;
    if (iVar1 < 0) {
      return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed;
    }
    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
      func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues
        == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
    pfVar3 = (float *)func_?(iVar1);
    if (testDistSqr < *pfVar3) {
      if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
        func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
      }
      if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues
          == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
      iVar4 = func_?(iVar1);
      fVar5 = 0.0;
      fVar6 = *(float *)(iVar4 + 4);
      if (iVar1 < TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
                  numFallOffValues + -1) {
        if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0))
        {
          func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
        }
        if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
            fallOffValues ==
            (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) break;
        iVar2 = func_?(iVar2);
        fVar5 = *(float *)(iVar2 + 4);
      }
      if (toughness < fVar5) {
        return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
      }
      if (toughness < fVar6) {
        return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  RVar8 = (*pcVar7)();
  return RVar8;
}


/* RemoveCubes+RemoveCubesWithinRadius+DestructionState NoFallOffDestruction(Single, Single) */

RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
RemoveCubes_RemoveCubesWithinRadius_NoFallOffDestruction
          (float testDistSqr,float toughness,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
  if (toughness < pRVar1->centerDamage) {
    if (testDistSqr < pRVar1->localRadiusReducedSquared) {
      return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_CompletelyDestroyed;
    }
    if (testDistSqr < pRVar1->localRadiusExtendedSquared) {
      return RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction;
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (destructionState == RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_NotDestroyed) {
    return 0;
  }
  if (destructionState ==
      RemoveCubes_RemoveCubesWithinRadius_DestructionState__Enum_OnEdgeOfDestruction) {
    if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (MVCubeModelBase *)0x0;
  uStack_2._3_1_ = 0;
  uStack_3 = 0;
  puStack_4 = (undefined *)0x0;
  pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
  uStack_2 = (MVCubeModelBase *)0x0;
  pBVar6 = (Byte__Array *)0x0;
  pRVar7 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
  this_00 = wo;
  if (0 < (pRVar5->iterationBounds).x) {
    do {
      pMVar8 = (MVCubeModelBase *)0x0;
      if (0 < (pRVar5->iterationBounds).y) {
        do {
          bVar9 = false;
          puVar10 = (undefined *)0x2;
          uVar11 = 0;
          uStack_2 = (MVCubeModelBase *)((uint)uStack_2 & 0xffff0000);
          iVar12 = 0;
          if (0 < (pRVar5->iterationBounds).z) {
            do {
              func_?(&uStack_1,(short)(pBVar6->vector + (pRVar5->localMin).x + -0x10),
                              (undefined1 *)((int)&pMVar8->klass + (int)(pRVar5->localMin).y),
                              (pRVar5->localMin).z + iVar12,0);
              if (this_00 == (MVCubeModelBase *)0x0) goto code_?;
              this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)0x0;
              uVar13 = (ushort)uStack_1;
              uVar14 = (undefined2)((uint)uStack_1 >> 0x10);
              pos_01.z = uStack_3;
              pos_01._0_4_ = uStack_1;
              uVar15 = uStack_3;
              this = (MVCubeModelBase *)
                     MVCubeModelBase::MVCubeModelBase_GetCube(this_00,pos_01,(MethodInfo *)0x0);
              pMVar8 = this_00;
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?();
                pMVar8 = this_00;
              }
              bVar16 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                ((CubeBase *)this,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar16 == 0) {
                cubePos.z = uStack_3;
                cubePos._0_4_ = uStack_1;
                puStack_4 = (undefined *)
                             RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                                       (cubePos,(CubeBase *)this,getPhysicalProperites,
                                        (MethodInfo *)0x0);
                if (((puVar10 == (undefined *)0x2) && (puStack_4 == (undefined *)0x1)) && (bVar9))
                {
                  pos_00.z = uStack_3;
                  pos_00._0_4_ = uStack_1;
                  RVar17 = RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
                                    (wo,(int32_t)pBVar6,pos_00,0,getPhysicalProperites,
                                     (MethodInfo *)0x0);
                  if (RVar17 == RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely) {
code_?:
                    uVar15 = uStack_3;
                    uVar11 = (undefined2)((uint)uStack_1 >> 0x10);
                    this = uStack_1;
                    uVar13 = uStack_3;
                    func_?();
                    uStack_2 = (MVCubeModelBase *)CONCAT13(1,(uint3)uVar15);
                  }
                  else {
                    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->vtable)
                                .Equals.methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                        cctor_started == 0)) {
                      func_?();
                    }
                    pBVar18 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                             RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                       (RVar17,(MethodInfo *)0x0);
                    if (this == (MVCubeModelBase *)0x0) goto code_?;
                    uVar14 = 0x1028;
                    bVar16 = SubscribableVariableBase`1[System::Boolean]::
                            SubscribableVariableBase_1_System_Boolean__get_Value
                                      ((SubscribableVariableBase_1_System_Boolean_ *)this,
                                       (MethodInfo *)0x0);
                    if (bVar16 != 0x3f) {
                      pBVar6 = (Byte__Array *)
                                mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                            *)this,(MethodInfo *)0x0);
                      bVar16 = RemoveCubes_RemoveCubesWithinRadius_CubeCornersEqual
                                        (pBVar18,pBVar6,(MethodInfo *)0x0);
                      if (bVar16 == 0) goto code_?;
                    }
                    pAVar19 = (Array *)System.dll::System::Collections::Generic::
                                      SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                      ::Single,System::Object]::
                                      SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                                  *)this,(MethodInfo *)0x0);
                    if (pAVar19 == (Array *)0x0) {
code_?:
                      func_?();
                      pcVar20 = (code *)swi(3);
                      bVar16 = (*pcVar20)();
                      return bVar16;
                    }
                    mscorlib.dll::System::Array::Array_Clone(pAVar19,(MethodInfo *)0x0);
                    wo = (MVCubeModelBase *)func_?();
                    pMVar21 = (MethodInfo *)0x0;
                    pBVar6 = (Byte__Array *)func_?();
                    uVar11 = (undefined2)((uint)wo >> 0x10);
                    uVar13 = 0x256c;
                    uVar14 = 0x1028;
                    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                              ((CubeBase *)wo,pBVar18,pBVar6,pMVar21);
code_?:
                    uStack_2 = wo;
                    pBVar6 = (Byte__Array *)&UNK_?;
                    func_?();
                  }
code_?:
                  pMVar8 = this;
                  if (puStack_4 != (undefined *)0x2) {
                    bVar9 = false;
                    puVar10 = puStack_4;
                    goto code_?;
                  }
                }
                else {
                  if (puVar10 == (undefined *)0x1 && puStack_4 == (undefined *)0x2) {
                    iVar12 = (short)uStack_3 + -1;
                    iVar22 = 0;
                    func_?(&stack0xffffffc4,(undefined2)uStack_1,(int)uStack_1._2_2_);
                    this = pMVar8;
                    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MV__WorldObject__IntVector);
                      this = pMVar8;
                    }
                    pos.y = uVar11;
                    pos.x = uVar15;
                    a.z = (int16_t)uStack_2;
                    a.x = uVar15;
                    a.y = uVar11;
                    b.z = iVar22;
                    b.x = (short)iVar12;
                    b.y = (short)((uint)iVar12 >> 0x10);
                    bVar16 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
                                      (a,b,(MethodInfo *)0x0);
                    if ((bVar16 != 0) &&
                       (pos.z = (int16_t)uStack_2,
                       RVar17 = RemoveCubes_RemoveCubesWithinRadius_HandleCubeOnRadiusLimit
                                         (wo,(int32_t)pBVar6,pos,1,getPhysicalProperites,
                                          (MethodInfo *)0x0),
                       RVar17 != RemoveCubes_RemoveCubesWithinRadius_RemoveStyle__Enum_Completely)) {
                      if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->
                                  vtable).Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                          cctor_started == 0)) {
                        func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes);
                      }
                      pBVar18 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                               RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                         (RVar17,(MethodInfo *)0x0);
                      if (this_01 ==
                          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)0x0) goto code_?;
                      this_02 = this_01;
                      bVar16 = SubscribableVariableBase`1[System::Boolean]::
                              SubscribableVariableBase_1_System_Boolean__get_Value
                                        ((SubscribableVariableBase_1_System_Boolean_ *)this_01,
                                         (MethodInfo *)0x0);
                      if (bVar16 != 0x3f) {
                        corners1 = (Byte__Array *)
                                   mscorlib.dll::System::Collections::ObjectModel::
                                   Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                               *)this_01,(MethodInfo *)0x0);
                        bVar16 = RemoveCubes_RemoveCubesWithinRadius_CubeCornersEqual
                                          (pBVar18,corners1,(MethodInfo *)0x0);
                        if (bVar16 == 0) goto code_?;
                      }
                      if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->
                                  vtable).Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__CornerCubes->_1).
                          cctor_started == 0)) {
                        func_?();
                      }
                      pBVar6 = RemoveCubes+RemoveCubesWithinRadius+CornerCubes::
                                RemoveCubes_RemoveCubesWithinRadius_CornerCubes_GetCornerCube
                                          (RVar17,(MethodInfo *)0x0);
                      pAVar19 = (Array *)System.dll::System::Collections::Generic::
                                        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                        ::Single,System::Object]::
                                        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                  (this_02,(MethodInfo *)0x0);
                      if (pAVar19 == (Array *)0x0) goto code_?;
                      mscorlib.dll::System::Array::Array_Clone(pAVar19,(MethodInfo *)0x0);
                      wo = (MVCubeModelBase *)func_?();
                      pMVar21 = (MethodInfo *)0x0;
                      pBVar18 = (Byte__Array *)func_?();
                      uVar11 = (undefined2)((uint)wo >> 0x10);
                      uVar13 = 0x272f;
                      uVar14 = 0x1028;
                      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                                ((CubeBase *)wo,pBVar6,pBVar18,pMVar21);
                      goto code_?;
                    }
                    goto code_?;
                  }
                  if (puStack_4 != (undefined *)0x2) goto code_?;
                }
                bVar9 = true;
                puVar10 = puStack_4;
              }
              else {
                bVar9 = false;
              }
code_?:
              iVar12 = CONCAT22(uVar14,uVar13) + 1;
              pRVar5 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
              pRVar7 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
              this_00 = wo;
            } while (iVar12 < (pRVar5->iterationBounds).z);
          }
          pRVar5 = pRVar7->static_fields;
          pMVar8 = (MVCubeModelBase *)((int)&pMVar8->klass + 1);
        } while ((int)pMVar8 < (int)(pRVar5->iterationBounds).y);
      }
      pRVar5 = pRVar7->static_fields;
      pBVar6 = (Byte__Array *)((int)&pBVar6->klass + 1);
    } while ((int)pBVar6 < (int)(pRVar5->iterationBounds).x);
  }
  return uStack_2._3_1_;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  uStack_1 = 0;
  uStack_2 = in_ECX & 0xffffff00;
  iStack_3 = 0;
  pRVar4 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
  iStack_5 = 0;
  pRVar6 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
  if (0 < (pRVar4->iterationBounds).x) {
    do {
      iStack_7 = 0;
      if (0 < (pRVar4->iterationBounds).y) {
        do {
          iVar8 = 0;
          if (0 < (pRVar4->iterationBounds).z) {
            do {
              func_?(&uStack_1,(pRVar4->localMin).x + iStack_5,
                              (pRVar4->localMin).y + iStack_7,(pRVar4->localMin).z + iVar8,0);
              if (wo == (MVCubeModelBase *)0x0) {
                func_?();
                pcVar9 = (code *)swi(3);
                bVar10 = (*pcVar9)();
                return bVar10;
              }
              pos.z = iStack_3;
              pos.x = (undefined2)uStack_1;
              pos.y = uStack_1._2_2_;
              a = MVCubeModelBase::MVCubeModelBase_GetCube(wo,pos,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?((short)TypeInfo__MV__WorldObject__CubeBase);
              }
              bVar10 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                                ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar10 != 0) {
                cubePos.z = iStack_3;
                cubePos.x = (undefined2)uStack_1;
                cubePos.y = uStack_1._2_2_;
                destructionState =
                     RemoveCubes_RemoveCubesWithinRadius_CalculateCubeDestruction
                               (cubePos,(CubeBase *)a,getPhysicalProperites,(MethodInfo *)0x0);
                testPosition.z = iStack_3;
                testPosition.x = (undefined2)uStack_1;
                testPosition.y = uStack_1._2_2_;
                bVar10 = RemoveCubes_RemoveCubesWithinRadius_RemoveCube
                                  (destructionState,wo,fineGrainedTerrain,testPosition,
                                   (MethodInfo *)0x0);
                uStack_2 = uStack_2 & 0xff;
                if (bVar10 != 0) {
                  uStack_2 = 1;
                }
              }
              iVar8 = iVar8 + 1;
              pRVar4 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius->static_fields;
              pRVar6 = TypeInfo__RemoveCubes__RemoveCubesWithinRadius;
            } while (iVar8 < (pRVar4->iterationBounds).z);
          }
          pRVar4 = pRVar6->static_fields;
          iStack_7 = iStack_7 + 1;
        } while (iStack_7 < (pRVar4->iterationBounds).y);
      }
      pRVar4 = pRVar6->static_fields;
      iStack_5 = iStack_5 + 1;
    } while (iStack_5 < (pRVar4->iterationBounds).x);
  }
  return (bool)uStack_2;
}


/* Void TestFallOffValues(Single, Single) */

void Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius::
     RemoveCubes_RemoveCubesWithinRadius_TestFallOffValues
               (float radius,float centerDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
    func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues);
  }
  RemoveCubes+RemoveCubesWithinRadius+FallOffValues::
  RemoveCubes_RemoveCubesWithinRadius_FallOffValues_SetFallOffValues
            (radius,centerDamage,(MethodInfo *)0x0);
  pRVar1 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues__Class *)0x0;
  while( true ) {
    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
      pRStack_2 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
      func_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->
        numFallOffValues <= (int)pRVar1) break;
    if ((((uint)(TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->_1).cctor_started == 0)) {
      pRStack_2 = TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues;
      func_?();
    }
    if (TypeInfo__RemoveCubes_RemoveCubesWithinRadius__FallOffValues->static_fields->fallOffValues
        == (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue__Array *)0x0) {
      pRStack_2 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues__Class *)0x0;
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pRStack_2 = pRVar1;
    puVar4 = (undefined4 *)func_?();
    pRStack_2 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues__Class *)*puVar4;
    uStack_5 = puVar4[1];
    message = (Object *)
              func_?(TypeInfo__RemoveCubes_RemoveCubesWithinRadius_FallOffValues__FallOffValue
                              ,&pRStack_2);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
    pRVar1 = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues__Class *)
             ((int)&(pRVar1->_0).image + 1);
  }
  return;
}

