
/* Void Awake() */

void Assembly-CSharp.dll::BodyData::BodyData_Awake(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  BodyData_InitVariables(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).PartNames;
  value = 0;
  if (pSVar1 != (String__Array *)0x0) {
    lVar2 = 0x20;
    do {
      if ((int)pSVar1->max_length <= (int)value) {
        return;
      }
      if (pSVar1 == (String__Array *)0x0) break;
      if ((uint)pSVar1->max_length <= value) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (this->fields).partMap;
      if (this_00 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__TryInsert
                ((Dictionary_2_System_Object_System_Int32_ *)this_00,
                 *(Object **)((longlong)pSVar1->vector + lVar2 + -0x20),value,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                 ->klass->rgctx_data[0x22].method);
      pSVar1 = (this->fields).PartNames;
      value = value + 1;
      lVar2 = lVar2 + 8;
    } while (pSVar1 != (String__Array *)0x0);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 GetPartBoneSpacePosition(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartBoneSpacePosition
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).partMap;
  pVVar1 = (this->fields).PartBoneSpacePosition;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
            Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Object_System_Int32Enum_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (IVar2 < (Int32Enum__Enum)pVVar1->max_length) {
        fVar3 = pVVar1->vector[(int)IVar2].z;
        fVar4 = pVVar1->vector[(int)IVar2].y;
        __return_storage_ptr__->x = pVVar1->vector[(int)IVar2].x;
        __return_storage_ptr__->y = fVar4;
        __return_storage_ptr__->z = fVar3;
        return __return_storage_ptr__;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Transform GetPartBone(String) */

Transform *
Assembly-CSharp.dll::BodyData::BodyData_GetPartBone_1
          (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).partMap;
  pTVar1 = (this->fields).PartBones;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
            Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Object_System_Int32Enum_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pTVar1 != (Transform__Array *)0x0) {
      if (IVar2 < (Int32Enum__Enum)pTVar1->max_length) {
        return pTVar1->vector[(int)IVar2];
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      pTVar4 = (Transform *)(*pcVar3)();
      return pTVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pTVar4 = (Transform *)(*pcVar3)();
  return pTVar4;
}


/* Vector3 GetPartConstraintCenter(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintCenter
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).partMap;
  pOVar2 = (this->fields).PartConstraintsBoxMin;
  if (pDVar1 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    IVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
            Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar1,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar2 != (ObscuredFloat__Array__Array *)0x0) {
      if ((Int32Enum__Enum)pOVar2->max_length <= IVar3) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        pVVar5 = (Vector3 *)(*pcVar4)();
        return pVVar5;
      }
      pVVar5 = BodyData_GetVectorFromObscuredFloatArray
                         (&VStack_6,pOVar2->vector[(int)IVar3],(MethodInfo *)0x0);
      pDVar1 = (this->fields).partMap;
      pOVar2 = (this->fields).PartConstraintsBoxMax;
      uVar7 = pVVar5->x;
      uVar8 = pVVar5->y;
      fVar9 = pVVar5->z;
      if (pDVar1 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
        IVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                          ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar1,(Object *)part,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                          );
        if (pOVar2 != (ObscuredFloat__Array__Array *)0x0) {
          if (IVar3 < (Int32Enum__Enum)pOVar2->max_length) {
            pVVar5 = BodyData_GetVectorFromObscuredFloatArray
                               (&VStack_6,pOVar2->vector[(int)IVar3],(MethodInfo *)0x0);
            uVar10 = pVVar5->x;
            uVar11 = pVVar5->y;
            fVar12 = ((float)uVar8 + (float)uVar11) * _UNK_?;
            fVar9 = (fVar9 + pVVar5->z) * _UNK_?;
            __return_storage_ptr__->x = ((float)uVar7 + (float)uVar10) * _UNK_?;
            __return_storage_ptr__->y = fVar12;
            __return_storage_ptr__->z = fVar9;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Vector3 GetPartConstraintMax(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMax
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).partMap;
  pOVar1 = (this->fields).PartConstraintsBoxMax;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
            Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Object_System_Int32Enum_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
      if (IVar2 < (Int32Enum__Enum)pOVar1->max_length) {
        pVVar3 = BodyData_GetVectorFromObscuredFloatArray
                           (&VStack_4,pOVar1->vector[(int)IVar2],(MethodInfo *)0x0);
        fVar5 = pVVar3->y;
        fVar6 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = fVar5;
        __return_storage_ptr__->z = fVar6;
        return __return_storage_ptr__;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar7)();
      return pVVar3;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar7)();
  return pVVar3;
}


/* Vector3 GetPartConstraintMin(String) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMin
                    (Vector3 *__return_storage_ptr__,BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).partMap;
  pOVar1 = (this->fields).PartConstraintsBoxMin;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
            Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Object_System_Int32Enum_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
      if (IVar2 < (Int32Enum__Enum)pOVar1->max_length) {
        pVVar3 = BodyData_GetVectorFromObscuredFloatArray
                           (&VStack_4,pOVar1->vector[(int)IVar2],(MethodInfo *)0x0);
        fVar5 = pVVar3->y;
        fVar6 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = fVar5;
        __return_storage_ptr__->z = fVar6;
        return __return_storage_ptr__;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar7)();
      return pVVar3;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar7)();
  return pVVar3;
}


/* Int32 GetPartConstraintMinCount(String) */

int32_t Assembly-CSharp.dll::BodyData::BodyData_GetPartConstraintMinCount
                  (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).partMap;
  pOVar1 = (this->fields).PartConstraintsMinCubes;
  if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
            Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Object_System_Int32Enum_ *)this_00,(Object *)part,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      );
    if (pOVar1 != (ObscuredInt__Array *)0x0) {
      if (IVar2 < (Int32Enum__Enum)pOVar1->max_length) {
        pOVar3 = pOVar1->vector + (int)IVar2;
        uVar4._0_4_ = pOVar3->currentCryptoKey;
        uVar4._4_4_ = pOVar3->hiddenValue;
        uVar5._0_4_ = pOVar3->fakeValue;
        uVar5._4_1_ = pOVar3->inited;
        uVar5._5_3_ = *(undefined3 *)&pOVar3->field_0xd;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        aOStack_6[0]._0_8_ = uVar4;
        aOStack_6[0]._8_8_ = uVar5;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
        return iVar7;
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      iVar7 = (*pcVar8)();
      return iVar7;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  iVar7 = (*pcVar8)();
  return iVar7;
}


/* Int32 GetPartIndex(String) */

int32_t Assembly-CSharp.dll::BodyData::BodyData_GetPartIndex
                  (BodyData *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).partMap;
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)part,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar3 < 0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              ((Object *)part,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pDVar4 = (this_00->fields)._entries;
  if (pDVar4 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                 *)0x0) {
    if (uVar3 < (uint)pDVar4->max_length) {
      return pDVar4->vector[(int)uVar3].value.state;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Vector3 GetVectorFromObscuredFloatArray(ObscuredFloat[]) */

Vector3 * Assembly-CSharp.dll::BodyData::BodyData_GetVectorFromObscuredFloatArray
                    (Vector3 *__return_storage_ptr__,ObscuredFloat__Array *values,MethodInfo *method
                    )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (values == (ObscuredFloat__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if ((int)values->max_length != 3) {
    FUN_?(values);
    aIStackX_8[0].m_value = (int32_t)values->max_length;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    str0 = (String *)func_?(&StringLiteral_Invalid_length_of_obscured_float);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar3,(MethodInfo *)0x0);
    uVar4 = func_?(&TypeInfo__System__Exception);
    this = (Exception *)func_?(uVar4);
    mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar3,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__BodyData__GetVectorFromObscuredFloatArray_CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat____
                               );
    FUN_?(this,uVar4);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if ((int)values->max_length != 0) {
    uVar5._0_4_ = values->vector[0].currentCryptoKey;
    uVar5._4_4_ = values->vector[0].hiddenValue;
    pBVar6 = values->vector[0].hiddenValueOld;
    uVar4._0_4_ = values->vector[0].fakeValue;
    uVar4._4_1_ = values->vector[0].inited;
    uVar4._5_3_ = *(undefined3 *)&values->vector[0].field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_7[0]._0_8_ = uVar5;
    aOStack_7[0].hiddenValueOld = pBVar6;
    aOStack_7[0]._16_8_ = uVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
    if (1 < (uint)values->max_length) {
      aOStack_7[0].currentCryptoKey = values->vector[1].currentCryptoKey;
      aOStack_7[0].hiddenValue = values->vector[1].hiddenValue;
      aOStack_7[0].hiddenValueOld = values->vector[1].hiddenValueOld;
      aOStack_7[0].fakeValue = values->vector[1].fakeValue;
      aOStack_7[0].inited = values->vector[1].inited;
      aOStack_7[0]._21_3_ = *(undefined3 *)&values->vector[1].field_0x15;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
      if (2 < (uint)values->max_length) {
        aOStack_7[0].currentCryptoKey = values->vector[2].currentCryptoKey;
        aOStack_7[0].hiddenValue = values->vector[2].hiddenValue;
        aOStack_7[0].hiddenValueOld = values->vector[2].hiddenValueOld;
        aOStack_7[0].fakeValue = values->vector[2].fakeValue;
        aOStack_7[0].inited = values->vector[2].inited;
        aOStack_7[0]._21_3_ = *(undefined3 *)&values->vector[2].field_0x15;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
        __return_storage_ptr__->x = fVar8;
        __return_storage_ptr__->y = fVar9;
        __return_storage_ptr__->z = fVar10;
        return __return_storage_ptr__;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar1)();
  return pVVar2;
}


/* Void InitVariables() */

void Assembly-CSharp.dll::BodyData::BodyData_InitVariables(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (ObscuredFloat__Array__Array *)
            FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,8);
  lVar2 = FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_3.fakeValue = 0.0;
  OStack_3.inited = 0;
  OStack_3._21_3_ = 0;
  OStack_3.currentCryptoKey = 0;
  OStack_3.hiddenValue.b1 = 0;
  OStack_3.hiddenValue.b2 = 0;
  OStack_3.hiddenValue.b3 = 0;
  OStack_3.hiddenValue.b4 = 0;
  OStack_3.hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar4 = _UNK_?;
  AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar6 != 0) {
    OStack_3.fakeValue = -4.0;
  }
  if (lVar2 == 0) goto code_?;
  if (*(int *)(lVar2 + 0x18) != 0) {
    bVar7 = iRam_? != 0;
    *(int32_t *)(lVar2 + 0x20) = OStack_3.currentCryptoKey;
    *(ACTkByte4 *)(lVar2 + 0x24) = OStack_3.hiddenValue;
    *(undefined4 *)(lVar2 + 0x28) = OStack_3.hiddenValueOld._0_4_;
    *(undefined4 *)(lVar2 + 0x2c) = OStack_3.hiddenValueOld._4_4_;
    *(undefined8 *)(lVar2 + 0x30) = OStack_3._16_8_;
    if (bVar7) {
      uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    OStack_3.fakeValue = 0.0;
    OStack_3.inited = 0;
    OStack_3._21_3_ = 0;
    OStack_3.currentCryptoKey = 0;
    OStack_3.hiddenValue.b1 = 0;
    OStack_3.hiddenValue.b2 = 0;
    OStack_3.hiddenValue.b3 = 0;
    OStack_3.hiddenValue.b4 = 0;
    OStack_3.hiddenValueOld = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
    bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar6 != 0) {
      OStack_3.fakeValue = 7.0;
    }
    if (1 < *(uint *)(lVar2 + 0x18)) {
      bVar7 = iRam_? != 0;
      *(int32_t *)(lVar2 + 0x38) = OStack_3.currentCryptoKey;
      *(ACTkByte4 *)(lVar2 + 0x3c) = OStack_3.hiddenValue;
      *(undefined4 *)(lVar2 + 0x40) = OStack_3.hiddenValueOld._0_4_;
      *(undefined4 *)(lVar2 + 0x44) = OStack_3.hiddenValueOld._4_4_;
      *(undefined8 *)(lVar2 + 0x48) = OStack_3._16_8_;
      if (bVar7) {
        uVar8 = (uint)(lVar2 + 0x40U >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      OStack_3.fakeValue = 0.0;
      OStack_3.inited = 0;
      OStack_3._21_3_ = 0;
      OStack_3.currentCryptoKey = 0;
      OStack_3.hiddenValue.b1 = 0;
      OStack_3.hiddenValue.b2 = 0;
      OStack_3.hiddenValue.b3 = 0;
      OStack_3.hiddenValue.b4 = 0;
      OStack_3.hiddenValueOld = (Byte__Array *)0x0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      value_00 = MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                 ._0_4_;
      AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalEncrypt
                         (MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                          ._0_4_,(MethodInfo *)0x0);
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
      bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
              ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      if (bVar6 != 0) {
        OStack_3.fakeValue = -2.0;
      }
      if (2 < *(uint *)(lVar2 + 0x18)) {
        bVar7 = iRam_? != 0;
        *(int32_t *)(lVar2 + 0x50) = OStack_3.currentCryptoKey;
        *(ACTkByte4 *)(lVar2 + 0x54) = OStack_3.hiddenValue;
        *(undefined4 *)(lVar2 + 0x58) = OStack_3.hiddenValueOld._0_4_;
        *(undefined4 *)(lVar2 + 0x5c) = OStack_3.hiddenValueOld._4_4_;
        *(undefined8 *)(lVar2 + 0x60) = OStack_3._16_8_;
        if (bVar7) {
          uVar8 = (uint)(lVar2 + 0x58U >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        if (pOVar1 != (ObscuredFloat__Array__Array *)0x0) {
          FUN_?(pOVar1,0);
          lVar2 = FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          OStack_3.fakeValue = 0.0;
          OStack_3.inited = 0;
          OStack_3._21_3_ = 0;
          OStack_3.currentCryptoKey = 0;
          OStack_3.hiddenValue.b1 = 0;
          OStack_3.hiddenValue.b2 = 0;
          OStack_3.hiddenValue.b3 = 0;
          OStack_3.hiddenValue.b4 = 0;
          OStack_3.hiddenValueOld = (Byte__Array *)0x0;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                   ::ObscuredFloat_InternalEncrypt(fVar4,(MethodInfo *)0x0);
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
          bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                  ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                            ((MethodInfo *)0x0);
          if (bVar6 != 0) {
            OStack_3.fakeValue = -4.0;
          }
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) != 0) {
              bVar7 = iRam_? != 0;
              *(int32_t *)(lVar2 + 0x20) = OStack_3.currentCryptoKey;
              *(ACTkByte4 *)(lVar2 + 0x24) = OStack_3.hiddenValue;
              *(undefined4 *)(lVar2 + 0x28) = OStack_3.hiddenValueOld._0_4_;
              *(undefined4 *)(lVar2 + 0x2c) = OStack_3.hiddenValueOld._4_4_;
              *(undefined8 *)(lVar2 + 0x30) = OStack_3._16_8_;
              if (bVar7) {
                uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar7 = uVar10 == *puVar11;
                  if (bVar7) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              OStack_3.fakeValue = 0.0;
              OStack_3.inited = 0;
              OStack_3._21_3_ = 0;
              OStack_3.currentCryptoKey = 0;
              OStack_3.hiddenValue.b1 = 0;
              OStack_3.hiddenValue.b2 = 0;
              OStack_3.hiddenValue.b3 = 0;
              OStack_3.hiddenValue.b4 = 0;
              OStack_3.hiddenValueOld = (Byte__Array *)0x0;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              fVar4 = TypeRef__System__Activator__T._0_4_;
              AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredFloat::ObscuredFloat_InternalEncrypt
                                 (TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
              Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
              bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                      ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                ((MethodInfo *)0x0);
              if (bVar6 != 0) {
                OStack_3.fakeValue = 2.0;
              }
              if (1 < *(uint *)(lVar2 + 0x18)) {
                bVar7 = iRam_? != 0;
                *(int32_t *)(lVar2 + 0x38) = OStack_3.currentCryptoKey;
                *(ACTkByte4 *)(lVar2 + 0x3c) = OStack_3.hiddenValue;
                *(undefined4 *)(lVar2 + 0x40) = OStack_3.hiddenValueOld._0_4_;
                *(undefined4 *)(lVar2 + 0x44) = OStack_3.hiddenValueOld._4_4_;
                *(undefined8 *)(lVar2 + 0x48) = OStack_3._16_8_;
                if (bVar7) {
                  uVar8 = (uint)(lVar2 + 0x40U >> 0xc);
                  uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                  do {
                    uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                    puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                    LOCK();
                    bVar7 = uVar10 == *puVar11;
                    if (bVar7) {
                      *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar7);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                OStack_3.fakeValue = 0.0;
                OStack_3.inited = 0;
                OStack_3._21_3_ = 0;
                OStack_3.currentCryptoKey = 0;
                OStack_3.hiddenValue.b1 = 0;
                OStack_3.hiddenValue.b2 = 0;
                OStack_3.hiddenValue.b3 = 0;
                OStack_3.hiddenValue.b4 = 0;
                OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_InternalEncrypt(value_00,(MethodInfo *)0x0);
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
                bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                        ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                  ((MethodInfo *)0x0);
                if (bVar6 != 0) {
                  OStack_3.fakeValue = -2.0;
                }
                if (2 < *(uint *)(lVar2 + 0x18)) {
                  bVar7 = iRam_? != 0;
                  *(int32_t *)(lVar2 + 0x50) = OStack_3.currentCryptoKey;
                  *(ACTkByte4 *)(lVar2 + 0x54) = OStack_3.hiddenValue;
                  *(undefined4 *)(lVar2 + 0x58) = OStack_3.hiddenValueOld._0_4_;
                  *(undefined4 *)(lVar2 + 0x5c) = OStack_3.hiddenValueOld._4_4_;
                  *(undefined8 *)(lVar2 + 0x60) = OStack_3._16_8_;
                  if (bVar7) {
                    uVar8 = (uint)(lVar2 + 0x58U >> 0xc);
                    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                    do {
                      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                      LOCK();
                      bVar7 = uVar10 == *puVar11;
                      if (bVar7) {
                        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar7);
                  }
                  FUN_?(pOVar1,1);
                  lVar2 = FUN_?(
                                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                        );
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  OStack_3.fakeValue = 0.0;
                  OStack_3.inited = 0;
                  OStack_3._21_3_ = 0;
                  OStack_3.currentCryptoKey = 0;
                  OStack_3.hiddenValue.b1 = 0;
                  OStack_3.hiddenValue.b2 = 0;
                  OStack_3.hiddenValue.b3 = 0;
                  OStack_3.hiddenValue.b4 = 0;
                  OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredFloat::ObscuredFloat_InternalEncrypt(value_00,(MethodInfo *)0x0);
                  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
                  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                          ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                    ((MethodInfo *)0x0);
                  if (bVar6 != 0) {
                    OStack_3.fakeValue = -2.0;
                  }
                  if (lVar2 == 0) goto code_?;
                  if (*(int *)(lVar2 + 0x18) != 0) {
                    bVar7 = iRam_? != 0;
                    *(int32_t *)(lVar2 + 0x20) = OStack_3.currentCryptoKey;
                    *(ACTkByte4 *)(lVar2 + 0x24) = OStack_3.hiddenValue;
                    *(undefined4 *)(lVar2 + 0x28) = OStack_3.hiddenValueOld._0_4_;
                    *(undefined4 *)(lVar2 + 0x2c) = OStack_3.hiddenValueOld._4_4_;
                    *(undefined8 *)(lVar2 + 0x30) = OStack_3._16_8_;
                    if (bVar7) {
                      uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                      do {
                        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                        LOCK();
                        bVar7 = uVar10 == *puVar11;
                        if (bVar7) {
                          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar7);
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    OStack_3.fakeValue = 0.0;
                    OStack_3.inited = 0;
                    OStack_3._21_3_ = 0;
                    OStack_3.currentCryptoKey = 0;
                    OStack_3.hiddenValue.b1 = 0;
                    OStack_3.hiddenValue.b2 = 0;
                    OStack_3.hiddenValue.b3 = 0;
                    OStack_3.hiddenValue.b4 = 0;
                    OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                                 field_0x1c == 0) {
                      FUN_?();
                    }
                    value = _UNK_?;
                    AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                             ObscuredFloat::ObscuredFloat_InternalEncrypt
                                       (_UNK_?,(MethodInfo *)0x0);
                    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
                    bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                            ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                      ((MethodInfo *)0x0);
                    if (bVar6 != 0) {
                      OStack_3.fakeValue = 1.0;
                    }
                    if (1 < *(uint *)(lVar2 + 0x18)) {
                      bVar7 = iRam_? != 0;
                      *(int32_t *)(lVar2 + 0x38) = OStack_3.currentCryptoKey;
                      *(ACTkByte4 *)(lVar2 + 0x3c) = OStack_3.hiddenValue;
                      *(undefined4 *)(lVar2 + 0x40) = OStack_3.hiddenValueOld._0_4_;
                      *(undefined4 *)(lVar2 + 0x44) = OStack_3.hiddenValueOld._4_4_;
                      *(undefined8 *)(lVar2 + 0x48) = OStack_3._16_8_;
                      if (bVar7) {
                        uVar8 = (uint)(lVar2 + 0x40U >> 0xc);
                        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                        do {
                          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                          LOCK();
                          bVar7 = uVar10 == *puVar11;
                          if (bVar7) {
                            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar7);
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat)
                        ;
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      OStack_3.fakeValue = 0.0;
                      OStack_3.inited = 0;
                      OStack_3._21_3_ = 0;
                      OStack_3.currentCryptoKey = 0;
                      OStack_3.hiddenValue.b1 = 0;
                      OStack_3.hiddenValue.b2 = 0;
                      OStack_3.hiddenValue.b3 = 0;
                      OStack_3.hiddenValue.b4 = 0;
                      OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1
                                   ).field_0x1c == 0) {
                        FUN_?();
                      }
                      fVar12 = _UNK_?;
                      AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredFloat::ObscuredFloat_InternalEncrypt
                                         (_UNK_?,(MethodInfo *)0x0);
                      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredFloat::ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
                      bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                              ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                        ((MethodInfo *)0x0);
                      if (bVar6 != 0) {
                        OStack_3.fakeValue = -3.0;
                      }
                      if (2 < *(uint *)(lVar2 + 0x18)) {
                        bVar7 = iRam_? != 0;
                        *(int32_t *)(lVar2 + 0x50) = OStack_3.currentCryptoKey;
                        *(ACTkByte4 *)(lVar2 + 0x54) = OStack_3.hiddenValue;
                        *(undefined4 *)(lVar2 + 0x58) = OStack_3.hiddenValueOld._0_4_;
                        *(undefined4 *)(lVar2 + 0x5c) = OStack_3.hiddenValueOld._4_4_;
                        *(undefined8 *)(lVar2 + 0x60) = OStack_3._16_8_;
                        if (bVar7) {
                          uVar8 = (uint)(lVar2 + 0x58U >> 0xc);
                          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                          do {
                            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                            LOCK();
                            bVar7 = uVar10 == *puVar11;
                            if (bVar7) {
                              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar7);
                        }
                        FUN_?(pOVar1,2);
                        lVar2 = FUN_?(
                                              TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                              );
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        OStack_3.fakeValue = 0.0;
                        OStack_3.inited = 0;
                        OStack_3._21_3_ = 0;
                        OStack_3.currentCryptoKey = 0;
                        OStack_3.hiddenValue.b1 = 0;
                        OStack_3.hiddenValue.b2 = 0;
                        OStack_3.hiddenValue.b3 = 0;
                        OStack_3.hiddenValue.b4 = 0;
                        OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->
                                     _1).field_0x1c == 0) {
                          FUN_?();
                        }
                        AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                 ::ObscuredFloat::ObscuredFloat_InternalEncrypt
                                           (value_00,(MethodInfo *)0x0);
                        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredFloat::ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
                        bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                                ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                          ((MethodInfo *)0x0);
                        if (bVar6 != 0) {
                          OStack_3.fakeValue = -2.0;
                        }
                        if (lVar2 == 0) goto code_?;
                        if (*(int *)(lVar2 + 0x18) != 0) {
                          bVar7 = iRam_? != 0;
                          *(int32_t *)(lVar2 + 0x20) = OStack_3.currentCryptoKey;
                          *(ACTkByte4 *)(lVar2 + 0x24) = OStack_3.hiddenValue;
                          *(undefined4 *)(lVar2 + 0x28) = OStack_3.hiddenValueOld._0_4_;
                          *(undefined4 *)(lVar2 + 0x2c) = OStack_3.hiddenValueOld._4_4_;
                          *(undefined8 *)(lVar2 + 0x30) = OStack_3._16_8_;
                          if (bVar7) {
                            uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
                            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                            do {
                              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                              LOCK();
                              bVar7 = uVar10 == *puVar11;
                              if (bVar7) {
                                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar7);
                          }
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          OStack_3.fakeValue = 0.0;
                          OStack_3.inited = 0;
                          OStack_3._21_3_ = 0;
                          OStack_3.currentCryptoKey = 0;
                          OStack_3.hiddenValue.b1 = 0;
                          OStack_3.hiddenValue.b2 = 0;
                          OStack_3.hiddenValue.b3 = 0;
                          OStack_3.hiddenValue.b4 = 0;
                          OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                       ->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                   ObscuredTypes::ObscuredFloat::ObscuredFloat_InternalEncrypt
                                             (value,(MethodInfo *)0x0);
                          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredFloat::ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
                          bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                                  ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                            ((MethodInfo *)0x0);
                          if (bVar6 != 0) {
                            OStack_3.fakeValue = 1.0;
                          }
                          if (1 < *(uint *)(lVar2 + 0x18)) {
                            bVar7 = iRam_? != 0;
                            *(int32_t *)(lVar2 + 0x38) = OStack_3.currentCryptoKey;
                            *(ACTkByte4 *)(lVar2 + 0x3c) = OStack_3.hiddenValue;
                            *(undefined4 *)(lVar2 + 0x40) = OStack_3.hiddenValueOld._0_4_;
                            *(undefined4 *)(lVar2 + 0x44) = OStack_3.hiddenValueOld._4_4_;
                            *(undefined8 *)(lVar2 + 0x48) = OStack_3._16_8_;
                            if (bVar7) {
                              uVar8 = (uint)(lVar2 + 0x40U >> 0xc);
                              uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                              do {
                                uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                LOCK();
                                bVar7 = uVar10 == *puVar11;
                                if (bVar7) {
                                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar7);
                            }
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            OStack_3.fakeValue = 0.0;
                            OStack_3.inited = 0;
                            OStack_3._21_3_ = 0;
                            OStack_3.currentCryptoKey = 0;
                            OStack_3.hiddenValue.b1 = 0;
                            OStack_3.hiddenValue.b2 = 0;
                            OStack_3.hiddenValue.b3 = 0;
                            OStack_3.hiddenValue.b4 = 0;
                            OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                            if (*(int *)&(
                                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                         ->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                     ObscuredTypes::ObscuredFloat::ObscuredFloat_InternalEncrypt
                                               (fVar12,(MethodInfo *)0x0);
                            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredFloat::ObscuredFloat__ctor(&OStack_3,AVar5,(MethodInfo *)0x0);
                            bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                                    ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                              ((MethodInfo *)0x0);
                            if (bVar6 != 0) {
                              OStack_3.fakeValue = -3.0;
                            }
                            if (2 < *(uint *)(lVar2 + 0x18)) {
                              bVar7 = iRam_? != 0;
                              *(int32_t *)(lVar2 + 0x50) = OStack_3.currentCryptoKey;
                              *(ACTkByte4 *)(lVar2 + 0x54) = OStack_3.hiddenValue;
                              *(undefined4 *)(lVar2 + 0x58) = OStack_3.hiddenValueOld._0_4_;
                              *(undefined4 *)(lVar2 + 0x5c) = OStack_3.hiddenValueOld._4_4_;
                              *(undefined8 *)(lVar2 + 0x60) = OStack_3._16_8_;
                              if (bVar7) {
                                uVar8 = (uint)(lVar2 + 0x58U >> 0xc);
                                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                do {
                                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                  LOCK();
                                  bVar7 = uVar10 == *puVar11;
                                  if (bVar7) {
                                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar7);
                              }
                              FUN_?(pOVar1,3);
                              lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              OStack_3.fakeValue = 0.0;
                              OStack_3.inited = 0;
                              OStack_3._21_3_ = 0;
                              OStack_3.currentCryptoKey = 0;
                              OStack_3.hiddenValue.b1 = 0;
                              OStack_3.hiddenValue.b2 = 0;
                              OStack_3.hiddenValue.b3 = 0;
                              OStack_3.hiddenValue.b4 = 0;
                              OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                              if (*(int *)&(
                                           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                           ->_1).field_0x1c == 0) {
                                FUN_?();
                              }
                              fVar12 = _UNK_?;
                              AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                       ObscuredTypes::ObscuredFloat::ObscuredFloat_InternalEncrypt
                                                 (_UNK_?,(MethodInfo *)0x0);
                              Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredFloat::ObscuredFloat__ctor
                                        (&OStack_3,AVar5,(MethodInfo *)0x0);
                              bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors
                                      ::ObscuredCheatingDetector::
                                      ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
                              if (bVar6 != 0) {
                                OStack_3.fakeValue = -1.0;
                              }
                              if (lVar2 == 0) goto code_?;
                              if (*(int *)(lVar2 + 0x18) != 0) {
                                bVar7 = iRam_? != 0;
                                *(int32_t *)(lVar2 + 0x20) = OStack_3.currentCryptoKey;
                                *(ACTkByte4 *)(lVar2 + 0x24) = OStack_3.hiddenValue;
                                *(undefined4 *)(lVar2 + 0x28) = OStack_3.hiddenValueOld._0_4_;
                                *(undefined4 *)(lVar2 + 0x2c) = OStack_3.hiddenValueOld._4_4_;
                                *(undefined8 *)(lVar2 + 0x30) = OStack_3._16_8_;
                                if (bVar7) {
                                  uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
                                  uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                  do {
                                    uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                    puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                    LOCK();
                                    bVar7 = uVar10 == *puVar11;
                                    if (bVar7) {
                                      *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar7);
                                }
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                OStack_3.fakeValue = 0.0;
                                OStack_3.inited = 0;
                                OStack_3._21_3_ = 0;
                                OStack_3.currentCryptoKey = 0;
                                OStack_3.hiddenValue.b1 = 0;
                                OStack_3.hiddenValue.b2 = 0;
                                OStack_3.hiddenValue.b3 = 0;
                                OStack_3.hiddenValue.b4 = 0;
                                OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                if (*(int *)&(
                                             TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                             ->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                         ObscuredTypes::ObscuredFloat::ObscuredFloat_InternalEncrypt
                                                   (0.0,(MethodInfo *)0x0);
                                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                                ObscuredFloat::ObscuredFloat__ctor
                                          (&OStack_3,AVar5,(MethodInfo *)0x0);
                                bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                        Detectors::ObscuredCheatingDetector::
                                        ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
                                if (bVar6 != 0) {
                                  OStack_3._16_8_ = OStack_3._16_8_ & 0xffffffff00000000;
                                }
                                if (1 < *(uint *)(lVar2 + 0x18)) {
                                  bVar7 = iRam_? != 0;
                                  *(int32_t *)(lVar2 + 0x38) = OStack_3.currentCryptoKey;
                                  *(ACTkByte4 *)(lVar2 + 0x3c) = OStack_3.hiddenValue;
                                  *(undefined4 *)(lVar2 + 0x40) = OStack_3.hiddenValueOld._0_4_;
                                  *(undefined4 *)(lVar2 + 0x44) = OStack_3.hiddenValueOld._4_4_;
                                  *(undefined8 *)(lVar2 + 0x48) = OStack_3._16_8_;
                                  if (bVar7) {
                                    uVar8 = (uint)(lVar2 + 0x40U >> 0xc);
                                    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                    do {
                                      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                      LOCK();
                                      bVar7 = uVar10 == *puVar11;
                                      if (bVar7) {
                                        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                      }
                                      UNLOCK();
                                    } while (!bVar7);
                                  }
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  OStack_3.fakeValue = 0.0;
                                  OStack_3.inited = 0;
                                  OStack_3._21_3_ = 0;
                                  OStack_3.currentCryptoKey = 0;
                                  OStack_3.hiddenValue.b1 = 0;
                                  OStack_3.hiddenValue.b2 = 0;
                                  OStack_3.hiddenValue.b3 = 0;
                                  OStack_3.hiddenValue.b4 = 0;
                                  OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                  if (*(int *)&(
                                               TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                               ->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                           ObscuredTypes::ObscuredFloat::
                                           ObscuredFloat_InternalEncrypt(fVar12,(MethodInfo *)0x0);
                                  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                  ::ObscuredFloat::ObscuredFloat__ctor
                                            (&OStack_3,AVar5,(MethodInfo *)0x0);
                                  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                          Detectors::ObscuredCheatingDetector::
                                          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
                                  if (bVar6 != 0) {
                                    OStack_3.fakeValue = -1.0;
                                  }
                                  if (2 < *(uint *)(lVar2 + 0x18)) {
                                    bVar7 = iRam_? != 0;
                                    *(int32_t *)(lVar2 + 0x50) = OStack_3.currentCryptoKey;
                                    *(ACTkByte4 *)(lVar2 + 0x54) = OStack_3.hiddenValue;
                                    *(undefined4 *)(lVar2 + 0x58) = OStack_3.hiddenValueOld._0_4_;
                                    *(undefined4 *)(lVar2 + 0x5c) = OStack_3.hiddenValueOld._4_4_;
                                    *(undefined8 *)(lVar2 + 0x60) = OStack_3._16_8_;
                                    if (bVar7) {
                                      uVar8 = (uint)(lVar2 + 0x58U >> 0xc);
                                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                      do {
                                        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                        LOCK();
                                        bVar7 = uVar10 == *puVar11;
                                        if (bVar7) {
                                          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar7);
                                    }
                                    FUN_?(pOVar1,4);
                                    lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    OStack_3.fakeValue = 0.0;
                                    OStack_3.inited = 0;
                                    OStack_3._21_3_ = 0;
                                    OStack_3.currentCryptoKey = 0;
                                    OStack_3.hiddenValue.b1 = 0;
                                    OStack_3.hiddenValue.b2 = 0;
                                    OStack_3.hiddenValue.b3 = 0;
                                    OStack_3.hiddenValue.b4 = 0;
                                    OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                    if (*(int *)&(
                                                 TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                 ->_1).field_0x1c == 0) {
                                      FUN_?();
                                    }
                                    AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                             ObscuredTypes::ObscuredFloat::
                                             ObscuredFloat_InternalEncrypt(fVar12,(MethodInfo *)0x0);
                                    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                    ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor
                                              (&OStack_3,AVar5,(MethodInfo *)0x0);
                                    bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                            Detectors::ObscuredCheatingDetector::
                                            ObscuredCheatingDetector_get_IsRunning
                                                      ((MethodInfo *)0x0);
                                    if (bVar6 != 0) {
                                      OStack_3.fakeValue = -1.0;
                                    }
                                    if (lVar2 == 0) goto code_?;
                                    if (*(int *)(lVar2 + 0x18) != 0) {
                                      bVar7 = iRam_? != 0;
                                      *(int32_t *)(lVar2 + 0x20) = OStack_3.currentCryptoKey;
                                      *(ACTkByte4 *)(lVar2 + 0x24) = OStack_3.hiddenValue;
                                      *(undefined4 *)(lVar2 + 0x28) =
                                           OStack_3.hiddenValueOld._0_4_;
                                      *(undefined4 *)(lVar2 + 0x2c) =
                                           OStack_3.hiddenValueOld._4_4_;
                                      *(undefined8 *)(lVar2 + 0x30) = OStack_3._16_8_;
                                      if (bVar7) {
                                        uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
                                        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                        do {
                                          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                          LOCK();
                                          bVar7 = uVar10 == *puVar11;
                                          if (bVar7) {
                                            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar7);
                                      }
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      OStack_3.fakeValue = 0.0;
                                      OStack_3.inited = 0;
                                      OStack_3._21_3_ = 0;
                                      OStack_3.currentCryptoKey = 0;
                                      OStack_3.hiddenValue.b1 = 0;
                                      OStack_3.hiddenValue.b2 = 0;
                                      OStack_3.hiddenValue.b3 = 0;
                                      OStack_3.hiddenValue.b4 = 0;
                                      OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                      if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                        FUN_?();
                                      }
                                      AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                               ObscuredTypes::ObscuredFloat::
                                               ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
                                      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                      ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor
                                                (&OStack_3,AVar5,(MethodInfo *)0x0);
                                      bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                              Detectors::ObscuredCheatingDetector::
                                              ObscuredCheatingDetector_get_IsRunning
                                                        ((MethodInfo *)0x0);
                                      if (bVar6 != 0) {
                                        OStack_3._16_8_ = OStack_3._16_8_ & 0xffffffff00000000;
                                      }
                                      if (1 < *(uint *)(lVar2 + 0x18)) {
                                        bVar7 = iRam_? != 0;
                                        *(int32_t *)(lVar2 + 0x38) = OStack_3.currentCryptoKey;
                                        *(ACTkByte4 *)(lVar2 + 0x3c) = OStack_3.hiddenValue;
                                        *(undefined4 *)(lVar2 + 0x40) =
                                             OStack_3.hiddenValueOld._0_4_;
                                        *(undefined4 *)(lVar2 + 0x44) =
                                             OStack_3.hiddenValueOld._4_4_;
                                        *(undefined8 *)(lVar2 + 0x48) = OStack_3._16_8_;
                                        if (bVar7) {
                                          uVar8 = (uint)(lVar2 + 0x40U >> 0xc);
                                          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                          do {
                                            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                            LOCK();
                                            bVar7 = uVar10 == *puVar11;
                                            if (bVar7) {
                                              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar7);
                                        }
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        OStack_3.fakeValue = 0.0;
                                        OStack_3.inited = 0;
                                        OStack_3._21_3_ = 0;
                                        OStack_3.currentCryptoKey = 0;
                                        OStack_3.hiddenValue.b1 = 0;
                                        OStack_3.hiddenValue.b2 = 0;
                                        OStack_3.hiddenValue.b3 = 0;
                                        OStack_3.hiddenValue.b4 = 0;
                                        OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                        if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                          FUN_?();
                                        }
                                        AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat
                                                 ::ObscuredTypes::ObscuredFloat::
                                                 ObscuredFloat_InternalEncrypt
                                                           (fVar12,(MethodInfo *)0x0);
                                        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                        ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor
                                                  (&OStack_3,AVar5,(MethodInfo *)0x0);
                                        bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat
                                                ::Detectors::ObscuredCheatingDetector::
                                                ObscuredCheatingDetector_get_IsRunning
                                                          ((MethodInfo *)0x0);
                                        if (bVar6 != 0) {
                                          OStack_3.fakeValue = -1.0;
                                        }
                                        if (2 < *(uint *)(lVar2 + 0x18)) {
                                          bVar7 = iRam_? != 0;
                                          *(int32_t *)(lVar2 + 0x50) = OStack_3.currentCryptoKey;
                                          *(ACTkByte4 *)(lVar2 + 0x54) = OStack_3.hiddenValue;
                                          *(undefined4 *)(lVar2 + 0x58) =
                                               OStack_3.hiddenValueOld._0_4_;
                                          *(undefined4 *)(lVar2 + 0x5c) =
                                               OStack_3.hiddenValueOld._4_4_;
                                          *(undefined8 *)(lVar2 + 0x60) = OStack_3._16_8_;
                                          if (bVar7) {
                                            uVar8 = (uint)(lVar2 + 0x58U >> 0xc);
                                            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                            do {
                                              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                              LOCK();
                                              bVar7 = uVar10 == *puVar11;
                                              if (bVar7) {
                                                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar7);
                                          }
                                          FUN_?(pOVar1,5);
                                          lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          OStack_3.fakeValue = 0.0;
                                          OStack_3.inited = 0;
                                          OStack_3._21_3_ = 0;
                                          OStack_3.currentCryptoKey = 0;
                                          OStack_3.hiddenValue.b1 = 0;
                                          OStack_3.hiddenValue.b2 = 0;
                                          OStack_3.hiddenValue.b3 = 0;
                                          OStack_3.hiddenValue.b4 = 0;
                                          OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                          if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                   AntiCheat::ObscuredTypes::ObscuredFloat::
                                                   ObscuredFloat_InternalEncrypt
                                                             (fVar12,(MethodInfo *)0x0);
                                          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                          ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor
                                                    (&OStack_3,AVar5,(MethodInfo *)0x0);
                                          bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                  AntiCheat::Detectors::ObscuredCheatingDetector::
                                                  ObscuredCheatingDetector_get_IsRunning
                                                            ((MethodInfo *)0x0);
                                          if (bVar6 != 0) {
                                            OStack_3.fakeValue = -1.0;
                                          }
                                          if (lVar2 == 0) goto code_?;
                                          if (*(int *)(lVar2 + 0x18) != 0) {
                                            bVar7 = iRam_? != 0;
                                            *(int32_t *)(lVar2 + 0x20) = OStack_3.currentCryptoKey
                                            ;
                                            *(ACTkByte4 *)(lVar2 + 0x24) = OStack_3.hiddenValue;
                                            *(undefined4 *)(lVar2 + 0x28) =
                                                 OStack_3.hiddenValueOld._0_4_;
                                            *(undefined4 *)(lVar2 + 0x2c) =
                                                 OStack_3.hiddenValueOld._4_4_;
                                            *(undefined8 *)(lVar2 + 0x30) = OStack_3._16_8_;
                                            if (bVar7) {
                                              uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
                                              uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                              do {
                                                uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                                puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                                LOCK();
                                                bVar7 = uVar10 == *puVar11;
                                                if (bVar7) {
                                                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar7);
                                            }
                                            if (cRam_? == '\0') {
                                              FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            OStack_3.fakeValue = 0.0;
                                            OStack_3.inited = 0;
                                            OStack_3._21_3_ = 0;
                                            OStack_3.currentCryptoKey = 0;
                                            OStack_3.hiddenValue.b1 = 0;
                                            OStack_3.hiddenValue.b2 = 0;
                                            OStack_3.hiddenValue.b3 = 0;
                                            OStack_3.hiddenValue.b4 = 0;
                                            OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                            if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                              FUN_?();
                                            }
                                            AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                     AntiCheat::ObscuredTypes::ObscuredFloat::
                                                     ObscuredFloat_InternalEncrypt
                                                               (0.0,(MethodInfo *)0x0);
                                            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                            ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor
                                                      (&OStack_3,AVar5,(MethodInfo *)0x0);
                                            bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                    AntiCheat::Detectors::ObscuredCheatingDetector::
                                                    ObscuredCheatingDetector_get_IsRunning
                                                              ((MethodInfo *)0x0);
                                            if (bVar6 != 0) {
                                              OStack_3._16_8_ =
                                                   OStack_3._16_8_ & 0xffffffff00000000;
                                            }
                                            if (1 < *(uint *)(lVar2 + 0x18)) {
                                              bVar7 = iRam_? != 0;
                                              *(int32_t *)(lVar2 + 0x38) =
                                                   OStack_3.currentCryptoKey;
                                              *(ACTkByte4 *)(lVar2 + 0x3c) = OStack_3.hiddenValue;
                                              *(undefined4 *)(lVar2 + 0x40) =
                                                   OStack_3.hiddenValueOld._0_4_;
                                              *(undefined4 *)(lVar2 + 0x44) =
                                                   OStack_3.hiddenValueOld._4_4_;
                                              *(undefined8 *)(lVar2 + 0x48) = OStack_3._16_8_;
                                              if (bVar7) {
                                                uVar8 = (uint)(lVar2 + 0x40U >> 0xc);
                                                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                                do {
                                                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                                  LOCK();
                                                  bVar7 = uVar10 == *puVar11;
                                                  if (bVar7) {
                                                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                } while (!bVar7);
                                              }
                                              if (cRam_? == '\0') {
                                                FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              OStack_3.fakeValue = 0.0;
                                              OStack_3.inited = 0;
                                              OStack_3._21_3_ = 0;
                                              OStack_3.currentCryptoKey = 0;
                                              OStack_3.hiddenValue.b1 = 0;
                                              OStack_3.hiddenValue.b2 = 0;
                                              OStack_3.hiddenValue.b3 = 0;
                                              OStack_3.hiddenValue.b4 = 0;
                                              OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                              if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                                FUN_?();
                                              }
                                              AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                       AntiCheat::ObscuredTypes::ObscuredFloat::
                                                       ObscuredFloat_InternalEncrypt
                                                                 (fVar12,(MethodInfo *)0x0);
                                              Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                              ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor
                                                        (&OStack_3,AVar5,(MethodInfo *)0x0);
                                              bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                      AntiCheat::Detectors::ObscuredCheatingDetector
                                                      ::ObscuredCheatingDetector_get_IsRunning
                                                                ((MethodInfo *)0x0);
                                              if (bVar6 != 0) {
                                                OStack_3.fakeValue = -1.0;
                                              }
                                              if (2 < *(uint *)(lVar2 + 0x18)) {
                                                bVar7 = iRam_? != 0;
                                                *(int32_t *)(lVar2 + 0x50) =
                                                     OStack_3.currentCryptoKey;
                                                *(ACTkByte4 *)(lVar2 + 0x54) =
                                                     OStack_3.hiddenValue;
                                                *(undefined4 *)(lVar2 + 0x58) =
                                                     OStack_3.hiddenValueOld._0_4_;
                                                *(undefined4 *)(lVar2 + 0x5c) =
                                                     OStack_3.hiddenValueOld._4_4_;
                                                *(undefined8 *)(lVar2 + 0x60) = OStack_3._16_8_;
                                                if (bVar7) {
                                                  uVar8 = (uint)(lVar2 + 0x58U >> 0xc);
                                                  uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR)
                                                    ;
                                                    puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR)
                                                    ;
                                                    LOCK();
                                                    bVar7 = uVar10 == *puVar11;
                                                    if (bVar7) {
                                                      *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar7);
                                                }
                                                FUN_?(pOVar1,6);
                                                lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                                if (cRam_? == '\0') {
                                                  FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                OStack_3.fakeValue = 0.0;
                                                OStack_3.inited = 0;
                                                OStack_3._21_3_ = 0;
                                                OStack_3.currentCryptoKey = 0;
                                                OStack_3.hiddenValue.b1 = 0;
                                                OStack_3.hiddenValue.b2 = 0;
                                                OStack_3.hiddenValue.b3 = 0;
                                                OStack_3.hiddenValue.b4 = 0;
                                                OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                                if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                                  FUN_?();
                                                }
                                                AVar5 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                         AntiCheat::ObscuredTypes::ObscuredFloat::
                                                         ObscuredFloat_InternalEncrypt
                                                                   (fVar12,(MethodInfo *)0x0);
                                                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat
                                                ::ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor
                                                          (&OStack_3,AVar5,(MethodInfo *)0x0);
                                                bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                        AntiCheat::Detectors::
                                                        ObscuredCheatingDetector::
                                                        ObscuredCheatingDetector_get_IsRunning
                                                                  ((MethodInfo *)0x0);
                                                if (bVar6 != 0) {
                                                  OStack_3.fakeValue = -1.0;
                                                }
                                                if (lVar2 == 0) goto code_?;
                                                if (*(int *)(lVar2 + 0x18) != 0) {
                                                  bVar7 = iRam_? != 0;
                                                  *(int32_t *)(lVar2 + 0x20) =
                                                       OStack_3.currentCryptoKey;
                                                  *(ACTkByte4 *)(lVar2 + 0x24) =
                                                       OStack_3.hiddenValue;
                                                  *(undefined4 *)(lVar2 + 0x28) =
                                                       OStack_3.hiddenValueOld._0_4_;
                                                  *(undefined4 *)(lVar2 + 0x2c) =
                                                       OStack_3.hiddenValueOld._4_4_;
                                                  *(undefined8 *)(lVar2 + 0x30) = OStack_3._16_8_;
                                                  if (bVar7) {
                                                    uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
                                                    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                                    do {
                                                      uVar10 = *(ulonglong *)
                                                               (uVar9 * 8 + 0xADDR);
                                                      puVar11 = (ulonglong *)
                                                               (uVar9 * 8 + 0xADDR);
                                                      LOCK();
                                                      bVar7 = uVar10 == *puVar11;
                                                      if (bVar7) {
                                                        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar7);
                                                  }
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  OStack_3.fakeValue = 0.0;
                                                  OStack_3.inited = 0;
                                                  OStack_3._21_3_ = 0;
                                                  OStack_3.currentCryptoKey = 0;
                                                  OStack_3.hiddenValue.b1 = 0;
                                                  OStack_3.hiddenValue.b2 = 0;
                                                  OStack_3.hiddenValue.b3 = 0;
                                                  OStack_3.hiddenValue.b4 = 0;
                                                  OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                                  if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  AVar5 = Assembly-CSharp-firstpass.dll::CodeStage
                                                           ::AntiCheat::ObscuredTypes::ObscuredFloat
                                                           ::ObscuredFloat_InternalEncrypt
                                                                     (0.0,(MethodInfo *)0x0);
                                                  Assembly-CSharp-firstpass.dll::CodeStage::
                                                  AntiCheat::ObscuredTypes::ObscuredFloat::
                                                  ObscuredFloat__ctor(&OStack_3,AVar5,
                                                                      (MethodInfo *)0x0);
                                                  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                          AntiCheat::Detectors::
                                                          ObscuredCheatingDetector::
                                                          ObscuredCheatingDetector_get_IsRunning
                                                                    ((MethodInfo *)0x0);
                                                  if (bVar6 != 0) {
                                                    OStack_3._16_8_ =
                                                         OStack_3._16_8_ & 0xffffffff00000000;
                                                  }
                                                  if (1 < *(uint *)(lVar2 + 0x18)) {
                                                    bVar7 = iRam_? != 0;
                                                    *(int32_t *)(lVar2 + 0x38) =
                                                         OStack_3.currentCryptoKey;
                                                    *(ACTkByte4 *)(lVar2 + 0x3c) =
                                                         OStack_3.hiddenValue;
                                                    *(undefined4 *)(lVar2 + 0x40) =
                                                         OStack_3.hiddenValueOld._0_4_;
                                                    *(undefined4 *)(lVar2 + 0x44) =
                                                         OStack_3.hiddenValueOld._4_4_;
                                                    *(undefined8 *)(lVar2 + 0x48) =
                                                         OStack_3._16_8_;
                                                    if (bVar7) {
                                                      uVar8 = (uint)(lVar2 + 0x40U >> 0xc);
                                                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6)
                                                      ;
                                                      do {
                                                        uVar10 = *(ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        puVar11 = (ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        LOCK();
                                                        bVar7 = uVar10 == *puVar11;
                                                        if (bVar7) {
                                                          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar7);
                                                    }
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  OStack_3.fakeValue = 0.0;
                                                  OStack_3.inited = 0;
                                                  OStack_3._21_3_ = 0;
                                                  OStack_3.currentCryptoKey = 0;
                                                  OStack_3.hiddenValue.b1 = 0;
                                                  OStack_3.hiddenValue.b2 = 0;
                                                  OStack_3.hiddenValue.b3 = 0;
                                                  OStack_3.hiddenValue.b4 = 0;
                                                  OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                                  if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  AVar5 = Assembly-CSharp-firstpass.dll::CodeStage
                                                           ::AntiCheat::ObscuredTypes::ObscuredFloat
                                                           ::ObscuredFloat_InternalEncrypt
                                                                     (value_00,(MethodInfo *)0x0);
                                                  Assembly-CSharp-firstpass.dll::CodeStage::
                                                  AntiCheat::ObscuredTypes::ObscuredFloat::
                                                  ObscuredFloat__ctor(&OStack_3,AVar5,
                                                                      (MethodInfo *)0x0);
                                                  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                          AntiCheat::Detectors::
                                                          ObscuredCheatingDetector::
                                                          ObscuredCheatingDetector_get_IsRunning
                                                                    ((MethodInfo *)0x0);
                                                  if (bVar6 != 0) {
                                                    OStack_3.fakeValue = -2.0;
                                                  }
                                                  if (2 < *(uint *)(lVar2 + 0x18)) {
                                                    bVar7 = iRam_? != 0;
                                                    *(int32_t *)(lVar2 + 0x50) =
                                                         OStack_3.currentCryptoKey;
                                                    *(ACTkByte4 *)(lVar2 + 0x54) =
                                                         OStack_3.hiddenValue;
                                                    *(undefined4 *)(lVar2 + 0x58) =
                                                         OStack_3.hiddenValueOld._0_4_;
                                                    *(undefined4 *)(lVar2 + 0x5c) =
                                                         OStack_3.hiddenValueOld._4_4_;
                                                    *(undefined8 *)(lVar2 + 0x60) =
                                                         OStack_3._16_8_;
                                                    if (bVar7) {
                                                      uVar8 = (uint)(lVar2 + 0x58U >> 0xc);
                                                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6)
                                                      ;
                                                      do {
                                                        uVar10 = *(ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        puVar11 = (ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        LOCK();
                                                        bVar7 = uVar10 == *puVar11;
                                                        if (bVar7) {
                                                          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar7);
                                                    }
                                                    FUN_?(pOVar1,7);
                                                    bVar7 = iRam_? != 0;
                                                    (this->fields).PartConstraintsBoxMin = pOVar1;
                                                    if (bVar7) {
                                                      uVar8 = (uint)((ulonglong)
                                                                      &(this->fields).
                                                                       PartConstraintsBoxMin >> 0xc)
                                                      ;
                                                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6)
                                                      ;
                                                      do {
                                                        uVar10 = *(ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        puVar11 = (ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        LOCK();
                                                        bVar7 = uVar10 == *puVar11;
                                                        if (bVar7) {
                                                          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar7);
                                                    }
                                                    pOVar1 = (ObscuredFloat__Array__Array *)
                                                              FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,8);
                                                  lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  OStack_3.fakeValue = 0.0;
                                                  OStack_3.inited = 0;
                                                  OStack_3._21_3_ = 0;
                                                  OStack_3.currentCryptoKey = 0;
                                                  OStack_3.hiddenValue.b1 = 0;
                                                  OStack_3.hiddenValue.b2 = 0;
                                                  OStack_3.hiddenValue.b3 = 0;
                                                  OStack_3.hiddenValue.b4 = 0;
                                                  OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                                  if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ->_1).field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  fVar12 = _UNK_?;
                                                  AVar5 = Assembly-CSharp-firstpass.dll::CodeStage
                                                           ::AntiCheat::ObscuredTypes::ObscuredFloat
                                                           ::ObscuredFloat_InternalEncrypt
                                                                     (_UNK_?,
                                                                      (MethodInfo *)0x0);
                                                  Assembly-CSharp-firstpass.dll::CodeStage::
                                                  AntiCheat::ObscuredTypes::ObscuredFloat::
                                                  ObscuredFloat__ctor(&OStack_3,AVar5,
                                                                      (MethodInfo *)0x0);
                                                  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                          AntiCheat::Detectors::
                                                          ObscuredCheatingDetector::
                                                          ObscuredCheatingDetector_get_IsRunning
                                                                    ((MethodInfo *)0x0);
                                                  if (bVar6 != 0) {
                                                    OStack_3.fakeValue = 3.0;
                                                  }
                                                  if (lVar2 != 0) {
                                                    if (*(int *)(lVar2 + 0x18) == 0)
                                                    goto code_?;
                                                    bVar7 = iRam_? != 0;
                                                    *(undefined8 *)(lVar2 + 0x20) = OStack_3._0_8_
                                                    ;
                                                    *(Byte__Array **)(lVar2 + 0x28) =
                                                         OStack_3.hiddenValueOld;
                                                    *(undefined8 *)(lVar2 + 0x30) =
                                                         OStack_3._16_8_;
                                                    if (bVar7) {
                                                      uVar8 = (uint)(lVar2 + 0x28U >> 0xc);
                                                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6)
                                                      ;
                                                      do {
                                                        uVar10 = *(ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        puVar11 = (ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        LOCK();
                                                        bVar7 = uVar10 == *puVar11;
                                                        if (bVar7) {
                                                          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar7);
                                                    }
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,_UNK_?,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,1);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,_UNK_?,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,2,&OStack_3);
                                                    if (pOVar1 !=
                                                        (ObscuredFloat__Array__Array *)0x0) {
                                                      FUN_?(pOVar1,0);
                                                      lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                                  pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::
                                                            ObscuredFloat::ObscuredFloat_op_Implicit
                                                                      (aOStack_14,fVar12,
                                                                       (MethodInfo *)0x0);
                                                  if (lVar2 != 0) {
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,0);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,_UNK_?,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,1);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,_UNK_?,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,2,&OStack_3);
                                                    FUN_?(pOVar1,1);
                                                    lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                                  pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::
                                                            ObscuredFloat::ObscuredFloat_op_Implicit
                                                                      (aOStack_14,value,
                                                                       (MethodInfo *)0x0);
                                                  if (lVar2 != 0) {
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,0);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,_UNK_?,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,1);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,value_00,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,2,&OStack_3);
                                                    FUN_?(pOVar1,2);
                                                    lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                                  pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::
                                                            ObscuredFloat::ObscuredFloat_op_Implicit
                                                                      (aOStack_14,value,
                                                                       (MethodInfo *)0x0);
                                                  if (lVar2 != 0) {
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,0);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,_UNK_?,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,1);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,value_00,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,2,&OStack_3);
                                                    FUN_?(pOVar1,3);
                                                    lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                                  pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::
                                                            ObscuredFloat::ObscuredFloat_op_Implicit
                                                                      (aOStack_14,fVar12,
                                                                       (MethodInfo *)0x0);
                                                  if (lVar2 != 0) {
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,0);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,fVar4,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,1);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,fVar4,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,2,&OStack_3);
                                                    FUN_?(pOVar1,4);
                                                    lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                                  pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::
                                                            ObscuredFloat::ObscuredFloat_op_Implicit
                                                                      (aOStack_14,fVar4,
                                                                       (MethodInfo *)0x0);
                                                  if (lVar2 != 0) {
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,0);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,value,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,1);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,fVar4,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,2,&OStack_3);
                                                    FUN_?(pOVar1,5);
                                                    lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                                  pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::
                                                            ObscuredFloat::ObscuredFloat_op_Implicit
                                                                      (aOStack_14,fVar12,
                                                                       (MethodInfo *)0x0);
                                                  if (lVar2 != 0) {
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,0);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,fVar4,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,1);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,fVar4,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,2,&OStack_3);
                                                    FUN_?(pOVar1,6);
                                                    lVar2 = FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                                  ,3);
                                                  pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::
                                                            ObscuredFloat::ObscuredFloat_op_Implicit
                                                                      (aOStack_14,fVar4,
                                                                       (MethodInfo *)0x0);
                                                  if (lVar2 != 0) {
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,0);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,value,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,1);
                                                    pOVar13 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredFloat::
                                                              ObscuredFloat_op_Implicit
                                                                        (aOStack_14,value,
                                                                         (MethodInfo *)0x0);
                                                    OStack_3.currentCryptoKey =
                                                         pOVar13->currentCryptoKey;
                                                    OStack_3.hiddenValue = pOVar13->hiddenValue;
                                                    OStack_3.hiddenValueOld =
                                                         pOVar13->hiddenValueOld;
                                                    OStack_3.fakeValue = pOVar13->fakeValue;
                                                    OStack_3.inited = pOVar13->inited;
                                                    OStack_3._21_3_ =
                                                         *(undefined3 *)&pOVar13->field_0x15;
                                                    FUN_?(lVar2,2,&OStack_3);
                                                    FUN_?(pOVar1,7);
                                                    (this->fields).PartConstraintsBoxMax = pOVar1;
                                                    func_?(&(this->fields).
                                                                         PartConstraintsBoxMax);
                                                    pOVar15 = (ObscuredInt__Array *)
                                                              FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  ,8);
                                                  if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  ->_1).field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  pOVar16 = Assembly-CSharp-firstpass.dll::CodeStage
                                                            ::AntiCheat::ObscuredTypes::ObscuredInt
                                                            ::ObscuredInt_op_Implicit
                                                                      ((ObscuredInt *)&OStack_3,
                                                                       0x14,(MethodInfo *)0x0);
                                                  if (pOVar15 != (ObscuredInt__Array *)0x0) {
                                                    if ((int)pOVar15->max_length != 0) {
                                                      iVar17 = pOVar16->hiddenValue;
                                                      iVar18 = pOVar16->fakeValue;
                                                      bVar6 = pOVar16->inited;
                                                      uVar19 = *(undefined3 *)&pOVar16->field_0xd;
                                                      pOVar15->vector[0].currentCryptoKey =
                                                           pOVar16->currentCryptoKey;
                                                      pOVar15->vector[0].hiddenValue = iVar17;
                                                      pOVar15->vector[0].fakeValue = iVar18;
                                                      pOVar15->vector[0].inited = bVar6;
                                                      *(undefined3 *)&pOVar15->vector[0].field_0xd =
                                                           uVar19;
                                                      pOVar16 = Assembly-CSharp-firstpass.dll::
                                                                CodeStage::AntiCheat::ObscuredTypes
                                                                ::ObscuredInt::
                                                                ObscuredInt_op_Implicit
                                                                          ((ObscuredInt *)&OStack_3
                                                                           ,0x14,(MethodInfo *)0x0);
                                                      if (1 < (uint)pOVar15->max_length) {
                                                        iVar17 = pOVar16->hiddenValue;
                                                        iVar18 = pOVar16->fakeValue;
                                                        bVar6 = pOVar16->inited;
                                                        uVar19 = *(undefined3 *)&pOVar16->field_0xd;
                                                        pOVar15->vector[1].currentCryptoKey =
                                                             pOVar16->currentCryptoKey;
                                                        pOVar15->vector[1].hiddenValue = iVar17;
                                                        pOVar15->vector[1].fakeValue = iVar18;
                                                        pOVar15->vector[1].inited = bVar6;
                                                        *(undefined3 *)&pOVar15->vector[1].field_0xd
                                                             = uVar19;
                                                        pOVar16 = Assembly-CSharp-firstpass.dll::
                                                                  CodeStage::AntiCheat::
                                                                  ObscuredTypes::ObscuredInt::
                                                                  ObscuredInt_op_Implicit
                                                                            ((ObscuredInt *)
                                                                             &OStack_3,3,
                                                                             (MethodInfo *)0x0);
                                                        if (2 < (uint)pOVar15->max_length) {
                                                          iVar17 = pOVar16->hiddenValue;
                                                          iVar18 = pOVar16->fakeValue;
                                                          bVar6 = pOVar16->inited;
                                                          uVar19 = *(undefined3 *)&pOVar16->field_0xd
                                                          ;
                                                          pOVar15->vector[2].currentCryptoKey =
                                                               pOVar16->currentCryptoKey;
                                                          pOVar15->vector[2].hiddenValue = iVar17;
                                                          pOVar15->vector[2].fakeValue = iVar18;
                                                          pOVar15->vector[2].inited = bVar6;
                                                          *(undefined3 *)
                                                           &pOVar15->vector[2].field_0xd = uVar19;
                                                          pOVar16 = Assembly-CSharp-firstpass.dll::
                                                                    CodeStage::AntiCheat::
                                                                    ObscuredTypes::ObscuredInt::
                                                                    ObscuredInt_op_Implicit
                                                                              ((ObscuredInt *)
                                                                               &OStack_3,3,
                                                                               (MethodInfo *)0x0);
                                                          if (3 < (uint)pOVar15->max_length) {
                                                            iVar17 = pOVar16->hiddenValue;
                                                            iVar18 = pOVar16->fakeValue;
                                                            bVar6 = pOVar16->inited;
                                                            uVar19 = *(undefined3 *)
                                                                     &pOVar16->field_0xd;
                                                            pOVar15->vector[3].currentCryptoKey =
                                                                 pOVar16->currentCryptoKey;
                                                            pOVar15->vector[3].hiddenValue = iVar17;
                                                            pOVar15->vector[3].fakeValue = iVar18;
                                                            pOVar15->vector[3].inited = bVar6;
                                                            *(undefined3 *)
                                                             &pOVar15->vector[3].field_0xd = uVar19;
                                                            pOVar16 = Assembly-CSharp-firstpass.dll
                                                                      ::CodeStage::AntiCheat::
                                                                      ObscuredTypes::ObscuredInt::
                                                                      ObscuredInt_op_Implicit
                                                                                ((ObscuredInt *)
                                                                                 &OStack_3,3,
                                                                                 (MethodInfo *)0x0);
                                                            if (4 < (uint)pOVar15->max_length) {
                                                              iVar17 = pOVar16->hiddenValue;
                                                              iVar18 = pOVar16->fakeValue;
                                                              bVar6 = pOVar16->inited;
                                                              uVar19 = *(undefined3 *)
                                                                       &pOVar16->field_0xd;
                                                              pOVar15->vector[4].currentCryptoKey =
                                                                   pOVar16->currentCryptoKey;
                                                              pOVar15->vector[4].hiddenValue = iVar17
                                                              ;
                                                              pOVar15->vector[4].fakeValue = iVar18;
                                                              pOVar15->vector[4].inited = bVar6;
                                                              *(undefined3 *)
                                                               &pOVar15->vector[4].field_0xd = uVar19
                                                              ;
                                                              pOVar16 = 
                                                  Assembly-CSharp-firstpass.dll::CodeStage::
                                                  AntiCheat::ObscuredTypes::ObscuredInt::
                                                  ObscuredInt_op_Implicit
                                                            ((ObscuredInt *)&OStack_3,3,
                                                             (MethodInfo *)0x0);
                                                  if (5 < (uint)pOVar15->max_length) {
                                                    iVar17 = pOVar16->hiddenValue;
                                                    iVar18 = pOVar16->fakeValue;
                                                    bVar6 = pOVar16->inited;
                                                    uVar19 = *(undefined3 *)&pOVar16->field_0xd;
                                                    pOVar15->vector[5].currentCryptoKey =
                                                         pOVar16->currentCryptoKey;
                                                    pOVar15->vector[5].hiddenValue = iVar17;
                                                    pOVar15->vector[5].fakeValue = iVar18;
                                                    pOVar15->vector[5].inited = bVar6;
                                                    *(undefined3 *)&pOVar15->vector[5].field_0xd =
                                                         uVar19;
                                                    pOVar16 = Assembly-CSharp-firstpass.dll::
                                                              CodeStage::AntiCheat::ObscuredTypes::
                                                              ObscuredInt::ObscuredInt_op_Implicit
                                                                        ((ObscuredInt *)&OStack_3,3
                                                                         ,(MethodInfo *)0x0);
                                                    if (6 < (uint)pOVar15->max_length) {
                                                      bVar7 = cRam_? == '\0';
                                                      iVar17 = pOVar16->hiddenValue;
                                                      iVar18 = pOVar16->fakeValue;
                                                      bVar6 = pOVar16->inited;
                                                      uVar19 = *(undefined3 *)&pOVar16->field_0xd;
                                                      pOVar15->vector[6].currentCryptoKey =
                                                           pOVar16->currentCryptoKey;
                                                      pOVar15->vector[6].hiddenValue = iVar17;
                                                      pOVar15->vector[6].fakeValue = iVar18;
                                                      pOVar15->vector[6].inited = bVar6;
                                                      *(undefined3 *)&pOVar15->vector[6].field_0xd =
                                                           uVar19;
                                                      if (bVar7) {
                                                        FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  OStack_3.currentCryptoKey = 0;
                                                  OStack_3.hiddenValue.b1 = 0;
                                                  OStack_3.hiddenValue.b2 = 0;
                                                  OStack_3.hiddenValue.b3 = 0;
                                                  OStack_3.hiddenValue.b4 = 0;
                                                  OStack_3.hiddenValueOld = (Byte__Array *)0x0;
                                                  if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  ->_1).field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  AVar5 = (ACTkByte4)
                                                           Assembly-CSharp-firstpass.dll::CodeStage
                                                           ::AntiCheat::ObscuredTypes::ObscuredInt::
                                                           ObscuredInt_Encrypt(3,(MethodInfo *)0x0);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  if (*(int *)&(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  ->_1).field_0x1c == 0) {
                                                    FUN_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  );
                                                  }
                                                  uVar20 = 0;
                                                  OStack_3.hiddenValueOld._0_5_ =
                                                       CONCAT14(1,OStack_3.hiddenValueOld._0_4_);
                                                  OStack_3.hiddenValue = AVar5;
                                                  OStack_3.currentCryptoKey =
                                                                                                              
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                                  ->static_fields->cryptoKey;
                                                  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                          AntiCheat::Detectors::
                                                          ObscuredCheatingDetector::
                                                          ObscuredCheatingDetector_get_IsRunning
                                                                    ((MethodInfo *)0x0);
                                                  if (bVar6 != 0) {
                                                    uVar20 = 3;
                                                  }
                                                  OStack_3.hiddenValueOld =
                                                       (Byte__Array *)
                                                       CONCAT44(OStack_3.hiddenValueOld._4_4_,
                                                                uVar20);
                                                  if (7 < (uint)pOVar15->max_length) {
                                                    bVar7 = iRam_? != 0;
                                                    pOVar15->vector[7].currentCryptoKey =
                                                         OStack_3.currentCryptoKey;
                                                    pOVar15->vector[7].hiddenValue =
                                                         (int32_t)OStack_3.hiddenValue;
                                                    *(Byte__Array **)&pOVar15->vector[7].fakeValue =
                                                         OStack_3.hiddenValueOld;
                                                    (this->fields).PartConstraintsMinCubes = pOVar15
                                                    ;
                                                    if (bVar7) {
                                                      uVar8 = (uint)((ulonglong)
                                                                      &(this->fields).
                                                                       PartConstraintsMinCubes >>
                                                                     0xc);
                                                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6)
                                                      ;
                                                      do {
                                                        uVar10 = *(ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        puVar11 = (ulonglong *)
                                                                 (uVar9 * 8 + 0xADDR);
                                                        LOCK();
                                                        bVar7 = uVar10 == *puVar11;
                                                        if (bVar7) {
                                                          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar7);
                                                    }
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto code_?;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto code_?;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
code_?:
        FUN_?();
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* BodyData() */

void Assembly-CSharp.dll::BodyData::BodyData__ctor(BodyData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LArm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Holster);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Torso);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LLowLeg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RUpLeg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Head);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LUpLeg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RArm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RLowLeg);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)FUN_?(TypeInfo__System__String,9);
  if (pSVar1 != (String__Array *)0x0) {
    FUN_?(pSVar1,0,StringLiteral_Head);
    FUN_?(pSVar1,1,StringLiteral_Torso);
    FUN_?(pSVar1,2,StringLiteral_RArm);
    FUN_?(pSVar1,3,StringLiteral_LArm);
    FUN_?(pSVar1,4,StringLiteral_RUpLeg);
    FUN_?(pSVar1,5,StringLiteral_RLowLeg);
    FUN_?(pSVar1,6,StringLiteral_LUpLeg);
    FUN_?(pSVar1,7,StringLiteral_LLowLeg);
    FUN_?(pSVar1,8,StringLiteral_Holster);
    bVar2 = iRam_? != 0;
    (this->fields).PartNames = pSVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).PartNames >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pVVar7 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
    uVar3 = _UNK_?;
    fVar8 = _UNK_?;
    if (pVVar7 != (Vector3__Array *)0x0) {
      if ((int)pVVar7->max_length != 0) {
        uVar4 = (ulonglong)_UNK_?;
        pVVar7->vector[0].x = (float)(int)(uVar4 << 0x20);
        pVVar7->vector[0].y = (float)(int)((uVar4 << 0x20) >> 0x20);
        pVVar7->vector[0].z = fVar8;
        uVar9 = _UNK_?;
        fVar10 = TypeRef__System__Activator__T._0_4_;
        uVar11 = _UNK_?;
        if (1 < (uint)pVVar7->max_length) {
          pVVar7->vector[1].x = (float)(int)((ulonglong)uVar3 << 0x20);
          pVVar7->vector[1].y = (float)(int)(((ulonglong)uVar3 << 0x20) >> 0x20);
          pVVar7->vector[1].z = fVar8;
          if (2 < (uint)pVVar7->max_length) {
            pVVar7->vector[2].x = (float)uVar11;
            pVVar7->vector[2].y = (float)uVar9;
            pVVar7->vector[2].z = fVar10;
            uVar12 = _UNK_?;
            if (3 < (uint)pVVar7->max_length) {
              pVVar7->vector[3].x = (float)uVar11;
              pVVar7->vector[3].y = (float)uVar9;
              pVVar7->vector[3].z = fVar10;
              if (4 < (uint)pVVar7->max_length) {
                pVVar7->vector[4].x = (float)uVar12;
                pVVar7->vector[4].y = fVar8;
                pVVar7->vector[4].z = 0.0;
                if (5 < (uint)pVVar7->max_length) {
                  pVVar7->vector[5].x = (float)uVar12;
                  pVVar7->vector[5].y = fVar8;
                  pVVar7->vector[5].z = 0.0;
                  if (6 < (uint)pVVar7->max_length) {
                    pVVar7->vector[6].x = (float)uVar12;
                    pVVar7->vector[6].y = fVar8;
                    pVVar7->vector[6].z = 0.0;
                    if (7 < (uint)pVVar7->max_length) {
                      bVar2 = iRam_? != 0;
                      pVVar7->vector[7].x = (float)uVar12;
                      pVVar7->vector[7].y = fVar8;
                      pVVar7->vector[7].z = 0.0;
                      (this->fields).PartBoneSpacePosition = pVVar7;
                      if (bVar2) {
                        uVar3 = (uint)((ulonglong)&(this->fields).PartBoneSpacePosition >> 0xc);
                        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                        do {
                          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar2);
                      }
                      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                                 *)FUN_?(
                                                TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                                                );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]
                      ::
                      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                                );
                      bVar2 = iRam_? != 0;
                      (this->fields).partMap = (Dictionary_2_System_String_System_Int32_ *)this_00;
                      if (bVar2) {
                        uVar3 = (uint)((ulonglong)&(this->fields).partMap >> 0xc);
                        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                        do {
                          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar2);
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

