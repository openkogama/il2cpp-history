
/* Void ChangeBox(IntVector, IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_ChangeBox
               (ModelingBoxConstraint *this,IntVector minCorner,IntVector maxCorner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OVar1.currentCryptoKey = 0;
  OVar1.hiddenValue = 0;
  OVar1.fakeValue = 0;
  OVar1.inited = 0;
  OVar1._7_1_ = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  func_?(&stack0xffffffc0,minCorner._0_4_,minCorner.z,0);
  uVar6 = (uint)uVar3;
  uVar7 = (uint)uVar5;
  (this->fields).minCorner.x.currentCryptoKey = (short)uVar2;
  (this->fields).minCorner.x.hiddenValue = (short)((uint)uVar2 >> 0x10);
  (this->fields).minCorner.x.fakeValue = (short)uVar6;
  (this->fields).minCorner.x.inited = (char)(uVar6 >> 0x10);
  (this->fields).minCorner.x.field_0x7 = (char)(uVar6 >> 0x18);
  (this->fields).minCorner.y.currentCryptoKey = (short)uVar4;
  (this->fields).minCorner.y.hiddenValue = (short)((uint)uVar4 >> 0x10);
  (this->fields).minCorner.y.fakeValue = (short)uVar7;
  (this->fields).minCorner.y.inited = (char)(uVar7 >> 0x10);
  (this->fields).minCorner.y.field_0x7 = (char)(uVar7 >> 0x18);
  (this->fields).minCorner.z = OVar1;
  uVar2 = 0;
  uVar4 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  func_?(&stack0xffffffa8,maxCorner._0_4_,maxCorner.z,0);
  (this->fields).maxCorner.x.currentCryptoKey = (short)uVar2;
  (this->fields).maxCorner.x.hiddenValue = (short)((uint)uVar2 >> 0x10);
  (this->fields).maxCorner.x.fakeValue = (short)uVar4;
  (this->fields).maxCorner.x.inited = (char)((uint)uVar4 >> 0x10);
  (this->fields).maxCorner.x.field_0x7 = (char)((uint)uVar4 >> 0x18);
  (this->fields).maxCorner.y.currentCryptoKey = (short)uVar8;
  (this->fields).maxCorner.y.hiddenValue = (short)((uint)uVar8 >> 0x10);
  (this->fields).maxCorner.y.fakeValue = (short)uVar9;
  (this->fields).maxCorner.y.inited = (char)((uint)uVar9 >> 0x10);
  (this->fields).maxCorner.y.field_0x7 = (char)((uint)uVar9 >> 0x18);
  OVar12.fakeValue = (short)uVar11;
  OVar12.inited = (char)((uint)uVar11 >> 0x10);
  OVar12._7_1_ = (char)((uint)uVar11 >> 0x18);
  OVar12.currentCryptoKey = (short)uVar10;
  OVar12.hiddenValue = (short)((uint)uVar10 >> 0x10);
  (this->fields).maxCorner.z = OVar12;
  puVar13 = (undefined8 *)func_?(&VStack_14,&minCorner,0);
  uVar15 = *puVar13;
  fVar16 = *(float *)(puVar13 + 1);
  (this->fields)._FMinCorner_k__BackingField.x = (float)(int)uVar15;
  (this->fields)._FMinCorner_k__BackingField.y = (float)(int)((ulonglong)uVar15 >> 0x20);
  (this->fields)._FMinCorner_k__BackingField.z = fVar16;
  puVar13 = (undefined8 *)func_?(&VStack_14,&maxCorner,0);
  uStack_17._0_4_ = (this->fields)._FMinCorner_k__BackingField.x;
  uStack_17._4_4_ = (this->fields)._FMinCorner_k__BackingField.y;
  fVar16 = (this->fields)._FMinCorner_k__BackingField.z;
  VStack_18._4_8_ = *puVar13;
  fVar19 = *(float *)(puVar13 + 1);
  (this->fields)._FMaxCorner_k__BackingField.x = VStack_18.y;
  (this->fields)._FMaxCorner_k__BackingField.y = VStack_18.z;
  (this->fields)._FMaxCorner_k__BackingField.z = fVar19;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar16;
  a.x = (float)(undefined4)uStack_17;
  a.y = uStack_17._4_4_;
  b.z._0_2_ = SUB42(fVar19,0);
  b.x = VStack_18.y;
  b.y = VStack_18.z;
  b.z._2_2_ = (short)((uint)fVar19 >> 0x10);
  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&VStack_14,a,b,(MethodInfo *)0x0);
  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                     (&VStack_18,0.5,*pVVar20,(MethodInfo *)0x0);
  iVar21 = maxCorner.z;
  uVar8 = maxCorner._0_4_;
  uVar2 = minCorner._0_4_;
  VStack_14.y = pVVar20->x;
  VStack_14.z = pVVar20->y;
  fVar16 = pVVar20->z;
  (this->fields).center.x = VStack_14.y;
  (this->fields).center.y = VStack_14.z;
  (this->fields).center.z = fVar16;
  iStack_22 = minCorner.z;
  uStack_17._4_4_ = fVar16;
  this_00 = (ConstraintBoxChangedEventArgs *)func_?();
  uVar9 = maxCorner._0_4_;
  uVar4 = minCorner._0_4_;
  center.z = uStack_17._4_4_;
  center.x = VStack_14.y;
  center.y = VStack_14.z;
  minCorner_00.z = iStack_22;
  minCorner.x = (int16_t)uVar2;
  minCorner.y = SUB42(uVar2,2);
  minCorner_00.x = minCorner.x;
  minCorner_00.y = minCorner.y;
  maxCorner_00.z = iVar21;
  maxCorner.x = (int16_t)uVar8;
  maxCorner.y = SUB42(uVar8,2);
  maxCorner_00.x = maxCorner.x;
  maxCorner_00.y = maxCorner.y;
  minCorner._0_4_ = uVar4;
  maxCorner._0_4_ = uVar9;
  VStack_18.z = (float)this_00;
  ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
            (this_00,center,minCorner_00,maxCorner_00,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnBoxChanged.method)();
  return;
}


/* Void OnBoxChanged(ConstraintBoxChangedEventArgs) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_OnBoxChanged
               (ModelingBoxConstraint *this,ConstraintBoxChangedEventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).BoxChanged;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<ConstraintBoxChangedEventArgs>__Invoke_System__Object__ConstraintBoxChangedEventArgs_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ModelingBoxConstraint(IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint__ctor
               (ModelingBoxConstraint *this,IntVector size,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  uVar3 = (undefined2)((uint)unaff_EDI >> 0x10);
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
  IVar5.z = size.x;
  IVar5._0_4_ = &stack0xfffffff4;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_UnaryNegation
                    (IVar5,(MethodInfo *)CONCAT22(in_stack_4,size.z));
  IVar6.z = (int16_t)*IVar5._0_4_;
  IVar6._0_4_ = &stack0xfffffff4;
  IVar5 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
                    (IVar6,CONCAT22(uVar3,*(undefined2 *)(IVar5._0_4_ + 1)),(MethodInfo *)0x2);
  IVar5 = *IVar5._0_4_;
  iV.z = size.x;
  iV._0_4_ = &stack0xfffffff4;
  IVar6 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
                    (iV,CONCAT22(uVar1,size.z),(MethodInfo *)0x2);
  pIVar7 = IVar6._0_4_;
  uVar8 = pIVar7->x;
  uVar9 = pIVar7->y;
  ModelingBoxConstraint__ctor_1(this,IVar5,*pIVar7,(MethodInfo *)0x0);
  uVar10 = (int)(short)uVar8 & 0x80000001;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
  }
  if (uVar10 != 1) {
    uVar10 = (int)(short)uVar9 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    if (uVar10 != 1) {
      uVar10 = (int)size.z & 0x80000001;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
      }
      if (uVar10 != 1) {
        return;
      }
    }
  }
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  return;
}


/* ModelingBoxConstraint(IntVector, IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
               (ModelingBoxConstraint *this,IntVector minCorner,IntVector maxCorner,
               MethodInfo *method)

{
  uVar1 = (undefined2)unaff_EDI;
  uVar2 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__ModelingBoxConstraint->static_fields->__f__am_cache0 ==
      (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ModelingBoxConstraint___BoxChanged_m__0_System__Object__ConstraintBoxChangedEventArgs_
               ,
               MethodInfo__System__EventHandler<ConstraintBoxChangedEventArgs>__EventHandler_System__Object__void__
              );
    TypeInfo__ModelingBoxConstraint->static_fields->__f__am_cache0 =
         (EventHandler_1_ConstraintBoxChangedEventArgs_ *)this_00;
  }
  if (this != (ModelingBoxConstraint *)0x0) {
    (this->fields).BoxChanged = TypeInfo__ModelingBoxConstraint->static_fields->__f__am_cache0;
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this,0.0,(MethodInfo *)CONCAT22(uVar2,uVar1));
    IStack_3.x = maxCorner.x;
    IStack_3.y = maxCorner.y;
    IStack_3.z = maxCorner.z;
    IStack_4.x = minCorner.x;
    IStack_4.y = minCorner.y;
    IStack_4.z = minCorner.z;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    OVar5.currentCryptoKey = 0;
    OVar5.hiddenValue = 0;
    OVar5.fakeValue = 0;
    OVar5.inited = 0;
    OVar5._7_1_ = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    func_?(&stack0xffffffb0,IStack_4._0_4_,IStack_4.z,0);
    uVar10 = (uint)uVar9;
    (this->fields).minCorner.x.currentCryptoKey = (short)uVar6;
    (this->fields).minCorner.x.hiddenValue = (short)((uint)uVar6 >> 0x10);
    (this->fields).minCorner.x.fakeValue = (short)uVar7;
    (this->fields).minCorner.x.inited = (char)((uint)uVar7 >> 0x10);
    (this->fields).minCorner.x.field_0x7 = (char)((uint)uVar7 >> 0x18);
    (this->fields).minCorner.y.currentCryptoKey = (short)uVar8;
    (this->fields).minCorner.y.hiddenValue = (short)((uint)uVar8 >> 0x10);
    (this->fields).minCorner.y.fakeValue = (short)uVar10;
    (this->fields).minCorner.y.inited = (char)(uVar10 >> 0x10);
    (this->fields).minCorner.y.field_0x7 = (char)(uVar10 >> 0x18);
    (this->fields).minCorner.z = OVar5;
    puStack_11 = (undefined *)0x0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar12 = 0;
    uVar13 = 0;
    func_?(&puStack_11,IStack_3._0_4_,IStack_3.z,0);
    *(undefined **)&(this->fields).maxCorner.x = puStack_11;
    (this->fields).maxCorner.x.fakeValue = (short)uVar6;
    (this->fields).maxCorner.x.inited = (char)((uint)uVar6 >> 0x10);
    (this->fields).maxCorner.x.field_0x7 = (char)((uint)uVar6 >> 0x18);
    (this->fields).maxCorner.y.currentCryptoKey = (short)uVar7;
    (this->fields).maxCorner.y.hiddenValue = (short)((uint)uVar7 >> 0x10);
    (this->fields).maxCorner.y.fakeValue = (short)uVar8;
    (this->fields).maxCorner.y.inited = (char)((uint)uVar8 >> 0x10);
    (this->fields).maxCorner.y.field_0x7 = (char)((uint)uVar8 >> 0x18);
    OVar14.fakeValue = (short)uVar13;
    OVar14.inited = (char)((uint)uVar13 >> 0x10);
    OVar14._7_1_ = (char)((uint)uVar13 >> 0x18);
    OVar14.currentCryptoKey = (short)uVar12;
    OVar14.hiddenValue = (short)((uint)uVar12 >> 0x10);
    (this->fields).maxCorner.z = OVar14;
    puVar15 = (undefined8 *)func_?(&stack0xffffffc8,&IStack_4,0);
    uVar16 = *puVar15;
    fVar17 = *(float *)(puVar15 + 1);
    (this->fields)._FMinCorner_k__BackingField.x = (float)(int)uVar16;
    (this->fields)._FMinCorner_k__BackingField.y = (float)(int)((ulonglong)uVar16 >> 0x20);
    (this->fields)._FMinCorner_k__BackingField.z = fVar17;
    puVar15 = (undefined8 *)func_?(&stack0xffffffc8,&IStack_3,0);
    uStack_18._0_4_ = (this->fields)._FMinCorner_k__BackingField.x;
    uStack_18._4_4_ = (this->fields)._FMinCorner_k__BackingField.y;
    fVar17 = (this->fields)._FMinCorner_k__BackingField.z;
    VStack_19._4_8_ = *puVar15;
    fVar20 = *(float *)(puVar15 + 1);
    (this->fields)._FMaxCorner_k__BackingField.x = VStack_19.y;
    (this->fields)._FMaxCorner_k__BackingField.y = VStack_19.z;
    (this->fields)._FMaxCorner_k__BackingField.z = fVar20;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar17;
    a.x = (float)(undefined4)uStack_18;
    a.y = uStack_18._4_4_;
    b.z._0_2_ = SUB42(fVar20,0);
    b.x = VStack_19.y;
    b.y = VStack_19.z;
    b.z._2_2_ = (short)((uint)fVar20 >> 0x10);
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc8,a,b,(MethodInfo *)0x0);
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                        (&VStack_19,0.5,*pVVar21,(MethodInfo *)0x0);
    uVar8 = IStack_4._0_4_;
    OVar5.fakeValue = IStack_3.z;
    uVar6 = IStack_3._0_4_;
    uVar22 = pVVar21->x;
    uVar23 = pVVar21->y;
    center.y = (float)uVar23;
    center.x = (float)uVar22;
    fVar17 = pVVar21->z;
    (this->fields).center.x = (float)uVar22;
    (this->fields).center.y = (float)uVar23;
    (this->fields).center.z = fVar17;
    iStack_24 = IStack_4.z;
    uStack_18._4_4_ = fVar17;
    this_01 = (ConstraintBoxChangedEventArgs *)func_?();
    uVar12 = IStack_4._0_4_;
    uVar7 = IStack_3._0_4_;
    IStack_3.x = (int16_t)uVar6;
    IStack_3.y = SUB42(uVar6,2);
    OVar5.currentCryptoKey = IStack_3.x;
    OVar5.hiddenValue = IStack_3.y;
    center.z = uStack_18._4_4_;
    minCorner_00.z = iStack_24;
    IStack_4.x = (int16_t)uVar8;
    IStack_4.y = SUB42(uVar8,2);
    minCorner_00.x = IStack_4.x;
    minCorner_00.y = IStack_4.y;
    IStack_3._0_4_ = uVar7;
    IStack_4._0_4_ = uVar12;
    VStack_19.z = (float)this_01;
    ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
              (this_01,center,minCorner_00,CONCAT24(OVar5.fakeValue,uVar25),(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnBoxChanged.method)();
    return;
  }
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void add_BoxChanged(EventHandler`1[ConstraintBoxChangedEventArgs]) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_add_BoxChanged
               (ModelingBoxConstraint *this,EventHandler_1_ConstraintBoxChangedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BoxChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ConstraintBoxChangedEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Vector3 get_FMinCorner() */

