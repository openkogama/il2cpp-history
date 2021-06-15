
/* Vector3 CalcConstraintBoxCenter(MVCubeModelBase) */

Vector3 * Assembly-CSharp.dll::ModelingDynamicBoxConstraint::
          ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                    (Vector3 *__return_storage_ptr__,ModelingDynamicBoxConstraint *this,
                    MVCubeModelBase *model,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2._0_4_ = 0.0;
  uStack_2._4_4_ = 0.0;
  uStack_3 = 0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  IStack_6.x = 0;
  IStack_6.y = 0;
  IStack_6.z = 0;
  IStack_7.x = 0;
  IStack_7.y = 0;
  IStack_7.z = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  fStack_13 = 0.0;
  fStack_14 = 0.0;
  fStack_15 = 0.0;
  if (model != (MVCubeModelBase *)0x0) {
    pBVar16 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_17,model,(MethodInfo *)0x0);
    fStack_12 = (pBVar16->m_Center).x;
    fStack_13 = (pBVar16->m_Center).y;
    fStack_14 = (pBVar16->m_Center).z;
    fStack_15 = (pBVar16->m_Extents).x;
    uStack_3._0_4_ = (pBVar16->m_Extents).y;
    uStack_3._4_4_ = (pBVar16->m_Extents).z;
    puVar18 = (undefined8 *)func_?(&fStack_19,&fStack_12,0);
    puVar20 = (undefined4 *)((uint)in_stack_21 << 0x10);
    iVar22 = 0;
    uStack_2 = *puVar18;
    fStack_1 = *(float *)(puVar18 + 1);
    do {
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pVVar23 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                          (&VStack_24,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar23->x;
      uStack_4._4_4_ = pVVar23->y;
      fStack_5 = pVVar23->z;
      func_?(&uStack_4,iVar22,0);
      fVar25 = (float10)func_?();
      uVar26 = (undefined2)((uint)in_stack_27 >> 0x10);
      uVar28 = (undefined2)((uint)in_stack_29 >> 0x10);
      uStack_30 = (double)fVar25;
      if ((float)fVar25 == 0.0) {
        func_?(&uStack_2,iVar22);
        fVar25 = (float10)func_?();
        uStack_30 = (double)fVar25;
        if ((float)fVar25 != 0.0) {
          fVar25 = (float10)func_?(&uStack_2,iVar22,0);
          fVar31 = (float)fVar25;
          uStack_30._4_4_ = fVar31;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          uStack_30 = (double)uStack_30._4_4_;
          fVar25 = (float10)func_?(uStack_30,0);
          uStack_30 = (double)fVar25;
          func_?(&uStack_2,iVar22,(float)fVar25 - _UNK_?);
        }
      }
      else {
        IStack_6.x = 0;
        IStack_6.y = 0;
        IStack_6.z = 0;
        IStack_7.x = 0;
        IStack_7.y = 0;
        IStack_7.z = 0;
        pBVar16 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_32,model,(MethodInfo *)0x0);
        BStack_17.m_Center.z = (pBVar16->m_Center).x;
        BStack_17.m_Extents.x = (pBVar16->m_Center).y;
        BStack_17.m_Extents.y = (pBVar16->m_Center).z;
        BStack_17.m_Extents.z = (pBVar16->m_Extents).x;
        uStack_30._0_4_ = (pBVar16->m_Extents).y;
        uStack_30._4_4_ = (pBVar16->m_Extents).z;
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        localSpaceBounds.m_Center.y = BStack_17.m_Extents.x;
        localSpaceBounds.m_Center.x = BStack_17.m_Center.z;
        localSpaceBounds.m_Center.z = BStack_17.m_Extents.y;
        localSpaceBounds.m_Extents.x = BStack_17.m_Extents.z;
        localSpaceBounds.m_Extents.y = (float)SUB84(uStack_30,0);
        localSpaceBounds.m_Extents.z = (float)((ulonglong)uStack_30 >> 0x20);
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_6,&IStack_7,localSpaceBounds,(MethodInfo *)0x0);
        iVar33 = IStack_7.z;
        uVar34 = IStack_7._0_4_;
        uVar35 = (undefined2)((uint)puVar20 >> 0x10);
        uStack_30._4_2_ = IStack_6.x;
        uStack_30._6_2_ = IStack_6.y;
        iStack_36 = IStack_6.z;
        if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
          uVar28 = 0x1037;
          func_?(TypeInfo__MV__WorldObject__IntVector);
          uVar35 = (undefined2)((uint)puVar20 >> 0x10);
        }
        uVar37 = 0;
        IVar38.z = (int16_t)uVar34;
        IVar38._0_4_ = (int)&uStack_39 + 4;
        i2.y = in_stack_40;
        i2.x = iVar33;
        i2.z = SUB42(uStack_30._4_4_,0);
        IVar38 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                           (IVar38,i2,(MethodInfo *)CONCAT22(uVar28,iStack_36));
        uVar34 = *IVar38._0_4_;
        uVar28 = *(undefined2 *)(IVar38._0_4_ + 1);
        in_stack_40 = 0;
        uStack_41 = 0;
        uStack_42 = 0;
        func_?(&uStack_41,1,1,1,0,uVar37);
        uVar37 = 0;
        in_stack_29 = &UNK_?;
        i1.z = (int16_t)uVar34;
        i1._0_4_ = &fStack_43;
        i2_00.y = uVar35;
        i2_00.x = uVar28;
        i2_00.z = (int16_t)uStack_41;
        IVar38 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (i1,i2_00,(MethodInfo *)CONCAT22(uVar26,uStack_42));
        in_stack_27 = 0;
        uStack_8 = *IVar38._0_4_;
        uStack_9 = *(undefined2 *)(IVar38._0_4_ + 1);
        puVar20 = &uStack_8;
        sVar44 = func_?((short)puVar20,(short)iVar22,0,uVar37);
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        pVVar23 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                            (&VStack_45,(MethodInfo *)0x0);
        uStack_10._0_4_ = pVVar23->x;
        uStack_10._4_4_ = pVVar23->y;
        fStack_11 = pVVar23->z;
        fVar25 = (float10)func_?(&uStack_10,iVar22,0);
        uStack_30 = (double)CONCAT44((float)fVar25,(undefined4)uStack_30);
        if ((int)sVar44 == (int)fVar25) {
          sVar44 = func_?(&IStack_6,iVar22,0);
          sVar46 = func_?(&IStack_7,iVar22,0);
          sVar47 = func_?(&IStack_6,iVar22,0);
          func_?(&uStack_2,iVar22,(float)(((int)sVar46 - (int)sVar47) / 2 + (int)sVar44),0)
          ;
        }
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < 3);
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar23 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                        (&VStack_45,(MethodInfo *)0x0);
    uVar48 = pVVar23->x;
    uVar49 = pVVar23->y;
    fVar31 = pVVar23->z;
    fStack_43 = (float)uVar48;
    fStack_50 = (float)uVar49;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                        (&VStack_45,(MethodInfo *)0x0);
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&VStack_45,*pVVar23,1.0,(MethodInfo *)0x0);
    a.y = fStack_50;
    a.x = fStack_43;
    a.z = fVar31;
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_45,a,*pVVar23,(MethodInfo *)0x0);
    a_00.z._2_2_ = (short)((uint)pVVar23->z >> 0x10);
    a_00._0_10_ = *(unkbyte10 *)pVVar23;
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                        (&VStack_45,a_00,2.0,(MethodInfo *)0x0);
    fStack_50 = pVVar23->z;
    uVar51 = pVVar23->x;
    uVar52 = pVVar23->y;
    fStack_19 = (float)uVar51;
    fStack_43 = (float)uVar52;
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                        (&VStack_45,*pVVar23,(MethodInfo *)0x0);
    uStack_39._0_4_ = pVVar23->x;
    uStack_39._4_4_ = pVVar23->y;
    fStack_53 = pVVar23->z;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fVar31 = (float)uStack_2;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar31 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                       (fVar31,(float)uStack_39,fStack_19,(MethodInfo *)0x0);
    uStack_2 = CONCAT44(uStack_2._4_4_,fVar31);
    fVar31 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                       (uStack_2._4_4_,uStack_39._4_4_,fStack_43,(MethodInfo *)0x0);
    uStack_2._4_4_ = fVar31;
    fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                          (fStack_1,fStack_53,fStack_50,(MethodInfo *)0x0);
    this_00 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)model,(MethodInfo *)0x0);
    if (this_00 != (MVPointLightObject *)0x0) {
      position.y = uStack_2._4_4_;
      position.x = (float)uStack_2;
      position.z = fStack_1;
      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                          (&VStack_45,(Transform *)this_00,position,(MethodInfo *)0x0);
      fVar54 = pVVar23->y;
      fVar31 = pVVar23->z;
      __return_storage_ptr__->x = pVVar23->x;
      __return_storage_ptr__->y = fVar54;
      __return_storage_ptr__->z = fVar31;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar55 = (code *)swi(3);
  pVVar23 = (Vector3 *)(*pcVar55)();
  return pVVar23;
}


