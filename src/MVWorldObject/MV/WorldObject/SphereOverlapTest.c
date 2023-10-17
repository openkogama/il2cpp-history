
/* OverlapState HandleCubeOnRadiusLimit(Int32, IntVector, IntVector, Boolean, Boolean, ICubeModel,
   Vector3, Single) */

OverlapState__Enum
MVWorldObject.dll::MV::WorldObject::SphereOverlapTest::SphereOverlapTest_HandleCubeOnRadiusLimit
          (int32_t x,IntVector pos,IntVector iterationBounds,bool cubeIsWithinRadius,
          bool prevCubeIsWithinRadius,ICubeModel *cubeModel,Vector3 localPosition,
          float localRadiusSquared,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_ESI >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff4,0,0,0,(MethodInfo *)0x0);
  if (x < (int)iterationBounds.x / 2) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_3 = &UNK_?;
    func_?();
  }
  IVar4.z = pos.x;
  IVar4._0_4_ = &pos;
  i2.y = uVar1;
  i2.x = pos.z;
  i2.z = iVar2;
  IVar4 = IntVector::IntVector_op_Addition
                    (IVar4,i2,(MethodInfo *)((uint)in_stack_3 & 0xffff0000));
  IVar4 = *IVar4._0_4_;
  if (cubeModel == (ICubeModel *)0x0) {
    func_?();
    pcVar5 = (code *)swi(3);
    OVar6 = (*pcVar5)();
    return OVar6;
  }
  cVar7 = func_?();
  if (cVar7 != '\0') {
    sVar8 = 0;
    pVVar9 = CubeMathFunctions::CubeMathFunctions_LocalIntVectorToLocalPos
                       ((Vector3 *)&stack0xffffffdc,IVar4,(MethodInfo *)0x0);
    uVar10 = pVVar9->x;
    uVar11 = pVVar9->y;
    fVar12 = pVVar9->z - localPosition.z;
    if (localRadiusSquared <=
        ((float)uVar11 - localPosition.y) * ((float)uVar11 - localPosition.y) +
        ((float)uVar10 - localPosition.x) * ((float)uVar10 - localPosition.x) + fVar12 * fVar12) {
      if (prevCubeIsWithinRadius == 0) {
        if (cubeIsWithinRadius != 0) {
          OVar6 = OverlapState__Enum_OnEdgeLeftUp;
          if (sVar8 != 1) {
            OVar6 = (uint)(sVar8 != -1) * 2 + OverlapState__Enum_OnEdgeLeftDown;
          }
          return OVar6;
        }
      }
      else if (cubeIsWithinRadius == 0) {
        if (sVar8 == 1) {
          return OverlapState__Enum_OnEdgeRightUp;
        }
        if (sVar8 == -1) {
          return OverlapState__Enum_OnEdgeRightDown;
        }
      }
    }
  }
  return OverlapState__Enum_OnEdge;
}


/* CommonOverlapResult[] OverlapTest(Single, Vector3, CommonOverlapArg[]) */

