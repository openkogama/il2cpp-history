
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_Equals
               (ObscuredIntVector *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if (obj->klass == (Object__Class *)TypeInfo__ObscuredIntVector) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((obj->klass->_0).element_class == (TypeInfo__ObscuredIntVector->_0).element_class) {
        puVar2 = (undefined4 *)func_?(obj);
        bVar3 = func_?(&this->y,*puVar2,puVar2[1],puVar2[2],puVar2[3],
                                *(undefined8 *)(puVar2 + 4),0);
        return bVar3;
      }
      pOVar4 = TypeInfo__ObscuredIntVector;
      func_?();
      pcVar5 = (code *)swi(3);
      bVar3 = (*pcVar5)(pOVar4);
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_Equals_1
               (ObscuredIntVector *this,ObscuredIntVector iV,MethodInfo *method)

{
  bVar1 = func_?(&this->y,iV.x._0_4_,iV.x._4_4_,iV.y._0_4_,iV.y._4_4_,iV.z,method);
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_GetHashCode
                  (ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = this->y;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->z,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this[1].x,(MethodInfo *)0x0);
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
  func_?(__return_storage_ptr__,((iVar2 % iVar1) * chunkSize) / iVar1,iVar2 / iVar1,
                  index / iVar1,0);
  return __return_storage_ptr__;
}


/* Int32 ObscuredIntVectorToIndex(ObscuredIntVector, Int32) */

int32_t Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_ObscuredIntVectorToIndex
                  (ObscuredIntVector ObscuredIntVector,int32_t chunkSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = this->y;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->y,(MethodInfo *)0x0);
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->z,(MethodInfo *)0x0);
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this->z,(MethodInfo *)0x0);
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this[1].x,(MethodInfo *)0x0);
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(this[1].x,(MethodInfo *)0x0);
  return (int)iVar6 * (int)iVar5 + (int)iVar4 * (int)iVar3 + (int)iVar2 * (int)iVar1;
}


/* String ToString() */

String * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_ToString
                   (ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,6);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_x__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_x__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_x__;
    uStack_3._0_2_ = (this->y).currentCryptoKey;
    uStack_3._2_2_ = (this->y).hiddenValue;
    uStack_4._0_2_ = (this->y).fakeValue;
    uStack_4._2_1_ = (this->y).inited;
    uStack_4._3_1_ = (this->y).field_0x7;
    pOVar5 = (Object *)
             func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort,&uStack_3)
    ;
    if ((pOVar5 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar5,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    if ((StringLiteral__y__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__y__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__y__;
    uStack_6._0_2_ = (this->z).currentCryptoKey;
    uStack_6._2_2_ = (this->z).hiddenValue;
    uStack_7._0_2_ = (this->z).fakeValue;
    uStack_7._2_1_ = (this->z).inited;
    uStack_7._3_1_ = (this->z).field_0x7;
    pOVar5 = (Object *)
             func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort,&uStack_6
                            );
    if ((pOVar5 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar5,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    if ((StringLiteral__z__ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__z__,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)StringLiteral__z__;
    uStack_8._0_2_ = this[1].x.currentCryptoKey;
    uStack_8._2_2_ = this[1].x.hiddenValue;
    uStack_9._0_2_ = this[1].x.fakeValue;
    uStack_9._2_1_ = this[1].x.inited;
    uStack_9._3_1_ = this[1].x.field_0x7;
    pOVar5 = (Object *)
             func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort,&uStack_8
                            );
    if ((pOVar5 == (Object *)0x0) ||
       (iVar2 = func_?(pOVar5,(args->klass->_0).element_class), iVar2 != 0)) {
      if (5 < args->max_length) {
        args->vector[5] = pOVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar10 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        return pSVar10;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar11 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar11)();
  return pSVar10;
}


/* Vector3 ToVector3() */

Vector3 * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_ToVector3
                    (Vector3 *__return_storage_ptr__,ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = this->y;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(this->z,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(this[1].x,(MethodInfo *)0x0);
  fStack_2 = (float)(int)iVar1;
  uStack_3 = CONCAT44(&uStack_3,&UNK_?);
  func_?();
  uRam_? = uStack_3;
  fRam00000008 = fStack_2;
  return (Vector3 *)0x0;
}


/* ObscuredIntVector() */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  OStack_5.currentCryptoKey = 0;
  OStack_5.hiddenValue = 0;
  OStack_5.fakeValue = 0;
  OStack_5.inited = 0;
  OStack_5._7_1_ = 0;
  func_?(&uStack_1,1,1,1,0);
  pOVar6 = TypeInfo__ObscuredIntVector->static_fields;
  (pOVar6->One).x.currentCryptoKey = (undefined2)uStack_1;
  (pOVar6->One).x.hiddenValue = uStack_1._2_2_;
  (pOVar6->One).x.fakeValue = (undefined2)uStack_2;
  (pOVar6->One).x.inited = uStack_2._2_1_;
  (pOVar6->One).x.field_0x7 = uStack_2._3_1_;
  (pOVar6->One).y.currentCryptoKey = (undefined2)uStack_3;
  (pOVar6->One).y.hiddenValue = uStack_3._2_2_;
  (pOVar6->One).y.fakeValue = (undefined2)uStack_4;
  (pOVar6->One).y.inited = uStack_4._2_1_;
  (pOVar6->One).y.field_0x7 = uStack_4._3_1_;
  (pOVar6->One).z = OStack_5;
  return;
}


/* ObscuredIntVector(Int16, Int16, Int16) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor
               (ObscuredIntVector *this,int16_t x,int16_t y,int16_t z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(x,(MethodInfo *)0x0);
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(y,(MethodInfo *)0x0);
  this->z = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(z,(MethodInfo *)0x0);
  this[1].x = OVar1;
  return;
}


/* ObscuredIntVector(Int32, Int32, Int32) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor_1
               (ObscuredIntVector *this,int32_t x,int32_t y,int32_t z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)x,(MethodInfo *)0x0);
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)y,(MethodInfo *)0x0);
  this->z = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)z,(MethodInfo *)0x0);
  this[1].x = OVar1;
  return;
}


/* ObscuredIntVector(IntVector) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor_2
               (ObscuredIntVector *this,IntVector intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(intVector.x,(MethodInfo *)0x0);
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(intVector.y,(MethodInfo *)0x0);
  this->z = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(intVector.z,(MethodInfo *)0x0);
  this[1].x = OVar1;
  return;
}


/* ObscuredIntVector(Single, Single, Single) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor_3
               (ObscuredIntVector *this,float x,float y,float z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)(int)x,(MethodInfo *)0x0);
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)(int)y,(MethodInfo *)0x0);
  this->z = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit((int16_t)(int)z,(MethodInfo *)0x0);
  this[1].x = OVar1;
  return;
}


/* Int16 get_Item(Int32) */

int16_t Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_get_Item
                  (ObscuredIntVector *this,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    uVar1._0_2_ = (this->y).currentCryptoKey;
    uVar1._2_2_ = (this->y).hiddenValue;
    uVar2._0_2_ = (this->y).fakeValue;
    uVar2._2_1_ = (this->y).inited;
    uVar2._3_1_ = (this->y).field_0x7;
  }
  else if (key == 1) {
    uVar1._0_2_ = (this->z).currentCryptoKey;
    uVar1._2_2_ = (this->z).hiddenValue;
    uVar2._0_2_ = (this->z).fakeValue;
    uVar2._2_1_ = (this->z).inited;
    uVar2._3_1_ = (this->z).field_0x7;
  }
  else {
    if (key != 2) {
      this_00 = (IndexOutOfRangeException *)
                func_?(TypeInfo__System__IndexOutOfRangeException);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (this_00,(MethodInfo *)0x0);
      func_?(this_00,0,MethodInfo__ObscuredIntVector__get_Item_int_);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    uVar1._0_2_ = this[1].x.currentCryptoKey;
    uVar1._2_2_ = this[1].x.hiddenValue;
    uVar2._0_2_ = this[1].x.fakeValue;
    uVar2._2_1_ = this[1].x.inited;
    uVar2._3_1_ = this[1].x.field_0x7;
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i1.x,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i2.x,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i1.y,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i2.y,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i1.z,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
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
  func_?();
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Division(ObscuredIntVector, Int32) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Division
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector iV,int32_t i,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
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
  func_?(__return_storage_ptr__,(int)iVar1 / i,(int)iVar2 / i,(int)iVar3 / i,0);
  return __return_storage_ptr__;
}


/* Boolean op_Equality(ObscuredIntVector, ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Equality
               (ObscuredIntVector a,ObscuredIntVector b,MethodInfo *method)

{
  bVar1 = func_?(&a,b.x._0_4_,b.x._4_4_,b.y._0_4_,b.y._4_4_,b.z,0);
  return bVar1;
}


/* Boolean op_Inequality(ObscuredIntVector, ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Inequality
               (ObscuredIntVector a,ObscuredIntVector b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__ObscuredIntVector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ObscuredIntVector->_1).cctor_started == 0)) {
    func_?(TypeInfo__ObscuredIntVector);
  }
  OStack_1.currentCryptoKey = a.x.currentCryptoKey;
  OStack_1.hiddenValue = a.x.hiddenValue;
  OStack_1.fakeValue = a.x.fakeValue;
  OStack_1.inited = a.x.inited;
  OStack_1._7_1_ = a.x._7_1_;
  OStack_2.currentCryptoKey = a.y.currentCryptoKey;
  OStack_2.hiddenValue = a.y.hiddenValue;
  OStack_2.fakeValue = a.y.fakeValue;
  OStack_2.inited = a.y.inited;
  OStack_2._7_1_ = a.y._7_1_;
  OStack_3 = a.z;
  cVar4 = func_?(&OStack_1,b.x._0_4_,b.x._4_4_,b.y._0_4_,b.y._4_4_,b.z,0);
  return cVar4 == '\0';
}


/* ObscuredIntVector op_Multiply(Int32, ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply
          (ObscuredIntVector *__return_storage_ptr__,int32_t i,ObscuredIntVector iV,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  uVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.x,(MethodInfo *)0x0);
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.y,(MethodInfo *)0x0);
  uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.z,(MethodInfo *)0x0);
  uVar4 = i & 0xffff;
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
  func_?(__return_storage_ptr__,uVar4 * uVar1,uVar4 * uVar2,uVar4 * uVar3,0);
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Multiply(ObscuredIntVector, Int32) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply_1
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector iV,int32_t i,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  uVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.x,(MethodInfo *)0x0);
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.y,(MethodInfo *)0x0);
  uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit_1(iV.z,(MethodInfo *)0x0);
  uVar4 = i & 0xffff;
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
  func_?(__return_storage_ptr__,uVar4 * uVar1,uVar4 * uVar2,uVar4 * uVar3,0);
  return __return_storage_ptr__;
}


/* Vector3 op_Multiply(ObscuredIntVector, Vector3) */

Vector3 * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply_2
                    (Vector3 *__return_storage_ptr__,ObscuredIntVector iV,Vector3 vector3,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(iV.x,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(iV.y,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(iV.z,(MethodInfo *)0x0);
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?();
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Subtraction(ObscuredIntVector, ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Subtraction
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector i1,ObscuredIntVector i2,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
  }
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i1.x,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i2.x,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i1.y,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i2.y,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_op_Implicit_1(i1.z,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
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
  func_?();
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_UnaryNegation(ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_UnaryNegation
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector i1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
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
  func_?(__return_storage_ptr__,-(int)iVar1,-(int)iVar2,-(int)iVar3,0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
    this->y = OVar1;
    return;
  }
  if (key == 1) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
    this->z = OVar1;
    return;
  }
  if (key == 2) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
    this[1].x = OVar1;
    return;
  }
  this_00 = (IndexOutOfRangeException *)func_?(TypeInfo__System__IndexOutOfRangeException);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0,MethodInfo__ObscuredIntVector__set_Item_int__short_);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

