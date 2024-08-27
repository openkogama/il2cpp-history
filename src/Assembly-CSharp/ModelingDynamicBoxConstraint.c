
/* Vector3 CalcConstraintBoxCenter(MVCubeModelBase) */

Vector3 * Assembly-CSharp.dll::ModelingDynamicBoxConstraint::
          ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                    (Vector3 *__return_storage_ptr__,ModelingDynamicBoxConstraint *this,
                    MVCubeModelBase *model,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__SharedCollisionFunctions);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  IStack_2.x = 0;
  IStack_2.y = 0;
  IStack_2.z = 0;
  IStack_3.x = 0;
  IStack_3.y = 0;
  IStack_3.z = 0;
  if (model != (MVCubeModelBase *)0x0) {
    pBVar4 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_5,model,(MethodInfo *)0x0);
    this_02 = (IntVector *)((uint)in_stack_6 << 0x10);
    BStack_5.m_Extents.y = (pBVar4->m_Extents).y;
    BStack_5.m_Extents.z = (pBVar4->m_Extents).z;
    VStack_7.x = (pBVar4->m_Center).x;
    VStack_7.y = (pBVar4->m_Center).y;
    VStack_7.z = (pBVar4->m_Center).z;
    iStack_8 = 0;
    do {
      index = iStack_8;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pVVar9 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                         (&VStack_10,(MethodInfo *)0x0);
      VStack_11.x = pVVar9->x;
      VStack_11.y = pVVar9->y;
      VStack_11.z = pVVar9->z;
      if (index == 0) {
        fVar12 = VStack_11.x;
      }
      else if (index == 1) {
        fVar12 = VStack_11.y;
      }
      else {
        fVar12 = VStack_11.z;
        if (index != 2) goto code_?;
      }
      uStack_13 = (double)fVar12;
      fVar14 = (float10)func_?();
      uVar15 = (undefined2)((uint)in_stack_16 >> 0x10);
      uVar17 = (undefined2)((uint)in_stack_18 >> 0x10);
      uStack_13 = (double)fVar14;
      if ((float)fVar14 == 0.0) {
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                  (&VStack_7,index,(MethodInfo *)0x0);
        fVar14 = (float10)func_?();
        uStack_13 = (double)fVar14;
        if ((float)fVar14 != 0.0) {
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_7,index,(MethodInfo *)0x0);
          fVar14 = (float10)func_?((double)fVar12);
          uStack_13 = (double)CONCAT44((float)fVar14,(undefined4)uStack_13);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_7,index,(float)fVar14 - _UNK_?,(MethodInfo *)0x0);
        }
      }
      else {
        IStack_1.x = 0;
        IStack_1.y = 0;
        IStack_1.z = 0;
        IStack_2.x = 0;
        IStack_2.y = 0;
        IStack_2.z = 0;
        pBVar4 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_19,model,(MethodInfo *)0x0);
        BStack_5.m_Center.z = (pBVar4->m_Center).x;
        BStack_5.m_Extents.x = (pBVar4->m_Center).y;
        pfVar20 = &(pBVar4->m_Center).z;
        BStack_5.m_Extents._4_8_ = *(undefined8 *)pfVar20;
        uStack_13._0_4_ = (pBVar4->m_Extents).y;
        uStack_13._4_4_ = (pBVar4->m_Extents).z;
        fVar12 = *pfVar20;
        fVar21 = (pBVar4->m_Extents).x;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCollisionFunctions);
          fVar12 = BStack_5.m_Extents.y;
          fVar21 = BStack_5.m_Extents.z;
        }
        localSpaceBounds.m_Center.y = BStack_5.m_Extents.x;
        localSpaceBounds.m_Center.x = BStack_5.m_Center.z;
        localSpaceBounds.m_Center.z = fVar12;
        localSpaceBounds.m_Extents.x = fVar21;
        localSpaceBounds.m_Extents.y = (float)SUB84(uStack_13,0);
        localSpaceBounds.m_Extents.z = (float)((ulonglong)uStack_13 >> 0x20);
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_1,&IStack_2,localSpaceBounds,(MethodInfo *)0x0);
        iVar22 = IStack_2.z;
        uVar23 = IStack_2._0_4_;
        uVar24 = (undefined2)((uint)this_02 >> 0x10);
        uStack_13._4_2_ = IStack_1.x;
        uStack_13._6_2_ = IStack_1.y;
        iStack_25 = IStack_1.z;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          uVar17 = 0x1045;
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        IVar26.z = (int16_t)uVar23;
        IVar26._0_4_ = auStack_27;
        i2.y = in_stack_28;
        i2.x = iVar22;
        i2.z = (int16_t)uStack_13._4_4_;
        IVar26 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                           (IVar26,i2,(MethodInfo *)CONCAT22(uVar17,iStack_25));
        uVar23 = *IVar26._0_4_;
        uVar17 = *(undefined2 *)(IVar26._0_4_ + 1);
        in_stack_18 = 0;
        in_stack_28 = 0;
        IStack_29.x = 0;
        IStack_29.y = 0;
        IStack_29.z = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (&IStack_29,1,1,1,(MethodInfo *)0x0);
        i1.z = (int16_t)uVar23;
        i1._0_4_ = (int)&uStack_30 + 4;
        i2_00.y = uVar24;
        i2_00.x = uVar17;
        i2_00.z = IStack_29.x;
        IVar26 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (i1,i2_00,(MethodInfo *)CONCAT22(uVar15,IStack_29.z));
        index = iStack_8;
        in_stack_16 = 0;
        IStack_3._0_4_ = *IVar26._0_4_;
        IStack_3.z = *(int16_t *)(IVar26._0_4_ + 1);
        this_02 = &IStack_3;
        iVar22 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                          (this_02,iStack_8,(MethodInfo *)0x0);
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        pVVar9 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                           (&VStack_31,(MethodInfo *)0x0);
        VStack_11.x = pVVar9->x;
        VStack_11.y = pVVar9->y;
        VStack_11.z = pVVar9->z;
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&VStack_11,index,(MethodInfo *)0x0);
        uStack_13 = (double)fVar12;
        if ((int)iVar22 == (int)fVar12) {
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__IntVector);
          }
          iVar22 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                            (&IStack_1,index,(MethodInfo *)0x0);
          iVar32 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                            (&IStack_2,index,(MethodInfo *)0x0);
          uVar33 = 0x1045;
          in_stack_16 = iStack_8;
          iVar34 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                            (&IStack_1,iStack_8,(MethodInfo *)0x0);
          index = iStack_8;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_7,iStack_8,(float)(((int)iVar32 - (int)iVar34) / 2 + (int)iVar22),
                     (MethodInfo *)0x0);
          this_02 = (IntVector *)((uint)uVar33 << 0x10);
        }
      }
      iStack_8 = index + 1;
    } while (iStack_8 < 3);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                       (&VStack_31,(MethodInfo *)0x0);
    VStack_11.x = pVVar9->x;
    VStack_11.y = pVVar9->y;
    VStack_11.z = pVVar9->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar35 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_30._0_4_ = (pVVar35->oneVector).x;
    uStack_30._4_4_ = (pVVar35->oneVector).y;
    fVar21 = (VStack_11.x - (float)(undefined4)uStack_30) * _UNK_?;
    fVar12 = (VStack_11.y - (float)uStack_30._4_4_) * _UNK_?;
    VStack_11.z = (VStack_11.z - (pVVar35->oneVector).z) * _UNK_?;
    fStack_36 = (float)((uint)VStack_11.z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    min.y = (float)((uint)fVar12 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    min.x = (float)((uint)fVar21 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    min.z = fStack_36;
    max.y = fVar12;
    max.x = fVar21;
    max.z = VStack_11.z;
    MathFunctions::MathFunctions_ClampVector_1(&VStack_7,min,max,(MethodInfo *)0x0);
    this_00 = (model->fields)._.transform;
    if (this_00 != (Transform *)0x0) {
      position.y = VStack_7.y;
      position.x = VStack_7.x;
      position.z = VStack_7.z;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         (&VStack_31,this_00,position,(MethodInfo *)0x0);
      fVar21 = pVVar9->y;
      fVar12 = pVVar9->z;
      __return_storage_ptr__->x = pVVar9->x;
      __return_storage_ptr__->y = fVar21;
      __return_storage_ptr__->z = fVar12;
      return __return_storage_ptr__;
    }
  }
  func_?();
code_?:
  uVar23 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_01 = (IndexOutOfRangeException *)func_?(uVar23);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_01,message,method_00);
  uVar23 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this_01,uVar23);
  pcVar37 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar37)();
  return pVVar9;
}


