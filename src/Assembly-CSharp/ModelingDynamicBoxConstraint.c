
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
    VStack_11.z = (VStack_11.z - (pVVar35->oneVector).z) * _UNK_?;
    fVar21 = (VStack_11.x - (float)(undefined4)uStack_30) * _UNK_?;
    fVar12 = (VStack_11.y - (float)uStack_30._4_4_) * _UNK_?;
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
  iVar1 = (int)pos.x;
  iVar2 = (int)pos.y;
  iVar3 = (int)pos.z;
  uVar4._0_2_ = 0;
  uVar4._2_2_ = 0;
  iVar5 = 0;
  uVar6._0_2_ = 0;
  uVar6._2_2_ = 0;
  uVar7 = 0;
  v.y = (float)iVar2;
  v.x = (float)iVar1;
  v.z = (float)iVar3;
  pVVar8 = RTG::Vector3Ex::Vector3Ex_Abs((Vector3 *)&stack0xffffffa0,v,(MethodInfo *)0x0);
  uVar9._0_4_ = pVVar8->x;
  uVar9._4_4_ = pVVar8->y;
  fVar10 = pVVar8->z;
  auStack_11._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
  auStack_11._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
  auStack_11._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
  auStack_11._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
  unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value.fakeValue = auStack_11._4_2_;
  value.inited = auStack_11[6];
  value._7_1_ = auStack_11[7];
  value.currentCryptoKey = auStack_11._0_2_;
  value.hiddenValue = auStack_11._2_2_;
  iVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((float)uVar9 <= (float)(iVar12 + -1)) {
    auStack_11._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
    auStack_11._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
    auStack_11._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
    auStack_11._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
    unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar13 = (float)((ulonglong)uVar9 >> 0x20);
    value_00.fakeValue = auStack_11._12_2_;
    value_00.inited = auStack_11[0xe];
    value_00._7_1_ = auStack_11[0xf];
    value_00.currentCryptoKey = auStack_11._8_2_;
    value_00.hiddenValue = auStack_11._10_2_;
    iVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(value_00,(MethodInfo *)0x0);
    if (fVar13 <= (float)(iVar12 + -1)) {
      auStack_11._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
      auStack_11._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
      auStack_11._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
      auStack_11._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
      unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_op_Implicit_1(stack0xfffffff4,(MethodInfo *)0x0);
      if (fVar10 <= (float)(iVar12 + -1)) {
        this_00 = (this->fields).cubeModel;
        if (this_00 == (MVCubeModelBase *)0x0) {
code_?:
          func_?();
          pcVar14 = (code *)swi(3);
          bVar15 = (*pcVar14)();
          return bVar15;
        }
        pBVar16 = MVCubeModelBase::MVCubeModelBase_GetBounds
                            ((Bounds *)&stack0xffffff34,this_00,(MethodInfo *)0x0);
        this_02 = (Bounds *)((uint)in_stack_17 << 0x10);
        index = 0;
        auStack_11._0_4_ = (pBVar16->m_Center).x;
        auStack_11._4_4_ = (pBVar16->m_Center).y;
        auStack_11._8_4_ = (pBVar16->m_Center).z;
        auStack_11._12_4_ = (pBVar16->m_Extents).x;
        fVar13 = (float)iVar1;
        unique0x0000a400 = *(ObscuredShort *)&(pBVar16->m_Extents).y;
        fVar18 = fVar13 - _UNK_?;
        fVar19 = (float)iVar2 - _UNK_?;
        fVar20 = (float)iVar3 - _UNK_?;
        fVar13 = fVar13 + _UNK_?;
        fVar10 = fVar19;
        do {
          fVar21 = fVar18;
          if (((index != 0) && (fVar21 = fVar19, index != 1)) && (fVar21 = fVar20, index != 2)) {
code_?:
            func_?();
            this_01 = (IndexOutOfRangeException *)func_?();
            method_00 = (MethodInfo *)0x0;
            message = (String *)func_?();
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (this_01,message,method_00);
            func_?();
            pIStack_22 = this_01;
            func_?();
            goto code_?;
          }
          fVar23 = (float)auStack_11._0_4_ - (float)auStack_11._12_4_;
          if (((index != 0) &&
              (fVar23 = (float)auStack_11._4_4_ - (float)auStack_11._16_4_, index != 1)) &&
             (fVar23 = (float)auStack_11._8_4_ - fStack_24, index != 2)) goto code_?;
          if (fVar21 < fVar23) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                               ((Vector3 *)&pIStack_22,(Bounds *)auStack_11,(MethodInfo *)0x0);
            fVar13 = pVVar8->y;
            fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               ((Vector3 *)&stack0xffffffac,index,(MethodInfo *)0x0);
            pos.z = SUB42(fVar21,0);
            in_stack_25 = (int16_t)((uint)fVar21 >> 0x10);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      ((Vector3 *)&stack0xffffff94,index,fVar21,(MethodInfo *)0x0);
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                               ((Vector3 *)&stack0xffffff64,(Bounds *)auStack_11,(MethodInfo *)0x0);
            uVar26 = pVVar8->y;
            uVar27 = (ushort)((uint)fVar13 >> 0x10);
            this_02 = (Bounds *)auStack_11;
            min.y._0_2_ = SUB42(fVar13,0);
            min.x = (float)uVar26;
            min.y._2_2_ = uVar27;
            min.z = 0.0;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                      (this_02,min,*pVVar8,(MethodInfo *)0x0);
            fVar13 = (float)((uint)uVar27 << 0x10);
          }
          fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             ((Vector3 *)&stack0xffffff88,index,(MethodInfo *)0x0);
          pos.z = SUB42(fVar21,0);
          in_stack_25 = (int16_t)((uint)fVar21 >> 0x10);
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                             ((Vector3 *)&stack0xffffff58,(Bounds *)auStack_11,(MethodInfo *)0x0);
          uVar28 = (undefined2)((uint)pVVar8->z >> 0x10);
          fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             ((Vector3 *)&stack0xffffffa0,index,(MethodInfo *)0x0);
          if (fVar21 < (float)CONCAT22(in_stack_25,pos.z)) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                               ((Vector3 *)&stack0xffffff4c,(Bounds *)auStack_11,(MethodInfo *)0x0);
            uVar29 = (ushort)((uint)index >> 0x10);
            uVar30 = pVVar8->x;
            pVVar8 = (Vector3 *)&stack0xffffff88;
            uVar31 = (undefined2)uVar30;
            uVar32 = (undefined2)((uint)uVar30 >> 0x10);
            uVar28 = 0xeae5;
            uVar27 = 0x1045;
            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (pVVar8,index,(MethodInfo *)0x0);
            pos.z = SUB42(fVar10,0);
            in_stack_25 = (int16_t)((uint)fVar10 >> 0x10);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      ((Vector3 *)&stack0xffffff7c,index,fVar10,(MethodInfo *)0x0);
            pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                ((Vector3 *)&stack0xffffff40,(Bounds *)auStack_11,(MethodInfo *)0x0)
            ;
            fVar18 = 0.0;
            fVar19 = (float)(CONCAT26(uVar27,CONCAT24(uVar28,CONCAT22(uVar32,uVar31))) >> 0x20);
            uVar34 = pVVar33->x;
            uVar28 = (undefined2)((uint)uVar34 >> 0x10);
            uVar35 = (ushort)((uint)pVVar33->z >> 0x10);
            min_00.z._2_2_ = uVar35;
            min_00._0_10_ = *(unkbyte10 *)pVVar33;
            max.y = fVar19;
            max.x = (float)CONCAT22(uVar32,uVar31);
            max.z = (float)pVVar8;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                      ((Bounds *)auStack_11,min_00,max,(MethodInfo *)0x0);
            fVar10 = (float)((uint)uVar35 << 0x10);
            fVar13 = (float)((uint)uVar29 << 0x10);
            this_02 = (Bounds *)((uint)uVar27 << 0x10);
          }
          iVar36 = (int16_t)uVar6;
          iVar12 = (int16_t)uVar4;
          iVar37 = (int16_t)uVar7;
          index = index + 1;
        } while (index < 3);
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uVar32 = (undefined2)((uint)fVar13 >> 0x10);
        localSpaceBounds.m_Center.y = (float)auStack_11._4_4_;
        localSpaceBounds.m_Center.x = (float)auStack_11._0_4_;
        localSpaceBounds.m_Center.z = (float)auStack_11._8_4_;
        localSpaceBounds.m_Extents.x = (float)auStack_11._12_4_;
        localSpaceBounds.m_Extents.y = auStack_11._16_4_;
        localSpaceBounds.m_Extents.z = auStack_11._20_4_;
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  ((IntVector *)&stack0xffffffc8,(IntVector *)&stack0xffffffd0,localSpaceBounds,
                   (MethodInfo *)0x0);
        in_stack_25 = iVar5;
        uVar31 = (undefined2)((uint)this_02 >> 0x10);
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          uVar32 = 0x1045;
          func_?();
        }
        IVar38.z = iVar36;
        IVar38._0_4_ = &pos;
        i2.y = uVar31;
        i2.x = iVar37;
        i2.z = iVar12;
        IVar38 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                           (IVar38,i2,(MethodInfo *)CONCAT22(uVar32,in_stack_25));
        uVar32 = (undefined2)((uint)fVar10 >> 0x10);
        fVar10 = *IVar38._0_4_;
        uVar31 = *(undefined2 *)(IVar38._0_4_ + 1);
        iVar5 = 0;
        iVar12 = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xffffffdc,1,1,1,(MethodInfo *)0x0);
        uVar39._4_4_ = fVar10;
        uVar39._0_4_ = (float)&stack0xffffffb8;
        i2_00.y = uVar28;
        i2_00.x = uVar31;
        i2_00.z = iVar5;
        IVar38 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (SUB86(uVar39,0),i2_00,(MethodInfo *)CONCAT22(uVar32,iVar12));
        uVar4 = *IVar38._0_4_;
        auStack_11._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
        auStack_11._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
        auStack_11._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
        auStack_11._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
        sVar40 = *(short *)(IVar38._0_4_ + 1);
        pos.x = (int16_t)uVar4;
        pos.y = (int16_t)((uint)uVar4 >> 0x10);
        unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value_01.fakeValue = auStack_11._4_2_;
        value_01.inited = auStack_11[6];
        value_01._7_1_ = auStack_11[7];
        value_01.currentCryptoKey = auStack_11._0_2_;
        value_01.hiddenValue = auStack_11._2_2_;
        iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                 ObscuredShort_op_Implicit_1(value_01,(MethodInfo *)0x0);
        if (pos.x <= iVar5) {
          auStack_11._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
          auStack_11._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
          auStack_11._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
          auStack_11._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
          unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value_02.fakeValue = auStack_11._12_2_;
          value_02.inited = auStack_11[0xe];
          value_02._7_1_ = auStack_11[0xf];
          value_02.currentCryptoKey = auStack_11._8_2_;
          value_02.hiddenValue = auStack_11._10_2_;
          iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                   ::ObscuredShort_op_Implicit_1(value_02,(MethodInfo *)0x0);
          if (pos.y <= iVar5) {
            auStack_11._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
            auStack_11._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
            auStack_11._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
            auStack_11._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
            unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_op_Implicit_1(stack0xfffffff4,(MethodInfo *)0x0);
            if (sVar40 <= iVar5) {
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
    ppAVar3 = &(pMVar1->fields).Changed;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      *ppAVar3 = (Action_1_CubeModelChangedEventArgs_ *)0x0;
      func_?();
      return;
    }
    pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
    if (pAVar2 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      *ppAVar3 = pAVar2;
      iVar5 = func_?();
      if (iVar5 != 0) {
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    func_?(0x5694);
    in_stack_4 = 0x11b2;
    func_?(0xbf08);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(0xc020);
    in_stack_4 = 0x11b2;
    func_?(0xc1d0);
    func_?(0x52b4);
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
  ppMVar9 = &(this->fields).cubeModel;
  *ppMVar9 = cubeModel;
  func_?();
  this_00 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  pMVar10 = *ppMVar9;
  if (pMVar10 == (MVCubeModelBase *)0x0) {
    func_?();
  }
  else {
    pAVar11 = (pMVar10->fields).Changed;
    ppAVar12 = &(pMVar10->fields).Changed;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this_00,
               MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar13 == (Delegate *)0x0) {
      *ppAVar12 = (Action_1_CubeModelChangedEventArgs_ *)0x0;
code_?:
      func_?();
      uVar14 = 0;
      pvVar15 = (void *)0x0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19._0_2_ = 0;
      uVar19._2_1_ = 0;
      uVar19._3_1_ = 0;
      uStack20 = 0x1045;
      ObscuredIntVector::ObscuredIntVector__ctor_2
                ((ObscuredIntVector *)&stack0xffffffd0,constraintSize,(MethodInfo *)0x0);
      (this_00->_1).typeHierarchy = (Il2CppClass **)(uint)uVar14;
      (this_00->_1).unity_user_data = pvVar15;
      (this_00->_1).initializationExceptionGCHandle = uVar16;
      (this_00->_1).cctor_started = uVar17;
      (this_00->_1).cctor_finished_or_no_cctor = (uint)uVar18;
      (this_00->_1).cctor_thread = uVar19;
      uStack20 = 0x1045;
      pVVar21 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                         ((Vector3 *)&stack0xffffffe8,(ModelingDynamicBoxConstraint *)this_00,
                          cubeModel,(MethodInfo *)0x0);
      ModelingBoxConstraint::ModelingBoxConstraint_set_Center
                ((ModelingBoxConstraint *)this_00,*pVVar21,(MethodInfo *)0x0);
      return;
    }
    pAVar11 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
    if (pAVar11 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      *ppAVar12 = pAVar11;
      iVar22 = func_?();
      if (iVar22 != 0) goto code_?;
    }
  }
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

