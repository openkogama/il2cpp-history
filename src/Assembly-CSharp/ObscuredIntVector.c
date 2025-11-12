
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_Equals
               (ObscuredIntVector *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if (obj->klass == (Object__Class *)TypeInfo__ObscuredIntVector) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ObscuredIntVector);
      }
      if ((obj->klass->_0).element_class == (TypeInfo__ObscuredIntVector->_0).element_class) {
        OStack_2.x = (ObscuredShort)obj[1].klass;
        OStack_2.y = (ObscuredShort)obj[1].monitor;
        OStack_2.z = (ObscuredShort)obj[2].klass;
        bVar3 = ObscuredIntVector_Equals_1(this,&OStack_2,(MethodInfo *)0x0);
        return bVar3;
      }
      FUN_?(obj);
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_Equals_1
               (ObscuredIntVector *this,ObscuredIntVector *iV,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = this->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  if (iVar2 == iVar3) {
    OVar1 = this->y;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OStackX_8 = OVar1;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_8 = iV->y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    if (iVar2 == iVar3) {
      OVar1 = this->z;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      OStackX_8 = OVar1;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
      OStackX_8 = iV->z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = this->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  return (iVar4 * 1000 + (int)iVar3) * 1000 + (int)iVar2;
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
                  (ObscuredIntVector *ObscuredIntVector,int32_t chunkSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = ObscuredIntVector->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = ObscuredIntVector->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = ObscuredIntVector->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  return (iVar4 * chunkSize + (int)iVar3) * chunkSize + (int)iVar2;
}


/* Int32 SquareMagnitude() */

int32_t Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_SquareMagnitude
                  (ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = this->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  return (int)iVar7 * (int)iVar6 + (int)iVar5 * (int)iVar4 + (int)iVar3 * (int)iVar2;
}


/* String ToString() */

String * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_ToString
                   (ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
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
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
           ObscuredShort_ToString((ObscuredShort *)&stack0x00000018,(MethodInfo *)0x0);
  FUN_?(lVar1,1,pSVar3);
  FUN_?(lVar1,2,StringLiteral__y__);
  pSVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
           ObscuredShort_ToString((ObscuredShort *)&stack0x00000018,(MethodInfo *)0x0);
  FUN_?(lVar1,3,pSVar3);
  FUN_?(lVar1,4,StringLiteral__z__);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
  ObscuredShort_ToString((ObscuredShort *)&stack0x00000018,(MethodInfo *)0x0);
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

Vector3 * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_ToVector3
                    (Vector3 *__return_storage_ptr__,ObscuredIntVector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = this->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = this->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (float)(int)iVar2;
  __return_storage_ptr__->z = (float)(int)iVar4;
  __return_storage_ptr__->y = (float)(int)iVar3;
  return __return_storage_ptr__;
}


/* ObscuredIntVector() */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(1,(MethodInfo *)0x0);
  OVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(1,(MethodInfo *)0x0);
  OVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(1,(MethodInfo *)0x0);
  pOVar4 = (ObscuredShort *)TypeInfo__ObscuredIntVector->static_fields;
  *pOVar4 = OVar1;
  pOVar4[1] = OVar2;
  pOVar4[2] = OVar3;
  return;
}


/* ObscuredIntVector(Int16, Int16, Int16) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor
               (ObscuredIntVector *this,int16_t x,int16_t y,int16_t z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
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
               (ObscuredIntVector *this,IntVector *intVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(intVector->x,(MethodInfo *)0x0);
  iVar2 = intVector->y;
  this->x = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(iVar2,(MethodInfo *)0x0);
  iVar2 = intVector->z;
  this->y = OVar1;
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(iVar2,(MethodInfo *)0x0);
  this->z = OVar1;
  return;
}


/* ObscuredIntVector(Single, Single, Single) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector__ctor_3
               (ObscuredIntVector *this,float x,float y,float z,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    OVar1 = this->x;
  }
  else if (key == 1) {
    OVar1 = this->y;
  }
  else {
    if (key != 2) {
      uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this_00 = (IndexOutOfRangeException *)func_?(uVar2);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (this_00,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__ObscuredIntVector__get_Item_int_);
      FUN_?(this_00,uVar2);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    OVar1 = this->z;
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_20 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0);
  return iVar4;
}


/* ObscuredIntVector op_Addition(ObscuredIntVector, ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Addition
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector *i1,ObscuredIntVector *i2,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = i1->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i2->x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i1->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i2->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i1->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i2->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
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
            (__return_storage_ptr__,iVar3 + iVar2,iVar4 + iVar5,iVar6 + iVar7,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Division(ObscuredIntVector, Int32) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Division
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector *iV,int32_t i,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = iV->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
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
            (__return_storage_ptr__,(int16_t)((int)iVar2 / i),(int16_t)((int)iVar3 / i),
             (int16_t)((int)iVar4 / i),(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Boolean op_Equality(ObscuredIntVector, ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Equality
               (ObscuredIntVector *a,ObscuredIntVector *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_1.x = b->x;
  OStack_1.y = b->y;
  OStack_1.z = b->z;
  bVar2 = ObscuredIntVector_Equals_1(a,&OStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean op_Inequality(ObscuredIntVector, ObscuredIntVector) */

bool Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Inequality
               (ObscuredIntVector *a,ObscuredIntVector *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_1.x.currentCryptoKey = (a->x).currentCryptoKey;
  OStack_1.x.hiddenValue = (a->x).hiddenValue;
  OStack_1.x.fakeValue = (a->x).fakeValue;
  OStack_1.x.inited = (a->x).inited;
  OStack_1.x._7_1_ = (a->x).field_0x7;
  OStack_1.y.currentCryptoKey = (a->y).currentCryptoKey;
  OStack_1.y.hiddenValue = (a->y).hiddenValue;
  OStack_1.y.fakeValue = (a->y).fakeValue;
  OStack_1.y.inited = (a->y).inited;
  OStack_1.y._7_1_ = (a->y).field_0x7;
  OStack_1.z = a->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_2.x = b->x;
  OStack_2.y = b->y;
  OStack_2.z = b->z;
  bVar3 = ObscuredIntVector_Equals_1(&OStack_1,&OStack_2,(MethodInfo *)0x0);
  return bVar3 ^ 1;
}


/* ObscuredIntVector op_Multiply(Int32, ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply
          (ObscuredIntVector *__return_storage_ptr__,int32_t i,ObscuredIntVector *iV,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = iV->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  sVar5 = (short)i;
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
            (__return_storage_ptr__,sVar5 * iVar2,sVar5 * iVar3,sVar5 * iVar4,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Multiply(ObscuredIntVector, Int32) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply_1
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector *iV,int32_t i,
          MethodInfo *method)

{
  sVar1 = (short)i;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar2 = iV->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
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
            (__return_storage_ptr__,sVar1 * iVar3,sVar1 * iVar4,sVar1 * iVar5,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Vector3 op_Multiply(ObscuredIntVector, Vector3) */

Vector3 * Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Multiply_2
                    (Vector3 *__return_storage_ptr__,ObscuredIntVector *iV,Vector3 *vector3,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = iV->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = iV->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  fVar5 = vector3->y;
  __return_storage_ptr__->x = (float)(int)iVar2 * vector3->x;
  __return_storage_ptr__->y = (float)(int)iVar3 * fVar5;
  __return_storage_ptr__->z = (float)(int)iVar4 * vector3->z;
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_Subtraction(ObscuredIntVector, ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_Subtraction
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector *i1,ObscuredIntVector *i2,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = i1->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i2->x;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i1->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i2->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i1->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i2->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
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
            (__return_storage_ptr__,iVar2 - iVar3,iVar4 - iVar5,iVar6 - iVar7,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* ObscuredIntVector op_UnaryNegation(ObscuredIntVector) */

ObscuredIntVector *
Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_op_UnaryNegation
          (ObscuredIntVector *__return_storage_ptr__,ObscuredIntVector *i1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = i1->x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i1->y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_8 = i1->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
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
            (__return_storage_ptr__,-(int)iVar2,-(int)iVar3,-(int)iVar4,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void set_Item(Int32, Int16) */

void Assembly-CSharp.dll::ObscuredIntVector::ObscuredIntVector_set_Item
               (ObscuredIntVector *this,int32_t key,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == 0) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
    this->x = OVar1;
    return;
  }
  if (key == 1) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
    this->y = OVar1;
    return;
  }
  if (key == 2) {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
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
  FUN_?(this_00,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

