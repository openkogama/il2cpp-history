
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
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  uStack_2 = 0;
  IStack_3.x = 0;
  IStack_3.y = 0;
  IStack_3.z = 0;
  IStack_4.x = 0;
  IStack_4.y = 0;
  IStack_4.z = 0;
  IStack_5.x = 0;
  IStack_5.y = 0;
  IStack_5.z = 0;
  KStack_6.key._options = 0;
  KStack_6.key._cultureKey = (String *)0x0;
  KStack_6.key._pattern = (String *)0x0;
  KStack_6.value = (Object *)0x0;
  if (model != (MVCubeModelBase *)0x0) {
    pBVar7 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_8,model,(MethodInfo *)0x0);
    KStack_6.key._options = (int32_t)(pBVar7->m_Center).x;
    KStack_6.key._cultureKey = (String *)(pBVar7->m_Center).y;
    KStack_6.key._pattern = (String *)(pBVar7->m_Center).z;
    KStack_6.value = (Object *)(pBVar7->m_Extents).x;
    uStack_2._0_4_ = (pBVar7->m_Extents).y;
    uStack_2._4_4_ = (pBVar7->m_Extents).z;
    pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                       (&RStack_10,&KStack_6,(MethodInfo *)0x0);
    this_02 = (IntVector *)((uint)in_stack_11 << 0x10);
    iStack_12 = 0;
    VStack_1.x = (float)pRVar9->_options;
    VStack_1.y = (float)pRVar9->_cultureKey;
    VStack_1.z = (float)pRVar9->_pattern;
    do {
      index = iStack_12;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pVVar13 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                         (&VStack_14,(MethodInfo *)0x0);
      RStack_10._options = (int32_t)pVVar13->x;
      RStack_10._cultureKey = (String *)pVVar13->y;
      RStack_10._pattern = (String *)pVVar13->z;
      if (index == 0) {
        pSVar15 = (String *)RStack_10._options;
      }
      else if (index == 1) {
        pSVar15 = RStack_10._cultureKey;
      }
      else {
        pSVar15 = RStack_10._pattern;
        if (index != 2) goto code_?;
      }
      uStack_16 = (double)(float)pSVar15;
      fVar17 = (float10)func_?();
      uVar18 = (undefined2)((uint)in_stack_19 >> 0x10);
      uVar20 = (undefined2)((uint)in_stack_21 >> 0x10);
      uStack_16 = (double)fVar17;
      if ((float)fVar17 == 0.0) {
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                  (&VStack_1,index,(MethodInfo *)0x0);
        fVar17 = (float10)func_?();
        uStack_16 = (double)fVar17;
        if ((float)fVar17 != 0.0) {
          fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_1,index,(MethodInfo *)0x0);
          fVar17 = (float10)func_?((double)fVar22);
          uStack_16 = (double)CONCAT44((float)fVar17,(undefined4)uStack_16);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_1,index,(float)fVar17 - _UNK_?,(MethodInfo *)0x0);
        }
      }
      else {
        IStack_3.x = 0;
        IStack_3.y = 0;
        IStack_3.z = 0;
        IStack_4.x = 0;
        IStack_4.y = 0;
        IStack_4.z = 0;
        pBVar7 = MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_23,model,(MethodInfo *)0x0);
        BStack_8.m_Center.z = (pBVar7->m_Center).x;
        BStack_8.m_Extents.x = (pBVar7->m_Center).y;
        BStack_8.m_Extents.y = (pBVar7->m_Center).z;
        BStack_8.m_Extents.z = (pBVar7->m_Extents).x;
        uStack_16._0_4_ = (pBVar7->m_Extents).y;
        uStack_16._4_4_ = (pBVar7->m_Extents).z;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCollisionFunctions);
        }
        localSpaceBounds.m_Center.y = BStack_8.m_Extents.x;
        localSpaceBounds.m_Center.x = BStack_8.m_Center.z;
        localSpaceBounds.m_Center.z = BStack_8.m_Extents.y;
        localSpaceBounds.m_Extents.x = BStack_8.m_Extents.z;
        localSpaceBounds.m_Extents.y = (float)SUB84(uStack_16,0);
        localSpaceBounds.m_Extents.z = (float)((ulonglong)uStack_16 >> 0x20);
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  (&IStack_3,&IStack_4,localSpaceBounds,(MethodInfo *)0x0);
        iVar24 = IStack_4.z;
        uVar25 = IStack_4._0_4_;
        uVar26 = (undefined2)((uint)this_02 >> 0x10);
        uStack_16._4_2_ = IStack_3.x;
        uStack_16._6_2_ = IStack_3.y;
        iStack_27 = IStack_3.z;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          uVar20 = 0x102d;
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        IVar28.z = (int16_t)uVar25;
        IVar28._0_4_ = auStack_29;
        i2.y = in_stack_30;
        i2.x = iVar24;
        i2.z = (int16_t)uStack_16._4_4_;
        IVar28 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                           (IVar28,i2,(MethodInfo *)CONCAT22(uVar20,iStack_27));
        uVar25 = *IVar28._0_4_;
        uVar20 = *(undefined2 *)(IVar28._0_4_ + 1);
        in_stack_21 = 0;
        in_stack_30 = 0;
        IStack_31.x = 0;
        IStack_31.y = 0;
        IStack_31.z = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (&IStack_31,1,1,1,(MethodInfo *)0x0);
        i1.z = (int16_t)uVar25;
        i1._0_4_ = (int)&uStack_32 + 4;
        i2_00.y = uVar26;
        i2_00.x = uVar20;
        i2_00.z = IStack_31.x;
        IVar28 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (i1,i2_00,(MethodInfo *)CONCAT22(uVar18,IStack_31.z));
        index = iStack_12;
        in_stack_19 = 0;
        IStack_5._0_4_ = *IVar28._0_4_;
        IStack_5.z = *(int16_t *)(IVar28._0_4_ + 1);
        this_02 = &IStack_5;
        iVar24 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                          (this_02,iStack_12,(MethodInfo *)0x0);
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        pVVar13 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                           (&VStack_33,(MethodInfo *)0x0);
        RStack_10._options = (int32_t)pVVar13->x;
        RStack_10._cultureKey = (String *)pVVar13->y;
        RStack_10._pattern = (String *)pVVar13->z;
        fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           ((Vector3 *)&RStack_10,index,(MethodInfo *)0x0);
        uStack_16 = (double)fVar22;
        if ((int)iVar24 == (int)fVar22) {
          iVar24 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                            (&IStack_3,index,(MethodInfo *)0x0);
          iVar34 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                            (&IStack_4,index,(MethodInfo *)0x0);
          iVar35 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                            (&IStack_3,iStack_12,(MethodInfo *)0x0);
          index = iStack_12;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_1,iStack_12,(float)(((int)iVar34 - (int)iVar35) / 2 + (int)iVar24),
                     (MethodInfo *)0x0);
        }
      }
      iStack_12 = index + 1;
    } while (iStack_12 < 3);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar13 = SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                       (&VStack_33,(MethodInfo *)0x0);
    RStack_10._options = (int32_t)pVVar13->x;
    RStack_10._cultureKey = (String *)pVVar13->y;
    RStack_10._pattern = (String *)pVVar13->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar36 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_32._0_4_ = (pVVar36->oneVector).x;
    uStack_32._4_4_ = (pVVar36->oneVector).y;
    RStack_10._pattern =
         (String *)(((float)RStack_10._pattern - (pVVar36->oneVector).z) * _UNK_?);
    fVar37 = ((float)RStack_10._options - (float)(undefined4)uStack_32) * _UNK_?;
    fVar22 = ((float)RStack_10._cultureKey - (float)uStack_32._4_4_) * _UNK_?;
    fStack_38 = (float)((uint)RStack_10._pattern ^
                       __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    min.y = (float)((uint)fVar22 ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    min.x = (float)((uint)fVar37 ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    min.z = fStack_38;
    max.y = fVar22;
    max.x = fVar37;
    max.z = (float)RStack_10._pattern;
    MathFunctions::MathFunctions_ClampVector_1(&VStack_1,min,max,(MethodInfo *)0x0);
    this_00 = (model->fields)._.transform;
    if (this_00 != (Transform *)0x0) {
      position.z = VStack_1.z;
      position.x = VStack_1.x;
      position.y = VStack_1.y;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         (&VStack_33,this_00,position,(MethodInfo *)0x0);
      fVar37 = pVVar13->y;
      fVar22 = pVVar13->z;
      __return_storage_ptr__->x = pVVar13->x;
      __return_storage_ptr__->y = fVar37;
      __return_storage_ptr__->z = fVar22;
      return __return_storage_ptr__;
    }
  }
  func_?();
code_?:
  uVar25 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_01 = (IndexOutOfRangeException *)func_?(uVar25);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  pSVar15 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_01,pSVar15,method_00);
  uVar25 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this_01,uVar25);
  pcVar39 = (code *)swi(3);
  pVVar13 = (Vector3 *)(*pcVar39)();
  return pVVar13;
}


