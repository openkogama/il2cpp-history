
/* Void Awake() */

void Assembly-CSharp.dll::BodyData::BodyData_Awake(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  BodyData_InitVariables(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).PartNames;
  value = 0;
  if (pSVar1 != (String__Array *)0x0) {
    iVar2 = 0x10;
    do {
      if ((int)pSVar1->max_length <= (int)value) {
        return;
      }
      if (pSVar1 == (String__Array *)0x0) break;
      if (pSVar1->max_length <= value) goto code_?;
      this_00 = (this->fields).partMap;
      if (this_00 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this_00,
                 *(Object **)((int)pSVar1->vector + iVar2 + -0x10),value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      pSVar1 = (this->fields).PartNames;
      value = value + 1;
      iVar2 = iVar2 + 4;
    } while (pSVar1 != (String__Array *)0x0);
  }
  func_?(0);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Transform GetPartBone(BodyData+PartIndex) */

Transform *
Assembly-CSharp.dll::BodyData::BodyData_GetPartBone
          (BodyData *this,BodyData_PartIndex__Enum part,MethodInfo *method)

{
  pTVar1 = (this->fields).PartBones;
  if (pTVar1 == (Transform__Array *)0x0) {
    func_?(0);
  }
  else if (part < pTVar1->max_length) {
    return pTVar1->vector[part];
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pTVar4 = (Transform *)(*pcVar3)();
  return pTVar4;
}


/* Vector3 GetPartBoneSpacePosition(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartBoneSpacePosition
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).PartBoneSpacePosition;
  this_00 = (this->fields).partMap;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__get_Item
                      ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (uVar2 < pVVar1->max_length) {
        fVar3 = pVVar1->vector[uVar2].y;
        fVar4 = pVVar1->vector[uVar2].z;
        __return_storage_ptr__->x = pVVar1->vector[uVar2].x;
        __return_storage_ptr__->y = fVar3;
        __return_storage_ptr__->z = fVar4;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar5 = func_?(0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Transform GetPartBone(String) */

Transform *
Assembly-CSharp.dll::BodyData::BodyData_GetPartBone_1
          (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).PartBones;
  this_00 = (this->fields).partMap;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__get_Item
                      ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pTVar1 != (Transform__Array *)0x0) {
      if (uVar2 < pTVar1->max_length) {
        return pTVar1->vector[uVar2];
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pTVar5 = (Transform *)(*pcVar4)();
  return pTVar5;
}


/* Vector3 GetPartConstraintCenter(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintCenter
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).partMap;
  pOVar2 = (this->fields).PartConstraintsBoxMin;
  if (pDVar1 == (Dictionary_2_System_String_System_Int32_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__get_Item
                      ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar2 == (ObscuredFloat__Array__Array *)0x0) goto code_?;
    if (uVar3 < pOVar2->max_length) {
      pVVar4 = BodyData_GetVectorFromObscuredFloatArray
                         ((Vector3 *)&stack0xfffffff0,pOVar2->vector[uVar3],(MethodInfo *)0x0);
      pOVar2 = (this->fields).PartConstraintsBoxMax;
      fVar5 = pVVar4->z;
      pDVar1 = (this->fields).partMap;
      if (pDVar1 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
        uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Int32]::Dictionary_2_System_Object_System_Int32__get_Item
                          ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)part,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                          );
        if (pOVar2 != (ObscuredFloat__Array__Array *)0x0) {
          if (uVar3 < pOVar2->max_length) {
            pVVar4 = (Vector3 *)&stack0xffffffdc;
            puVar6 = &UNK_?;
            pVVar7 = BodyData_GetVectorFromObscuredFloatArray
                               (pVVar4,pOVar2->vector[uVar3],(MethodInfo *)0x0);
            uVar8._0_4_ = pVVar7->x;
            uVar8._4_4_ = pVVar7->y;
            fVar9 = pVVar7->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a.y = (float)pVVar4;
            a.x = (float)puVar6;
            a.z = fVar5;
            b.z = fVar9;
            b.x = (float)(int)uVar8;
            b.y = (float)(int)((ulonglong)uVar8 >> 0x20);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
            uVar10 = pVVar4->y;
            fStack11 = pVVar4->z;
            uStack12 = uVar10;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                               ((Vector3 *)&stack0xffffffdc,*pVVar4,2.0,(MethodInfo *)0x0);
            uVar8._0_4_ = pVVar4->y;
            fVar5 = pVVar4->z;
            __return_storage_ptr__->x = pVVar4->x;
            __return_storage_ptr__->y = (float)uVar8;
            __return_storage_ptr__->z = fVar5;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  uVar13 = func_?(0);
  func_?(uVar13);
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar14)();
  return pVVar4;
}


/* Vector3 GetPartConstraintMax(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMax
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).PartConstraintsBoxMax;
  this_00 = (this->fields).partMap;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__get_Item
                      ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
      if (uVar2 < pOVar1->max_length) {
        pVVar3 = BodyData_GetVectorFromObscuredFloatArray
                           ((Vector3 *)&stack0xfffffff0,pOVar1->vector[uVar2],(MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        fVar5 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = fVar4;
        __return_storage_ptr__->z = fVar5;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar6 = func_?();
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar7)();
  return pVVar3;
}


/* Vector3 GetPartConstraintMin(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMin
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).PartConstraintsBoxMin;
  this_00 = (this->fields).partMap;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__get_Item
                      ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
      if (uVar2 < pOVar1->max_length) {
        pVVar3 = BodyData_GetVectorFromObscuredFloatArray
                           ((Vector3 *)&stack0xfffffff0,pOVar1->vector[uVar2],(MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        fVar5 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = fVar4;
        __return_storage_ptr__->z = fVar5;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar6 = func_?();
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar7)();
  return pVVar3;
}


/* Int32 GetPartConstraintMinCount(String) */

int32_t Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMinCount
                  (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).PartConstraintsMinCubes;
  this_00 = (this->fields).partMap;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__get_Item
                      ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredInt__Array *)0x0) {
      if (uVar2 < pOVar1->max_length) {
        pOVar3 = pOVar1->vector + uVar2;
        puVar4 = (undefined *)pOVar3->currentCryptoKey;
        pOVar5 = (ObscuredInt__Class *)pOVar3->hiddenValue;
        iVar6 = pOVar3->fakeValue;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
          puVar4 = &UNK_?;
          pOVar5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
          func_?();
        }
        value.hiddenValue = (int32_t)pOVar5;
        value.currentCryptoKey = (int32_t)puVar4;
        value.fakeValue = iVar6;
        value.inited = pOVar3->inited;
        value._13_3_ = *(undefined3 *)&pOVar3->field_0xd;
        iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
        return iVar6;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  iVar6 = (*pcVar8)();
  return iVar6;
}


/* Int32 GetPartIndex(String) */

int32_t Assembly-CSharp.dll::BodyData::BodyData_GetPartIndex
                  (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).partMap;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__get_Item
                      ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    return iVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Vector3 GetVectorFromObscuredFloatArray(ObscuredFloat[]) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetVectorFromObscuredFloatArray
                    (Vector3 *__return_storage_ptr__,ObscuredFloat__Array *values,MethodInfo *method
                    )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = values;
  if (values == (ObscuredFloat__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    pOVar3 = (ObscuredFloat__Array *)values->max_length;
    if (pOVar3 != (ObscuredFloat__Array *)0x3) goto code_?;
    iVar4 = values->vector[0].currentCryptoKey;
    AVar5 = values->vector[0].hiddenValue;
    pBVar6 = values->vector[0].hiddenValueOld;
    fVar7 = values->vector[0].fakeValue;
    pOVar8 = values->vector;
    pOVar9 = values->vector;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar5;
    value.currentCryptoKey = iVar4;
    value.hiddenValueOld = pBVar6;
    value.fakeValue = fVar7;
    value.inited = pOVar8[0].inited;
    value._17_3_ = *(undefined3 *)&pOVar9[0].field_0x11;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (pOVar1->max_length < 2) goto code_?;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat_op_Implicit_1(pOVar1->vector[1],(MethodInfo *)0x0);
    values = (ObscuredFloat__Array *)0x0;
    if (2 < pOVar1->max_length) {
      pOVar8 = pOVar1->vector + 2;
      uVar10 = pOVar8->currentCryptoKey;
      uVar11._0_1_ = (pOVar8->hiddenValue).b1;
      uVar11._1_1_ = (pOVar8->hiddenValue).b2;
      uVar11._2_1_ = (pOVar8->hiddenValue).b3;
      uVar11._3_1_ = (pOVar8->hiddenValue).b4;
      pVVar12 = *(Vector3 **)&pOVar1->vector[2].inited;
      values = (ObscuredFloat__Array *)
               Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(*pOVar8,(MethodInfo *)0x0);
      uStack13 = 0;
      pVVar12->x = 0.0;
      pVVar12->y = 0.0;
      pVVar12->z = 0.0;
      uStack14 = uVar11;
      uStack15 = uVar10;
      method = (MethodInfo *)&UNK_?;
      pVStack16 = pVVar12;
      pOStack17 = values;
      func_?();
      return pVVar12;
    }
  }
  func_?();
  pOVar3 = (ObscuredFloat__Array *)func_?();
code_?:
  values = pOVar3;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&values);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Invalid_length_of_obscured_float,arg1,
                       (MethodInfo *)0x0);
  this = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this,message,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__BodyData__GetVectorFromObscuredFloatArray_CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat____
                 );
  pcVar18 = (code *)swi(3);
  pVVar12 = (Vector3 *)(*pcVar18)();
  return pVVar12;
}


