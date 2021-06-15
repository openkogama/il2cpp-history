
/* Void ApplyNewCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_ApplyNewCryptoKey(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  b = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality(pSVar1,b,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?();
    }
    pBVar3 = ObscuredString_InternalEncrypt(pSVar1,(MethodInfo *)0x0);
    (this->fields).hiddenValue = pBVar3;
    (this->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  }
  return;
}


/* Boolean ArraysEquals(Byte[], Byte[]) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_ArraysEquals(Byte__Array *a1,Byte__Array *a2,MethodInfo *method)

{
  if (a1 != a2) {
    if (((a1 == (Byte__Array *)0x0) || (a2 == (Byte__Array *)0x0)) ||
       (a1->max_length != a2->max_length)) {
      return 0;
    }
    for (iVar1 = 0; iVar1 < (int)a1->max_length; iVar1 = iVar1 + 1) {
      cVar2 = func_?(iVar1);
      cVar3 = func_?(iVar1);
      if (cVar2 != cVar3) {
        return 0;
      }
    }
  }
  return 1;
}


/* String EncryptDecrypt(String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_EncryptDecrypt(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pSVar1 = ObscuredString_EncryptDecrypt_1(value,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String EncryptDecrypt(String, String) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_EncryptDecrypt_1(String *value,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    return TypeInfo__System__String->static_fields->Empty;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  }
  if ((key != (String *)0x0) &&
     (mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
      Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)key,(MethodInfo *)0x0),
     value != (String *)0x0)) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
    puVar3 = &UNK_?;
    pIVar4 = pIVar2;
    val = (Char__Array *)func_?(TypeInfo__System__Char);
    index = 0;
    if (0 < (int)pIVar2) {
      puVar5 = val->vector;
      do {
        uVar6 = mscorlib.dll::System::String::String_get_Chars(value,index,(MethodInfo *)0x0);
        uVar7 = mscorlib.dll::System::String::String_get_Chars
                          (key,(int)index % (int)pIVar4,(MethodInfo *)0x0);
        if (val == (Char__Array *)0x0) goto code_?;
        if (val->max_length <= index) {
          uVar8 = func_?(0,0);
          func_?(uVar8);
          goto code_?;
        }
        index = index + 1;
        *puVar5 = uVar7 ^ uVar6;
        puVar5 = puVar5 + 1;
      } while ((int)index < (int)puVar3);
    }
    pSVar9 = mscorlib.dll::System::String::String_CreateString_6
                       ((String *)0x0,val,(MethodInfo *)0x0);
    return pSVar9;
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar10)();
  return pSVar9;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals(ObscuredString *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = (Object *)0x0;
    if (obj->klass == (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString
       ) {
      pOVar1 = obj;
    }
    if (pOVar1 != (Object *)0x0) {
      this_00 = (ObscuredString *)0x0;
      if (obj->klass ==
          (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
        this_00 = (ObscuredString *)obj;
      }
      if (this_00 == (ObscuredString *)0x0) {
        func_?(obj,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar4 = (this_00->fields).currentCryptoKey;
      pSVar5 = (this->fields).currentCryptoKey;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality(pSVar5,pSVar4,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pSVar4 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
        pSVar5 = ObscuredString_InternalDecrypt(this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = mscorlib.dll::System::String::String_Equals(pSVar4,pSVar5,(MethodInfo *)0x0);
        return bVar3;
      }
      a1 = (this->fields).hiddenValue;
      a2 = (this_00->fields).hiddenValue;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      bVar3 = ObscuredString_ArraysEquals(a1,a2,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return 0;
}


/* Boolean Equals(ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals_1(ObscuredString *this,ObscuredString *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (ObscuredString *)0x0) {
    pSVar1 = (value->fields).currentCryptoKey;
    pSVar2 = (this->fields).currentCryptoKey;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality(pSVar2,pSVar1,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
      pSVar2 = ObscuredString_InternalDecrypt(value,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = mscorlib.dll::System::String::String_Equals(pSVar1,pSVar2,(MethodInfo *)0x0);
      return bVar3;
    }
    a1 = (this->fields).hiddenValue;
    a2 = (value->fields).hiddenValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    bVar3 = ObscuredString_ArraysEquals(a1,a2,(MethodInfo *)0x0);
    return bVar3;
  }
  return 0;
}


/* Boolean Equals(ObscuredString, StringComparison) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_Equals_2
               (ObscuredString *this,ObscuredString *value,StringComparison__Enum comparisonType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (ObscuredString *)0x0) {
    a = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    b = ObscuredString_InternalDecrypt(value,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_Equals_3(a,b,comparisonType,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


/* Byte[] GetBytes(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_GetBytes(String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (str != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0);
    pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,(int)pIVar1 * 2);
    src = mscorlib.dll::System::String::String_ToCharArray(str,(MethodInfo *)0x0);
    if (pBVar2 != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)pBVar2,0,pBVar2->max_length,(MethodInfo *)0x0);
      return pBVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar3)();
  return pBVar2;
}


/* String GetEncrypted() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_GetEncrypted(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).currentCryptoKey;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  b = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality(pSVar1,b,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?();
    }
    pBVar3 = ObscuredString_InternalEncrypt(pSVar1,(MethodInfo *)0x0);
    (this->fields).hiddenValue = pBVar3;
    (this->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  }
  pBVar3 = (this->fields).hiddenValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = ObscuredString_GetString(pBVar3,(MethodInfo *)0x0);
  return pSVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
        ObscuredString_GetHashCode(ObscuredString *this,MethodInfo *method)

{
  pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    iVar2 = (*(code *)(pSVar1->klass->vtable).GetHashCode.method)(pSVar1);
    return iVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* String GetString(Byte[]) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_GetString(Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bytes != (Byte__Array *)0x0) {
    val = (Char__Array *)func_?(TypeInfo__System__Char,(int)bytes->max_length / 2);
    mscorlib.dll::System::Buffer::Buffer_BlockCopy
              ((Array *)bytes,0,(Array *)val,0,bytes->max_length,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_CreateString_6
                       ((String *)0x0,val,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String InternalDecrypt() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_InternalDecrypt(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    (this->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pBVar1 = ObscuredString_InternalEncrypt
                       (TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    (this->fields).hiddenValue = pBVar1;
    (this->fields).fakeValue = TypeInfo__System__String->static_fields->Empty;
    (this->fields).inited = 1;
  }
  pSVar2 = (this->fields).currentCryptoKey;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
  }
  pBVar1 = (this->fields).hiddenValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pSVar4 = ObscuredString_GetString(pBVar1,(MethodInfo *)0x0);
  pSVar2 = ObscuredString_EncryptDecrypt_1(pSVar4,pSVar2,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar4 = (this->fields).fakeValue;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pSVar4 = (this->fields).fakeValue;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = mscorlib.dll::System::String::String_op_Inequality(pSVar2,pSVar4,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if (cRam_? == '\0') {
          pIStack5 = (Il2CppMethodPointer)_UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pOStack6 =
             TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
        if (pOStack6 == (ObscuredCheatingDetector *)0x0) {
          pIStack5 = (Il2CppMethodPointer)0x0;
          func_?();
          pcVar7 = (code *)swi(3);
          pSVar2 = (String *)(*pcVar7)();
          return pSVar2;
        }
        pIStack5 = (pOStack6->klass->vtable).StartDetectionAutomatically.methodPtr;
        (*(code *)(pOStack6->klass->vtable).OnCheatingDetected.method)();
      }
    }
  }
  return pSVar2;
}


/* Byte[] InternalEncrypt(String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_InternalEncrypt(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  key = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  ObscuredString_EncryptDecrypt_1(value,key,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (in_stack_1 != (Collection_1_VoxelHit_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(in_stack_1,(MethodInfo *)0x0);
    pBVar3 = (Byte__Array *)func_?(TypeInfo__System__Byte,(int)pIVar2 * 2);
    src = mscorlib.dll::System::String::String_ToCharArray
                    ((String *)in_stack_1,(MethodInfo *)0x0);
    if (pBVar3 != (Byte__Array *)0x0) {
      mscorlib.dll::System::Buffer::Buffer_BlockCopy
                ((Array *)src,0,(Array *)pBVar3,0,pBVar3->max_length,(MethodInfo *)0x0);
      return pBVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar4)();
  return pBVar3;
}


/* Byte[] InternalEncrypt(String, String) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_InternalEncrypt_1(String *value,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  str = ObscuredString_EncryptDecrypt_1(value,key,(MethodInfo *)0x0);
  pBVar1 = ObscuredString_GetBytes(str,(MethodInfo *)0x0);
  return pBVar1;
}


/* Void RandomizeCryptoKey() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_RandomizeCryptoKey(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
            (-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  key = (String *)func_?(&stack0xfffffff8,0);
  (this->fields).currentCryptoKey = key;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = ObscuredString_EncryptDecrypt_1(pSVar1,key,(MethodInfo *)0x0);
  pBVar2 = ObscuredString_GetBytes(pSVar1,(MethodInfo *)0x0);
  (this->fields).hiddenValue = pBVar2;
  return;
}


/* Void SetEncrypted(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_SetEncrypted(ObscuredString *this,String *encrypted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).inited = 1;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pBVar1 = ObscuredString_GetBytes(encrypted,(MethodInfo *)0x0);
  (this->fields).hiddenValue = pBVar1;
  bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar3 = ObscuredString_InternalDecrypt(this,(MethodInfo *)0x0);
    (this->fields).fakeValue = pSVar3;
  }
  return;
}


/* Void SetNewCryptoKey(String) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_SetNewCryptoKey(String *newKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey = newKey
    ;
    return;
  }
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey = newKey;
  return;
}


/* String ToString() */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_ToString(ObscuredString *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).inited == 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    (this->fields).currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pBVar1 = ObscuredString_InternalEncrypt
                       (TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    (this->fields).hiddenValue = pBVar1;
    (this->fields).fakeValue = TypeInfo__System__String->static_fields->Empty;
    (this->fields).inited = 1;
  }
  pSVar2 = (this->fields).currentCryptoKey;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey
    ;
  }
  pBVar1 = (this->fields).hiddenValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pSVar4 = ObscuredString_GetString(pBVar1,(MethodInfo *)0x0);
  pSVar2 = ObscuredString_EncryptDecrypt_1(pSVar4,pSVar2,(MethodInfo *)0x0);
  bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                    ((MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar4 = (this->fields).fakeValue;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pSVar4 = (this->fields).fakeValue;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = mscorlib.dll::System::String::String_op_Inequality(pSVar2,pSVar4,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if (cRam_? == '\0') {
          pIStack5 = (Il2CppMethodPointer)_UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pOStack6 =
             TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
        if (pOStack6 == (ObscuredCheatingDetector *)0x0) {
          pIStack5 = (Il2CppMethodPointer)0x0;
          func_?();
          pcVar7 = (code *)swi(3);
          pSVar2 = (String *)(*pcVar7)();
          return pSVar2;
        }
        pIStack5 = (pOStack6->klass->vtable).StartDetectionAutomatically.methodPtr;
        (*(code *)(pOStack6->klass->vtable).OnCheatingDetected.method)();
      }
    }
  }
  return pSVar2;
}


