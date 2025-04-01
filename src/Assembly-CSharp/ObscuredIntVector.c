
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_Equals
               (ObscuredIntVector *this,Object *obj,MethodInfo *method)

{
  code *pcVar1;
  ObscuredIntVector iV;
  bool bVar2;
  Object *pOVar3;
  undefined1 (*pauVar4) [20];
  undefined4 uVar5;
  
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObscuredIntVector);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar3 = (Object *)0x0;
    if (obj->klass == (Object__Class *)TypeInfo__ObscuredIntVector) {
      pOVar3 = obj;
    }
    if (pOVar3 != (Object *)0x0) {
      if ((TypeInfo__ObscuredIntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ObscuredIntVector);
      }
      if ((obj->klass->_0).element_class == (TypeInfo__ObscuredIntVector->_0).element_class) {
        pauVar4 = (undefined1 (*) [20])func_?(obj);
        uVar5 = (undefined4)((ulonglong)*(undefined8 *)(*pauVar4 + 0x10) >> 0x20);
        iV.z.fakeValue = (short)uVar5;
        iV.z.inited = (char)((uint)uVar5 >> 0x10);
        iV.z._7_1_ = (char)((uint)uVar5 >> 0x18);
        iV._0_20_ = *pauVar4;
        bVar2 = ObscuredIntVector_Equals_1(this,iV,(MethodInfo *)0x0);
        return bVar2;
      }
      func_?(obj,TypeInfo__ObscuredIntVector);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_Equals_1
               (ObscuredIntVector *this,ObscuredIntVector iV,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  OVar1 = this->x;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(OVar1,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.x,(MethodInfo *)0x0);
  if (iVar2 == iVar3) {
    OVar1 = this->y;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(OVar1,(MethodInfo *)0x0);
    iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(iV.y,(MethodInfo *)0x0);
    if (iVar2 == iVar3) {
      OVar1 = this->z;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_op_Implicit_1(OVar1,(MethodInfo *)0x0);
      iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_op_Implicit_1((ObscuredShort)0x0,(MethodInfo *)0x0);
      return iVar2 == iVar3;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_GetHashCode
                  (ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  value = this->x;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->y,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->z,(MethodInfo *)0x0);
  return (iVar3 * 1000 + (int)iVar2) * 1000 + (int)iVar1;
}


/* ObscuredIntVector IndexToObscuredIntVector(Int32, Int32) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_IndexToObscuredIntVector
          (ObscuredIntVector *__return_storage_ptr__,int32_t index,int32_t chunkSize,
          MethodInfo *method)

{
  iVar1 = chunkSize * chunkSize;
  (__return_storage_ptr__->x).currentCryptoKey = 0;
  (__return_storage_ptr__->x).hiddenValue = 0;
  (__return_storage_ptr__->x).fakeValue = 0;
  (__return_storage_ptr__->x).inited = 0;
  (__return_storage_ptr__->x).field_0x7 = 0;
  (__return_storage_ptr__->y).currentCryptoKey = 0;
  (__return_storage_ptr__->y).hiddenValue = 0;
  (__return_storage_ptr__->y).fakeValue = 0;
  (__return_storage_ptr__->y).inited = 0;
  (__return_storage_ptr__->y).field_0x7 = 0;
  iVar2 = (index % iVar1) * chunkSize;
  (__return_storage_ptr__->z).currentCryptoKey = 0;
  (__return_storage_ptr__->z).hiddenValue = 0;
  (__return_storage_ptr__->z).fakeValue = 0;
  (__return_storage_ptr__->z).inited = 0;
  (__return_storage_ptr__->z).field_0x7 = 0;
  ObscuredIntVector__ctor
            (__return_storage_ptr__,(int16_t)(((iVar2 % iVar1) * chunkSize) / iVar1),
             (int16_t)(iVar2 / iVar1),(int16_t)(index / iVar1),(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Int32 ObscuredIntVectorToIndex(ObscuredIntVector, Int32) */

int32_t Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_ObscuredIntVectorToIndex
                  (ObscuredIntVector ObscuredIntVector,int32_t chunkSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(ObscuredIntVector.x,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(ObscuredIntVector.y,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(ObscuredIntVector.z,(MethodInfo *)0x0);
  return (iVar3 * chunkSize + (int)iVar2) * chunkSize + (int)iVar1;
}


/* Int32 SquareMagnitude() */

int32_t Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_SquareMagnitude
                  (ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  value = this->x;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->x,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->y,(MethodInfo *)0x0);
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->y,(MethodInfo *)0x0);
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->z,(MethodInfo *)0x0);
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->z,(MethodInfo *)0x0);
  return (int)iVar6 * (int)iVar5 + (int)iVar4 * (int)iVar3 + (int)iVar2 * (int)iVar1;
}


/* String ToString() */

String * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_ToString
                   (ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_x__);
    func_?(&StringLiteral__y__);
    func_?(&StringLiteral__z__);
    cRam_? = '\x01';
  }
  values = (String__Array *)func_?(TypeInfo__System__String,6);
  pSVar1 = StringLiteral_x__;
  if (values == (String__Array *)0x0) {
    func_?();
  }
  else if (values->max_length != 0) {
    values->vector[0] = StringLiteral_x__;
    func_?(values->vector,pSVar1);
    OStack_2.currentCryptoKey = (this->x).currentCryptoKey;
    OStack_2.hiddenValue = (this->x).hiddenValue;
    OStack_2.fakeValue = (this->x).fakeValue;
    OStack_2.inited = (this->x).inited;
    OStack_2._7_1_ = (this->x).field_0x7;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    pSVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_ToString(&OStack_2,(MethodInfo *)0x0);
    if (1 < values->max_length) {
      values->vector[1] = pSVar1;
      func_?(values->vector + 1,pSVar1);
      pSVar1 = StringLiteral__y__;
      if (2 < values->max_length) {
        values->vector[2] = StringLiteral__y__;
        func_?(values->vector + 2,pSVar1);
        OStack_2.currentCryptoKey = (this->y).currentCryptoKey;
        OStack_2.hiddenValue = (this->y).hiddenValue;
        OStack_2.fakeValue = (this->y).fakeValue;
        OStack_2.inited = (this->y).inited;
        OStack_2._7_1_ = (this->y).field_0x7;
        pSVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                 ObscuredShort_ToString(&OStack_2,(MethodInfo *)0x0);
        if (3 < values->max_length) {
          values->vector[3] = pSVar1;
          func_?(values->vector + 3,pSVar1);
          pSVar1 = StringLiteral__z__;
          if (4 < values->max_length) {
            values->vector[4] = StringLiteral__z__;
            func_?(values->vector + 4,pSVar1);
            OStack_2.currentCryptoKey = (this->z).currentCryptoKey;
            OStack_2.hiddenValue = (this->z).hiddenValue;
            OStack_2.fakeValue = (this->z).fakeValue;
            OStack_2.inited = (this->z).inited;
            OStack_2._7_1_ = (this->z).field_0x7;
            pSVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_ToString(&OStack_2,(MethodInfo *)0x0);
            if (5 < values->max_length) {
              values->vector[5] = pSVar1;
              func_?(values->vector + 5,pSVar1);
              pSVar1 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Vector3 ToVector3() */

Vector3 * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_ToVector3
                    (Vector3 *__return_storage_ptr__,ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  value = this->x;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->y,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->z,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (float)(int)iVar1;
  __return_storage_ptr__->y = (float)(int)iVar2;
  __return_storage_ptr__->z = (float)(int)iVar3;
  return __return_storage_ptr__;
}


/* ObscuredIntVector() */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObscuredIntVector);
    cRam_? = '\x01';
  }
  OStack_1.x.currentCryptoKey = 0;
  OStack_1.x.hiddenValue = 0;
  OStack_1.x.fakeValue = 0;
  OStack_1.x.inited = 0;
  OStack_1.x._7_1_ = 0;
  OStack_1.y.currentCryptoKey = 0;
  OStack_1.y.hiddenValue = 0;
  OStack_1.y.fakeValue = 0;
  OStack_1.y.inited = 0;
  OStack_1.y._7_1_ = 0;
  OStack_1.z.currentCryptoKey = 0;
  OStack_1.z.hiddenValue = 0;
  OStack_1.z.fakeValue = 0;
  OStack_1.z.inited = 0;
  OStack_1.z._7_1_ = 0;
  ObscuredIntVector__ctor_1(&OStack_1,1,1,1,(MethodInfo *)0x0);
  pOVar2 = TypeInfo__ObscuredIntVector->static_fields;
  (pOVar2->One).x.currentCryptoKey = OStack_1.x.currentCryptoKey;
  (pOVar2->One).x.hiddenValue = OStack_1.x.hiddenValue;
  (pOVar2->One).x.fakeValue = OStack_1.x.fakeValue;
  (pOVar2->One).x.inited = OStack_1.x.inited;
  (pOVar2->One).x.field_0x7 = OStack_1.x._7_1_;
  (pOVar2->One).y.currentCryptoKey = OStack_1.y.currentCryptoKey;
  (pOVar2->One).y.hiddenValue = OStack_1.y.hiddenValue;
  (pOVar2->One).y.fakeValue = OStack_1.y.fakeValue;
  (pOVar2->One).y.inited = OStack_1.y.inited;
  (pOVar2->One).y.field_0x7 = OStack_1.y._7_1_;
  (pOVar2->One).z = OStack_1.z;
  return;
}


/* ObscuredIntVector(Int16, Int16, Int16) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor
               (ObscuredIntVector *this,int16_t x,int16_t y,int16_t z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(x,(MethodInfo *)0x0);
  this->x = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(y,(MethodInfo *)0x0);
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(z,(MethodInfo *)0x0);
  this->z = OVar1;
  return;
}


/* ObscuredIntVector(Int32, Int32, Int32) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor_1
               (ObscuredIntVector *this,int32_t x,int32_t y,int32_t z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)x,(MethodInfo *)0x0);
  this->x = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)y,(MethodInfo *)0x0);
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)z,(MethodInfo *)0x0);
  this->z = OVar1;
  return;
}


/* ObscuredIntVector(IntVector) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor_2
               (ObscuredIntVector *this,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(intVector.x,(MethodInfo *)0x0);
  this->x = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(intVector.y,(MethodInfo *)0x0);
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(intVector.z,(MethodInfo *)0x0);
  this->z = OVar1;
  return;
}


/* ObscuredIntVector(Single, Single, Single) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor_3
               (ObscuredIntVector *this,float x,float y,float z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)(int)x,(MethodInfo *)0x0);
  this->x = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)(int)y,(MethodInfo *)0x0);
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)(int)z,(MethodInfo *)0x0);
  this->z = OVar1;
  return;
}


/* Int16 get_Item(Int32) */

int16_t Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_get_Item
                  (ObscuredIntVector *this,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if (key == 0) {
    uVar1._0_2_ = (this->x).currentCryptoKey;
    uVar1._2_2_ = (this->x).hiddenValue;
    uVar2._0_2_ = (this->x).fakeValue;
    uVar2._2_1_ = (this->x).inited;
    uVar2._3_1_ = (this->x).field_0x7;
  }
  else if (key == 1) {
    uVar1._0_2_ = (this->y).currentCryptoKey;
    uVar1._2_2_ = (this->y).hiddenValue;
    uVar2._0_2_ = (this->y).fakeValue;
    uVar2._2_1_ = (this->y).inited;
    uVar2._3_1_ = (this->y).field_0x7;
  }
  else {
    if (key != 2) {
      uVar1 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this_00 = (IndexOutOfRangeException *)func_?(uVar1);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (this_00,(MethodInfo *)0x0);
      uVar1 = func_?(&MethodInfo__ObscuredIntVector__get_Item_int_);
      func_?(this_00,uVar1);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    uVar1._0_2_ = (this->z).currentCryptoKey;
    uVar1._2_2_ = (this->z).hiddenValue;
    uVar2._0_2_ = (this->z).fakeValue;
    uVar2._2_1_ = (this->z).inited;
    uVar2._3_1_ = (this->z).field_0x7;
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  value.fakeValue = (short)uVar2;
  value.inited = (char)((uint)uVar2 >> 0x10);
  value._7_1_ = (char)((uint)uVar2 >> 0x18);
  value.currentCryptoKey = (short)uVar1;
  value.hiddenValue = (short)((uint)uVar1 >> 0x10);
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar4;
}


/* ObscuredIntVector op_Addition(ObscuredIntVector, ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Addition
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector i1,ObscuredIntVector i2,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.x,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i2.x,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.y,(MethodInfo *)0x0);
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i2.y,(MethodInfo *)0x0);
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.z,(MethodInfo *)0x0);
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i2.z,(MethodInfo *)0x0);
  (__return_storage_ptr__->x).currentCryptoKey = 0;
  (__return_storage_ptr__->x).hiddenValue = 0;
  (__return_storage_ptr__->x).fakeValue = 0;
  (__return_storage_ptr__->x).inited = 0;
  (__return_storage_ptr__->x).field_0x7 = 0;
  (__return_storage_ptr__->y).currentCryptoKey = 0;
  (__return_storage_ptr__->y).hiddenValue = 0;
  (__return_storage_ptr__->y).fakeValue = 0;
  (__return_storage_ptr__->y).inited = 0;
  (__return_storage_ptr__->y).field_0x7 = 0;
  (__return_storage_ptr__->z).currentCryptoKey = 0;
  (__return_storage_ptr__->z).hiddenValue = 0;
  (__return_storage_ptr__->z).fakeValue = 0;
  (__return_storage_ptr__->z).inited = 0;
  (__return_storage_ptr__->z).field_0x7 = 0;
  ObscuredIntVector__ctor
            (__return_storage_ptr__,iVar1 + iVar2,iVar3 + iVar4,iVar6 + iVar5,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Division(ObscuredIntVector, Int32) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Division
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector iV,int32_t i,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.x,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.y,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.z,(MethodInfo *)0x0);
  (__return_storage_ptr__->x).currentCryptoKey = 0;
  (__return_storage_ptr__->x).hiddenValue = 0;
  (__return_storage_ptr__->x).fakeValue = 0;
  (__return_storage_ptr__->x).inited = 0;
  (__return_storage_ptr__->x).field_0x7 = 0;
  (__return_storage_ptr__->y).currentCryptoKey = 0;
  (__return_storage_ptr__->y).hiddenValue = 0;
  (__return_storage_ptr__->y).fakeValue = 0;
  (__return_storage_ptr__->y).inited = 0;
  (__return_storage_ptr__->y).field_0x7 = 0;
  (__return_storage_ptr__->z).currentCryptoKey = 0;
  (__return_storage_ptr__->z).hiddenValue = 0;
  (__return_storage_ptr__->z).fakeValue = 0;
  (__return_storage_ptr__->z).inited = 0;
  (__return_storage_ptr__->z).field_0x7 = 0;
  ObscuredIntVector__ctor
            (__return_storage_ptr__,(int16_t)((int)iVar1 / i),(int16_t)((int)iVar2 / i),
             (int16_t)((int)iVar3 / i),(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Boolean op_Equality(ObscuredIntVector, ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Equality
               (ObscuredIntVector a,ObscuredIntVector b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObscuredIntVector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ObscuredIntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObscuredIntVector);
  }
  bVar1 = ObscuredIntVector_Equals_1(&a,b,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean op_Inequality(ObscuredIntVector, ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Inequality
               (ObscuredIntVector a,ObscuredIntVector b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObscuredIntVector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ObscuredIntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObscuredIntVector);
  }
  OStack_1.x.currentCryptoKey = a.x.currentCryptoKey;
  OStack_1.x.hiddenValue = a.x.hiddenValue;
  OStack_1.x.fakeValue = a.x.fakeValue;
  OStack_1.x.inited = a.x.inited;
  OStack_1.x._7_1_ = a.x._7_1_;
  OStack_1.y.currentCryptoKey = a.y.currentCryptoKey;
  OStack_1.y.hiddenValue = a.y.hiddenValue;
  OStack_1.y.fakeValue = a.y.fakeValue;
  OStack_1.y.inited = a.y.inited;
  OStack_1.y._7_1_ = a.y._7_1_;
  OStack_1.z = a.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObscuredIntVector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ObscuredIntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObscuredIntVector);
  }
  bVar2 = ObscuredIntVector_Equals_1(&OStack_1,b,(MethodInfo *)0x0);
  return bVar2 == 0;
}


/* ObscuredIntVector op_Multiply(Int32, ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply
          (ObscuredIntVector *__return_storage_ptr__,int32_t i,ObscuredIntVector iV,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.x,(MethodInfo *)0x0);
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.y,(MethodInfo *)0x0);
  uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.z,(MethodInfo *)0x0);
  (__return_storage_ptr__->x).currentCryptoKey = 0;
  (__return_storage_ptr__->x).hiddenValue = 0;
  (__return_storage_ptr__->x).fakeValue = 0;
  (__return_storage_ptr__->x).inited = 0;
  (__return_storage_ptr__->x).field_0x7 = 0;
  (__return_storage_ptr__->y).currentCryptoKey = 0;
  (__return_storage_ptr__->y).hiddenValue = 0;
  (__return_storage_ptr__->y).fakeValue = 0;
  (__return_storage_ptr__->y).inited = 0;
  (__return_storage_ptr__->y).field_0x7 = 0;
  (__return_storage_ptr__->z).currentCryptoKey = 0;
  (__return_storage_ptr__->z).hiddenValue = 0;
  (__return_storage_ptr__->z).fakeValue = 0;
  (__return_storage_ptr__->z).inited = 0;
  (__return_storage_ptr__->z).field_0x7 = 0;
  ObscuredIntVector__ctor
            (__return_storage_ptr__,(short)i * iVar1,(int16_t)((i & 0xffffU) * (uint)uVar2),
             (int16_t)((i & 0xffffU) * (uint)uVar3),(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Multiply(ObscuredIntVector, Int32) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply_1
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector iV,int32_t i,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.x,(MethodInfo *)0x0);
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.y,(MethodInfo *)0x0);
  uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.z,(MethodInfo *)0x0);
  (__return_storage_ptr__->x).currentCryptoKey = 0;
  (__return_storage_ptr__->x).hiddenValue = 0;
  (__return_storage_ptr__->x).fakeValue = 0;
  (__return_storage_ptr__->x).inited = 0;
  (__return_storage_ptr__->x).field_0x7 = 0;
  (__return_storage_ptr__->y).currentCryptoKey = 0;
  (__return_storage_ptr__->y).hiddenValue = 0;
  (__return_storage_ptr__->y).fakeValue = 0;
  (__return_storage_ptr__->y).inited = 0;
  (__return_storage_ptr__->y).field_0x7 = 0;
  (__return_storage_ptr__->z).currentCryptoKey = 0;
  (__return_storage_ptr__->z).hiddenValue = 0;
  (__return_storage_ptr__->z).fakeValue = 0;
  (__return_storage_ptr__->z).inited = 0;
  (__return_storage_ptr__->z).field_0x7 = 0;
  ObscuredIntVector__ctor
            (__return_storage_ptr__,(short)i * iVar1,(int16_t)((i & 0xffffU) * (uint)uVar2),
             (int16_t)((i & 0xffffU) * (uint)uVar3),(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Vector3 op_Multiply(ObscuredIntVector, Vector3) */

Vector3 * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply_2
                    (Vector3 *__return_storage_ptr__,ObscuredIntVector iV,Vector3 vector3,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.x,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.y,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.z,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (float)(int)iVar1 * vector3.x;
  __return_storage_ptr__->y = (float)(int)iVar2 * vector3.y;
  __return_storage_ptr__->z = (float)(int)iVar3 * vector3.z;
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Subtraction(ObscuredIntVector, ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Subtraction
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector i1,ObscuredIntVector i2,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.x,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i2.x,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.y,(MethodInfo *)0x0);
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i2.y,(MethodInfo *)0x0);
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.z,(MethodInfo *)0x0);
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i2.z,(MethodInfo *)0x0);
  (__return_storage_ptr__->x).currentCryptoKey = 0;
  (__return_storage_ptr__->x).hiddenValue = 0;
  (__return_storage_ptr__->x).fakeValue = 0;
  (__return_storage_ptr__->x).inited = 0;
  (__return_storage_ptr__->x).field_0x7 = 0;
  (__return_storage_ptr__->y).currentCryptoKey = 0;
  (__return_storage_ptr__->y).hiddenValue = 0;
  (__return_storage_ptr__->y).fakeValue = 0;
  (__return_storage_ptr__->y).inited = 0;
  (__return_storage_ptr__->y).field_0x7 = 0;
  (__return_storage_ptr__->z).currentCryptoKey = 0;
  (__return_storage_ptr__->z).hiddenValue = 0;
  (__return_storage_ptr__->z).fakeValue = 0;
  (__return_storage_ptr__->z).inited = 0;
  (__return_storage_ptr__->z).field_0x7 = 0;
  ObscuredIntVector__ctor
            (__return_storage_ptr__,iVar1 - iVar2,iVar3 - iVar4,iVar5 - iVar6,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_UnaryNegation(ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_UnaryNegation
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector i1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.x,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.y,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(i1.z,(MethodInfo *)0x0);
  (__return_storage_ptr__->x).currentCryptoKey = 0;
  (__return_storage_ptr__->x).hiddenValue = 0;
  (__return_storage_ptr__->x).fakeValue = 0;
  (__return_storage_ptr__->x).inited = 0;
  (__return_storage_ptr__->x).field_0x7 = 0;
  (__return_storage_ptr__->y).currentCryptoKey = 0;
  (__return_storage_ptr__->y).hiddenValue = 0;
  (__return_storage_ptr__->y).fakeValue = 0;
  (__return_storage_ptr__->y).inited = 0;
  (__return_storage_ptr__->y).field_0x7 = 0;
  (__return_storage_ptr__->z).currentCryptoKey = 0;
  (__return_storage_ptr__->z).hiddenValue = 0;
  (__return_storage_ptr__->z).fakeValue = 0;
  (__return_storage_ptr__->z).inited = 0;
  (__return_storage_ptr__->z).field_0x7 = 0;
  ObscuredIntVector__ctor_1
            (__return_storage_ptr__,-(int)iVar1,-(int)iVar2,-(int)iVar3,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_UnaryPlus(ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_UnaryPlus
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector i1,MethodInfo *method)

{
  (__return_storage_ptr__->x).currentCryptoKey = i1.x.currentCryptoKey;
  (__return_storage_ptr__->x).hiddenValue = i1.x.hiddenValue;
  (__return_storage_ptr__->x).fakeValue = i1.x.fakeValue;
  (__return_storage_ptr__->x).inited = i1.x.inited;
  (__return_storage_ptr__->x).field_0x7 = i1.x._7_1_;
  (__return_storage_ptr__->y).currentCryptoKey = i1.y.currentCryptoKey;
  (__return_storage_ptr__->y).hiddenValue = i1.y.hiddenValue;
  (__return_storage_ptr__->y).fakeValue = i1.y.fakeValue;
  (__return_storage_ptr__->y).inited = i1.y.inited;
  (__return_storage_ptr__->y).field_0x7 = i1.y._7_1_;
  __return_storage_ptr__->z = i1.z;
  return __return_storage_ptr__;
}


/* Void set_Item(Int32, Int16) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_set_Item
               (ObscuredIntVector *this,int32_t key,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
    this->x = OVar1;
    return;
  }
  if (key == 1) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
    this->y = OVar1;
    return;
  }
  if (key == 2) {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
    this->z = OVar1;
    return;
  }
  uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar2);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar2 = func_?(&MethodInfo__ObscuredIntVector__set_Item_int__short_);
  func_?(this_00,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