CommonOverlapResult__Array *
MVWorldObject.dll::MV::WorldObject::SphereOverlapTest::SphereOverlapTest_OverlapTest
          (float radius,Vector3 worldPos,CommonOverlapArg__Array *overlapArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::CommonOverlapResult>__Add_MV__WorldObject__CommonOverlapResult_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::CommonOverlapResult>__ToArray__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::CommonOverlapResult>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::CommonOverlapResult>
                   );
    func_?(&TypeInfo__MV__WorldObject__SphereOverlapTest);
    cRam_? = '\x01';
  }
  CStack_1.woId = 0;
  CStack_1.cubes = (List_1_MV_WorldObject_OverlapCubeData_ *)0x0;
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__List<MV::WorldObject::CommonOverlapResult>
                        );
  pLStack_2 = this;
  if (this != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::CommonOverlapResult>__List__
              );
    uVar3 = 0;
    if (overlapArgs != (CommonOverlapArg__Array *)0x0) {
      pCVar4 = overlapArgs->vector;
      while( true ) {
        if ((int)overlapArgs->max_length <= (int)uVar3) {
          pUVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                             (this,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::CommonOverlapResult>__ToArray__
                             );
          return (CommonOverlapResult__Array *)pUVar5;
        }
        if (overlapArgs->max_length <= uVar3) break;
        overlapArg.wo = pCVar4->wo;
        if ((TypeInfo__MV__WorldObject__SphereOverlapTest->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__SphereOverlapTest);
        }
        bVar6 = SphereOverlapTest_OverlapWo(overlapArg,radius,worldPos,&CStack_1,(MethodInfo *)0x0)
        ;
        this = pLStack_2;
        if (bVar6 != 0) {
          radius = (float)
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::CommonOverlapResult>__Add_MV__WorldObject__CommonOverlapResult_
          ;
          CStack_1.cubes = (List_1_MV_WorldObject_OverlapCubeData_ *)&UNK_?;
          func_?();
        }
        uVar3 = uVar3 + 1;
        pCVar4 = pCVar4 + 1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pCVar8 = (CommonOverlapResult__Array *)(*pcVar7)();
  return pCVar8;
}


/* Boolean OverlapWo(CommonOverlapArg, Single, Vector3, CommonOverlapResult ByRef) */

bool MVWorldObject.dll::MV::WorldObject::SphereOverlapTest::SphereOverlapTest_OverlapWo
               (CommonOverlapArg overlapArg,float worldRadius,Vector3 worldPos,
               CommonOverlapResult *overlapResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__Add_MV__WorldObject__OverlapCubeData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__set_Item_int__MV__WorldObject__OverlapCubeData_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>)
    ;
    func_?(&TypeInfo__MV__WorldObject__SphereOverlapTest);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  if (overlapArg.wo != (MVWorldObject *)0x0) {
    puVar2 = (undefined8 *)
              (*((overlapArg.wo)->klass->vtable).get_Position.methodPtr)
                        (&VStack_3,overlapArg.wo,
                         ((overlapArg.wo)->klass->vtable).get_Position.method);
    uVar4 = *puVar2;
    puStack_5 = *(undefined4 **)(puVar2 + 1);
    pVVar6 = (Vector3 *)
              (*((overlapArg.wo)->klass->vtable).get_Scale.methodPtr)
                        (&VStack_3,overlapArg.wo,((overlapArg.wo)->klass->vtable).get_Scale.method)
    ;
    VVar7 = *pVVar6;
    pQVar8 = (Quaternion *)
              (*((overlapArg.wo)->klass->vtable).get_Rotation.methodPtr)
                        (&stack0xfffffef0,overlapArg.wo,
                         ((overlapArg.wo)->klass->vtable).get_Rotation.method);
    VVar9.z = (float)puStack_5;
    VVar9._0_8_ = uVar4;
    pMVar10 = MatrixMath::MatrixMath_MakeInverseTransform
                        ((Matrix4x4 *)&stack0xfffffe90,VVar9,VVar7,*pQVar8,(MethodInfo *)0x0);
    fVar11 = pMVar10->m00;
    fVar12 = pMVar10->m10;
    fVar13 = pMVar10->m20;
    fVar14 = pMVar10->m30;
    fVar15 = pMVar10->m01;
    fVar16 = pMVar10->m11;
    fVar17 = pMVar10->m21;
    fVar18 = pMVar10->m31;
    fVar19 = pMVar10->m02;
    fVar20 = pMVar10->m12;
    fVar21 = pMVar10->m22;
    fVar22 = pMVar10->m32;
    VStack_3.x = pMVar10->m03;
    VStack_3.y = pMVar10->m13;
    VStack_3.z = pMVar10->m23;
    pMStack_23 = (MethodInfo *)pMVar10->m33;
    uVar24 = SUB42(fVar11,0);
    uStack_25 = (undefined2)((uint)fVar11 >> 0x10);
    uVar26 = SUB42(fVar16,0);
    uStack_27 = (undefined2)((uint)fVar16 >> 0x10);
    uVar28 = SUB42(fVar17,0);
    uVar29 = (undefined2)((uint)fVar17 >> 0x10);
    uVar30 = SUB42(fVar18,0);
    uStack_31 = (undefined2)((uint)fVar18 >> 0x10);
    uVar32 = SUB42(fVar21,0);
    uStack_33 = (undefined2)((uint)fVar21 >> 0x10);
    uVar34 = SUB42(fVar22,0);
    uVar35 = (undefined2)((uint)fVar22 >> 0x10);
    if ((TypeInfo__MV__WorldObject__SphereOverlapTest->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      fVar11 = (float)CONCAT22(uStack_25,uVar24);
      fVar16 = (float)CONCAT22(uStack_27,uVar26);
      fVar17 = (float)CONCAT22(uVar29,uVar28);
      fVar18 = (float)CONCAT22(uStack_31,uVar30);
      fVar21 = (float)CONCAT22(uStack_33,uVar32);
      fVar22 = (float)CONCAT22(uVar35,uVar34);
    }
    pSVar36 = TypeInfo__MV__WorldObject__SphereOverlapTest->static_fields;
    (pSVar36->worldToLocal).m00 = fVar11;
    (pSVar36->worldToLocal).m10 = fVar12;
    (pSVar36->worldToLocal).m20 = fVar13;
    (pSVar36->worldToLocal).m30 = fVar14;
    (pSVar36->worldToLocal).m01 = fVar15;
    (pSVar36->worldToLocal).m11 = fVar16;
    (pSVar36->worldToLocal).m21 = fVar17;
    (pSVar36->worldToLocal).m31 = fVar18;
    (pSVar36->worldToLocal).m02 = fVar19;
    (pSVar36->worldToLocal).m12 = fVar20;
    (pSVar36->worldToLocal).m22 = fVar21;
    (pSVar36->worldToLocal).m32 = fVar22;
    (pSVar36->worldToLocal).m03 = VStack_3.x;
    (pSVar36->worldToLocal).m13 = VStack_3.y;
    (pSVar36->worldToLocal).m23 = VStack_3.z;
    (pSVar36->worldToLocal).m33 = (float)pMStack_23;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                        (&VStack_3,
                         &TypeInfo__MV__WorldObject__SphereOverlapTest->static_fields->worldToLocal,
                         worldPos,(MethodInfo *)0x0);
    uVar28 = (undefined2)((uint)fVar12 >> 0x10);
    uVar26 = (undefined2)((uint)fVar19 >> 0x10);
    uStack_37._0_4_ = pVVar6->x;
    uStack_37._4_4_ = pVVar6->y;
    fStack_38 = pVVar6->z;
    VVar7 = *pVVar6;
    VVar9 = *pVVar6;
    puVar39 = (ulonglong *)(*((overlapArg.wo)->klass->vtable).get_Scale.methodPtr)();
    VStack_3._4_8_ = *puVar39;
    pMStack_23 = (MethodInfo *)puVar39[1];
    fStack_40 = worldRadius / VStack_3.y + _UNK_?;
    fVar15 = worldRadius / VStack_3.y - _UNK_?;
    fStack_41 = fStack_40 * fStack_40;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar42 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_43._0_4_ = (pVVar42->oneVector).x;
    uStack_43._4_4_ = (pVVar42->oneVector).y;
    fStack_44 = (pVVar42->oneVector).z;
    puStack_5 = (undefined4 *)((float)(undefined4)uStack_43 * fStack_40);
    fStack_45 = (float)uStack_43._4_4_ * fStack_40;
    fStack_40 = fStack_44 * fStack_40;
    pMStack_23 = (MethodInfo *)(fStack_38 - fStack_40);
    localPos.y._0_2_ = SUB42((float)uStack_37 - (float)puStack_5,0);
    localPos.x = (float)&uStack_46;
    localPos.y._2_2_ = (short)((uint)((float)uStack_37 - (float)puStack_5) >> 0x10);
    localPos.z = uStack_37._4_4_ - fStack_45;
    IVar47 = CubeMathFunctions::CubeMathFunctions_LocalPosToLocalIntVector(localPos,pMStack_23);
    pMStack_23 = (MethodInfo *)(fStack_38 + fStack_40);
    uVar48 = *IVar47._0_4_;
    sStack_49 = *(short *)(IVar47._0_4_ + 1);
    localPos_00.y = (float)uStack_37 + (float)puStack_5;
    localPos_00.x = (float)&uStack_46;
    localPos_00.z = uStack_37._4_4_ + fStack_45;
    IVar47 = CubeMathFunctions::CubeMathFunctions_LocalPosToLocalIntVector(localPos_00,pMStack_23);
    puStack_5 = (undefined4 *)*IVar47._0_4_;
    iStack_50 = *(int16_t *)(IVar47._0_4_ + 1);
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      uVar26 = 0x10a2;
      func_?();
    }
    sVar51 = (short)uVar48;
    IVar47.z = (int16_t)puStack_5;
    IVar47._0_4_ = &uStack_46;
    i2.y = uVar29;
    i2.x = iStack_50;
    i2.z = sVar51;
    IVar47 = IntVector::IntVector_op_Subtraction(IVar47,i2,(MethodInfo *)CONCAT22(uVar26,sStack_49))
    ;
    puStack_5 = IVar47._0_4_;
    uVar52 = (TypeInfo__MV__WorldObject__IntVector->static_fields->One).x;
    i1.z = (int16_t)*puStack_5;
    i1._0_4_ = apIStack_53;
    i2_00.y = uVar35;
    i2_00.x = *(undefined2 *)(puStack_5 + 1);
    i2_00.z = uVar52;
    IVar47 = IntVector::IntVector_op_Addition
                       (i1,i2_00,(MethodInfo *)
                                 CONCAT22(uVar28,(TypeInfo__MV__WorldObject__IntVector->
                                                  static_fields->One).z));
    fStack_45 = (float)*IVar47._0_4_;
    iStack_50 = *(int16_t *)(IVar47._0_4_ + 1);
    puStack_5 = (undefined4 *)((overlapArg.wo)->fields).id;
    uStack_46 = fStack_45;
    pLVar54 = (List_1_MV_WorldObject_OverlapCubeData_ *)func_?();
    if (pLVar54 != (List_1_MV_WorldObject_OverlapCubeData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar54,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__List__
                );
      iStack_55 = (int)puStack_5;
      pLStack_56 = pLVar54;
      func_?(&pLStack_56,pLVar54);
      overlapResult->woId = iStack_55;
      overlapResult->cubes = pLStack_56;
      func_?(&overlapResult->cubes,0);
      iStack_57 = 0;
      if (0 < (short)uStack_46) {
        pLVar54 = (List_1_MV_WorldObject_OverlapCubeData_ *)(int)uStack_46._2_2_;
        iVar58 = (int)(short)uStack_46;
        pLStack_56 = pLVar54;
        do {
          fStack_40 = 0.0;
          iVar59 = iStack_57;
          if (0 < (int)pLVar54) {
            iVar58 = (int)iStack_50;
            do {
              uStack_60 = uStack_60 & 0xffffff00;
              cStack_61 = '\0';
              puStack_5 = (undefined4 *)0x0;
              if (0 < iVar58) {
                sStack_62 = (short)((uint)uVar48 >> 0x10);
                y = (int)sStack_62 + (int)fStack_40;
                x = iVar59 + sVar51;
                iVar63 = (int)sStack_49;
                do {
                  IntVector::IntVector__ctor_1
                            (&IStack_1,x,y,iVar63 + (int)puStack_5,(MethodInfo *)0x0);
                  localIntVector.z = IStack_1.z;
                  localIntVector.x = IStack_1.x;
                  localIntVector.y = IStack_1.y;
                  pVVar6 = CubeMathFunctions::CubeMathFunctions_LocalIntVectorToLocalPos
                                      ((Vector3 *)&stack0xfffffee0,localIntVector,(MethodInfo *)0x0)
                  ;
                  uVar64 = pVVar6->x;
                  uVar65 = pVVar6->y;
                  fVar16 = pVVar6->z - fStack_38;
                  cStack_66 = '\0';
                  iStack_67 = IStack_1.z;
                  uStack_68 = uStack_68 & 0xffffff00;
                  apIStack_53[0] = TypeInfo__MV__WorldObject__ICubeModel;
                  pIStack_69 = (ICubeModel__Class *)
                               (((float)uVar65 - uStack_37._4_4_) * ((float)uVar65 - uStack_37._4_4_)
                                + ((float)uVar64 - (float)uStack_37) *
                                  ((float)uVar64 - (float)uStack_37) + fVar16 * fVar16);
                  iVar58 = func_?();
                  if (iVar58 == 0) goto code_?;
                  apIStack_53[0] = TypeInfo__MV__WorldObject__ICubeModel;
                  iVar58 = func_?();
                  if (iVar58 == 0) goto code_?;
                  cVar70 = func_?();
                  if (cVar70 != '\0') {
                    if ((float)pIStack_69 < fVar15 * fVar15) {
                      uStack_68 = CONCAT31(uStack_68._1_3_,1);
                      if (overlapResult->cubes == (List_1_MV_WorldObject_OverlapCubeData_ *)0x0)
                      goto code_?;
                      func_?(overlapResult->cubes,IStack_1._0_4_,IStack_1.z,4,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__Add_MV__WorldObject__OverlapCubeData_
                                     );
                    }
                    else if ((float)pIStack_69 < fStack_41) {
                      uStack_68 = CONCAT31(uStack_68._1_3_,1);
                      if (overlapResult->cubes != (List_1_MV_WorldObject_OverlapCubeData_ *)0x0) {
                        func_?(overlapResult->cubes,IStack_1._0_4_,IStack_1.z,5,
                                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__Add_MV__WorldObject__OverlapCubeData_
                                       );
                        cStack_66 = '\x01';
                        goto code_?;
                      }
                      goto code_?;
                    }
                    cStack_66 = '\x01';
                  }
code_?:
                  if ((char)uStack_60 == '\0') {
                    if (((char)uStack_68 != '\0') && (cStack_61 != '\0')) {
                      if (overlapResult->cubes == (List_1_MV_WorldObject_OverlapCubeData_ *)0x0)
                      goto code_?;
                      puVar39 = (ulonglong *)
                                func_?(&stack0xfffffed0,overlapResult->cubes,
                                                (overlapResult->cubes->fields)._size + -1,
                                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__get_Item_int_
                                               );
                      uVar71 = *puVar39;
                      if ((TypeInfo__MV__WorldObject__SphereOverlapTest->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MV__WorldObject__SphereOverlapTest);
                      }
                      pIStack_69 = TypeInfo__MV__WorldObject__ICubeModel;
                      pIVar72 = (ICubeModel *)
                                func_?(overlapArg.wo,TypeInfo__MV__WorldObject__ICubeModel)
                      ;
                      if (pIVar72 == (ICubeModel *)0x0) goto code_?;
                      iterationBounds.z = iStack_50;
                      iterationBounds._0_4_ = fStack_45;
                      OVar73 = SphereOverlapTest_HandleCubeOnRadiusLimit
                                         (iStack_57,SUB86(uVar71,0),iterationBounds,(bool)uStack_68,0
                                          ,pIVar72,VVar9,fStack_41,(MethodInfo *)0x0);
                      this = (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)
                             overlapResult->cubes;
                      if (this == (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0)
                      goto code_?;
                      uVar71 = uVar71 & 0xffffffffffff;
code_?:
                      value._8_4_ = OVar73;
                      value.textureOffset = (float)(int)uVar71;
                      value.frameToChangeTextureAt = (float)(int)(uVar71 >> 0x20);
                      mscorlib.dll::System::Collections::Generic::
                      List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
                      List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
                                (this,(this->fields)._size + -1,value,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__set_Item_int__MV__WorldObject__OverlapCubeData_
                                );
                    }
                  }
                  else if (((char)uStack_68 == '\0') && (cStack_66 != '\0')) {
                    if (overlapResult->cubes != (List_1_MV_WorldObject_OverlapCubeData_ *)0x0) {
                      puVar39 = (ulonglong *)
                                func_?(&stack0xfffffef0,overlapResult->cubes,
                                                (overlapResult->cubes->fields)._size + -1,
                                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::OverlapCubeData>__get_Item_int_
                                               );
                      uStack_43 = *puVar39;
                      if ((TypeInfo__MV__WorldObject__SphereOverlapTest->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MV__WorldObject__SphereOverlapTest);
                      }
                      pIStack_69 = TypeInfo__MV__WorldObject__ICubeModel;
                      pIVar72 = (ICubeModel *)
                                func_?(overlapArg.wo,TypeInfo__MV__WorldObject__ICubeModel)
                      ;
                      if (pIVar72 != (ICubeModel *)0x0) {
                        iterationBounds_00.z = iStack_50;
                        iterationBounds_00._0_4_ = fStack_45;
                        OVar73 = SphereOverlapTest_HandleCubeOnRadiusLimit
                                           (iStack_57,SUB86(uStack_43,0),iterationBounds_00,0,
                                            (bool)uStack_60,pIVar72,VVar7,fStack_41,
                                            (MethodInfo *)0x0);
                        this = (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)
                               overlapResult->cubes;
                        if (this != (List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)0x0)
                        {
                          VStack_3._4_8_ = uStack_43 & 0xffffffffffff;
                          uVar71 = VStack_3._4_8_;
                          goto code_?;
                        }
                        goto code_?;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                  puStack_5 = (undefined4 *)((int)puStack_5 + 1);
                  uStack_60 = CONCAT31(uStack_60._1_3_,(char)uStack_68);
                  cStack_61 = cStack_66;
                  iVar58 = (int)iStack_50;
                  iVar59 = iStack_57;
                } while ((int)puStack_5 < iVar58);
              }
              fStack_40 = (float)((int)fStack_40 + 1);
            } while ((int)fStack_40 < (int)pLStack_56);
            pLVar54 = (List_1_MV_WorldObject_OverlapCubeData_ *)(int)uStack_46._2_2_;
            iVar58 = (int)(short)uStack_46;
          }
          iStack_57 = iVar59 + 1;
        } while (iStack_57 < iVar58);
      }
      if (overlapResult->cubes != (List_1_MV_WorldObject_OverlapCubeData_ *)0x0) {
        return 0 < (overlapResult->cubes->fields)._size;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(overlapArg.wo,pIStack_69);
code_?:
  func_?();
  pcVar74 = (code *)swi(3);
  bVar75 = (*pcVar74)();
  return bVar75;
}


/* SphereOverlapTest() */

void MVWorldObject.dll::MV::WorldObject::SphereOverlapTest::SphereOverlapTest__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__SphereOverlapTest);
    cRam_? = '\x01';
  }
  func_?(TypeInfo__MV__WorldObject__SphereOverlapTest->static_fields,0,0x40);
  return;
}

