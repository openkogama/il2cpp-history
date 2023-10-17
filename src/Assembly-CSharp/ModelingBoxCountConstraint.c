
/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint_CanAddCubeAt
               (ModelingBoxCountConstraint *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  uVar1._0_2_ = (this->fields)._.minCorner.x.currentCryptoKey;
  uVar1._2_2_ = (this->fields)._.minCorner.x.hiddenValue;
  pMVar2 = &this->fields;
  uVar3._0_2_ = (pMVar2->_).minCorner.x.fakeValue;
  uVar3._2_1_ = (pMVar2->_).minCorner.x.inited;
  uVar3._3_1_ = (pMVar2->_).minCorner.x.field_0x7;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar4.fakeValue = (short)uVar3;
  OVar4.inited = (char)((uint)uVar3 >> 0x10);
  OVar4._7_1_ = (char)((uint)uVar3 >> 0x18);
  OVar4.currentCryptoKey = (short)uVar1;
  OVar4.hiddenValue = (short)((uint)uVar1 >> 0x10);
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(OVar4,(MethodInfo *)0x0);
  if (iVar5 <= pos.x) {
    uVar6._0_2_ = (this->fields)._.minCorner.y.currentCryptoKey;
    uVar6._2_2_ = (this->fields)._.minCorner.y.hiddenValue;
    pMVar2 = &this->fields;
    uVar7._0_2_ = (pMVar2->_).minCorner.y.fakeValue;
    uVar7._2_1_ = (pMVar2->_).minCorner.y.inited;
    uVar7._3_1_ = (pMVar2->_).minCorner.y.field_0x7;
    OVar4 = (this->fields)._.minCorner.z;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort,uVar6,uVar7,
                      OVar4._0_4_,OVar4._4_4_);
    }
    value_01.fakeValue = (short)uVar7;
    value_01.inited = (char)((uint)uVar7 >> 0x10);
    value_01._7_1_ = (char)((uint)uVar7 >> 0x18);
    value_01.currentCryptoKey = (short)uVar6;
    value_01.hiddenValue = (short)((uint)uVar6 >> 0x10);
    iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(value_01,(MethodInfo *)0x0);
    if (iVar5 <= pos.y) {
      uVar8 = SUB84((this->fields)._.minCorner.z,4);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      }
      iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_op_Implicit_1
                        ((ObscuredShort)((ulonglong)uVar8 << 0x20),(MethodInfo *)0x0);
      if (iVar5 <= pos.z) {
        uVar9._0_2_ = (this->fields)._.maxCorner.x.currentCryptoKey;
        uVar9._2_2_ = (this->fields)._.maxCorner.x.hiddenValue;
        pMVar2 = &this->fields;
        uVar10._0_2_ = (pMVar2->_).maxCorner.x.fakeValue;
        uVar10._2_1_ = (pMVar2->_).maxCorner.x.inited;
        uVar10._3_1_ = (pMVar2->_).maxCorner.x.field_0x7;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value_02.fakeValue = (short)uVar10;
        value_02.inited = (char)((uint)uVar10 >> 0x10);
        value_02._7_1_ = (char)((uint)uVar10 >> 0x18);
        value_02.currentCryptoKey = (short)uVar9;
        value_02.hiddenValue = (short)((uint)uVar9 >> 0x10);
        iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                ObscuredShort_op_Implicit_1(value_02,(MethodInfo *)0x0);
        if (pos.x <= iVar5) {
          uVar11._0_2_ = (this->fields)._.maxCorner.y.currentCryptoKey;
          uVar11._2_2_ = (this->fields)._.maxCorner.y.hiddenValue;
          pMVar2 = &this->fields;
          uVar12._0_2_ = (pMVar2->_).maxCorner.y.fakeValue;
          uVar12._2_1_ = (pMVar2->_).maxCorner.y.inited;
          uVar12._3_1_ = (pMVar2->_).maxCorner.y.field_0x7;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
              cctor_finished_or_no_cctor == 0) {
            uStack13 =
                 (undefined2)
                 ((uint)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort >> 0x10);
            func_?();
          }
          uStack13 = 0;
          pos.x = (int16_t)uVar12;
          pos.y = (int16_t)((uint)uVar12 >> 0x10);
          value.fakeValue = pos.x;
          value.currentCryptoKey = (short)uVar11;
          value.hiddenValue = (short)((uint)uVar11 >> 0x10);
          value._6_2_ = pos.y;
          iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                  ::ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
          if (pos.y <= iVar5) {
            OVar4 = (this->fields)._.maxCorner.z;
            uVar1 = OVar4._0_4_;
            uVar3 = OVar4._4_4_;
            puStack14 = (undefined *)uVar3;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
              puStack14 = (undefined *)uVar3;
            }
            uStack13 = 0x102d;
            value_00.fakeValue = (short)puStack14;
            value_00.inited = (char)((uint)puStack14 >> 0x10);
            value_00._7_1_ = (char)((uint)puStack14 >> 0x18);
            value_00.currentCryptoKey = (short)uVar1;
            value_00.hiddenValue = (short)((uint)uVar1 >> 0x10);
            iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredShort::ObscuredShort_op_Implicit_1(value_00,(MethodInfo *)0x0);
            if (0x4991 < iVar5) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


/* Boolean CanRemoveCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint_CanRemoveCubeAt
               (ModelingBoxCountConstraint *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Constraint_violited__min__);
    func_?(&StringLiteral__current_);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModel;
  iVar2 = (this->fields).minCubesCount;
  if (pMVar1 != (MVCubeModelBase *)0x0) {
    iVar3 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar1,(MethodInfo *)0x0);
    if (iVar3 <= iVar2) {
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(this->fields).minCubesCount,(MethodInfo *)0x0);
      pMVar1 = (this->fields).cubeModel;
      if (pMVar1 == (MVCubeModelBase *)0x0) goto code_?;
      MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar1,(MethodInfo *)0x0);
      str3 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Constraint_violited__min__,pSVar4,StringLiteral__current_,
                          str3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar4,(MethodInfo *)0x0);
    }
    return iVar2 < iVar3;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void CubeModel_Changed(Object, CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint_CubeModel_Changed
               (ModelingBoxCountConstraint *this,Object *sender,CubeModelChangedEventArgs *e,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (e != (CubeModelChangedEventArgs *)0x0) {
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ModelingBoxCountConstraint(MVCubeModelBase, IntVector, IntVector, Int32) */

void Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
               (ModelingBoxCountConstraint *this,MVCubeModelBase *cubeModel,IntVector minCorner,
               IntVector maxCorner,int32_t minCubeCount,MethodInfo *method)

{
  ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
            ((ModelingBoxConstraint *)this,minCorner,maxCorner,(MethodInfo *)0x0);
  (this->fields).cubeModel = cubeModel;
  func_?((short)&(this->fields).cubeModel,cubeModel);
  (this->fields).minCubesCount = minCubeCount;
  return;
}

