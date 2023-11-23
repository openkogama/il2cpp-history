
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_Equals
               (IntVector *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((IntVector__Class *)obj->klass == TypeInfo__MV__WorldObject__IntVector) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      if ((obj->klass->_0).element_class != (TypeInfo__MV__WorldObject__IntVector->_0).element_class
         ) {
        func_?(obj,TypeInfo__MV__WorldObject__IntVector);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      puVar4 = (undefined4 *)func_?(obj);
      if ((this->x == (short)*puVar4) && (this->y == (short)((uint)*puVar4 >> 0x10))) {
        return this->z == *(short *)(puVar4 + 1);
      }
    }
  }
  return 0;
}


/* Boolean Equals(IntVector) */

bool MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_Equals_1
               (IntVector *this,IntVector iV,MethodInfo *method)

{
  if ((this->x == iV.x) && (this->y == iV.y)) {
    return this->z == iV.z;
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_GetHashCode
                  (IntVector *this,MethodInfo *method)

{
  return (this->z * 1000 + (int)this->y) * 1000 + (int)this->x;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                   (IntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int16);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_x__);
    func_?(&StringLiteral__y__);
    func_?(&StringLiteral__z__);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,6);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_x__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_x__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral_x__;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_x__;
    func_?(args->vector,pSVar3);
    uStack_4 = (uint)(ushort)this->x;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int16,&uStack_4);
    if ((pOVar5 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar5,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?(args->vector + 1,pOVar5);
    if ((StringLiteral__y__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__y__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral__y__;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__y__;
    func_?(args->vector + 2,pSVar3);
    uStack_6 = (uint)(ushort)this->y;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int16,&uStack_6);
    if ((pOVar5 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar5,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    func_?(args->vector + 3,pOVar5);
    if ((StringLiteral__z__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__z__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral__z__;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)StringLiteral__z__;
    func_?(args->vector + 4,pSVar3);
    uStack_7 = (uint)(ushort)this->z;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int16,&uStack_7);
    if ((pOVar5 == (Object *)0x0) ||
       (iVar2 = func_?(pOVar5,(args->klass->_0).element_class), iVar2 != 0)) {
      if (5 < args->max_length) {
        args->vector[5] = pOVar5;
        func_?(args->vector + 5,pOVar5);
        pSVar3 = mscorlib.dll::System::String::String_Concat_2(args,(MethodInfo *)0x0);
        return pSVar3;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar8)();
  return pSVar3;
}


/* Vector3 ToVector3() */

Vector3 * MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                    (Vector3 *__return_storage_ptr__,IntVector *this,MethodInfo *method)

{
  sVar1 = this->y;
  __return_storage_ptr__->x = (float)(int)this->x;
  sVar2 = this->z;
  __return_storage_ptr__->y = (float)(int)sVar1;
  __return_storage_ptr__->z = (float)(int)sVar2;
  return __return_storage_ptr__;
}


/* IntVector() */

void MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MV__WorldObject__IntVector->static_fields;
  (pIVar1->One).x = 1;
  (pIVar1->One).y = 1;
  (pIVar1->One).z = 1;
  return;
}


/* IntVector(Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
               (IntVector *this,int32_t x,int32_t y,int32_t z,MethodInfo *method)

{
  this->x = (int16_t)x;
  this->y = (int16_t)y;
  this->z = (int16_t)z;
  return;
}


/* IntVector(Single, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_2
               (IntVector *this,float x,float y,float z,MethodInfo *method)

{
  this->x = (int16_t)(int)x;
  this->y = (int16_t)(int)y;
  this->z = (int16_t)(int)z;
  return;
}


/* Int16 get_Item(Int32) */

int16_t MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                  (IntVector *this,int32_t key,MethodInfo *method)

{
  if (key == 0) {
    return this->x;
  }
  if (key != 1) {
    if (key == 2) {
      return this->z;
    }
    uVar1 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    this_00 = (IndexOutOfRangeException *)func_?(uVar1);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (this_00,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
    func_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  return this->y;
}


/* IntVector op_Addition(IntVector, IntVector) */

IntVector MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                    (IntVector i1,IntVector i2,MethodInfo *method)

{
  IVar1.z = in_stack_2 + in_stack_3;
  *(int16_t *)i1._0_4_ = i2.z + i1.z;
  *(short *)(i1._0_4_ + 2) = IVar1.z;
  *(short *)(i1._0_4_ + 4) = (short)method + i2.x;
  IVar1.x = i1.x;
  IVar1.y = i1.y;
  return IVar1;
}


/* IntVector op_Division(IntVector, Int32) */

IntVector MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
                    (IntVector iV,int32_t i,MethodInfo *method)

{
  *(short *)iV._0_4_ = (short)((int)iV.z / (int)method);
  *(short *)(iV._0_4_ + 2) = (short)((int)in_stack_1 / (int)method);
  *(short *)(iV._0_4_ + 4) = (short)((int)(short)i / (int)method);
  IVar2.z = (int16_t)((int)(short)i % (int)method);
  IVar2.x = iV.x;
  IVar2.y = iV.y;
  return IVar2;
}


/* Boolean op_Equality(IntVector, IntVector) */

bool MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
               (IntVector a,IntVector b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  if ((a.x == b.x) && (a.y == b.y)) {
    return a.z == b.z;
  }
  return 0;
}


/* Boolean op_Inequality(IntVector, IntVector) */

bool MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
               (IntVector a,IntVector b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  if ((a.x == b.x) && (a.y == b.y)) {
    return a.z != b.z;
  }
  return 1;
}


/* IntVector op_Multiply(Int32, IntVector) */

IntVector MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                    (int32_t i,IntVector iV,MethodInfo *method)

{
  *(int16_t *)i = iV.x * iV.z;
  *(short *)(i + 2) = in_stack_1 * iV.x;
  IVar2.z = iV.x * (short)method;
  *(short *)(i + 4) = IVar2.z;
  IVar2._0_4_ = i;
  return IVar2;
}


/* IntVector op_Multiply(IntVector, Int32) */

IntVector MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_1
                    (IntVector iV,int32_t i,MethodInfo *method)

{
  *(short *)iV._0_4_ = (short)method * iV.z;
  *(short *)(iV._0_4_ + 2) = in_stack_1 * (short)method;
  IVar2.z = (short)method * (short)i;
  *(short *)(iV._0_4_ + 4) = IVar2.z;
  IVar2.x = iV.x;
  IVar2.y = iV.y;
  return IVar2;
}


/* Vector3 op_Multiply(IntVector, Vector3) */

Vector3 * MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_2
                    (Vector3 *__return_storage_ptr__,IntVector iV,Vector3 vector3,MethodInfo *method
                    )

{
  __return_storage_ptr__->x = (float)(int)iV.x * vector3.x;
  __return_storage_ptr__->y = (float)(int)iV.y * vector3.y;
  __return_storage_ptr__->z = (float)(int)iV.z * vector3.z;
  return __return_storage_ptr__;
}


/* IntVector op_Subtraction(IntVector, IntVector) */

IntVector MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                    (IntVector i1,IntVector i2,MethodInfo *method)

{
  IVar1.z = in_stack_2 - in_stack_3;
  *(int16_t *)i1._0_4_ = i1.z - i2.z;
  *(short *)(i1._0_4_ + 2) = IVar1.z;
  *(int16_t *)(i1._0_4_ + 4) = i2.x - (short)method;
  IVar1.x = i1.x;
  IVar1.y = i1.y;
  return IVar1;
}


/* IntVector op_UnaryNegation(IntVector) */

IntVector MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_UnaryNegation
                    (IntVector i1,MethodInfo *method)

{
  IVar1.z = -in_stack_2;
  *(int16_t *)i1._0_4_ = -i1.z;
  *(short *)(i1._0_4_ + 2) = IVar1.z;
  *(short *)(i1._0_4_ + 4) = -(short)method;
  IVar1.x = i1.x;
  IVar1.y = i1.y;
  return IVar1;
}


/* Void set_Item(Int32, Int16) */

void MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
               (IntVector *this,int32_t key,int16_t value,MethodInfo *method)

{
  if (key == 0) {
    this->x = value;
    return;
  }
  if (key != 1) {
    if (key == 2) {
      this->z = value;
      return;
    }
    uVar1 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    this_00 = (IndexOutOfRangeException *)func_?(uVar1);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (this_00,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__MV__WorldObject__IntVector__set_Item_int__short_);
    func_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->y = value;
  return;
}