/* ObscuredString() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if ((((uint)(
              TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_started == 0)) {
    func_?(
                   TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
  }
  iStack_1 = Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::CryptoKeyGenerator::
             CryptoKeyGenerator_GenerateKey(0,9999,(MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&iStack_1,0);
  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey = pSVar2;
  return;
}


/* ObscuredString(Byte[]) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString__ctor_1(ObscuredString *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  (this->fields).currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
  (this->fields).hiddenValue = value;
  (this->fields).fakeValue = (String *)0x0;
  (this->fields).inited = 1;
  return;
}


/* Int32 get_Length() */

int32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
        ObscuredString_get_Length(ObscuredString *this,MethodInfo *method)

{
  pBVar1 = (this->fields).hiddenValue;
  if (pBVar1 != (Byte__Array *)0x0) {
    return (int)pBVar1->max_length / 2;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean op_Equality(ObscuredString, ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_op_Equality(ObscuredString *a,ObscuredString *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (a == b) {
    return 1;
  }
  if ((a == (ObscuredString *)0x0) || (b == (ObscuredString *)0x0)) {
    return 0;
  }
  pSVar1 = (b->fields).currentCryptoKey;
  pSVar2 = (a->fields).currentCryptoKey;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar3 = mscorlib.dll::System::String::String_op_Equality(pSVar2,pSVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pSVar1 = ObscuredString_InternalDecrypt(a,(MethodInfo *)0x0);
    pSVar2 = ObscuredString_InternalDecrypt(b,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::String::String_Equals(pSVar1,pSVar2,(MethodInfo *)0x0);
    return bVar3;
  }
  a1 = (a->fields).hiddenValue;
  a2 = (b->fields).hiddenValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  bVar3 = ObscuredString_ArraysEquals(a1,a2,(MethodInfo *)0x0);
  return bVar3;
}


/* ObscuredString op_Implicit(String) */

ObscuredString *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
ObscuredString_op_Implicit(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (String *)0x0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pBVar1 = ObscuredString_InternalEncrypt(value,(MethodInfo *)0x0);
    this = (ScaleAnimationBase *)
           func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,unaff_EDI);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    (this->fields)._._._._.m_CachedPtr =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
    (this->fields).state = (int32_t)pBVar1;
    (this->fields).originalScale.x = 0.0;
    *(undefined1 *)&(this->fields).originalScale.y = 1;
    bVar2 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      (this->fields).originalScale.x = (float)value;
    }
    return (ObscuredString *)this;
  }
  return (ObscuredString *)0x0;
}


/* String op_Implicit(ObscuredString) */

String * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
         ObscuredString_op_Implicit_1(ObscuredString *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (ObscuredString *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?,unaff_EBP);
      cRam_? = '\x01';
    }
    if ((value->fields).inited == 0) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      (value->fields).currentCryptoKey =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->cryptoKey;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pBVar1 = ObscuredString_InternalEncrypt
                         (TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
      (value->fields).hiddenValue = pBVar1;
      (value->fields).fakeValue = TypeInfo__System__String->static_fields->Empty;
      (value->fields).inited = 1;
    }
    pSVar2 = (value->fields).currentCryptoKey;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      pSVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->static_fields->
               cryptoKey;
    }
    pBVar1 = (value->fields).hiddenValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pSVar4 = ObscuredString_GetString(pBVar1,(MethodInfo *)0x0);
    pSVar2 = ObscuredString_EncryptDecrypt_1(pSVar4,pSVar2,(MethodInfo *)0x0);
    bVar3 = Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                      ((MethodInfo *)0x0);
    if (bVar3 != 0) {
      pSVar4 = (value->fields).fakeValue;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pSVar4 = (value->fields).fakeValue;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = mscorlib.dll::System::String::String_op_Inequality(pSVar2,pSVar4,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          if (cRam_? == '\0') {
            pIStack5 = (Il2CppMethodPointer)_UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          pOStack6 =
               TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
               _Instance_k__BackingField;
          if (pOStack6 == (ObscuredCheatingDetector *)0x0) {
            pIStack5 = (Il2CppMethodPointer)0x0;
            func_?();
            pcVar7 = (code *)swi(3);
            pSVar2 = (String *)(*pcVar7)();
            return pSVar2;
          }
          pIStack5 = (pOStack6->klass->vtable).StartDetectionAutomatically.methodPtr;
          (*(code *)(pOStack6->klass->vtable).OnCheatingDetected.method)();
        }
      }
    }
    return pSVar2;
  }
  return (String *)0x0;
}


/* Boolean op_Inequality(ObscuredString, ObscuredString) */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
     ObscuredString_op_Inequality(ObscuredString *a,ObscuredString *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  bVar1 = ObscuredString_op_Equality(a,b,(MethodInfo *)0x0);
  return bVar1 == 0;
}