/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_CanAddCubeAt
               (ModelingDynamicBoxConstraint *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  iVar1 = pos.y;
  iVar2 = pos.x;
  vec.y = (float)(int)pos.y;
  vec.x = (float)(int)pos.x;
  vec.z = (float)(int)pos.z;
  pVVar3 = MathFunctions::MathFunctions_AbsVector
                      ((Vector3 *)&stack0xffffffa4,vec,(MethodInfo *)0x0);
  fVar4 = pVVar3->x;
  fVar5 = pVVar3->y;
  fVar6 = *(float *)&(this->fields)._Size_k__BackingField.x;
  uVar7 = (this->fields)._Size_k__BackingField.x.fakeValue;
  uVar8 = (this->fields)._Size_k__BackingField.x.inited;
  uVar9 = (this->fields)._Size_k__BackingField.x.field_0x7;
  OVar10._7_1_ = uVar9;
  OVar10.inited = uVar8;
  OVar10.fakeValue = uVar7;
  iVar11 = SUB42(pVVar3->z,0);
  uVar12 = (undefined2)((uint)pVVar3->z >> 0x10);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  OVar10._0_4_ = fVar6;
  iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
           ObscuredShort_op_Implicit_1(OVar10,(MethodInfo *)0x0);
  if (fVar4 <= (float)(iVar13 + -1)) {
    OVar10 = (this->fields)._Size_k__BackingField.y;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(OVar10,(MethodInfo *)0x0);
    if (fVar5 <= (float)(iVar13 + -1)) {
      OVar10 = (this->fields)._Size_k__BackingField.z;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
               ObscuredShort_op_Implicit_1(OVar10,(MethodInfo *)0x0);
      if ((float)CONCAT22(uVar12,iVar11) <= (float)(iVar13 + -1)) {
        this_00 = (this->fields).cubeModel;
        if (this_00 == (MVCubeModelBase *)0x0) {
code_?:
          func_?();
          pcVar14 = (code *)swi(3);
          bVar15 = (*pcVar14)();
          return bVar15;
        }
        pBVar16 = MVCubeModelBase::MVCubeModelBase_GetBounds
                            ((Bounds *)&stack0xffffff38,this_00,(MethodInfo *)0x0);
        this_02 = (Bounds *)((uint)in_stack_17 << 0x10);
        fVar4 = (pBVar16->m_Center).x;
        fVar5 = (pBVar16->m_Center).y;
        fVar6 = (pBVar16->m_Center).z;
        fVar18 = (pBVar16->m_Extents).x;
        uVar19 = (pBVar16->m_Extents).y;
        uVar20 = (pBVar16->m_Extents).z;
        fVar21 = (float)(int)iVar2 - _UNK_?;
        fVar22 = (float)(int)iVar1 - _UNK_?;
        index = 0;
        fVar23 = (float)(int)pos.z - _UNK_?;
        fVar24 = (float)(int)iVar2 + _UNK_?;
        fVar25 = fVar22;
        do {
          if (index == 0) {
            fVar26 = fVar4 - fVar18;
            fVar27 = fVar21;
          }
          else if (index == 1) {
            fVar26 = fVar5 - (float)uVar19;
            fVar27 = fVar22;
          }
          else {
            if (index != 2) {
              func_?();
              this_01 = (IndexOutOfRangeException *)func_?();
              method_00 = (MethodInfo *)0x0;
              message = (String *)func_?();
              mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                        (this_01,message,method_00);
              func_?();
              pIStack_28 = this_01;
              func_?();
              goto code_?;
            }
            fVar26 = fVar6 - (float)uVar20;
            fVar27 = fVar23;
          }
          if (fVar27 < fVar26) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                ((Vector3 *)&pIStack_28,(Bounds *)&stack0xffffffe4,(MethodInfo *)0x0
                                );
            fVar24 = pVVar3->y;
            fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               ((Vector3 *)&stack0xffffffb0,index,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      ((Vector3 *)&stack0xffffff98,index,fVar27,(MethodInfo *)0x0);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                                ((Vector3 *)&stack0xffffff68,(Bounds *)&stack0xffffffe4,
                                 (MethodInfo *)0x0);
            uVar29 = pVVar3->y;
            uVar30 = (ushort)((uint)fVar24 >> 0x10);
            this_02 = (Bounds *)&stack0xffffffe4;
            min.y._0_2_ = SUB42(fVar24,0);
            min.x = (float)uVar29;
            min.y._2_2_ = uVar30;
            min.z = 0.0;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                      (this_02,min,*pVVar3,(MethodInfo *)0x0);
            fVar24 = (float)((uint)uVar30 << 0x10);
          }
          fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             ((Vector3 *)&stack0xffffff8c,index,(MethodInfo *)0x0);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xffffff5c,(Bounds *)&stack0xffffffe4,
                               (MethodInfo *)0x0);
          uVar12 = (undefined2)((uint)pVVar3->z >> 0x10);
          fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             ((Vector3 *)&stack0xffffffa4,index,(MethodInfo *)0x0);
          pos.z = SUB42(fVar26,0);
          in_stack_31 = (int16_t)((uint)fVar26 >> 0x10);
          if (fVar26 < fVar27) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                                ((Vector3 *)&stack0xffffff50,(Bounds *)&stack0xffffffe4,
                                 (MethodInfo *)0x0);
            uVar32 = (ushort)((uint)index >> 0x10);
            uVar33 = pVVar3->x;
            pVVar3 = (Vector3 *)&stack0xffffff8c;
            uVar34 = (undefined2)uVar33;
            uVar35 = (undefined2)((uint)uVar33 >> 0x10);
            uVar12 = 0xa7ab;
            uVar30 = 0x1045;
            fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar3,index,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      ((Vector3 *)&stack0xffffff80,index,fVar25,(MethodInfo *)0x0);
            pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                ((Vector3 *)&stack0xffffff44,(Bounds *)&stack0xffffffe4,
                                 (MethodInfo *)0x0);
            fVar21 = 0.0;
            fVar22 = (float)(CONCAT26(uVar30,CONCAT24(uVar12,CONCAT22(uVar35,uVar34))) >> 0x20);
            uVar37 = pVVar36->x;
            uVar12 = (undefined2)((uint)uVar37 >> 0x10);
            uVar38 = (ushort)((uint)pVVar36->z >> 0x10);
            min_00.z._2_2_ = uVar38;
            min_00._0_10_ = *(unkbyte10 *)pVVar36;
            max.y = fVar22;
            max.x = (float)CONCAT22(uVar35,uVar34);
            max.z = (float)pVVar3;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                      ((Bounds *)&stack0xffffffe4,min_00,max,(MethodInfo *)0x0);
            fVar25 = (float)((uint)uVar38 << 0x10);
            fVar24 = (float)((uint)uVar32 << 0x10);
            this_02 = (Bounds *)((uint)uVar30 << 0x10);
          }
          uVar34 = (undefined2)((uint)fVar24 >> 0x10);
          index = index + 1;
        } while (index < 3);
        uVar39._0_2_ = 0;
        uVar39._2_2_ = 0;
        iVar2 = 0;
        iVar1 = 0;
        iVar11 = 0;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          iVar2 = 0;
          iVar1 = 0;
          func_?();
          uVar34 = (undefined2)((uint)fVar24 >> 0x10);
        }
        localSpaceBounds.m_Center.y = fVar5;
        localSpaceBounds.m_Center.x = fVar4;
        localSpaceBounds.m_Center.z = fVar6;
        localSpaceBounds.m_Extents.x = fVar18;
        localSpaceBounds.m_Extents.y = (float)uVar19;
        localSpaceBounds.m_Extents.z = (float)uVar20;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  ((IntVector *)&stack0xffffffd4,(IntVector *)&stack0xffffffdc,localSpaceBounds,
                   (MethodInfo *)0x0);
        uVar35 = (undefined2)((uint)this_02 >> 0x10);
        pos.z = (int16_t)uVar39;
        in_stack_31 = SUB42(uVar39,2);
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          uVar34 = 0x1045;
          func_?();
        }
        uVar40 = (undefined2)((uint)fVar25 >> 0x10);
        IVar41.z = iVar1;
        IVar41._0_4_ = &pos;
        i2.y = uVar35;
        i2.x = iVar11;
        i2.z = pos.z;
        IVar41 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                           (IVar41,i2,(MethodInfo *)CONCAT22(uVar34,iVar2));
        fVar4 = *IVar41._0_4_;
        uVar34 = *(undefined2 *)(IVar41._0_4_ + 1);
        iVar2 = 0;
        iVar1 = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xffffffcc,1,1,1,(MethodInfo *)0x0);
        uVar42._4_4_ = fVar4;
        uVar42._0_4_ = (float)&stack0xffffffbc;
        i2_00.y = uVar12;
        i2_00.x = uVar34;
        i2_00.z = iVar2;
        IVar41 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (SUB86(uVar42,0),i2_00,(MethodInfo *)CONCAT22(uVar40,iVar1));
        fVar4 = *(float *)&(this->fields)._Size_k__BackingField.x;
        uVar43 = (this->fields)._Size_k__BackingField.x.fakeValue;
        uVar44 = (this->fields)._Size_k__BackingField.x.inited;
        uVar45 = (this->fields)._Size_k__BackingField.x.field_0x7;
        value._7_1_ = uVar45;
        value.inited = uVar44;
        value.fakeValue = uVar43;
        uVar39 = *IVar41._0_4_;
        sVar46 = *(short *)(IVar41._0_4_ + 1);
        pos.x = (int16_t)uVar39;
        pos.y = (int16_t)((uint)uVar39 >> 0x10);
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value._0_4_ = fVar4;
        iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                 ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
        if (pos.x <= iVar2) {
          OVar10 = (this->fields)._Size_k__BackingField.y;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                   ::ObscuredShort_op_Implicit_1(OVar10,(MethodInfo *)0x0);
          if (pos.y <= iVar2) {
            OVar10 = (this->fields)._Size_k__BackingField.z;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_op_Implicit_1(OVar10,(MethodInfo *)0x0);
            if (sVar46 <= iVar2) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


/* Void CubeModel_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::
     ModelingDynamicBoxConstraint_CubeModel_Changed
               (ModelingDynamicBoxConstraint *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  pVVar1 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                     ((Vector3 *)&stack0xfffffff0,this,(this->fields).cubeModel,(MethodInfo *)0x0);
  ModelingBoxConstraint::ModelingBoxConstraint_set_Center
            ((ModelingBoxConstraint *)this,*pVVar1,(MethodInfo *)0x0);
  return;
}


/* Void DetachFromCubeModel() */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::
     ModelingDynamicBoxConstraint_DetachFromCubeModel
               (ModelingDynamicBoxConstraint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    func_?(&
                    MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModel;
  if (pMVar1 == (MVCubeModelBase *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).Changed;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
code_?:
      func_?();
      return;
    }
    pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
    if (pAVar2 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      (pMVar1->fields).Changed = pAVar2;
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ModelingDynamicBoxConstraint(MVCubeModelBase, IntVector) */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint__ctor
               (ModelingDynamicBoxConstraint *this,MVCubeModelBase *cubeModel,
               IntVector constraintSize,MethodInfo *method)

{
  uVar1 = SUB42(in_stack_2,2);
  uVar3 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (cRam_? == '\0') {
    func_?(0x5690);
    in_stack_4 = 0x119b;
    func_?(0x8b58);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(0x8490);
    in_stack_4 = 0x119c;
    func_?(0x53b0);
    func_?(0xa908);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_4 = 0x1045;
    func_?((short)TypeInfo__MV__WorldObject__IntVector);
  }
  IVar5.z = constraintSize.x;
  IVar5._0_4_ = &stack0xffffffec;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_UnaryNegation
                     (IVar5,(MethodInfo *)CONCAT22(in_stack_4,constraintSize.z));
  IVar6.z = (int16_t)*IVar5._0_4_;
  IVar6._0_4_ = &stack0xffffffec;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
                     (IVar6,CONCAT22(uVar3,*(undefined2 *)(IVar5._0_4_ + 1)),(MethodInfo *)0x2);
  IVar5 = *IVar5._0_4_;
  iV.z = constraintSize.x;
  iV._0_4_ = &stack0xffffffec;
  IVar6 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
                     (iV,CONCAT22(uVar1,constraintSize.z),(MethodInfo *)0x2);
  ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
            ((ModelingBoxConstraint *)this,IVar5,*IVar6._0_4_,(MethodInfo *)0x0);
  uVar7 = (int)constraintSize.x & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  if (uVar7 == 1) {
code_?:
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar8 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                       ((IntVector *)&stack0xfffffff4,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Size_parameter_fields_shouldn_t_,pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar8,(MethodInfo *)0x0);
  }
  else {
    uVar7 = (int)constraintSize.y & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto code_?;
    uVar7 = (int)constraintSize.z & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto code_?;
  }
  (this->fields).cubeModel = cubeModel;
  func_?();
  pAVar9 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  pMVar10 = (this->fields).cubeModel;
  if (pMVar10 == (MVCubeModelBase *)0x0) {
    func_?();
  }
  else {
    a = (pMVar10->fields).Changed;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar11 == (Delegate *)0x0) {
      (pAVar9->vtable).Clone_1.methodPtr = (Il2CppMethodPointer)0x0;
code_?:
      func_?();
      uVar12 = 0;
      uVar13._0_2_ = 0;
      uVar13._2_1_ = 0;
      uVar13._3_1_ = 0;
      uVar14._0_2_ = 0;
      uVar14._2_2_ = 0;
      uVar15._0_2_ = 0;
      uVar15._2_1_ = 0;
      uVar15._3_1_ = 0;
      uVar16 = 0;
      uVar17._0_2_ = 0;
      uVar17._2_1_ = 0;
      uVar17._3_1_ = 0;
      uStack18 = 0x1045;
      ObscuredIntVector::ObscuredIntVector__ctor_2
                ((ObscuredIntVector *)&stack0xffffffd0,constraintSize,(MethodInfo *)0x0);
      (this->fields)._Size_k__BackingField.x.currentCryptoKey = (short)(uint)uVar12;
      (this->fields)._Size_k__BackingField.x.hiddenValue = (short)((uint)uVar12 >> 0x10);
      (this->fields)._Size_k__BackingField.x.fakeValue = (int16_t)uVar13;
      (this->fields)._Size_k__BackingField.x.inited = SUB41(uVar13,2);
      (this->fields)._Size_k__BackingField.x.field_0x7 = SUB41(uVar13,3);
      (this->fields)._Size_k__BackingField.y.currentCryptoKey = (int16_t)uVar14;
      (this->fields)._Size_k__BackingField.y.hiddenValue = SUB42(uVar14,2);
      (this->fields)._Size_k__BackingField.y.fakeValue = (int16_t)uVar15;
      (this->fields)._Size_k__BackingField.y.inited = SUB41(uVar15,2);
      (this->fields)._Size_k__BackingField.y.field_0x7 = SUB41(uVar15,3);
      OVar19.hiddenValue = 0;
      OVar19.currentCryptoKey = uVar16;
      OVar19.fakeValue = (int16_t)uVar17;
      OVar19.inited = SUB41(uVar17,2);
      OVar19._7_1_ = SUB41(uVar17,3);
      (this->fields)._Size_k__BackingField.z = OVar19;
      uStack18 = 0x1045;
      pVVar20 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                          ((Vector3 *)&stack0xffffffe8,this,cubeModel,(MethodInfo *)0x0);
      ModelingBoxConstraint::ModelingBoxConstraint_set_Center
                ((ModelingBoxConstraint *)this,*pVVar20,(MethodInfo *)0x0);
      return;
    }
    pIVar21 = (Il2CppMethodPointer)func_?();
    if (pIVar21 == (Il2CppMethodPointer)0x0) goto code_?;
    (pAVar9->vtable).Clone_1.methodPtr = pIVar21;
    iVar22 = func_?();
    if (iVar22 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* ObscuredIntVector get_Size() */

ObscuredIntVector *
Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_get_Size
          (ObscuredIntVector *__return_storage_ptr__,ModelingDynamicBoxConstraint *this,
          MethodInfo *method)

{
  iVar1 = (this->fields)._Size_k__BackingField.x.hiddenValue;
  iVar2 = (this->fields)._Size_k__BackingField.x.fakeValue;
  bVar3 = (this->fields)._Size_k__BackingField.x.inited;
  uVar4 = (this->fields)._Size_k__BackingField.x.field_0x7;
  iVar5 = (this->fields)._Size_k__BackingField.y.currentCryptoKey;
  iVar6 = (this->fields)._Size_k__BackingField.y.hiddenValue;
  iVar7 = (this->fields)._Size_k__BackingField.y.fakeValue;
  bVar8 = (this->fields)._Size_k__BackingField.y.inited;
  uVar9 = (this->fields)._Size_k__BackingField.y.field_0x7;
  (__return_storage_ptr__->x).currentCryptoKey =
       (this->fields)._Size_k__BackingField.x.currentCryptoKey;
  (__return_storage_ptr__->x).hiddenValue = iVar1;
  (__return_storage_ptr__->x).fakeValue = iVar2;
  (__return_storage_ptr__->x).inited = bVar3;
  (__return_storage_ptr__->x).field_0x7 = uVar4;
  (__return_storage_ptr__->y).currentCryptoKey = iVar5;
  (__return_storage_ptr__->y).hiddenValue = iVar6;
  (__return_storage_ptr__->y).fakeValue = iVar7;
  (__return_storage_ptr__->y).inited = bVar8;
  (__return_storage_ptr__->y).field_0x7 = uVar9;
  __return_storage_ptr__->z = (this->fields)._Size_k__BackingField.z;
  return __return_storage_ptr__;
}


/* Void set_Size(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_set_Size
               (ModelingDynamicBoxConstraint *this,ObscuredIntVector value,MethodInfo *method)

{
  (this->fields)._Size_k__BackingField.x.currentCryptoKey = value.x.currentCryptoKey;
  (this->fields)._Size_k__BackingField.x.hiddenValue = value.x.hiddenValue;
  (this->fields)._Size_k__BackingField.x.fakeValue = value.x.fakeValue;
  (this->fields)._Size_k__BackingField.x.inited = value.x.inited;
  (this->fields)._Size_k__BackingField.x.field_0x7 = value.x._7_1_;
  (this->fields)._Size_k__BackingField.y.currentCryptoKey = value.y.currentCryptoKey;
  (this->fields)._Size_k__BackingField.y.hiddenValue = value.y.hiddenValue;
  (this->fields)._Size_k__BackingField.y.fakeValue = value.y.fakeValue;
  (this->fields)._Size_k__BackingField.y.inited = value.y.inited;
  (this->fields)._Size_k__BackingField.y.field_0x7 = value.y._7_1_;
  (this->fields)._Size_k__BackingField.z = value.z;
  return;
}

