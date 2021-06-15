
/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint_CanAddCubeAt
               (ModelingBoxCountConstraint *this,IntVector pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1._0_2_ = (this->fields)._.minCorner.x.currentCryptoKey;
  uVar1._2_2_ = (this->fields)._.minCorner.x.hiddenValue;
  pMVar2 = &this->fields;
  uVar3._0_2_ = (pMVar2->_).minCorner.x.fakeValue;
  uVar3._2_1_ = (pMVar2->_).minCorner.x.inited;
  uVar3._3_1_ = (pMVar2->_).minCorner.x.field_0x7;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
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
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
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
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0))
        {
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
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)
             ) {
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
            if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).
                        Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started ==
                0)) {
              func_?();
              puStack14 = (undefined *)uVar3;
            }
            uStack13 = 0x1037;
            value_00.fakeValue = (short)puStack14;
            value_00.inited = (char)((uint)puStack14 >> 0x10);
            value_00._7_1_ = (char)((uint)puStack14 >> 0x18);
            value_00.currentCryptoKey = (short)uVar1;
            value_00.hiddenValue = (short)((uint)uVar1 >> 0x10);
            iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredShort::ObscuredShort_op_Implicit_1(value_00,(MethodInfo *)0x0);
            if (0x7bc < iVar5) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModel;
  iVar2 = (this->fields).minCubesCount;
  if (pMVar1 == (MVCubeModelBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    iVar4 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar1,(MethodInfo *)0x0);
    if (iVar2 < iVar4) {
      return iVar2 < iVar4;
    }
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_Constraint_violited__min__ != (String *)0x0) &&
       (iVar5 = func_?(StringLiteral_Constraint_violited__min__,
                                (args->klass->_0).element_class), iVar5 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Constraint_violited__min__;
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    if ((pOVar6 != (Object *)0x0) &&
       (iVar5 = func_?(pOVar6,(args->klass->_0).element_class), iVar5 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar6;
    if ((StringLiteral__current_ != (String *)0x0) &&
       (iVar5 = func_?(StringLiteral__current_,(args->klass->_0).element_class), iVar5 == 0
       )) goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__current_;
    pMVar1 = (this->fields).cubeModel;
    if (pMVar1 == (MVCubeModelBase *)0x0) goto code_?;
    MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar1,(MethodInfo *)0x0);
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if ((pOVar6 == (Object *)0x0) ||
       (iVar5 = func_?(pOVar6,(args->klass->_0).element_class), iVar5 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar6;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        return iVar2 < iVar4;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void CubeModel_Changed(Object, CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint_CubeModel_Changed
               (ModelingBoxCountConstraint *this,Object *sender,CubeModelChangedEventArgs *e,
               MethodInfo *method)

{
  if (e != (CubeModelChangedEventArgs *)0x0) {
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  (this->fields).minCubesCount = minCubeCount;
  return;
}