Vector3 * Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_get_FMinCorner
                    (Vector3 *__return_storage_ptr__,ModelingBoxConstraint *this,MethodInfo *method)

{
  fVar1 = (this->fields)._FMinCorner_k__BackingField.y;
  fVar2 = (this->fields)._FMinCorner_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._FMinCorner_k__BackingField.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* ObscuredIntVector get_MaxCorner() */

ObscuredIntVector *
Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_get_MaxCorner
          (ObscuredIntVector *__return_storage_ptr__,ModelingBoxConstraint *this,MethodInfo *method)

{
  iVar1 = (this->fields).maxCorner.x.hiddenValue;
  iVar2 = (this->fields).maxCorner.x.fakeValue;
  bVar3 = (this->fields).maxCorner.x.inited;
  uVar4 = (this->fields).maxCorner.x.field_0x7;
  iVar5 = (this->fields).maxCorner.y.currentCryptoKey;
  iVar6 = (this->fields).maxCorner.y.hiddenValue;
  iVar7 = (this->fields).maxCorner.y.fakeValue;
  bVar8 = (this->fields).maxCorner.y.inited;
  uVar9 = (this->fields).maxCorner.y.field_0x7;
  (__return_storage_ptr__->x).currentCryptoKey = (this->fields).maxCorner.x.currentCryptoKey;
  (__return_storage_ptr__->x).hiddenValue = iVar1;
  (__return_storage_ptr__->x).fakeValue = iVar2;
  (__return_storage_ptr__->x).inited = bVar3;
  (__return_storage_ptr__->x).field_0x7 = uVar4;
  (__return_storage_ptr__->y).currentCryptoKey = iVar5;
  (__return_storage_ptr__->y).hiddenValue = iVar6;
  (__return_storage_ptr__->y).fakeValue = iVar7;
  (__return_storage_ptr__->y).inited = bVar8;
  (__return_storage_ptr__->y).field_0x7 = uVar9;
  __return_storage_ptr__->z = (this->fields).maxCorner.z;
  return __return_storage_ptr__;
}


/* ObscuredIntVector get_MinCorner() */

ObscuredIntVector *
Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_get_MinCorner
          (ObscuredIntVector *__return_storage_ptr__,ModelingBoxConstraint *this,MethodInfo *method)

{
  iVar1 = (this->fields).minCorner.x.hiddenValue;
  iVar2 = (this->fields).minCorner.x.fakeValue;
  bVar3 = (this->fields).minCorner.x.inited;
  uVar4 = (this->fields).minCorner.x.field_0x7;
  iVar5 = (this->fields).minCorner.y.currentCryptoKey;
  iVar6 = (this->fields).minCorner.y.hiddenValue;
  iVar7 = (this->fields).minCorner.y.fakeValue;
  bVar8 = (this->fields).minCorner.y.inited;
  uVar9 = (this->fields).minCorner.y.field_0x7;
  (__return_storage_ptr__->x).currentCryptoKey = (this->fields).minCorner.x.currentCryptoKey;
  (__return_storage_ptr__->x).hiddenValue = iVar1;
  (__return_storage_ptr__->x).fakeValue = iVar2;
  (__return_storage_ptr__->x).inited = bVar3;
  (__return_storage_ptr__->x).field_0x7 = uVar4;
  (__return_storage_ptr__->y).currentCryptoKey = iVar5;
  (__return_storage_ptr__->y).hiddenValue = iVar6;
  (__return_storage_ptr__->y).fakeValue = iVar7;
  (__return_storage_ptr__->y).inited = bVar8;
  (__return_storage_ptr__->y).field_0x7 = uVar9;
  __return_storage_ptr__->z = (this->fields).minCorner.z;
  return __return_storage_ptr__;
}


/* Void remove_BoxChanged(EventHandler`1[ConstraintBoxChangedEventArgs]) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_remove_BoxChanged
               (ModelingBoxConstraint *this,EventHandler_1_ConstraintBoxChangedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BoxChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ConstraintBoxChangedEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)func_?(ppEVar1,pDVar3,source)
    ;
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_Center
               (ModelingBoxConstraint *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).center.x;
  uVar2 = (this->fields).center.y;
  fVar3 = (this->fields).center.z;
  uVar4 = (undefined2)uVar2;
  uVar5 = (undefined2)((uint)uVar2 >> 0x10);
  puStack_6 = (undefined *)uVar1;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  lhs.y._0_2_ = uVar4;
  lhs.x = (float)puStack_6;
  lhs.y._2_2_ = uVar5;
  lhs.z = fVar3;
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                    (lhs,value,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    (this->fields).center.x = value.x;
    (this->fields).center.y = value.y;
    (this->fields).center.z = value.z;
    value_00 = (this->fields).minCorner.x;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?();
    }
    uVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(value_00,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).minCorner.y,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).minCorner.z,(MethodInfo *)0x0);
    iVar9 = 0;
    puStack_6 = (undefined *)(uint)uVar8;
    func_?(&puStack_6);
    uVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).maxCorner.x,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxCorner.y,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxCorner.z,(MethodInfo *)0x0);
    puStack10 = &stack0xfffffff4;
    uVar11 = 0;
    iVar12 = 0;
    puStack13 = (undefined *)(uint)uVar8;
    func_?();
    this_00 = (ConstraintBoxChangedEventArgs *)func_?();
    center.z = (float)&UNK_?;
    center.x = value.x;
    center.y = value.y;
    minCorner.z = iVar9;
    minCorner._0_4_ = puStack_6;
    maxCorner.z = iVar12;
    maxCorner.x = (short)uVar11;
    maxCorner.y = (short)((uint)uVar11 >> 0x10);
    ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
              (this_00,center,minCorner,maxCorner,(MethodInfo *)0x0);
    uStack14 = (undefined2)((uint)this_00 >> 0x10);
    uStack15 = 0x1037;
    (*(code *)(this->klass->vtable).OnBoxChanged.method)();
  }
  return;
}


/* Void set_FMaxCorner(Vector3) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_FMaxCorner
               (ModelingBoxConstraint *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._FMaxCorner_k__BackingField.x = value.x;
  (this->fields)._FMaxCorner_k__BackingField.y = value.y;
  (this->fields)._FMaxCorner_k__BackingField.z = value.z;
  return;
}


/* Void set_FMinCorner(Vector3) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_FMinCorner
               (ModelingBoxConstraint *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._FMinCorner_k__BackingField.x = value.x;
  (this->fields)._FMinCorner_k__BackingField.y = value.y;
  (this->fields)._FMinCorner_k__BackingField.z = value.z;
  return;
}


/* Void set_MaxCorner(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_MaxCorner
               (ModelingBoxConstraint *this,ObscuredIntVector value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OVar1 = (this->fields).maxCorner.x;
  uVar2._0_2_ = (this->fields).maxCorner.y.currentCryptoKey;
  uVar2._2_2_ = (this->fields).maxCorner.y.hiddenValue;
  uVar3._0_2_ = (this->fields).maxCorner.y.fakeValue;
  uVar3._2_1_ = (this->fields).maxCorner.y.inited;
  uVar3._3_1_ = (this->fields).maxCorner.y.field_0x7;
  OVar4 = (this->fields).maxCorner.z;
  if ((((uint)(TypeInfo__ObscuredIntVector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ObscuredIntVector->_1).cctor_started == 0)) {
    func_?(TypeInfo__ObscuredIntVector);
  }
  uVar5 = (undefined4)(CONCAT26(value.z._6_2_,CONCAT24(value.z.fakeValue,value.z._0_4_)) >> 0x20);
  a.y.currentCryptoKey = (short)uVar2;
  a.y.hiddenValue = (short)((uint)uVar2 >> 0x10);
  a.x = OVar1;
  a.y.fakeValue = (short)uVar3;
  a.y.inited = (char)((uint)uVar3 >> 0x10);
  a.y._7_1_ = (char)((uint)uVar3 >> 0x18);
  a.z = OVar4;
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
  uVar2 = value.x._0_4_;
  if (bVar6 != 0) {
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    uVar3 = value.x._0_4_;
    value.x.currentCryptoKey = (int16_t)uVar2;
    value.x.hiddenValue = SUB42(uVar2,2);
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
    OVar4.fakeValue = value.z.fakeValue;
    OVar4.currentCryptoKey = value.z.currentCryptoKey;
    OVar4.hiddenValue = value.z.hiddenValue;
    OVar4.inited = value.z.inited;
    OVar4._7_1_ = value.z._7_1_;
    (this->fields).maxCorner.z = OVar4;
    value.x._0_4_ = uVar3;
    puVar7 = (undefined8 *)func_?();
    uVar8 = *puVar7;
    fVar9 = *(float *)(puVar7 + 1);
    (this->fields)._FMinCorner_k__BackingField.x = (float)(int)uVar8;
    (this->fields)._FMinCorner_k__BackingField.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    (this->fields)._FMinCorner_k__BackingField.z = fVar9;
    OVar4 = (this->fields).minCorner.x;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      value.x._0_4_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort;
      func_?();
    }
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1(OVar4,(MethodInfo *)0x0);
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).minCorner.y,(MethodInfo *)0x0);
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).minCorner.z,(MethodInfo *)0x0);
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    func_?();
    OVar4 = (this->fields).maxCorner.x;
    uVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(OVar4,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxCorner.y,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxCorner.z,(MethodInfo *)0x0);
    pOStack12 = &value.z;
    value.z.currentCryptoKey = 0;
    value.z.hiddenValue = 0;
    value.z.fakeValue = 0;
    puStack13 = (undefined *)(uint)uVar11;
    func_?();
    pCStack14 = TypeInfo__ConstraintBoxChangedEventArgs;
    this_00 = (ConstraintBoxChangedEventArgs *)func_?();
    center.z._0_2_ = iVar10;
    center._0_8_ = OVar4;
    center.z._2_2_ = 0;
    maxCorner.z = value.z.fakeValue;
    maxCorner.x = value.z.currentCryptoKey;
    maxCorner.y = value.z.hiddenValue;
    ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
              (this_00,center,(IntVector)0x0,maxCorner,(MethodInfo *)0x0);
    uStack15 = (undefined2)((uint)this_00 >> 0x10);
    uStack16 = 0x1037;
    (*(code *)(this->klass->vtable).OnBoxChanged.method)();
  }
  return;
}


/* Void set_MinCorner(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_MinCorner
               (ModelingBoxConstraint *this,ObscuredIntVector value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OVar1 = (this->fields).minCorner.x;
  uVar2._0_2_ = (this->fields).minCorner.y.currentCryptoKey;
  uVar2._2_2_ = (this->fields).minCorner.y.hiddenValue;
  uVar3._0_2_ = (this->fields).minCorner.y.fakeValue;
  uVar3._2_1_ = (this->fields).minCorner.y.inited;
  uVar3._3_1_ = (this->fields).minCorner.y.field_0x7;
  pMVar4 = &this->fields;
  OVar5 = (this->fields).minCorner.z;
  if ((((uint)(TypeInfo__ObscuredIntVector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ObscuredIntVector->_1).cctor_started == 0)) {
    func_?(TypeInfo__ObscuredIntVector);
  }
  uVar6 = (undefined4)(CONCAT26(value.z._6_2_,CONCAT24(value.z.fakeValue,value.z._0_4_)) >> 0x20);
  a.y.currentCryptoKey = (short)uVar2;
  a.y.hiddenValue = (short)((uint)uVar2 >> 0x10);
  a.x = OVar1;
  a.y.fakeValue = (short)uVar3;
  a.y.inited = (char)((uint)uVar3 >> 0x10);
  a.y._7_1_ = (char)((uint)uVar3 >> 0x18);
  a.z = OVar5;
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
  b.z.fakeValue = (short)uVar6;
  b.z.inited = (char)((uint)uVar6 >> 0x10);
  b.z._7_1_ = (char)((uint)uVar6 >> 0x18);
  bVar7 = ObscuredIntVector::ObscuredIntVector_op_Inequality(a,b,(MethodInfo *)0x0);
  uVar2 = value.x._0_4_;
  if (bVar7 != 0) {
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    uVar3 = value.x._0_4_;
    value.x.currentCryptoKey = (int16_t)uVar2;
    value.x.hiddenValue = SUB42(uVar2,2);
    (pMVar4->minCorner).x.currentCryptoKey = value.x.currentCryptoKey;
    (pMVar4->minCorner).x.hiddenValue = value.x.hiddenValue;
    (this->fields).minCorner.x.fakeValue = value.x.fakeValue;
    (this->fields).minCorner.x.inited = value.x.inited;
    (this->fields).minCorner.x.field_0x7 = value.x._7_1_;
    (this->fields).minCorner.y.currentCryptoKey = value.y.currentCryptoKey;
    (this->fields).minCorner.y.hiddenValue = value.y.hiddenValue;
    (this->fields).minCorner.y.fakeValue = value.y.fakeValue;
    (this->fields).minCorner.y.inited = value.y.inited;
    (this->fields).minCorner.y.field_0x7 = value.y._7_1_;
    OVar5.fakeValue = value.z.fakeValue;
    OVar5.currentCryptoKey = value.z.currentCryptoKey;
    OVar5.hiddenValue = value.z.hiddenValue;
    OVar5.inited = value.z.inited;
    OVar5._7_1_ = value.z._7_1_;
    (this->fields).minCorner.z = OVar5;
    value.x._0_4_ = uVar3;
    puVar8 = (undefined8 *)func_?();
    uVar9 = *puVar8;
    fVar10 = *(float *)(puVar8 + 1);
    (this->fields)._FMinCorner_k__BackingField.x = (float)(int)uVar9;
    (this->fields)._FMinCorner_k__BackingField.y = (float)(int)((ulonglong)uVar9 >> 0x20);
    (this->fields)._FMinCorner_k__BackingField.z = fVar10;
    OVar5 = (pMVar4->minCorner).x;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      value.x._0_4_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort;
      func_?();
    }
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1(OVar5,(MethodInfo *)0x0);
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).minCorner.y,(MethodInfo *)0x0);
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    iVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).minCorner.z,(MethodInfo *)0x0);
    value.x.currentCryptoKey = 0;
    value.x.hiddenValue = 0;
    func_?();
    OVar5 = (this->fields).maxCorner.x;
    uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(OVar5,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxCorner.y,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxCorner.z,(MethodInfo *)0x0);
    pOStack13 = &value.z;
    value.z.currentCryptoKey = 0;
    value.z.hiddenValue = 0;
    value.z.fakeValue = 0;
    puStack14 = (undefined *)(uint)uVar12;
    func_?();
    pCStack15 = TypeInfo__ConstraintBoxChangedEventArgs;
    this_00 = (ConstraintBoxChangedEventArgs *)func_?();
    center.z._0_2_ = iVar11;
    center._0_8_ = OVar5;
    center.z._2_2_ = 0;
    maxCorner.z = value.z.fakeValue;
    maxCorner.x = value.z.currentCryptoKey;
    maxCorner.y = value.z.hiddenValue;
    ConstraintBoxChangedEventArgs::ConstraintBoxChangedEventArgs__ctor
              (this_00,center,(IntVector)0x0,maxCorner,(MethodInfo *)0x0);
    uStack16 = (undefined2)((uint)this_00 >> 0x10);
    uStack17 = 0x1037;
    (*(code *)(this->klass->vtable).OnBoxChanged.method)();
  }
  return;
}

