
/* Void ChangeBox(IntVector, IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_ChangeBox
               (ModelingBoxConstraint *this,IntVector minCorner,IntVector maxCorner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ConstraintBoxChangedEventArgs);
    func_?(0xed40);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2._0_2_ = 0;
  uVar2._2_1_ = 0;
  uVar2._3_1_ = 0;
  uVar3 = 0;
  uVar4._0_2_ = 0;
  uVar4._2_1_ = 0;
  uVar4._3_1_ = 0;
  intVector.z = minCorner.z;
  intVector.x = minCorner.x;
  intVector.y = minCorner.y;
  ObscuredIntVector::ObscuredIntVector__ctor_2
            ((ObscuredIntVector *)&stack0xffffffa8,intVector,(MethodInfo *)0x0);
  (this->fields).minCorner.x.currentCryptoKey = (short)(uint)uVar1;
  (this->fields).minCorner.x.hiddenValue = (short)((uint)uVar1 >> 0x10);
  (this->fields).minCorner.x.fakeValue = (int16_t)uVar2;
  (this->fields).minCorner.x.inited = SUB41(uVar2,2);
  (this->fields).minCorner.x.field_0x7 = SUB41(uVar2,3);
  (this->fields).minCorner.y.currentCryptoKey = (short)(uint)uVar3;
  (this->fields).minCorner.y.hiddenValue = (short)((uint)uVar3 >> 0x10);
  (this->fields).minCorner.y.fakeValue = (int16_t)uVar4;
  (this->fields).minCorner.y.inited = SUB41(uVar4,2);
  (this->fields).minCorner.y.field_0x7 = SUB41(uVar4,3);
  (this->fields).minCorner.z.currentCryptoKey = 0;
  (this->fields).minCorner.z.hiddenValue = 0;
  (this->fields).minCorner.z.fakeValue = 0;
  (this->fields).minCorner.z.inited = 0;
  (this->fields).minCorner.z.field_0x7 = 0;
  puStack_5 = (undefined *)0x0;
  uVar6._0_2_ = 0;
  uVar6._2_1_ = 0;
  uVar6._3_1_ = 0;
  uVar7._0_2_ = 0;
  uVar7._2_2_ = 0;
  uVar8._0_2_ = 0;
  uVar8._2_1_ = 0;
  uVar8._3_1_ = 0;
  uVar9._0_2_ = 0;
  uVar9._2_2_ = 0;
  uVar10._0_2_ = 0;
  uVar10._2_1_ = 0;
  uVar10._3_1_ = 0;
  intVector_00.z = maxCorner.z;
  intVector_00.x = maxCorner.x;
  intVector_00.y = maxCorner.y;
  ObscuredIntVector::ObscuredIntVector__ctor_2
            ((ObscuredIntVector *)&puStack_5,intVector_00,(MethodInfo *)0x0);
  *(undefined **)&(this->fields).maxCorner.x = puStack_5;
  (this->fields).maxCorner.x.fakeValue = (int16_t)uVar6;
  (this->fields).maxCorner.x.inited = SUB41(uVar6,2);
  (this->fields).maxCorner.x.field_0x7 = SUB41(uVar6,3);
  (this->fields).maxCorner.y.currentCryptoKey = (int16_t)uVar7;
  (this->fields).maxCorner.y.hiddenValue = SUB42(uVar7,2);
  (this->fields).maxCorner.y.fakeValue = (int16_t)uVar8;
  (this->fields).maxCorner.y.inited = SUB41(uVar8,2);
  (this->fields).maxCorner.y.field_0x7 = SUB41(uVar8,3);
  OVar11.fakeValue = (int16_t)uVar10;
  OVar11.inited = SUB41(uVar10,2);
  OVar11._7_1_ = SUB41(uVar10,3);
  OVar11.currentCryptoKey = (int16_t)uVar9;
  OVar11.hiddenValue = SUB42(uVar9,2);
  (this->fields).maxCorner.z = OVar11;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVVar12 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                     (&VStack_13,&minCorner,(MethodInfo *)0x0);
  fVar14 = pVVar12->y;
  fVar15 = pVVar12->z;
  (this->fields)._FMinCorner_k__BackingField.x = pVVar12->x;
  (this->fields)._FMinCorner_k__BackingField.y = fVar14;
  (this->fields)._FMinCorner_k__BackingField.z = fVar15;
  pVVar12 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                     (&VStack_13,&maxCorner,(MethodInfo *)0x0);
  iVar16 = maxCorner.z;
  uVar6 = maxCorner._0_4_;
  uVar17 = pVVar12->x;
  uVar18 = pVVar12->y;
  fVar15 = pVVar12->z;
  (this->fields)._FMaxCorner_k__BackingField.x = (float)uVar17;
  (this->fields)._FMaxCorner_k__BackingField.y = (float)uVar18;
  VStack_13.x = (this->fields)._FMinCorner_k__BackingField.x;
  VStack_13.y = (this->fields)._FMinCorner_k__BackingField.y;
  (this->fields)._FMaxCorner_k__BackingField.z = fVar15;
  VStack_13.z = (fVar15 + (this->fields)._FMinCorner_k__BackingField.z) * _UNK_?;
  fStack_19 = ((float)uVar17 + VStack_13.x) * _UNK_?;
  fStack_20 = ((float)uVar18 + VStack_13.y) * _UNK_?;
  (this->fields).center.x = fStack_19;
  (this->fields).center.y = fStack_20;
  (this->fields).center.z = VStack_13.z;
  IStack_21.x = minCorner.x;
  IStack_21.y = minCorner.y;
  fStack_22 = 0.0;
  uStack_23 = 0;
  iStack_24 = minCorner.z;
  pCStack_25 = (ConstraintBoxChangedEventArgs *)func_?();
  uVar7 = maxCorner._0_4_;
  center.y = fStack_20;
  center.x = fStack_19;
  center.z = VStack_13.z;
  minCorner_00.z = iStack_24;
  minCorner_00.x = IStack_21.x;
  minCorner_00.y = IStack_21.y;
  maxCorner_00.z = iVar16;
  maxCorner.x = (int16_t)uVar6;
  maxCorner.y = SUB42(uVar6,2);
  maxCorner_00.x = maxCorner.x;
  maxCorner_00.y = maxCorner.y;
  maxCorner._0_4_ = uVar7;
  ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
            (pCStack_25,center,minCorner_00,maxCorner_00,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnBoxChanged.method)();
  return;
}


/* Void OnBoxChanged(ConstraintBoxChangedEventArgs) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_OnBoxChanged
               (ModelingBoxConstraint *this,ConstraintBoxChangedEventArgs *args,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pEVar2 = (this->fields).BoxChanged;
  if (pEVar2 != (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0) {
    puStack_1 = (pEVar2->fields)._._.method;
    pCStack_3 = args;
    pMStack_4 = this;
    (*(pEVar2->fields)._._.invoke_impl)((pEVar2->fields)._._.method_code);
    return;
  }
  uVar5 = func_?(&pMStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ModelingBoxConstraint(IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint__ctor
               (ModelingBoxConstraint *this,IntVector size,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  uVar3 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (cRam_? == '\0') {
    func_?(0xf4d0);
    in_stack_4 = 0x11b2;
    func_?(0xed40);
    func_?(0x1600);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_4 = 0x1046;
    func_?((short)TypeInfo__MV__WorldObject__IntVector);
  }
  IVar5.z = size.x;
  IVar5._0_4_ = &stack0xffffffec;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_UnaryNegation
                    (IVar5,(MethodInfo *)CONCAT22(in_stack_4,size.z));
  IVar6.z = (int16_t)*IVar5._0_4_;
  IVar6._0_4_ = &stack0xffffffec;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
                    (IVar6,CONCAT22(uVar3,*(undefined2 *)(IVar5._0_4_ + 1)),(MethodInfo *)0x2);
  IVar5 = *IVar5._0_4_;
  iV.z = size.x;
  iV._0_4_ = &stack0xffffffec;
  IVar6 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
                    (iV,CONCAT22(uVar1,size.z),(MethodInfo *)0x2);
  ModelingBoxConstraint__ctor_1
            ((ModelingBoxConstraint *)CONCAT22(this._2_2_,(IVar6._0_4_)->z),IVar5,*IVar6._0_4_,
             (MethodInfo *)0x0);
  uVar7 = (int)size.z & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  if (uVar7 == 1) {
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
  return;
}


/* ModelingBoxConstraint(IntVector, IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
               (ModelingBoxConstraint *this,IntVector minCorner,IntVector maxCorner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    func_?(&
                    MethodInfo__ModelingBoxConstraint____c____ctor_b__24_0_System__Object__ConstraintBoxChangedEventArgs_
                   );
    func_?(&TypeInfo__ModelingBoxConstraint____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ModelingBoxConstraint____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ModelingBoxConstraint____c);
  }
  this_00 = TypeInfo__ModelingBoxConstraint____c->static_fields->__9__24_0;
  if (this_00 == (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0) {
    if ((TypeInfo__ModelingBoxConstraint____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ModelingBoxConstraint____c);
    }
    object = TypeInfo__ModelingBoxConstraint____c->static_fields->__9;
    this_00 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)
              func_?(TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)object,
               MethodInfo__ModelingBoxConstraint____c____ctor_b__24_0_System__Object__ConstraintBoxChangedEventArgs_
               ,(MethodInfo *)0x0);
    TypeInfo__ModelingBoxConstraint____c->static_fields->__9__24_0 = this_00;
    func_?(&TypeInfo__ModelingBoxConstraint____c->static_fields->__9__24_0,this_00);
  }
  if (this != (ModelingBoxConstraint *)0x0) {
    method_00 = (MethodInfo *)&(this->fields).BoxChanged;
    (this->fields).BoxChanged = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    IStack_1.x = maxCorner.x;
    IStack_1.y = maxCorner.y;
    IStack_1.z = maxCorner.z;
    IStack_2.x = minCorner.x;
    IStack_2.y = minCorner.y;
    IStack_2.z = minCorner.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ConstraintBoxChangedEventArgs);
      func_?(0xed40);
      cRam_? = '\x01';
    }
    uVar3 = 0;
    uVar4._0_2_ = 0;
    uVar4._2_1_ = 0;
    uVar4._3_1_ = 0;
    uVar5._0_2_ = 0;
    uVar5._2_2_ = 0;
    uVar6._0_2_ = 0;
    uVar6._2_1_ = 0;
    uVar6._3_1_ = 0;
    uVar7 = 0;
    uVar8._0_2_ = 0;
    uVar8._2_1_ = 0;
    uVar8._3_1_ = 0;
    intVector.z = IStack_2.z;
    intVector.x = IStack_2.x;
    intVector.y = IStack_2.y;
    ObscuredIntVector::ObscuredIntVector__ctor_2
              ((ObscuredIntVector *)&stack0xffffff98,intVector,(MethodInfo *)0x0);
    (this->fields).minCorner.x.currentCryptoKey = (int16_t)uVar5;
    (this->fields).minCorner.x.hiddenValue = SUB42(uVar5,2);
    (this->fields).minCorner.x.fakeValue = (int16_t)uVar6;
    (this->fields).minCorner.x.inited = SUB41(uVar6,2);
    (this->fields).minCorner.x.field_0x7 = SUB41(uVar6,3);
    (this->fields).minCorner.y.currentCryptoKey = (short)(uint)uVar7;
    (this->fields).minCorner.y.hiddenValue = (short)((uint)uVar7 >> 0x10);
    (this->fields).minCorner.y.fakeValue = (int16_t)uVar8;
    (this->fields).minCorner.y.inited = SUB41(uVar8,2);
    (this->fields).minCorner.y.field_0x7 = SUB41(uVar8,3);
    OVar9.hiddenValue = 0;
    OVar9.currentCryptoKey = uVar3;
    OVar9.fakeValue = (int16_t)uVar4;
    OVar9.inited = SUB41(uVar4,2);
    OVar9._7_1_ = SUB41(uVar4,3);
    (this->fields).minCorner.z = OVar9;
    uVar10._0_2_ = 0;
    uVar10._2_1_ = 0;
    uVar10._3_1_ = 0;
    uVar11._0_2_ = 0;
    uVar11._2_1_ = 0;
    uVar11._3_1_ = 0;
    uVar12._0_2_ = 0;
    uVar12._2_2_ = 0;
    uVar13._0_2_ = 0;
    uVar13._2_1_ = 0;
    uVar13._3_1_ = 0;
    intVector_00.z = IStack_1.z;
    intVector_00.x = IStack_1.x;
    intVector_00.y = IStack_1.y;
    uVar7 = IStack_1.z;
    ObscuredIntVector::ObscuredIntVector__ctor_2
              ((ObscuredIntVector *)&stack0xffffff80,intVector_00,(MethodInfo *)0x0);
    (this->fields).maxCorner.x.currentCryptoKey = (short)(uint)uVar7;
    (this->fields).maxCorner.x.hiddenValue = (short)((uint)uVar7 >> 0x10);
    (this->fields).maxCorner.x.fakeValue = (int16_t)uVar10;
    (this->fields).maxCorner.x.inited = SUB41(uVar10,2);
    (this->fields).maxCorner.x.field_0x7 = SUB41(uVar10,3);
    (this->fields).maxCorner.y.currentCryptoKey = 0;
    (this->fields).maxCorner.y.hiddenValue = 0;
    (this->fields).maxCorner.y.fakeValue = (int16_t)uVar11;
    (this->fields).maxCorner.y.inited = SUB41(uVar11,2);
    (this->fields).maxCorner.y.field_0x7 = SUB41(uVar11,3);
    OVar14.fakeValue = (int16_t)uVar13;
    OVar14.inited = SUB41(uVar13,2);
    OVar14._7_1_ = SUB41(uVar13,3);
    OVar14.currentCryptoKey = (int16_t)uVar12;
    OVar14.hiddenValue = SUB42(uVar12,2);
    (this->fields).maxCorner.z = OVar14;
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar15 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                       (&VStack_16,&IStack_2,(MethodInfo *)0x0);
    fVar17 = pVVar15->y;
    fVar18 = pVVar15->z;
    (this->fields)._FMinCorner_k__BackingField.x = pVVar15->x;
    (this->fields)._FMinCorner_k__BackingField.y = fVar17;
    (this->fields)._FMinCorner_k__BackingField.z = fVar18;
    pVVar15 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                       (&VStack_16,&IStack_1,(MethodInfo *)0x0);
    iVar19 = IStack_1.z;
    uVar10 = IStack_1._0_4_;
    uVar20 = pVVar15->x;
    uVar21 = pVVar15->y;
    fVar18 = pVVar15->z;
    (this->fields)._FMaxCorner_k__BackingField.x = (float)uVar20;
    (this->fields)._FMaxCorner_k__BackingField.y = (float)uVar21;
    VStack_16.x = (this->fields)._FMinCorner_k__BackingField.x;
    VStack_16.y = (this->fields)._FMinCorner_k__BackingField.y;
    (this->fields)._FMaxCorner_k__BackingField.z = fVar18;
    VStack_16.z = (fVar18 + (this->fields)._FMinCorner_k__BackingField.z) * _UNK_?;
    fStack_22 = ((float)uVar20 + VStack_16.x) * _UNK_?;
    fStack_23 = ((float)uVar21 + VStack_16.y) * _UNK_?;
    (this->fields).center.x = fStack_22;
    (this->fields).center.y = fStack_23;
    (this->fields).center.z = VStack_16.z;
    IStack_24.x = IStack_2.x;
    IStack_24.y = IStack_2.y;
    fStack_25 = 0.0;
    uStack_26 = 0;
    iStack_27 = IStack_2.z;
    pCStack_28 = (ConstraintBoxChangedEventArgs *)func_?();
    uVar11 = IStack_1._0_4_;
    center.y = fStack_23;
    center.x = fStack_22;
    center.z = VStack_16.z;
    minCorner_00.z = iStack_27;
    minCorner_00.x = IStack_24.x;
    minCorner_00.y = IStack_24.y;
    maxCorner_00.z = iVar19;
    IStack_1.x = (int16_t)uVar10;
    IStack_1.y = SUB42(uVar10,2);
    maxCorner_00.x = IStack_1.x;
    maxCorner_00.y = IStack_1.y;
    IStack_1._0_4_ = uVar11;
    ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
              (pCStack_28,center,minCorner_00,maxCorner_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnBoxChanged.method)();
    return;
  }
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void add_BoxChanged(EventHandler`1[ConstraintBoxChangedEventArgs]) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_add_BoxChanged
               (ModelingBoxConstraint *this,EventHandler_1_ConstraintBoxChangedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).BoxChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)
             func_?(&(this->fields).BoxChanged,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_BoxChanged(EventHandler`1[ConstraintBoxChangedEventArgs]) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_remove_BoxChanged
               (ModelingBoxConstraint *this,EventHandler_1_ConstraintBoxChangedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).BoxChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)
             func_?(&(this->fields).BoxChanged,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_Center
               (ModelingBoxConstraint *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ConstraintBoxChangedEventArgs);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (this->fields).center.x;
  auStack_1._4_4_ = (this->fields).center.y;
  fStack_2 = (this->fields).center.z;
  if (_UNK_? <=
      ((float)auStack_1._4_4_ - value.y) * ((float)auStack_1._4_4_ - value.y) +
      ((float)auStack_1._0_4_ - value.x) * ((float)auStack_1._0_4_ - value.x) +
      (fStack_2 - value.z) * (fStack_2 - value.z)) {
    (this->fields).center.x = (float)(int)value._0_8_;
    (this->fields).center.y = (float)(int)((ulonglong)value._0_8_ >> 0x20);
    (this->fields).center.z = value.z;
    value_00 = (this->fields).minCorner.x;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(value_00,(MethodInfo *)0x0);
    uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).minCorner.y,(MethodInfo *)0x0);
    uVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).minCorner.z,(MethodInfo *)0x0);
    auStack_1 = (undefined1  [8])((ulonglong)auStack_1 & 0xffffffff);
    fStack_2 = (float)((uint)fStack_2 & 0xffff0000);
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)(auStack_1 + 4),(uint)uVar3,(uint)uVar4,(uint)uVar5,(MethodInfo *)0x0);
    uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).maxCorner.x,(MethodInfo *)0x0);
    uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).maxCorner.y,(MethodInfo *)0x0);
    uVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).maxCorner.z,(MethodInfo *)0x0);
    IStack_6.x = 0;
    IStack_6.y = 0;
    IStack_6.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_6,(uint)uVar3,(uint)uVar4,(uint)uVar5,(MethodInfo *)0x0);
    this_00 = (ConstraintBoxChangedEventArgs *)func_?();
    auVar7 = auStack_1;
    center.y = (float)&IStack_6;
    center.x = (float)&UNK_?;
    center.z._0_2_ = uVar3;
    center.z._2_2_ = 0;
    minCorner.z = fStack_2._0_2_;
    minCorner.x = auStack_1._4_2_;
    minCorner.y = auStack_1._6_2_;
    maxCorner.z = IStack_6.z;
    maxCorner.x = IStack_6.x;
    maxCorner.y = IStack_6.y;
    auStack_1 = auVar7;
    ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
              (this_00,center,minCorner,maxCorner,(MethodInfo *)0x0);
    uStack8 = (undefined2)((uint)this_00 >> 0x10);
    uStack9 = 0x1046;
    (*(code *)(this->klass->vtable).OnBoxChanged.method)();
  }
  return;
}


/* Void set_MaxCorner(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_MaxCorner
               (ModelingBoxConstraint *this,ObscuredIntVector value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ConstraintBoxChangedEventArgs);
    func_?(&TypeInfo__ObscuredIntVector);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).maxCorner.x.currentCryptoKey;
  uVar2 = (this->fields).maxCorner.x.hiddenValue;
  a.x.hiddenValue = uVar2;
  a.x.currentCryptoKey = uVar1;
  VStack_3.x = *(float *)&(this->fields).maxCorner.x.fakeValue;
  VStack_3.y = *(float *)&(this->fields).maxCorner.y;
  VStack_3.z = *(float *)&(this->fields).maxCorner.y.fakeValue;
  OStack_4 = (this->fields).maxCorner.z;
  if ((TypeInfo__ObscuredIntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObscuredIntVector);
  }
  uVar5 = (undefined4)(CONCAT26(value.z._6_2_,CONCAT24(value.z.fakeValue,value.z._0_4_)) >> 0x20);
  a.x._4_4_ = VStack_3.x;
  a.y._0_4_ = VStack_3.y;
  a.y._4_4_ = VStack_3.z;
  a.z = OStack_4;
  b.x.fakeValue = value.x.fakeValue;
  b.x.inited = value.x.inited;
  b.x._7_1_ = value.x._7_1_;
  b.x.currentCryptoKey = value.x.currentCryptoKey;
  b.x.hiddenValue = value.x.hiddenValue;
  b.y.currentCryptoKey = value.y.currentCryptoKey;
  b.y.hiddenValue = value.y.hiddenValue;
  b.y.fakeValue = value.y.fakeValue;
  b.y.inited = value.y.inited;
  b.y._7_1_ = value.y._7_1_;
  b.z.currentCryptoKey = value.z.currentCryptoKey;
  b.z.hiddenValue = value.z.hiddenValue;
  b.z.fakeValue = (short)uVar5;
  b.z.inited = (char)((uint)uVar5 >> 0x10);
  b.z._7_1_ = (char)((uint)uVar5 >> 0x18);
  bVar6 = ObscuredIntVector::ObscuredIntVector_op_Inequality(a,b,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    (this->fields).maxCorner.x.currentCryptoKey = value.x.currentCryptoKey;
    (this->fields).maxCorner.x.hiddenValue = value.x.hiddenValue;
    (this->fields).maxCorner.x.fakeValue = value.x.fakeValue;
    (this->fields).maxCorner.x.inited = value.x.inited;
    (this->fields).maxCorner.x.field_0x7 = value.x._7_1_;
    (this->fields).maxCorner.y.currentCryptoKey = value.y.currentCryptoKey;
    (this->fields).maxCorner.y.hiddenValue = value.y.hiddenValue;
    (this->fields).maxCorner.y.fakeValue = value.y.fakeValue;
    (this->fields).maxCorner.y.inited = value.y.inited;
    (this->fields).maxCorner.y.field_0x7 = value.y._7_1_;
    OVar7.fakeValue = value.z.fakeValue;
    OVar7.currentCryptoKey = value.z.currentCryptoKey;
    OVar7.hiddenValue = value.z.hiddenValue;
    OVar7.inited = value.z.inited;
    OVar7._7_1_ = value.z._7_1_;
    (this->fields).maxCorner.z = OVar7;
    if ((TypeInfo__ObscuredIntVector->_1).cctor_finished_or_no_cctor == 0) {
      value.x._0_4_ = TypeInfo__ObscuredIntVector;
      func_?();
    }
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    pVVar8 = ObscuredIntVector::ObscuredIntVector_ToVector3
                        (&VStack_3,&(this->fields).maxCorner,(MethodInfo *)0x0);
    fVar9 = pVVar8->y;
    fVar10 = pVVar8->z;
    (this->fields)._FMinCorner_k__BackingField.x = pVVar8->x;
    (this->fields)._FMinCorner_k__BackingField.y = fVar9;
    VStack_3.y = (this->fields).center.x;
    VStack_3.z = (this->fields).center.y;
    (this->fields)._FMinCorner_k__BackingField.z = fVar10;
    uVar5 = *(undefined4 *)&(this->fields).minCorner.x;
    uVar11 = *(undefined4 *)&(this->fields).minCorner.x.fakeValue;
    OVar7 = (this->fields).minCorner.x;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      value.y._4_4_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort;
      value.y._0_4_ = &UNK_?;
      func_?();
    }
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    value.x._0_4_ = &UNK_?;
    value.x._4_4_ = uVar5;
    value.y._0_4_ = uVar11;
    uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(OVar7,(MethodInfo *)0x0);
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    value.y._0_4_ = *(undefined4 *)&(this->fields).minCorner.y.fakeValue;
    pOVar13 = &(this->fields).minCorner.y;
    value.x._4_4_ = *(undefined4 *)pOVar13;
    value.x._0_4_ = &UNK_?;
    uVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(*pOVar13,(MethodInfo *)0x0);
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    value.y._0_4_ = *(undefined4 *)&(this->fields).minCorner.z.fakeValue;
    pOVar13 = &(this->fields).minCorner.z;
    value.x._4_4_ = *(undefined4 *)pOVar13;
    value.x._0_4_ = &UNK_?;
    uVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(*pOVar13,(MethodInfo *)0x0);
    value.y._0_4_ = ZEXT24(uVar15);
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    OStack_4 = (ObscuredShort)((ulonglong)OStack_4 & 0xffff000000000000);
    value.x._0_4_ = (uint)uVar12;
    value.x._4_4_ = (uint)uVar14;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&OStack_4,(uint)uVar12,(uint)uVar14,value.y._0_4_,(MethodInfo *)0x0);
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    value.y._0_4_ = *(undefined4 *)&(this->fields).maxCorner.x.fakeValue;
    pOVar16 = &(this->fields).maxCorner;
    value.x._4_4_ = *(undefined4 *)&pOVar16->x;
    value.x._0_4_ = &UNK_?;
    uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(pOVar16->x,(MethodInfo *)0x0);
    uVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1((this->fields).maxCorner.y,(MethodInfo *)0x0);
    uVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1((this->fields).maxCorner.z,(MethodInfo *)0x0);
    value.z.currentCryptoKey = 0;
    value.z.hiddenValue = 0;
    value.z.fakeValue = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&value.z,(uint)uVar12,(uint)uVar14,(uint)uVar15,(MethodInfo *)0x0);
    this_00 = (ConstraintBoxChangedEventArgs *)func_?();
    center.z = (float)&OStack_4;
    center.x = VStack_3.y;
    center.y = VStack_3.z;
    maxCorner.z = value.z.fakeValue;
    maxCorner.x = value.z.currentCryptoKey;
    maxCorner.y = value.z.hiddenValue;
    ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
              (this_00,center,OStack_4._0_6_,maxCorner,(MethodInfo *)0x0);
    uStack17 = (undefined2)((uint)this_00 >> 0x10);
    uStack18 = 0x1046;
    (*(code *)(this->klass->vtable).OnBoxChanged.method)();
  }
  return;
}


/* Void set_MinCorner(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_MinCorner
               (ModelingBoxConstraint *this,ObscuredIntVector value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ConstraintBoxChangedEventArgs);
    func_?(&TypeInfo__ObscuredIntVector);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).minCorner.x.currentCryptoKey;
  uVar2 = (this->fields).minCorner.x.hiddenValue;
  a.x.hiddenValue = uVar2;
  a.x.currentCryptoKey = uVar1;
  VStack_3.x = *(float *)&(this->fields).minCorner.x.fakeValue;
  VStack_3.y = *(float *)&(this->fields).minCorner.y;
  VStack_3.z = *(float *)&(this->fields).minCorner.y.fakeValue;
  OStack_4 = (this->fields).minCorner.z;
  if ((TypeInfo__ObscuredIntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObscuredIntVector);
  }
  uVar5 = (undefined4)(CONCAT26(value.z._6_2_,CONCAT24(value.z.fakeValue,value.z._0_4_)) >> 0x20);
  a.x._4_4_ = VStack_3.x;
  a.y._0_4_ = VStack_3.y;
  a.y._4_4_ = VStack_3.z;
  a.z = OStack_4;
  b.x.fakeValue = value.x.fakeValue;
  b.x.inited = value.x.inited;
  b.x._7_1_ = value.x._7_1_;
  b.x.currentCryptoKey = value.x.currentCryptoKey;
  b.x.hiddenValue = value.x.hiddenValue;
  b.y.currentCryptoKey = value.y.currentCryptoKey;
  b.y.hiddenValue = value.y.hiddenValue;
  b.y.fakeValue = value.y.fakeValue;
  b.y.inited = value.y.inited;
  b.y._7_1_ = value.y._7_1_;
  b.z.currentCryptoKey = value.z.currentCryptoKey;
  b.z.hiddenValue = value.z.hiddenValue;
  b.z.fakeValue = (short)uVar5;
  b.z.inited = (char)((uint)uVar5 >> 0x10);
  b.z._7_1_ = (char)((uint)uVar5 >> 0x18);
  bVar6 = ObscuredIntVector::ObscuredIntVector_op_Inequality(a,b,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    (this->fields).minCorner.x.currentCryptoKey = value.x.currentCryptoKey;
    (this->fields).minCorner.x.hiddenValue = value.x.hiddenValue;
    (this->fields).minCorner.x.fakeValue = value.x.fakeValue;
    (this->fields).minCorner.x.inited = value.x.inited;
    (this->fields).minCorner.x.field_0x7 = value.x._7_1_;
    (this->fields).minCorner.y.currentCryptoKey = value.y.currentCryptoKey;
    (this->fields).minCorner.y.hiddenValue = value.y.hiddenValue;
    (this->fields).minCorner.y.fakeValue = value.y.fakeValue;
    (this->fields).minCorner.y.inited = value.y.inited;
    (this->fields).minCorner.y.field_0x7 = value.y._7_1_;
    OVar7.fakeValue = value.z.fakeValue;
    OVar7.currentCryptoKey = value.z.currentCryptoKey;
    OVar7.hiddenValue = value.z.hiddenValue;
    OVar7.inited = value.z.inited;
    OVar7._7_1_ = value.z._7_1_;
    (this->fields).minCorner.z = OVar7;
    if ((TypeInfo__ObscuredIntVector->_1).cctor_finished_or_no_cctor == 0) {
      value.x._0_4_ = TypeInfo__ObscuredIntVector;
      func_?();
    }
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    pVVar8 = ObscuredIntVector::ObscuredIntVector_ToVector3
                        (&VStack_3,&(this->fields).minCorner,(MethodInfo *)0x0);
    fVar9 = pVVar8->y;
    fVar10 = pVVar8->z;
    (this->fields)._FMinCorner_k__BackingField.x = pVVar8->x;
    (this->fields)._FMinCorner_k__BackingField.y = fVar9;
    VStack_3.y = (this->fields).center.x;
    VStack_3.z = (this->fields).center.y;
    (this->fields)._FMinCorner_k__BackingField.z = fVar10;
    uVar5 = *(undefined4 *)&(this->fields).minCorner.x;
    uVar11 = *(undefined4 *)&(this->fields).minCorner.x.fakeValue;
    OVar7 = (this->fields).minCorner.x;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      value.y._4_4_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort;
      value.y._0_4_ = &UNK_?;
      func_?();
    }
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    value.x._0_4_ = &UNK_?;
    value.x._4_4_ = uVar5;
    value.y._0_4_ = uVar11;
    uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(OVar7,(MethodInfo *)0x0);
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    value.y._0_4_ = *(undefined4 *)&(this->fields).minCorner.y.fakeValue;
    pOVar13 = &(this->fields).minCorner.y;
    value.x._4_4_ = *(undefined4 *)pOVar13;
    value.x._0_4_ = &UNK_?;
    uVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(*pOVar13,(MethodInfo *)0x0);
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    value.y._0_4_ = *(undefined4 *)&(this->fields).minCorner.z.fakeValue;
    pOVar13 = &(this->fields).minCorner.z;
    value.x._4_4_ = *(undefined4 *)pOVar13;
    value.x._0_4_ = &UNK_?;
    uVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(*pOVar13,(MethodInfo *)0x0);
    value.y._0_4_ = ZEXT24(uVar15);
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    OStack_4 = (ObscuredShort)((ulonglong)OStack_4 & 0xffff000000000000);
    value.x._0_4_ = (uint)uVar12;
    value.x._4_4_ = (uint)uVar14;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&OStack_4,(uint)uVar12,(uint)uVar14,value.y._0_4_,(MethodInfo *)0x0);
    value.y.fakeValue = 0;
    value.y.inited = 0;
    value.y._7_1_ = 0;
    value.y._0_4_ = *(undefined4 *)&(this->fields).maxCorner.x.fakeValue;
    pOVar16 = &(this->fields).maxCorner;
    value.x._4_4_ = *(undefined4 *)&pOVar16->x;
    value.x._0_4_ = &UNK_?;
    uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(pOVar16->x,(MethodInfo *)0x0);
    uVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1((this->fields).maxCorner.y,(MethodInfo *)0x0);
    uVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1((this->fields).maxCorner.z,(MethodInfo *)0x0);
    value.z.currentCryptoKey = 0;
    value.z.hiddenValue = 0;
    value.z.fakeValue = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&value.z,(uint)uVar12,(uint)uVar14,(uint)uVar15,(MethodInfo *)0x0);
    this_00 = (ConstraintBoxChangedEventArgs *)func_?();
    center.z = (float)&OStack_4;
    center.x = VStack_3.y;
    center.y = VStack_3.z;
    maxCorner.z = value.z.fakeValue;
    maxCorner.x = value.z.currentCryptoKey;
    maxCorner.y = value.z.hiddenValue;
    ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
              (this_00,center,OStack_4._0_6_,maxCorner,(MethodInfo *)0x0);
    uStack17 = (undefined2)((uint)this_00 >> 0x10);
    uStack18 = 0x1046;
    (*(code *)(this->klass->vtable).OnBoxChanged.method)();
  }
  return;
}