/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_CanAddCubeAt
               (ModelingDynamicBoxConstraint *this,IntVector pos,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    func_?(&TypeInfo__SharedCollisionFunctions);
    cRam_? = '\x01';
  }
  iVar2 = pos.y;
  iVar3 = pos.x;
  vec.y = (float)(int)pos.y;
  vec.x = (float)(int)pos.x;
  vec.z = (float)(int)pos.z;
  pVVar4 = MathFunctions::MathFunctions_AbsVector
                      ((Vector3 *)&stack0xffffff84,vec,(MethodInfo *)0x0);
  puStack_5 = (undefined *)pVVar4->x;
  unique0x0000a404 = pVVar4->y;
  fVar6 = pVVar4->z;
  fVar7 = *(float *)&(this->fields)._Size_k__BackingField.x;
  fVar8 = *(float *)&(this->fields)._Size_k__BackingField.x.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  OVar9._4_4_ = fVar8;
  OVar9._0_4_ = fVar7;
  iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
           ObscuredShort_op_Implicit_1(OVar9,(MethodInfo *)0x0);
  if ((float)puStack_5 <= (float)(iVar10 + -1)) {
    fVar7 = *(float *)&(this->fields)._Size_k__BackingField.y;
    fVar8 = *(float *)&(this->fields)._Size_k__BackingField.y.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value._4_4_ = fVar8;
    value._0_4_ = fVar7;
    iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
    if (stack0xfffffff4 <= (float)(iVar10 + -1)) {
      OVar9 = (this->fields)._Size_k__BackingField.z;
      fVar7 = OVar9._0_4_;
      fVar8 = OVar9._4_4_;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value_00._4_4_ = fVar8;
      value_00._0_4_ = fVar7;
      iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
               ObscuredShort_op_Implicit_1(value_00,(MethodInfo *)0x0);
      if (fVar6 <= (float)(iVar10 + -1)) {
        this_00 = (this->fields).cubeModel;
        if (this_00 == (MVCubeModelBase *)0x0) {
code_?:
          func_?();
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pBVar13 = MVCubeModelBase::MVCubeModelBase_GetBounds
                            ((Bounds *)&stack0xffffffc0,this_00,(MethodInfo *)0x0);
        fVar6 = (pBVar13->m_Center).x;
        fVar7 = (pBVar13->m_Center).y;
        fVar8 = (pBVar13->m_Center).z;
        fVar14 = (pBVar13->m_Extents).x;
        uVar15 = SUB42(fVar6,0);
        uStack_16 = (undefined2)((uint)fVar6 >> 0x10);
        fVar17 = (float)(int)iVar3 - _UNK_?;
        fVar6 = (float)(int)iVar2 - _UNK_?;
        index = 0;
        fVar18 = (float)(int)pos.z - _UNK_?;
        do {
          if (index == 0) {
            this._0_2_ = SUB42(fVar17,0);
            this._2_2_ = (undefined2)((uint)fVar17 >> 0x10);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                ((Vector3 *)&stack0xffffff84,(Bounds *)&stack0xffffffa8,
                                 (MethodInfo *)0x0);
            puStack_5 = (undefined *)pVVar4->x;
            unique0x0000a404 = pVVar4->y;
            uVar19._4_4_ = (float)puStack_5;
          }
          else if (index == 1) {
            this._0_2_ = SUB42(fVar6,0);
            this._2_2_ = (undefined2)((uint)fVar6 >> 0x10);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                ((Vector3 *)&stack0xffffff84,(Bounds *)&stack0xffffffa8,
                                 (MethodInfo *)0x0);
            uVar19._0_4_ = pVVar4->x;
            uVar19._4_4_ = pVVar4->y;
            _puStack_10 = uVar19;
          }
          else {
            if (index != 2) {
              func_?();
              this_01 = (IndexOutOfRangeException *)func_?();
              func_?();
              method_00 = (MethodInfo *)0x0;
              message = (String *)func_?();
              mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                        (this_01,message,method_00);
              func_?();
              func_?();
              goto code_?;
            }
            this._0_2_ = SUB42(fVar18,0);
            this._2_2_ = (undefined2)((uint)fVar18 >> 0x10);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                ((Vector3 *)&stack0xffffff84,(Bounds *)&stack0xffffffa8,
                                 (MethodInfo *)0x0);
            puStack_5 = (undefined *)pVVar4->x;
            unique0x0000a404 = pVVar4->y;
            uVar19._4_4_ = pVVar4->z;
          }
          if ((float)CONCAT22(this._2_2_,this._0_2_) <= uVar19._4_4_ &&
              uVar19._4_4_ != (float)CONCAT22(this._2_2_,this._0_2_)) {
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                      ((Vector3 *)&stack0xffffff54,(Bounds *)&stack0xffffffa8,(MethodInfo *)0x0);
            fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                              ((Vector3 *)&stack0xffffff90,index,(MethodInfo *)0x0);
            uVar20 = 0x6147;
            uVar21 = 0x102d;
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      ((Vector3 *)&stack0xffffff78,index,fVar6,(MethodInfo *)0x0);
            pVVar4 = (Vector3 *)&stack0xffffff48;
            uVar22 = 0x6159;
            in_stack_23 = 0x102d;
            pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                                (pVVar4,(Bounds *)&stack0xffffffa8,(MethodInfo *)0x0);
            fVar6 = pVVar24->y;
            uVar25 = 0;
            uVar26 = 0;
            in_stack_27 = &UNK_?;
            min_00.y = (float)(CONCAT26(in_stack_23,CONCAT24(uVar22,CONCAT22(uVar21,uVar20)))
                              >> 0x20);
            min_00.x = (float)CONCAT22(uVar21,uVar20);
            min_00.z = (float)pVVar4;
            max_00.z._2_2_ = (short)((uint)pVVar24->z >> 0x10);
            max_00._0_10_ = *(unkbyte10 *)pVVar24;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                      ((Bounds *)&stack0xffffffa8,min_00,max_00,(MethodInfo *)0x0);
            fVar17 = (float)CONCAT22(uVar26,uVar25);
          }
          uVar19._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  ((Vector3 *)&stack0xffffff6c,index,(MethodInfo *)0x0);
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                              ((Vector3 *)&stack0xffffff3c,(Bounds *)&stack0xffffffa8,
                               (MethodInfo *)0x0);
          puStack_5 = (undefined *)pVVar4->x;
          unique0x0000a404 = pVVar4->y;
          pVVar4 = (Vector3 *)&puStack_5;
          fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                            (pVVar4,index,(MethodInfo *)0x0);
          pos.z = SUB42(fVar28,0);
          in_stack_29 = (int16_t)((uint)fVar28 >> 0x10);
          if (fVar28 < uVar19._4_4_) {
            pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                                ((Vector3 *)&stack0xffffff30,(Bounds *)&stack0xffffffa8,
                                 (MethodInfo *)0x0);
            fVar18 = 0.0;
            fVar28 = pVVar24->x;
            fVar30 = pVVar24->y;
            uVar19._4_4_ = pVVar24->z;
            value_03 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 ((Vector3 *)&stack0xffffff6c,index,(MethodInfo *)0x0);
            stack0xfffffff4 = (float)&stack0xffffff60;
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      ((Vector3 *)&stack0xffffff60,index,value_03,(MethodInfo *)0x0);
            stack0xfffffff4 = (float)&UNK_?;
            pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                                ((Vector3 *)&stack0xffffffcc,(Bounds *)&stack0xffffffa8,
                                 (MethodInfo *)0x0);
            uVar31 = pVVar24->y;
            pos.x = (int16_t)uVar31;
            pos.y = (int16_t)((uint)uVar31 >> 0x10);
            pos.z = SUB42(pVVar24->z,0);
            in_stack_29 = (int16_t)((uint)pVVar24->z >> 0x10);
            min.z._2_2_ = in_stack_29;
            min._0_10_ = *(unkbyte10 *)pVVar24;
            max.y = fVar30;
            max.x = fVar28;
            max.z = uVar19._4_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
                      ((Bounds *)&stack0xffffffa8,min,max,(MethodInfo *)0x0);
          }
          uVar20 = (undefined2)((uint)in_stack_27 >> 0x10);
          index = index + 1;
        } while (index < 3);
        fVar6 = (float)CONCAT22(uStack_16,uVar15);
        uVar19 = CONCAT44(pVVar4,&UNK_?);
        uVar32._0_2_ = 0;
        uVar32._2_2_ = 0;
        iVar2 = 0;
        iVar10 = 0;
        iVar3 = 0;
        pos.x = 0x61d3;
        pos.y = 0x102d;
        pos.z = (int16_t)pVVar4;
        in_stack_29 = (int16_t)((uint)pVVar4 >> 0x10);
        fVar18 = fVar7;
        if ((TypeInfo__SharedCollisionFunctions->_1).cctor_finished_or_no_cctor == 0) {
          iVar3 = 0;
          iVar2 = 0;
          iVar10 = 0;
          func_?();
          uVar19 = CONCAT26(in_stack_29,CONCAT24(pos.z,CONCAT22(pos.y,pos.x)));
        }
        localSpaceBounds.m_Center.y = fVar7;
        localSpaceBounds.m_Center.x = fVar6;
        localSpaceBounds.m_Center.z = fVar8;
        localSpaceBounds.m_Extents.x = fVar14;
        localSpaceBounds.m_Extents.y = (float)uVar19;
        localSpaceBounds.m_Extents.z = (float)((ulonglong)uVar19 >> 0x20);
        SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                  ((IntVector *)&stack0xffffffd8,(IntVector *)&stack0xffffffe0,localSpaceBounds,
                   (MethodInfo *)0x0);
        pos.z = (int16_t)uVar32;
        in_stack_29 = SUB42(uVar32,2);
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          uVar20 = 0x102d;
          func_?();
        }
        IVar33.z = iVar10;
        IVar33._0_4_ = &pos;
        i2.y = in_stack_23;
        i2.x = iVar3;
        i2.z = pos.z;
        IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                           (IVar33,i2,(MethodInfo *)CONCAT22(uVar20,iVar2));
        uVar20 = (undefined2)((uint)fVar17 >> 0x10);
        uVar32 = *IVar33._0_4_;
        uVar15 = *(undefined2 *)(IVar33._0_4_ + 1);
        iVar3 = 0;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xffffffe8,1,1,1,(MethodInfo *)0x0);
        i1.z = (int16_t)uVar32;
        i1._0_4_ = &stack0xffffff9c;
        i2_00.y = uVar20;
        i2_00.x = uVar15;
        i2_00.z = iVar3;
        IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                           (i1,i2_00,(MethodInfo *)((uint)fVar18 & 0xffff0000));
        uVar32 = *IVar33._0_4_;
        sVar34 = *(short *)(IVar33._0_4_ + 1);
        pos.x = (int16_t)uVar32;
        pos.y = (int16_t)((uint)uVar32 >> 0x10);
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                 ObscuredShort_op_Implicit_1((ObscuredShort)0x0,(MethodInfo *)0x0);
        if (pos.x <= iVar3) {
          fVar6 = *(float *)&(pMVar1->fields)._Size_k__BackingField.y;
          puVar35 = *(undefined **)&(pMVar1->fields)._Size_k__BackingField.y.fakeValue;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
              cctor_finished_or_no_cctor == 0) {
            puVar35 = &UNK_?;
            func_?();
          }
          value_01._4_4_ = puVar35;
          value_01._0_4_ = fVar6;
          iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                   ::ObscuredShort_op_Implicit_1(value_01,(MethodInfo *)0x0);
          if (pos.y <= iVar3) {
            OVar9 = (pMVar1->fields)._Size_k__BackingField.z;
            fVar6 = OVar9._0_4_;
            fVar7 = OVar9._4_4_;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            value_02._4_4_ = fVar7;
            value_02._0_4_ = fVar6;
            iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_op_Implicit_1(value_02,(MethodInfo *)0x0);
            if (sVar34 <= iVar3) {
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
  if (pMVar1 != (MVCubeModelBase *)0x0) {
    pAVar2 = (pMVar1->fields).Changed;
    this_00 = (Action_1_Object_ *)
              func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (this_00 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
      goto code_?;
    }
  }
  func_?();
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
  uVar1 = SUB42(in_stack_2,2);
  uVar3 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (cRam_? == '\0') {
    func_?(0x67dc);
    in_stack_4 = 0x10ed;
    func_?(0xdaf4);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(0xc56c);
    in_stack_4 = 0x10ee;
    func_?(0x2574);
    func_?(0x3e0c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_4 = 0x102d;
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
  uVar7 = constraintSize._0_4_;
  uVar8 = (int)constraintSize.x & 0x80000001;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
  }
  if (uVar8 == 1) {
code_?:
    uStack_9._4_4_ = (undefined *)CONCAT22(uStack_9._6_2_,constraintSize.z);
    uStack_9._0_4_ = uVar7;
    pSVar10 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                       ((IntVector *)&uStack_9,(MethodInfo *)0x0);
    uStack_9._4_4_ = &UNK_?;
    pSVar10 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Size_parameter_fields_shouldn_t_,pSVar10,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    in_stack_11 = 0x102d;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar10,(MethodInfo *)0x0);
  }
  else {
    uVar8 = (int)constraintSize.y & 0x80000001;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
    }
    if (uVar8 == 1) goto code_?;
    uVar8 = (int)constraintSize.z & 0x80000001;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
    }
    if (uVar8 == 1) goto code_?;
  }
  (this->fields).cubeModel = cubeModel;
  func_?();
  pMVar12 = (this->fields).cubeModel;
  if (pMVar12 != (MVCubeModelBase *)0x0) {
    pAVar13 = (pMVar12->fields).Changed;
    this_00 = (Action_1_Object_ *)func_?();
    if (this_00 != (Action_1_Object_ *)0x0) {
      in_stack_11 = 0x102d;
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar13,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar14 == (Delegate *)0x0) {
        (pMVar12->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
code_?:
        func_?();
        uVar15 = 0;
        uVar16._0_2_ = 0;
        uVar16._2_1_ = 0;
        uVar16._3_1_ = 0;
        uVar17._0_2_ = 0;
        uVar17._2_2_ = 0;
        uVar18._0_2_ = 0;
        uVar18._2_1_ = 0;
        uVar18._3_1_ = 0;
        uVar19 = 0;
        uVar20._0_2_ = 0;
        uVar20._2_1_ = 0;
        uVar20._3_1_ = 0;
        intVector.z = 0x67b7;
        intVector.x = (int16_t)uVar7;
        intVector.y = SUB42(uVar7,2);
        ObscuredIntVector::ObscuredIntVector__ctor_2
                  ((ObscuredIntVector *)&stack0xffffffd0,intVector,(MethodInfo *)0x0);
        (this->fields)._Size_k__BackingField.x.currentCryptoKey = (short)(uint)uVar15;
        (this->fields)._Size_k__BackingField.x.hiddenValue = (short)((uint)uVar15 >> 0x10);
        (this->fields)._Size_k__BackingField.x.fakeValue = (int16_t)uVar16;
        (this->fields)._Size_k__BackingField.x.inited = SUB41(uVar16,2);
        (this->fields)._Size_k__BackingField.x.field_0x7 = SUB41(uVar16,3);
        (this->fields)._Size_k__BackingField.y.currentCryptoKey = (int16_t)uVar17;
        (this->fields)._Size_k__BackingField.y.hiddenValue = SUB42(uVar17,2);
        (this->fields)._Size_k__BackingField.y.fakeValue = (int16_t)uVar18;
        (this->fields)._Size_k__BackingField.y.inited = SUB41(uVar18,2);
        (this->fields)._Size_k__BackingField.y.field_0x7 = SUB41(uVar18,3);
        OVar21.hiddenValue = 0;
        OVar21.currentCryptoKey = uVar19;
        OVar21.fakeValue = (int16_t)uVar20;
        OVar21.inited = SUB41(uVar20,2);
        OVar21._7_1_ = SUB41(uVar20,3);
        (this->fields)._Size_k__BackingField.z = OVar21;
        pVVar22 = ModelingDynamicBoxConstraint_CalcConstraintBoxCenter
                            ((Vector3 *)&stack0xffffffe8,this,cubeModel,(MethodInfo *)0x0);
        ModelingBoxConstraint::ModelingBoxConstraint_set_Center
                  ((ModelingBoxConstraint *)this,*pVVar22,(MethodInfo *)0x0);
        return;
      }
      pAVar13 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
      if (pAVar13 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
        (pMVar12->fields).Changed = pAVar13;
        iVar23 = func_?();
        if (iVar23 != 0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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