/* Void InitVariables() */

void Assembly-CSharp.dll::BodyData::BodyData_InitVariables(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (ObscuredFloat__Array__Array *)
           func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,8);
  pOVar2 = (ObscuredFloat__Array *)
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,3);
  if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-4.0,(MethodInfo *)0x0);
  AVar4 = pOVar3->hiddenValue;
  pBVar5 = pOVar3->hiddenValueOld;
  fVar6 = pOVar3->fakeValue;
  bVar7 = pOVar3->inited;
  uVar8 = *(undefined3 *)&pOVar3->field_0x11;
  if (pOVar2->max_length == 0) {
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,7.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    if (pOVar1 == (ObscuredFloat__Array__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length == 0) goto code_?;
    pOVar1->vector[0] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-4.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 2) goto code_?;
    pOVar1->vector[1] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-3.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 3) goto code_?;
    pOVar1->vector[2] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-3.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 4) goto code_?;
    pOVar1->vector[3] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 5) goto code_?;
    pOVar1->vector[4] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 6) goto code_?;
    pOVar1->vector[5] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 7) goto code_?;
    pOVar1->vector[6] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 8) goto code_?;
    pOVar1->vector[7] = pOVar2;
    (this->fields).PartConstraintsBoxMin = pOVar1;
    pOVar1 = (ObscuredFloat__Array__Array *)func_?();
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,3.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,14.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,5.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    if (pOVar1 == (ObscuredFloat__Array__Array *)0x0) goto code_?;
    iVar10 = func_?(pOVar2,(pOVar1->klass->_0).element_class);
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length == 0) goto code_?;
    pOVar1->vector[0] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,3);
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,3.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,8.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,5.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 2) goto code_?;
    pOVar1->vector[1] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,7.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 3) goto code_?;
    pOVar1->vector[2] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,7.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,-2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 4) goto code_?;
    pOVar1->vector[3] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,3.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 5) goto code_?;
    pOVar1->vector[4] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 6) goto code_?;
    pOVar1->vector[5] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,3.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 7) goto code_?;
    pOVar1->vector[6] = pOVar2;
    pOVar2 = (ObscuredFloat__Array *)func_?();
    if (pOVar2 == (ObscuredFloat__Array *)0x0) goto code_?;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length == 0) goto code_?;
    pOVar2->vector[0].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[0].hiddenValue = AVar4;
    pOVar2->vector[0].hiddenValueOld = pBVar5;
    pOVar2->vector[0].fakeValue = fVar6;
    pOVar2->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[0].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 2) goto code_?;
    pOVar2->vector[1].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[1].hiddenValue = AVar4;
    pOVar2->vector[1].hiddenValueOld = pBVar5;
    pOVar2->vector[1].fakeValue = fVar6;
    pOVar2->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[1].field_0x11 = uVar8;
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->inited;
    uVar8 = *(undefined3 *)&pOVar3->field_0x11;
    if (pOVar2->max_length < 3) goto code_?;
    pOVar2->vector[2].currentCryptoKey = pOVar3->currentCryptoKey;
    pOVar2->vector[2].hiddenValue = AVar4;
    pOVar2->vector[2].hiddenValueOld = pBVar5;
    pOVar2->vector[2].fakeValue = fVar6;
    pOVar2->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar2->vector[2].field_0x11 = uVar8;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pOVar1->max_length < 8) goto code_?;
    pOVar1->vector[7] = pOVar2;
    (this->fields).PartConstraintsBoxMax = pOVar1;
    pOVar11 = (ObscuredInt__Array *)func_?();
    if (pOVar11 == (ObscuredInt__Array *)0x0) goto code_?;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0x14,(MethodInfo *)0x0);
    iVar13 = pOVar12->hiddenValue;
    iVar14 = pOVar12->fakeValue;
    bVar7 = pOVar12->inited;
    uVar8 = *(undefined3 *)&pOVar12->field_0xd;
    if (pOVar11->max_length == 0) goto code_?;
    pOVar11->vector[0].currentCryptoKey = pOVar12->currentCryptoKey;
    pOVar11->vector[0].hiddenValue = iVar13;
    pOVar11->vector[0].fakeValue = iVar14;
    pOVar11->vector[0].inited = bVar7;
    *(undefined3 *)&pOVar11->vector[0].field_0xd = uVar8;
    pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0x14,(MethodInfo *)0x0);
    iVar13 = pOVar12->hiddenValue;
    iVar14 = pOVar12->fakeValue;
    bVar7 = pOVar12->inited;
    uVar8 = *(undefined3 *)&pOVar12->field_0xd;
    if (pOVar11->max_length < 2) goto code_?;
    pOVar11->vector[1].currentCryptoKey = pOVar12->currentCryptoKey;
    pOVar11->vector[1].hiddenValue = iVar13;
    pOVar11->vector[1].fakeValue = iVar14;
    pOVar11->vector[1].inited = bVar7;
    *(undefined3 *)&pOVar11->vector[1].field_0xd = uVar8;
    pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,3,(MethodInfo *)0x0);
    iVar13 = pOVar12->hiddenValue;
    iVar14 = pOVar12->fakeValue;
    bVar7 = pOVar12->inited;
    uVar8 = *(undefined3 *)&pOVar12->field_0xd;
    if (pOVar11->max_length < 3) goto code_?;
    pOVar11->vector[2].currentCryptoKey = pOVar12->currentCryptoKey;
    pOVar11->vector[2].hiddenValue = iVar13;
    pOVar11->vector[2].fakeValue = iVar14;
    pOVar11->vector[2].inited = bVar7;
    *(undefined3 *)&pOVar11->vector[2].field_0xd = uVar8;
    pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,3,(MethodInfo *)0x0);
    iVar13 = pOVar12->hiddenValue;
    iVar14 = pOVar12->fakeValue;
    bVar7 = pOVar12->inited;
    uVar8 = *(undefined3 *)&pOVar12->field_0xd;
    if (pOVar11->max_length < 4) goto code_?;
    pOVar11->vector[3].currentCryptoKey = pOVar12->currentCryptoKey;
    pOVar11->vector[3].hiddenValue = iVar13;
    pOVar11->vector[3].fakeValue = iVar14;
    pOVar11->vector[3].inited = bVar7;
    *(undefined3 *)&pOVar11->vector[3].field_0xd = uVar8;
    pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,3,(MethodInfo *)0x0);
    iVar13 = pOVar12->hiddenValue;
    iVar14 = pOVar12->fakeValue;
    bVar7 = pOVar12->inited;
    uVar8 = *(undefined3 *)&pOVar12->field_0xd;
    if (pOVar11->max_length < 5) goto code_?;
    pOVar11->vector[4].currentCryptoKey = pOVar12->currentCryptoKey;
    pOVar11->vector[4].hiddenValue = iVar13;
    pOVar11->vector[4].fakeValue = iVar14;
    pOVar11->vector[4].inited = bVar7;
    *(undefined3 *)&pOVar11->vector[4].field_0xd = uVar8;
    pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,3,(MethodInfo *)0x0);
    iVar13 = pOVar12->hiddenValue;
    iVar14 = pOVar12->fakeValue;
    bVar7 = pOVar12->inited;
    uVar8 = *(undefined3 *)&pOVar12->field_0xd;
    if (pOVar11->max_length < 6) goto code_?;
    pOVar11->vector[5].currentCryptoKey = pOVar12->currentCryptoKey;
    pOVar11->vector[5].hiddenValue = iVar13;
    pOVar11->vector[5].fakeValue = iVar14;
    pOVar11->vector[5].inited = bVar7;
    *(undefined3 *)&pOVar11->vector[5].field_0xd = uVar8;
    pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,3,(MethodInfo *)0x0);
    iVar13 = pOVar12->hiddenValue;
    iVar14 = pOVar12->fakeValue;
    bVar7 = pOVar12->inited;
    uVar8 = *(undefined3 *)&pOVar12->field_0xd;
    if (6 < pOVar11->max_length) {
      pOVar11->vector[6].currentCryptoKey = pOVar12->currentCryptoKey;
      pOVar11->vector[6].hiddenValue = iVar13;
      pOVar11->vector[6].fakeValue = iVar14;
      pOVar11->vector[6].inited = bVar7;
      *(undefined3 *)&pOVar11->vector[6].field_0xd = uVar8;
      pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,3,(MethodInfo *)0x0);
      iVar13 = pOVar12->hiddenValue;
      iVar14 = pOVar12->fakeValue;
      bVar7 = pOVar12->inited;
      uVar8 = *(undefined3 *)&pOVar12->field_0xd;
      if (7 < pOVar11->max_length) {
        pOVar11->vector[7].currentCryptoKey = pOVar12->currentCryptoKey;
        pOVar11->vector[7].hiddenValue = iVar13;
        pOVar11->vector[7].fakeValue = iVar14;
        pOVar11->vector[7].inited = bVar7;
        *(undefined3 *)&pOVar11->vector[7].field_0xd = uVar8;
        (this->fields).PartConstraintsMinCubes = pOVar11;
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  uStack15 = 0;
  uStack16 = 0;
  puStack17 = (undefined *)func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* BodyData() */

void Assembly-CSharp.dll::BodyData::BodyData__ctor(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,9);
  if (pSVar1 == (String__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar3 = 0;
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,uVar3);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,uVar3);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,uVar3);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,uVar3);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,uVar3);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,uVar3);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral_Head != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Head,(pSVar1->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_Head;
    if ((StringLiteral_Torso != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Torso,(pSVar1->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral_Torso;
    if ((StringLiteral_RArm != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_RArm,(pSVar1->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (pSVar1->max_length < 3) goto code_?;
    pSVar1->vector[2] = StringLiteral_RArm;
    if ((StringLiteral_LArm != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_LArm,(pSVar1->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (pSVar1->max_length < 4) goto code_?;
    pSVar1->vector[3] = StringLiteral_LArm;
    if ((StringLiteral_RUpLeg != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_RUpLeg,(pSVar1->klass->_0).element_class), iVar4 == 0)
       ) goto code_?;
    if (pSVar1->max_length < 5) goto code_?;
    pSVar1->vector[4] = StringLiteral_RUpLeg;
    if ((StringLiteral_RLowLeg != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_RLowLeg,(pSVar1->klass->_0).element_class), iVar4 == 0
       )) goto code_?;
    if (pSVar1->max_length < 6) goto code_?;
    pSVar1->vector[5] = StringLiteral_RLowLeg;
    if ((StringLiteral_LUpLeg != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_LUpLeg,(pSVar1->klass->_0).element_class), iVar4 == 0)
       ) goto code_?;
    if (pSVar1->max_length < 7) goto code_?;
    pSVar1->vector[6] = StringLiteral_LUpLeg;
    if ((StringLiteral_LLowLeg != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_LLowLeg,(pSVar1->klass->_0).element_class), iVar4 == 0
       )) goto code_?;
    if (pSVar1->max_length < 8) goto code_?;
    pSVar1->vector[7] = StringLiteral_LLowLeg;
    if ((StringLiteral_Holster != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Holster,(pSVar1->klass->_0).element_class), iVar4 == 0
       )) goto code_?;
    if (pSVar1->max_length < 9) goto code_?;
    pSVar1->vector[8] = StringLiteral_Holster;
    (this->fields).PartNames = pSVar1;
    pVVar5 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    fStack_6 = 0.0;
    uStack_7 = 0;
    func_?(&uStack_7,0,0xc0f66666,0xbfc00000,0);
    uVar3 = 0;
    if (pVVar5->max_length == 0) goto code_?;
    pVVar5->vector[0].x = (float)(undefined4)uStack_7;
    pVVar5->vector[0].y = (float)uStack_7._4_4_;
    pVVar5->vector[0].z = fStack_6;
    uStack_8 = 0;
    fStack_9 = 0.0;
    func_?(&uStack_8,0,0xc0333333,0xbfc00000);
    uVar3 = 0;
    if (pVVar5->max_length < 2) goto code_?;
    pVVar5->vector[1].x = (float)(undefined4)uStack_8;
    pVVar5->vector[1].y = (float)uStack_8._4_4_;
    pVVar5->vector[1].z = fStack_9;
    uStack_10 = 0;
    fStack_11 = 0.0;
    func_?(&uStack_10,0x3f000000,0xc0f00000,0x40000000);
    uVar3 = 0;
    if (pVVar5->max_length < 3) goto code_?;
    pVVar5->vector[2].x = (float)(undefined4)uStack_10;
    pVVar5->vector[2].y = (float)uStack_10._4_4_;
    pVVar5->vector[2].z = fStack_11;
    uStack_12 = 0;
    fStack_13 = 0.0;
    func_?(&uStack_12,0x3f000000,0xc0f00000,0x40000000);
    uVar3 = 0;
    if (pVVar5->max_length < 4) goto code_?;
    pVVar5->vector[3].x = (float)(undefined4)uStack_12;
    pVVar5->vector[3].y = (float)uStack_12._4_4_;
    pVVar5->vector[3].z = fStack_13;
    uStack_14 = 0;
    fStack_15 = 0.0;
    func_?(&uStack_14,0xbf800000,0xbfc00000,0);
    uVar3 = 0;
    if (pVVar5->max_length < 5) goto code_?;
    pVVar5->vector[4].x = (float)(undefined4)uStack_14;
    pVVar5->vector[4].y = (float)uStack_14._4_4_;
    pVVar5->vector[4].z = fStack_15;
    uStack_16 = 0;
    fStack_17 = 0.0;
    func_?(&uStack_16,0xbf800000,0xbfc00000,0);
    uVar3 = 0;
    if (pVVar5->max_length < 6) goto code_?;
    pVVar5->vector[5].x = (float)(undefined4)uStack_16;
    pVVar5->vector[5].y = (float)uStack_16._4_4_;
    pVVar5->vector[5].z = fStack_17;
    uStack_18 = 0;
    fStack_19 = 0.0;
    func_?(&uStack_18,0xbf800000,0xbfc00000,0);
    uVar3 = 0;
    if (6 < pVVar5->max_length) {
      pVVar5->vector[6].x = (float)(undefined4)uStack_18;
      pVVar5->vector[6].y = (float)uStack_18._4_4_;
      pVVar5->vector[6].z = fStack_19;
      uStack_20 = 0;
      fStack_21 = 0.0;
      func_?(&uStack_20,0xbf800000,0xbfc00000,0);
      if (7 < pVVar5->max_length) {
        pVVar5->vector[7].x = (float)(undefined4)uStack_20;
        pVVar5->vector[7].y = (float)uStack_20._4_4_;
        pVVar5->vector[7].z = fStack_21;
        (this->fields).PartBoneSpacePosition = pVVar5;
        this_00 = (Dictionary_2_System_String_System_Int32_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                                 );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                  );
        (this->fields).partMap = this_00;
        UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor
                  ((Canvas *)this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,uVar3);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}

