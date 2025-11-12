
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_Equals
               (IntVector *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if ((IntVector__Class *)obj->klass == TypeInfo__MV__WorldObject__IntVector) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MV__WorldObject__IntVector);
      }
      if ((obj->klass->_0).element_class != (TypeInfo__MV__WorldObject__IntVector->_0).element_class
         ) {
        FUN_?(obj);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if ((this->x == (short)*(undefined4 *)&obj[1].klass) &&
         (sStackX_12 = (short)((uint)*(undefined4 *)&obj[1].klass >> 0x10), this->y == sStackX_12))
      {
        return this->z == *(short *)((longlong)&obj[1].klass + 4);
      }
    }
  }
  return 0;
}


/* Boolean Equals(IntVector) */

bool MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_Equals_1
               (IntVector *this,IntVector *iV,MethodInfo *method)

{
  if ((this->x == iV->x) && (this->y == iV->y)) {
    return this->z == iV->z;
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
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__y__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__z__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__String);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  FUN_?(lVar1,0,StringLiteral_x__);
  pSVar3 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)this,(MethodInfo *)0x0);
  FUN_?(lVar1,1,pSVar3);
  FUN_?(lVar1,2,StringLiteral__y__);
  pSVar3 = mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&this->y,(MethodInfo *)0x0);
  FUN_?(lVar1,3,pSVar3);
  FUN_?(lVar1,4,StringLiteral__z__);
  mscorlib.dll::System::Int16::Int16_ToString((Int16 *)&this->z,(MethodInfo *)0x0);
  FUN_?(lVar1,5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (lVar1 == 0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar4);
    pSVar3 = (String *)func_?(&StringLiteral_values);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar3,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__String__Concat_System__String____);
    FUN_?(this_00,uVar4);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if (*(int *)(lVar1 + 0x18) < 2) {
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      return (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    if (*(String **)(lVar1 + 0x20) != (String *)0x0) {
      return *(String **)(lVar1 + 0x20);
    }
  }
  else {
    plVar5 = (longlong *)(lVar1 + 0x20);
    values = (String__Array *)0x0;
    pSVar6 = values;
    pSVar7 = values;
    while (uVar8 = (uint)pSVar6, (int)uVar8 < (int)*(uint *)(lVar1 + 0x18)) {
      if (*(uint *)(lVar1 + 0x18) <= uVar8) goto code_?;
      if (*plVar5 != 0) {
        pSVar7 = (String__Array *)
                  ((longlong)pSVar7->vector + (longlong)*(int *)(*plVar5 + 0x10) + -0x20);
      }
      plVar5 = plVar5 + 1;
      pSVar6 = (String__Array *)(ulonglong)(uVar8 + 1);
    }
    if (0x7fffffff < (longlong)pSVar7) {
      uVar4 = func_?(&TypeInfo__System__OutOfMemoryException);
      this_02 = (OutOfMemoryException *)func_?(uVar4);
      mscorlib.dll::System::OutOfMemoryException::OutOfMemoryException__ctor
                (this_02,(MethodInfo *)0x0);
      uVar4 = func_?(&MethodInfo__System__String__Concat_System__String____);
      FUN_?(this_02,uVar4);
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    iVar9 = (int)pSVar7;
    if (iVar9 != 0) {
      pSVar3 = (String *)FUN_?((ulonglong)pSVar7 & 0xffffffff);
      plVar5 = (longlong *)(lVar1 + 0x20);
      pSVar6 = values;
      pSVar7 = values;
code_?:
      do {
        iVar10 = (int)pSVar6;
        uVar8 = (uint)pSVar7;
        if (*(int *)(lVar1 + 0x18) <= (int)uVar8) {
code_?:
          if (iVar10 == iVar9) {
            return pSVar3;
          }
          lVar1 = FUN_?(lVar1);
          pSVar11 = TypeInfo__System__String;
          if ((lVar1 != 0) &&
             (values = (String__Array *)FUN_?(lVar1), values == (String__Array *)0x0)) {
            FUN_?(lVar1,pSVar11);
            pcVar2 = (code *)swi(3);
            pSVar3 = (String *)(*pcVar2)();
            return pSVar3;
          }
          pSVar3 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          return pSVar3;
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar8) goto code_?;
        lVar12 = *plVar5;
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
          iVar13 = *(int *)(lVar12 + 0x10);
          if (iVar9 - iVar10 < iVar13) {
            iVar10 = -1;
            goto code_?;
          }
          if (pSVar3 == (String *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            pSVar3 = (String *)(*pcVar2)();
            return pSVar3;
          }
          if ((pSVar3->fields)._stringLength - iVar10 < iVar13) {
            uVar4 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this_01 = (IndexOutOfRangeException *)func_?(uVar4);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                      (this_01,(MethodInfo *)0x0);
            uVar4 = func_?(&
                                        MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                       );
            FUN_?(this_01,uVar4);
            pcVar2 = (code *)swi(3);
            pSVar3 = (String *)(*pcVar2)();
            return pSVar3;
          }
          src = (uint8_t *)(lVar12 + 0x14);
          dest = &(pSVar3->fields)._firstChar + iVar10;
          uVar14 = (ulonglong)(uint)(iVar13 * 2);
          if ((uVar14 <= (ulonglong)((longlong)dest - (longlong)src)) &&
             (uVar14 <= (ulonglong)((longlong)src - (longlong)dest))) {
            mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                      ((uint8_t *)dest,src,iVar13 * 2,(MethodInfo *)0x0);
            pSVar6 = (String__Array *)(ulonglong)(uint)(iVar10 + iVar13);
            pSVar7 = (String__Array *)(ulonglong)(uVar8 + 1);
            plVar5 = plVar5 + 1;
            goto code_?;
          }
          FUN_?(dest,src,uVar14);
          pSVar6 = (String__Array *)(ulonglong)(uint)(iVar10 + iVar13);
        }
        pSVar7 = (String__Array *)(ulonglong)(uVar8 + 1);
        plVar5 = plVar5 + 1;
      } while( true );
    }
  }
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* Vector3 ToVector3() */

Vector3 * MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToVector3
                    (Vector3 *__return_storage_ptr__,IntVector *this,MethodInfo *method)

{
  sVar1 = this->y;
  sVar2 = this->z;
  __return_storage_ptr__->x = (float)(int)this->x;
  __return_storage_ptr__->y = (float)(int)sVar1;
  __return_storage_ptr__->z = (float)(int)sVar2;
  return __return_storage_ptr__;
}


/* IntVector() */

void MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MV__WorldObject__IntVector->static_fields;
  (pIVar1->One).x = 1;
  (pIVar1->One).y = 1;
  (pIVar1->One).z = 1;
  pIVar1 = TypeInfo__MV__WorldObject__IntVector->static_fields;
  (pIVar1->Zero).x = 0;
  (pIVar1->Zero).y = 0;
  (pIVar1->Zero).z = 0;
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
    FUN_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  return this->y;
}


/* IntVector op_Addition(IntVector, IntVector) */

IntVector *
MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
          (IntVector *__return_storage_ptr__,IntVector *i1,IntVector *i2,MethodInfo *method)

{
  __return_storage_ptr__->x = i1->x + i2->x;
  __return_storage_ptr__->y = i1->y + i2->y;
  __return_storage_ptr__->z = i1->z + i2->z;
  return __return_storage_ptr__;
}


/* IntVector op_Division(IntVector, Int32) */

IntVector *
MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Division
          (IntVector *__return_storage_ptr__,IntVector *iV,int32_t i,MethodInfo *method)

{
  __return_storage_ptr__->x = (int16_t)((int)iV->x / i);
  __return_storage_ptr__->y = (int16_t)((int)iV->y / i);
  __return_storage_ptr__->z = (int16_t)((int)iV->z / i);
  return __return_storage_ptr__;
}


/* Boolean op_Equality(IntVector, IntVector) */

bool MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
               (IntVector *a,IntVector *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = b->x;
  uVar2 = b->y;
  if ((a->x == uVar1) && (a->y == uVar2)) {
    return a->z == b->z;
  }
  return 0;
}


/* Boolean op_Inequality(IntVector, IntVector) */

bool MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
               (IntVector *a,IntVector *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = a->x;
  uVar2 = a->y;
  sVar3 = a->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((uVar1 == b->x) && (uVar4 = b->y, uVar2 == uVar4)) {
    return sVar3 != b->z;
  }
  return 1;
}


/* IntVector op_Multiply(Int32, IntVector) */

IntVector *
MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
          (IntVector *__return_storage_ptr__,int32_t i,IntVector *iV,MethodInfo *method)

{
  sVar1 = (short)i;
  __return_storage_ptr__->x = iV->x * sVar1;
  sVar2 = iV->z;
  __return_storage_ptr__->y = iV->y * sVar1;
  __return_storage_ptr__->z = sVar2 * sVar1;
  return __return_storage_ptr__;
}


/* IntVector op_Multiply(IntVector, Int32) */

IntVector *
MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_1
          (IntVector *__return_storage_ptr__,IntVector *iV,int32_t i,MethodInfo *method)

{
  sVar1 = (short)i;
  __return_storage_ptr__->x = iV->x * sVar1;
  sVar2 = iV->z;
  __return_storage_ptr__->y = iV->y * sVar1;
  __return_storage_ptr__->z = sVar2 * sVar1;
  return __return_storage_ptr__;
}


/* Vector3 op_Multiply(IntVector, Vector3) */

Vector3 * MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_2
                    (Vector3 *__return_storage_ptr__,IntVector *iV,Vector3 *vector3,
                    MethodInfo *method)

{
  sVar1 = iV->y;
  sVar2 = iV->z;
  __return_storage_ptr__->x = (float)(int)iV->x * vector3->x;
  __return_storage_ptr__->y = (float)(int)sVar1 * vector3->y;
  __return_storage_ptr__->z = (float)(int)sVar2 * vector3->z;
  return __return_storage_ptr__;
}


/* IntVector op_Subtraction(IntVector, IntVector) */

IntVector *
MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
          (IntVector *__return_storage_ptr__,IntVector *i1,IntVector *i2,MethodInfo *method)

{
  __return_storage_ptr__->x = i1->x - i2->x;
  __return_storage_ptr__->y = i1->y - i2->y;
  __return_storage_ptr__->z = i1->z - i2->z;
  return __return_storage_ptr__;
}


/* IntVector op_UnaryNegation(IntVector) */

IntVector *
MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_UnaryNegation
          (IntVector *__return_storage_ptr__,IntVector *i1,MethodInfo *method)

{
  __return_storage_ptr__->x = -i1->x;
  __return_storage_ptr__->y = -i1->y;
  __return_storage_ptr__->z = -i1->z;
  return __return_storage_ptr__;
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
    FUN_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->y = value;
  return;
}