/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_CanAddCubeAt
               (ModelingDynamicBoxConstraint *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  IStack_2.x = 0;
  IStack_2.y = 0;
  IStack_2.z = 0;
  fStack_3 = 0.0;
  uVar4 = 0;
  uStack_5 = 0;
  uVar6 = 0;
  func_?(&uStack_5,(float)(int)pos.x,(float)(int)pos.y,(float)(int)pos.z,0);
  fVar7 = fStack_3;
  uVar8 = (undefined2)uStack_5;
  uStack_9 = (undefined2)((ulonglong)uStack_5 >> 0x10);
  uVar10 = (undefined2)((ulonglong)uStack_5 >> 0x20);
  uVar11 = (undefined2)((ulonglong)uStack_5 >> 0x30);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fStack_12 = 0.0;
  uStack_13 = 0;
  uVar14 = (uint)_UNK_?;
  uVar15 = (uint)((ulonglong)_UNK_? >> 0x20);
  func_?(&uStack_13,
                  (float)(double)CONCAT44((uint)((ulonglong)
                                                 (double)(float)CONCAT22(uStack_9,uVar8) >> 0x20)
                                          & uVar15,SUB84((double)(float)CONCAT22(uStack_9,uVar8),0
                                                        ) & uVar14),
                  (float)(double)CONCAT44((uint)((ulonglong)(double)(float)CONCAT22(uVar11,uVar10)
                                                >> 0x20) & uVar15,
                                          SUB84((double)(float)CONCAT22(uVar11,uVar10),0) & uVar14),
                  (float)(double)CONCAT44((uint)((ulonglong)(double)fVar7 >> 0x20) & uVar15,
                                          SUB84((double)fVar7,0) & uVar14),0);
  auStack_16._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
  auStack_16._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
  auStack_16._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
  auStack_16._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
  unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  value.fakeValue = auStack_16._4_2_;
  value.inited = auStack_16[6];
  value._7_1_ = auStack_16[7];
  value.currentCryptoKey = auStack_16._0_2_;
  value.hiddenValue = auStack_16._2_2_;
  iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((float)uStack_13 <= (float)(iVar17 + -1)) {
    auStack_16._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
    auStack_16._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
    auStack_16._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
    auStack_16._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
    unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?();
    }
    value_00.fakeValue = auStack_16._12_2_;
    value_00.inited = auStack_16[0xe];
    value_00._7_1_ = auStack_16[0xf];
    value_00.currentCryptoKey = auStack_16._8_2_;
    value_00.hiddenValue = auStack_16._10_2_;
    iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(value_00,(MethodInfo *)0x0);
    if (uStack_13._4_4_ <= (float)(iVar17 + -1)) {
      auStack_16._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
      auStack_16._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
      auStack_16._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
      auStack_16._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
      unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
        func_?();
      }
      iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_op_Implicit_1(stack0xfffffff4,(MethodInfo *)0x0);
      if (fStack_12 <= (float)(iVar17 + -1)) {
        this_00 = (this->fields).cubeModel;
        if (this_00 == (MVCubeModelBase *)0x0) {
          func_?();
          pcVar18 = (code *)swi(3);
          bVar19 = (*pcVar18)();
          return bVar19;
        }
        pBVar20 = MVCubeModelBase::MVCubeModelBase_GetBounds
                           ((Bounds *)auStack_16,this_00,(MethodInfo *)0x0);
        fVar7 = (pBVar20->m_Center).x;
        fVar21 = (pBVar20->m_Center).y;
        fVar22 = (pBVar20->m_Center).z;
        fVar23 = (pBVar20->m_Extents).x;
        uVar24 = (pBVar20->m_Extents).y;
        uVar25 = (pBVar20->m_Extents).z;
        func_?();
        func_?();
        iVar26 = 0;
        do {
          fVar27 = (float10)func_?();
          fStack_3 = (float)fVar27;
          iVar28 = func_?();
          uVar8 = (undefined2)((uint)*(undefined4 *)(iVar28 + 8) >> 0x10);
          fVar27 = (float10)func_?();
          fVar29 = (float)fVar27;
          unique0x10000eb7 = fVar29;
          if (fStack_3 < fVar29) {
            puVar30 = (undefined8 *)func_?();
            uVar31 = (undefined4)*puVar30;
            fVar29 = (float)((ulonglong)*puVar30 >> 0x20);
            fVar27 = (float10)func_?();
            _pos = CONCAT44((float)fVar27,pos._0_4_);
            func_?();
            pos._0_4_ = uVar31;
            unique0x10000eb3 = fVar29;
            func_?();
            func_?();
          }
          fVar27 = (float10)func_?();
          _pos = CONCAT44((float)fVar27,pos._0_4_);
          func_?();
          fVar27 = (float10)func_?();
          fStack_3 = (float)fVar27;
          if (fStack_3 < stack0x0000000c) {
            func_?();
            fVar27 = (float10)func_?();
            _pos = CONCAT44((float)fVar27,pos._0_4_);
            func_?();
            func_?();
            func_?();
          }
          uVar31 = (undefined4)uVar4;
          uVar10 = (undefined2)((uint)uVar6 >> 0x10);
          iVar26 = iVar26 + 1;
        } while (iVar26 < 3);
        _pos = CONCAT44(uVar25,uVar24);
        auStack_16._8_4_ = fVar7;
        auStack_16._12_4_ = fVar21;
        auStack_16._16_4_ = fVar22;
        fStack_32 = fVar23;
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?();
        }
        localSpaceBounds.m_Center.y = (float)auStack_16._12_4_;
        localSpaceBounds.m_Center.x = (float)auStack_16._8_4_;
        localSpaceBounds.m_Center.z = (float)auStack_16._16_4_;
        localSpaceBounds.m_Extents.x = fStack_32;
        localSpaceBounds.m_Extents.y = (float)(int)_pos;
        localSpaceBounds.m_Extents.z = (float)((ulonglong)_pos >> 0x20);
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_1,&IStack_2,localSpaceBounds,(MethodInfo *)0x0);
        iVar17 = IStack_2.z;
        uVar6 = IStack_2._0_4_;
        fStack_3 = (float)IStack_1._0_4_;
        _pos = CONCAT26(IStack_1.z,pos);
        if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
          uVar10 = 0x1037;
          func_?();
        }
        IVar33.z = (int16_t)uVar6;
        IVar33._0_4_ = &pos;
        IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                           (IVar33,SUB86(CONCAT62((int6)(CONCAT44(fStack_3,uVar31) >> 0x10),iVar17),
                                         0),(MethodInfo *)CONCAT22(uVar10,in_stack_34));
        uVar6 = *IVar33._0_4_;
        uVar10 = *(undefined2 *)(IVar33._0_4_ + 1);
        uStack_13 = uStack_13 & 0xffffffff;
        fStack_12 = (float)((uint)fStack_12 & 0xffff0000);
        func_?();
        i2.y = uVar8;
        i2.x = uVar10;
        i2.z = (int16_t)(uStack_13 >> 0x20);
        IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (SUB86(CONCAT44(uVar6,(int)&uStack_5 + 4),0),i2,
                            (MethodInfo *)CONCAT22(uVar11,fStack_12._0_2_));
        auStack_16._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
        auStack_16._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
        auStack_16._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
        auStack_16._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
        sVar35 = *(short *)(IVar33._0_4_ + 1);
        _pos = CONCAT44(stack0x0000000c,*IVar33._0_4_);
        unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0))
        {
          func_?();
        }
        value_01.fakeValue = auStack_16._4_2_;
        value_01.inited = auStack_16[6];
        value_01._7_1_ = auStack_16[7];
        value_01.currentCryptoKey = auStack_16._0_2_;
        value_01.hiddenValue = auStack_16._2_2_;
        iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                ObscuredShort_op_Implicit_1(value_01,(MethodInfo *)0x0);
        if (pos.x <= iVar17) {
          auStack_16._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
          auStack_16._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
          auStack_16._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
          auStack_16._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
          unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)
             ) {
            func_?();
          }
          value_02.fakeValue = auStack_16._12_2_;
          value_02.inited = auStack_16[0xe];
          value_02._7_1_ = auStack_16[0xf];
          value_02.currentCryptoKey = auStack_16._8_2_;
          value_02.hiddenValue = auStack_16._10_2_;
          iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                  ::ObscuredShort_op_Implicit_1(value_02,(MethodInfo *)0x0);
          if (pos.y <= iVar17) {
            auStack_16._0_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x;
            auStack_16._4_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.x.fakeValue;
            auStack_16._8_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y;
            auStack_16._12_4_ = *(undefined4 *)&(this->fields)._Size_k__BackingField.y.fakeValue;
            unique0x0000a400 = (this->fields)._Size_k__BackingField.z;
            if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).
                        Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started ==
                0)) {
              func_?();
            }
            iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredShort::ObscuredShort_op_Implicit_1(stack0xfffffff4,(MethodInfo *)0x0);
            if (sVar35 <= iVar17) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModel;
  if (pMVar1 != (MVCubeModelBase *)0x0) {
    pAVar2 = (pMVar1->fields).Changed;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
               ,MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__
              );
    pAStack3 =
         (Action_1_CubeModelChangedEventArgs_ *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)0x0;
    if (pAStack3 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action<CubeModelChangedEventArgs>) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
      if (pAVar2 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
    }
    (pMVar1->fields).Changed = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
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
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  uVar3 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (cRam_? == '\0') {
    in_stack_4 = 0x1037;
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    in_stack_4 = 0x1037;
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
    in_stack_4 = 0x1037;
    func_?((short)TypeInfo__MV__WorldObject__IntVector);
  }
  IVar5.z = constraintSize.x;
  IVar5._0_4_ = &stack0xfffffff4;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_UnaryNegation
                    (IVar5,(MethodInfo *)CONCAT22(in_stack_4,constraintSize.z));
  IVar6.z = (int16_t)*IVar5._0_4_;
  IVar6._0_4_ = &stack0xfffffff4;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
                    (IVar6,CONCAT22(uVar3,*(undefined2 *)(IVar5._0_4_ + 1)),(MethodInfo *)0x2);
  IVar5 = *IVar5._0_4_;
  iV.z = constraintSize.x;
  iV._0_4_ = &stack0xfffffff4;
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
    cubeModel = (MVCubeModelBase *)TypeInfo__MV__WorldObject__IntVector;
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Size_parameter_fields_shouldn_t_,arg1,
                         (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
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
  pAVar8 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  if (cubeModel != (MVCubeModelBase *)0x0) {
    pAVar9 = (cubeModel->fields).Changed;
    this_00 = (ModelingDynamicBoxConstraint *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )this_00,(Object *)
                        MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
               ,
               MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
               ,MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__
              );
    pAVar10 = (Action_1_CubeModelChangedEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar9,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar9 = (Action_1_CubeModelChangedEventArgs_ *)0x0;
    if (pAVar10 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      if (pAVar10->klass == TypeInfo__System__Action<CubeModelChangedEventArgs>) {
        pAVar9 = pAVar10;
      }
      if (pAVar9 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
    }
    pAStack11 = pAVar8;
    (cubeModel->fields).Changed = pAVar9;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    puStack18 = &stack0xffffffd8;
    func_?();
    (this_00->fields)._Size_k__BackingField.x.currentCryptoKey = (short)(uint)uVar14;
    (this_00->fields)._Size_k__BackingField.x.hiddenValue = (short)((uint)uVar14 >> 0x10);
    (this_00->fields)._Size_k__BackingField.x.fakeValue = (short)uVar15;
    (this_00->fields)._Size_k__BackingField.x.inited = (char)((uint)uVar15 >> 0x10);
    (this_00->fields)._Size_k__BackingField.x.field_0x7 = (char)((uint)uVar15 >> 0x18);
    (this_00->fields)._Size_k__BackingField.y.currentCryptoKey = (short)uVar16;
    (this_00->fields)._Size_k__BackingField.y.hiddenValue = (short)((uint)uVar16 >> 0x10);
    (this_00->fields)._Size_k__BackingField.y.fakeValue = (short)uVar17;
    (this_00->fields)._Size_k__BackingField.y.inited = (char)((uint)uVar17 >> 0x10);
    (this_00->fields)._Size_k__BackingField.y.field_0x7 = (char)((uint)uVar17 >> 0x18);
    uStack19 = (undefined2)((uint)this_00 >> 0x10);
    OVar20.hiddenValue = 0;
    OVar20.currentCryptoKey = uVar12;
    OVar20.fakeValue = (short)uVar13;
    OVar20.inited = (char)((uint)uVar13 >> 0x10);
    OVar20._7_1_ = (char)((uint)uVar13 >> 0x18);
    (this_00->fields)._Size_k__BackingField.z = OVar20;
    pVVar21 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                       ((Vector3 *)&stack0xfffffff0,this_00,cubeModel,(MethodInfo *)0x0);
    ModelingBoxConstraint::ModelingBoxConstraint_set_Center
              ((ModelingBoxConstraint *)this_00,*pVVar21,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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

